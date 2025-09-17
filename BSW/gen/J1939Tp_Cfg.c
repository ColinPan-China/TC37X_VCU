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
 *            Module: J1939Tp
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: J1939Tp_Cfg.c
 *   Generation Time: 2025-09-17 15:11:03
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0779 EOF */ /* MD_MSR_5.1_777 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#define J1939TP_CFG_SOURCE

#include "J1939Tp_Cfg.h"

/* include headers with symbolic name values */
#include "CanIf.h"
#include "PduR_J1939Tp.h"


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
  J1939Tp_RxPdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPdu
  \brief  List of received PDUs
  \details
  Element                                    Description
  PduFormat                                  PDU format
  PduType                                    PDU Type
  RxPduTxChannelTxChannelTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd
  RxPduTxChannelTxChannelTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_RxPduType, J1939TP_CONST) J1939Tp_RxPdu[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduFormat                      PduType                      RxPduTxChannelTxChannelTableIndEndIdx  RxPduTxChannelTxChannelTableIndStartIdx        Referable Keys */
  { /*     0 */ J1939TP_PDU1_PDUFORMATOFRXPDU, J1939TP_TPCM_PDUTYPEOFRXPDU,                                    6u,                                      0u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
};
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPduTxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPduTxChannel
  \details
  Element                  Description
  TxChannelTxChannelIdx    the index of the 1:1 relation pointing to J1939Tp_TxChannel
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_RxPduTxChannelType, J1939TP_CONST) J1939Tp_RxPduTxChannel[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxChannelTxChannelIdx        Referable Keys */
  { /*     0 */                    0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  { /*     1 */                    1u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  { /*     2 */                    2u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  { /*     3 */                    3u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  { /*     4 */                    4u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  { /*     5 */                    5u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
};
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPduTxChannelTxChannelTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPduTxChannelTxChannelTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_RxPduTxChannel
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_RxPduTxChannelTxChannelTableIndType, J1939TP_CONST) J1939Tp_RxPduTxChannelTxChannelTableInd[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxPduTxChannelTxChannelTableInd      Referable Keys */
  /*     0 */                               0u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  /*     1 */                               1u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  /*     2 */                               2u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  /*     3 */                               3u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  /*     4 */                               4u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
  /*     5 */                               5u   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Rx] */
};
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxChannel
  \brief  DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel
  \details
  Element                                  Description
  ComMChannel                              DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxChannelComMNetworkHandleRef
  TxChannelTxNSduTxNSduTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd
  TxChannelTxNSduTxNSduTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd
  TxDa                                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxDa
  TxMaxPacketsPerBlock                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxMaxPacketsPerBlock
  TxPduTxCmNPduIdx                         the index of the 0:1 relation pointing to J1939Tp_TxPdu
  TxPduTxDtNPduIdx                         the index of the 0:1 relation pointing to J1939Tp_TxPdu
  TxPri                                    DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxPriority
  TxProtocolType                           DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxProtocolType
  TxSa                                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxSa
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_TxChannelType, J1939TP_CONST) J1939Tp_TxChannel[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ComMChannel  TxChannelTxNSduTxNSduTableIndEndIdx  TxChannelTxNSduTxNSduTableIndStartIdx  TxDa   TxMaxPacketsPerBlock  TxPduTxCmNPduIdx  TxPduTxDtNPduIdx  TxPri  TxProtocolType                                     TxSa         Referable Keys */
  { /*     0 */          5u,                                  1u,                                    0u, 0x56u,                 255u,               0u,               1u, 0x06u, J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL, 0xF4u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_1f2dfa0e] */
  { /*     1 */          5u,                                  2u,                                    1u, 0x56u,                 255u,               0u,               1u, 0x06u, J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL, 0xF4u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_537c2fa8] */
  { /*     2 */          5u,                                  3u,                                    2u, 0x56u,                 255u,               0u,               1u, 0x06u, J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL, 0xF4u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_68b328fe] */
  { /*     3 */          5u,                                  4u,                                    3u, 0x56u,                 255u,               0u,               1u, 0x06u, J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL, 0xF4u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_7d6881ae] */
  { /*     4 */          5u,                                  5u,                                    4u, 0x56u,                 255u,               0u,               1u, 0x06u, J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL, 0xF4u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_91531f31] */
  { /*     5 */          5u,                                  6u,                                    5u, 0x56u,                 255u,               0u,               1u, 0x06u, J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL, 0xF4u }   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_9395bbb3] */
};
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxChannelTxNSdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxChannelTxNSdu
  \details
  Element           Description
  TxSduTxNSduIdx    the index of the 1:1 relation pointing to J1939Tp_TxSdu
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_TxChannelTxNSduType, J1939TP_CONST) J1939Tp_TxChannelTxNSdu[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxSduTxNSduIdx        Referable Keys */
  { /*     0 */             0u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_1f2dfa0e] */
  { /*     1 */             3u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_537c2fa8] */
  { /*     2 */             2u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_68b328fe] */
  { /*     3 */             1u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_7d6881ae] */
  { /*     4 */             5u },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_91531f31] */
  { /*     5 */             4u }   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_9395bbb3] */
};
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxChannelTxNSduTxNSduTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxChannelTxNSduTxNSduTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_TxChannelTxNSdu
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_TxChannelTxNSduTxNSduTableIndType, J1939TP_CONST) J1939Tp_TxChannelTxNSduTxNSduTableInd[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxChannelTxNSduTxNSduTableInd      Referable Keys */
  /*     0 */                             0u,  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_1f2dfa0e] */
  /*     1 */                             1u,  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_537c2fa8] */
  /*     2 */                             2u,  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_68b328fe] */
  /*     3 */                             3u,  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_7d6881ae] */
  /*     4 */                             4u,  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_91531f31] */
  /*     5 */                             5u   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/J1939_bms_J1939_9395bbb3] */
};
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPdu
  \brief  List of transmitted PDUs
  \details
  Element                                    Description
  PduId                                      PDU ID
  PduType                                    PDU Type
  TxPduStateIdx                              the index of the 1:1 relation pointing to J1939Tp_TxPduState
  TxPduTxChannelTxChannelTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd
  TxPduTxChannelTxChannelTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_TxPduType, J1939TP_CONST) J1939Tp_TxPdu[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduId                                                   PduType                      TxPduStateIdx  TxPduTxChannelTxChannelTableIndEndIdx  TxPduTxChannelTxChannelTableIndStartIdx        Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_TPCM_Tp_oJ1939_bms_a48fdf8c_Tx, J1939TP_TPCM_PDUTYPEOFTXPDU,            0u,                                    6u,                                      0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_TPDT_Tp_oJ1939_bms_8ac69245_Tx, J1939TP_TPDT_PDUTYPEOFTXPDU,            1u,                                   12u,                                      6u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
};
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPduTxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPduTxChannel
  \details
  Element                  Description
  TxChannelTxChannelIdx    the index of the 1:1 relation pointing to J1939Tp_TxChannel
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_TxPduTxChannelType, J1939TP_CONST) J1939Tp_TxPduTxChannel[12] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxChannelTxChannelIdx        Referable Keys */
  { /*     0 */                    0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  { /*     1 */                    1u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  { /*     2 */                    2u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  { /*     3 */                    3u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  { /*     4 */                    4u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  { /*     5 */                    5u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  { /*     6 */                    0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  { /*     7 */                    1u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  { /*     8 */                    2u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  { /*     9 */                    3u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  { /*    10 */                    4u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  { /*    11 */                    5u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
};
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPduTxChannelTxChannelTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPduTxChannelTxChannelTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_TxPduTxChannel
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_TxPduTxChannelTxChannelTableIndType, J1939TP_CONST) J1939Tp_TxPduTxChannelTxChannelTableInd[12] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduTxChannelTxChannelTableInd      Referable Keys */
  /*     0 */                               0u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  /*     1 */                               1u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  /*     2 */                               2u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  /*     3 */                               3u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  /*     4 */                               4u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  /*     5 */                               5u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  /*     6 */                               6u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  /*     7 */                               7u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  /*     8 */                               8u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  /*     9 */                               9u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  /*    10 */                              10u,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
  /*    11 */                              11u   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */
};
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxSdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxSdu
  \brief  List of transmitted SDUs
  \details
  Element                Description
  PGN                    PGN
  PduLength              PDU Length
  MetaDataLength         MetaData Length
  PduFormat              PDU format
  SduId                  SDU ID
  TxChannelChannelIdx    the index of the 0:1 relation pointing to J1939Tp_TxChannel
  TxSduStateIdx          the index of the 1:1 relation pointing to J1939Tp_TxSduState
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(J1939Tp_TxSduType, J1939TP_CONST) J1939Tp_TxSdu[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PGN      PduLength  MetaDataLength  PduFormat                      SduId                                             TxChannelChannelIdx  TxSduStateIdx        Referable Keys */
  { /*     0 */ 0x1100u,        9u,             2u, J1939TP_PDU1_PDUFORMATOFTXSDU,  PduRConf_PduRDestPdu_BCS_oJ1939_bms_baf9d3e6_Tx,                  0u,            0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/BCS_oJ1939_bms_baf9d3e6_Tx] */
  { /*     1 */ 0x1500u,      512u,             2u, J1939TP_PDU1_PDUFORMATOFTXSDU,  PduRConf_PduRDestPdu_BMV_oJ1939_bms_25dabb18_Tx,                  3u,            1u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/BMV_oJ1939_bms_25dabb18_Tx] */
  { /*     2 */ 0x0600u,       13u,             2u, J1939TP_PDU1_PDUFORMATOFTXSDU,  PduRConf_PduRDestPdu_BCP_oJ1939_bms_a9d1ea95_Tx,                  2u,            2u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/BCP_oJ1939_bms_a9d1ea95_Tx] */
  { /*     3 */ 0x1700u,       16u,             2u, J1939TP_PDU1_PDUFORMATOFTXSDU, PduRConf_PduRDestPdu_BSOC_oJ1939_bms_340842a2_Tx,                  1u,            3u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/BSOC_oJ1939_bms_340842a2_Tx] */
  { /*     4 */ 0x0200u,       41u,             2u, J1939TP_PDU1_PDUFORMATOFTXSDU,  PduRConf_PduRDestPdu_BRM_oJ1939_bms_e96b01db_Tx,                  5u,            4u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/BRM_oJ1939_bms_e96b01db_Tx] */
  { /*     5 */ 0x1600u,       16u,             2u, J1939TP_PDU1_PDUFORMATOFTXSDU,  PduRConf_PduRDestPdu_BMT_oJ1939_bms_38156aba_Tx,                  4u,            5u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/BMT_oJ1939_bms_38156aba_Tx] */
};
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPduState
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPduState
  \brief  State of J1939Tp Tx PDU
*/ 
#define J1939TP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(J1939Tp_TxPduStateUType, J1939TP_VAR_NOINIT) J1939Tp_TxPduState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oJ1939_bms_7c7c1783_Tx] */
  /*     1 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oJ1939_bms_8162bd5c_Tx] */

#define J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxSduState
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxSduState
  \brief  State of J1939Tp Tx SDU
*/ 
#define J1939TP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(J1939Tp_TxSduStateUType, J1939TP_VAR_NOINIT) J1939Tp_TxSduState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BCS_oJ1939_bms_baf9d3e6_Tx] */
  /*     1 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BMV_oJ1939_bms_25dabb18_Tx] */
  /*     2 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BCP_oJ1939_bms_a9d1ea95_Tx] */
  /*     3 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BSOC_oJ1939_bms_340842a2_Tx] */
  /*     4 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BRM_oJ1939_bms_e96b01db_Tx] */
  /*     5 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/BMT_oJ1939_bms_38156aba_Tx] */

#define J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



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
  END OF FILE: J1939Tp_Cfg.c
**********************************************************************************************************************/

