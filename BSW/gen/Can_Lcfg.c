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
 *            Module: Can
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_Lcfg.c
 *   Generation Time: 2025-03-26 15:51:08
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#define CAN_LCFG_SOURCE

/* PRQA S 0779 EOF */ /* MD_MSR_Rule5.2 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "Can_Cfg.h"

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */

/* HW specific CT global C file */

/* !HW specific CT global C file */

/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
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
  Can_BTP
**********************************************************************************************************************/
/** 
  \var    Can_BTP
  \brief  Bit Timing and Prescaler
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_BTPType, CAN_CONST) Can_BTP[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     BTP              Comment */
  /*     0 */  0x00013A13u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9 - CanControllerBaudrateConfig] */
  /*     1 */  0x00013A13u,  /* [CT_TC37X_VCU_CAN00_22cb8fec - CanControllerBaudrateConfig] */
  /*     2 */  0x00007627u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a - CanControllerBaudrateConfig] */
  /*     3 */  0x10013A13u   /* [CT_TC37X_VCU_CAN03_bbc2de56 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_BufferConfig
**********************************************************************************************************************/
/** 
  \var    Can_BufferConfig
  \brief  CAN Buffer Configuration
  \details
  Element    Description
  RXF0C  
  TXBC   
  RXBC   
  RXF1C  
  TXEFC  
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_BufferConfigType, CAN_CONST) Can_BufferConfig[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RXF0C        TXBC         RXBC   RXF1C  TXEFC        Comment */
  { /*     0 */ 0x00060004u, 0x00010064u, 0x00u, 0x00u, 0x00u },  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  { /*     1 */ 0x0006000Cu, 0x0002008Cu, 0x6Cu, 0x00u, 0x00u },  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*     2 */ 0x000600B0u, 0x00010110u, 0x00u, 0x00u, 0x00u },  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */ 0x00060124u, 0x00010184u, 0x00u, 0x00u, 0x00u }   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanIfChannelId
**********************************************************************************************************************/
/** 
  \var    Can_CanIfChannelId
  \brief  indirection table Can to CanIf controller ID
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     CanIfChannelId      Comment */
  /*     0 */              0u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */              1u,  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */              2u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */              3u   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanSubSystemBaseAdr
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_CanSubSystemBaseAdrType, CAN_CONST) Can_CanSubSystemBaseAdr[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     CanSubSystemBaseAdr      Comment */
  /*     0 */          0xF0208000u,  /* [Sub-system base address for system 0] */
  /*     1 */          0xF0218000u   /* [Sub-system base address for system 1] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerConfig
**********************************************************************************************************************/
/** 
  \var    Can_ControllerConfig
  \brief  Global configuration for all controllers
  \details
  Element                            Description
  BasisAdr                           CAN channel base address
  CanControllerDefaultBaudrate   
  IsTTCan                            TTCAN channel support
  CanControllerDefaultBaudrateIdx
  MailboxRxBasicEndIdx               the end index of the 0:n relation pointing to Can_Mailbox
  MailboxRxBasicLength               the number of relations pointing to Can_Mailbox
  MailboxRxBasicStartIdx             the start index of the 0:n relation pointing to Can_Mailbox
  MailboxRxFullEndIdx                the end index of the 0:n relation pointing to Can_Mailbox
  MailboxRxFullLength                the number of relations pointing to Can_Mailbox
  MailboxRxFullStartIdx              the start index of the 0:n relation pointing to Can_Mailbox
  MailboxTxBasicEndIdx               the end index of the 0:n relation pointing to Can_Mailbox
  MailboxTxBasicLength               the number of relations pointing to Can_Mailbox
  MailboxTxBasicStartIdx             the start index of the 0:n relation pointing to Can_Mailbox
  MailboxTxFullEndIdx                the end index of the 0:n relation pointing to Can_Mailbox
  MailboxTxFullLength                the number of relations pointing to Can_Mailbox
  MailboxTxFullStartIdx              the start index of the 0:n relation pointing to Can_Mailbox
  RxBasicHwStart                 
  RxBasicHwStop                  
  RxFullHwStart                  
  RxFullHwStop                   
  RxSelection                        CAN Rx Selection
  TxBasicHwStart                 
  TxBasicHwStop                  
  TxFullHwStart                  
  TxFullHwStop                   
  UnusedHwStart                  
  UnusedHwStop                   
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    BasisAdr     CanControllerDefaultBaudrate  IsTTCan  CanControllerDefaultBaudrateIdx  MailboxRxBasicEndIdx                                                                                                                                                      MailboxRxBasicLength                                                                                                                                                      MailboxRxBasicStartIdx                                                                                                                                                      MailboxRxFullEndIdx                                                                                                                                                                              MailboxRxFullLength                                                                                                                                                     MailboxRxFullStartIdx                                                                                                                                                                              MailboxTxBasicEndIdx                                                                                                                                                      MailboxTxBasicLength                                                                                                                                                      MailboxTxBasicStartIdx                                                                                                                                                      MailboxTxFullEndIdx                                                                                                                                                                              MailboxTxFullLength                                                                                                                                                     MailboxTxFullStartIdx                                                                                                                                                                              RxBasicHwStart  RxBasicHwStop  RxFullHwStart  RxFullHwStop  RxSelection  TxBasicHwStart  TxBasicHwStop  TxFullHwStart  TxFullHwStop  UnusedHwStart  UnusedHwStop        Comment                                    Referable Keys */
  { /*     0 */ 0xF0218100u,                         500u,   FALSE,                              0u,                   2u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                     1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */, CAN_NO_MAILBOXRXFULLENDIDXOFCONTROLLERCONFIG  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                  0u  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */, CAN_NO_MAILBOXRXFULLSTARTIDXOFCONTROLLERCONFIG  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                     0u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */, CAN_NO_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                  0u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */, CAN_NO_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,             0u,            1u,            0u,           0u,       0x02u,             0u,            1u,            1u,           1u,            0u,           0u },  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9] */
  { /*     1 */ 0xF0208100u,                         500u,    TRUE,                              0u,                   7u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                     6u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                                           6u  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                  2u  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                                             4u  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                   4u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                     3u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                                           3u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                  1u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                                             2u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,             0u,            1u,            0u,           2u,       0x01u,             1u,            2u,            0u,           1u,            0u,           0u },  /* [CT_TC37X_VCU_CAN00_22cb8fec]  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*     2 */ 0xF0208500u,                         500u,   FALSE,                              0u,                   9u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                     8u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ , CAN_NO_MAILBOXRXFULLENDIDXOFCONTROLLERCONFIG  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                  0u  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ , CAN_NO_MAILBOXRXFULLSTARTIDXOFCONTROLLERCONFIG  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                   8u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                     7u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ , CAN_NO_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                  0u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ , CAN_NO_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,             0u,            1u,            0u,           0u,       0x01u,             0u,            1u,            1u,           1u,            0u,           0u },  /* [CT_TC37X_VCU_CAN01_55ccbf7a]  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */ 0xF0208D00u,                         500u,   FALSE,                              0u,                  11u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                    10u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ , CAN_NO_MAILBOXRXFULLENDIDXOFCONTROLLERCONFIG  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                  0u  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ , CAN_NO_MAILBOXRXFULLSTARTIDXOFCONTROLLERCONFIG  /* RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                  10u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                     9u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ , CAN_NO_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,                  0u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ , CAN_NO_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */ ,             0u,            1u,            0u,           0u,       0x00u,             0u,            1u,            1u,           1u,            0u,           0u }   /* [CT_TC37X_VCU_CAN03_bbc2de56]  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_FBTP
**********************************************************************************************************************/
/** 
  \var    Can_FBTP
  \brief  Fast Bit Timing and Prescaler
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_FBTPType, CAN_CONST) Can_FBTP[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     FBTP       Comment */
  /*     0 */  0x00u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9 - CanControllerBaudrateConfig] */
  /*     1 */  0x00u,  /* [CT_TC37X_VCU_CAN00_22cb8fec - CanControllerBaudrateConfig] */
  /*     2 */  0x00u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a - CanControllerBaudrateConfig] */
  /*     3 */  0x00u   /* [CT_TC37X_VCU_CAN03_bbc2de56 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_GFC
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_GFCType, CAN_CONST) Can_GFC[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     GFC        Comment */
  /*     0 */  0x3Fu,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */  0x3Fu,  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */  0x3Fu,  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */  0x3Fu   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_INT_Priority
**********************************************************************************************************************/
/** 
  \var    Can_INT_Priority
  \brief  Interrupt Priority
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_INT_PriorityType, CAN_CONST) Can_INT_Priority[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     INT_Priority      Comment */
  /*     0 */         0x00u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */         0x30u,  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */         0x31u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */         0x00u   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_INT_RoutingGroup
**********************************************************************************************************************/
/** 
  \var    Can_INT_RoutingGroup
  \brief  Interrupt routing for Groups
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_INT_RoutingGroupType, CAN_CONST) Can_INT_RoutingGroup[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     INT_RoutingGroup      Comment */
  /*     0 */       0x00000000u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */       0x00000000u,  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */       0x11111111u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */       0x33333333u   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectBaudrate
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectBaudrate
  \brief  baudrates ('InitStruct' as index)
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitObjectBaudrate      Comment */
  /*     0 */                500u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9 - CanControllerBaudrateConfig] */
  /*     1 */                500u,  /* [CT_TC37X_VCU_CAN00_22cb8fec - CanControllerBaudrateConfig] */
  /*     2 */                500u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a - CanControllerBaudrateConfig] */
  /*     3 */                500u   /* [CT_TC37X_VCU_CAN03_bbc2de56 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectFdBrsConfig
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectFdBrsConfig
  \brief  FD config ('BaudrateObject' as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_InitObjectFdBrsConfigType, CAN_CONST) Can_InitObjectFdBrsConfig[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitObjectFdBrsConfig           */
  /*     0 */  CAN_NONE_INITOBJECTFDBRSCONFIG,
  /*     1 */  CAN_NONE_INITOBJECTFDBRSCONFIG,
  /*     2 */  CAN_NONE_INITOBJECTFDBRSCONFIG,
  /*     3 */  CAN_NONE_INITOBJECTFDBRSCONFIG
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectStartIndex
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectStartIndex
  \brief  Start index of 'InitStruct' / baudratesets (controllers as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitObjectStartIndex      Comment */
  /*     0 */                    0u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */                    1u,  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */                    2u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */                    3u,  /* [CT_TC37X_VCU_CAN03_bbc2de56] */
  /*     4 */                    4u   /* [stop index] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsrOsId
**********************************************************************************************************************/
/** 
  \var    Can_IsrOsId
  \brief  OS Symbolic Name Value for Service Request Nodes.
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_OsIsrType, CAN_CONST) Can_IsrOsId[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     IsrOsId       Comment */
  /*     0 */ CanIsr_4 ,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9 [Node | Channel] 4] */
  /*     1 */ CanIsr_0 ,  /* [CT_TC37X_VCU_CAN00_22cb8fec [Node | Channel] 0] */
  /*     2 */ CanIsr_1 ,  /* [CT_TC37X_VCU_CAN01_55ccbf7a [Node | Channel] 1] */
  /*     3 */ CanIsr_3    /* [CT_TC37X_VCU_CAN03_bbc2de56 [Node | Channel] 3] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_Mailbox
**********************************************************************************************************************/
/** 
  \var    Can_Mailbox
  \brief  mailbox configuration (over all controllers)
  \details
  Element                Description
  IDValue            
  ActiveSendObject   
  ControllerConfigIdx    the index of the 1:1 relation pointing to Can_ControllerConfig
  HwHandle           
  MailboxSize        
  MailboxType        
  MaxDataLen         
  MemorySectionsIndex
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[11] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    IDValue  ActiveSendObject  ControllerConfigIdx                                                                   HwHandle  MailboxSize  MailboxType                                MaxDataLen  MemorySectionsIndex        Comment                                                                Referable Keys */
  { /*     0 */ 0x0000u,               0u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 */,       0u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 64u },  /* [CN_KAMA_FP_EPT_0303_275b3e6e_Tx]                          */  /* [/ActiveEcuC/Can/CanConfigSet/CN_KAMA_FP_EPT_0303_275b3e6e_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     1 */ 0x0000u,               0u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 */,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 32u },  /* [CN_KAMA_FP_EPT_0303_c7999d11_Rx]                          */  /* [/ActiveEcuC/Can/CanConfigSet/CN_KAMA_FP_EPT_0303_c7999d11_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     2 */ 0x051Cu,               1u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec */ ,       0u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                128u },  /* [CanHardwareObject_TX0]                                    */  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX0 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     3 */ 0x0000u,               2u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec */ ,       1u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                129u },  /* [CN_TC37X_VCU_CAN00_07b6c9c8_Tx]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     4 */ 0x0200u,               0u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec */ ,       0u,          1u,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 96u },  /* [CanHardwareObject_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx] */  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec, RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     5 */ 0x0201u,               0u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec */ ,       1u,          1u,  CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 97u },  /* [CanHardwareObject_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx] */  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec, RX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     6 */ 0x0000u,               0u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec */ ,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                128u },  /* [CN_TC37X_VCU_CAN00_c052b9c5_Rx]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_c052b9c5_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     7 */ 0x0000u,               3u,                  2u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */ ,       0u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                128u },  /* [CN_TC37X_VCU_CAN01_70b1f95e_Tx]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     8 */ 0x0000u,               0u,                  2u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */ ,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                128u },  /* [CN_TC37X_VCU_CAN01_2f90d2fb_Rx]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_2f90d2fb_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     9 */ 0x0000u,               4u,                  3u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 */ ,       0u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                128u },  /* [CN_TC37X_VCU_CAN03_9ebf9872_Tx]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    10 */ 0x0000u,               0u,                  3u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 */ ,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                128u }   /* [CN_TC37X_VCU_CAN03_2b6502c6_Rx]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_2b6502c6_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_MemorySectionInfo
**********************************************************************************************************************/
/** 
  \var    Can_MemorySectionInfo
  \brief  Memory section description
  \details
  Element               Description
  MemorySectionStart
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_MemorySectionInfoType, CAN_CONST) Can_MemorySectionInfo[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MemorySectionStart        Comment */
  { /*     0 */                 0u },  /* [MemorySection: TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9] */
  { /*     1 */                32u },  /* [MemorySection: TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*     2 */                64u },  /* [MemorySection: TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */                96u }   /* [MemorySection: TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_MemorySectionObjects
**********************************************************************************************************************/
/** 
  \var    Can_MemorySectionObjects
  \brief  Memory section objects description
  \details
  Element           Description
  HwHandle      
  MailboxElement
  MailboxHandle 
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_MemorySectionObjectsType, CAN_CONST) Can_MemorySectionObjects[128] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*     0 */       0u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - CN_KAMA_FP_EPT_0303_275b3e6e_Tx] */
  { /*     1 */       1u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*     2 */       2u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*     3 */       3u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*     4 */       4u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*     5 */       5u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*     6 */       6u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*     7 */       7u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*     8 */       8u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*     9 */       9u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    10 */      10u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    11 */      11u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    12 */      12u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    13 */      13u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    14 */      14u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    15 */      15u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    16 */      16u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    17 */      17u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    18 */      18u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    19 */      19u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    20 */      20u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    21 */      21u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    22 */      22u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    23 */      23u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    24 */      24u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    25 */      25u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    26 */      26u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    27 */      27u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    28 */      28u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    29 */      29u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    30 */      30u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    31 */      31u,             0u,            0u },  /* [TxBuffer_CT_KAMA_FP_EPT_0303_1b7da7f9 - Reserved] */
  { /*    32 */       0u,             0u,            2u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - CanHardwareObject_TX0] */
  { /*    33 */       1u,             0u,            3u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - CN_TC37X_VCU_CAN00_07b6c9c8_Tx] */
  { /*    34 */       2u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    35 */       3u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    36 */       4u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    37 */       5u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    38 */       6u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    39 */       7u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    40 */       8u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    41 */       9u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    42 */      10u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    43 */      11u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    44 */      12u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    45 */      13u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    46 */      14u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    47 */      15u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    48 */      16u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    49 */      17u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
    /* Index    HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*    50 */      18u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    51 */      19u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    52 */      20u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    53 */      21u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    54 */      22u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    55 */      23u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    56 */      24u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    57 */      25u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    58 */      26u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    59 */      27u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    60 */      28u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    61 */      29u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    62 */      30u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    63 */      31u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN00_22cb8fec - Reserved] */
  { /*    64 */       0u,             0u,            7u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - CN_TC37X_VCU_CAN01_70b1f95e_Tx] */
  { /*    65 */       1u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    66 */       2u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    67 */       3u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    68 */       4u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    69 */       5u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    70 */       6u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    71 */       7u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    72 */       8u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    73 */       9u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    74 */      10u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    75 */      11u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    76 */      12u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    77 */      13u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    78 */      14u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    79 */      15u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    80 */      16u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    81 */      17u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    82 */      18u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    83 */      19u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    84 */      20u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    85 */      21u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    86 */      22u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    87 */      23u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    88 */      24u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    89 */      25u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    90 */      26u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    91 */      27u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    92 */      28u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    93 */      29u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    94 */      30u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    95 */      31u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*    96 */       0u,             0u,            9u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - CN_TC37X_VCU_CAN03_9ebf9872_Tx] */
  { /*    97 */       1u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*    98 */       2u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*    99 */       3u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
    /* Index    HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*   100 */       4u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   101 */       5u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   102 */       6u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   103 */       7u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   104 */       8u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   105 */       9u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   106 */      10u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   107 */      11u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   108 */      12u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   109 */      13u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   110 */      14u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   111 */      15u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   112 */      16u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   113 */      17u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   114 */      18u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   115 */      19u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   116 */      20u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   117 */      21u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   118 */      22u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   119 */      23u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   120 */      24u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   121 */      25u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   122 */      26u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   123 */      27u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   124 */      28u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   125 */      29u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   126 */      30u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
  { /*   127 */      31u,             0u,            0u }   /* [TxBuffer_CT_TC37X_VCU_CAN03_bbc2de56 - Reserved] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_SIDFC
**********************************************************************************************************************/
/** 
  \var    Can_SIDFC
  \brief  Standard ID filter configuration
  \details
  Element          Description
  FLSSA            Filter List Standard Start Address
  LSS              List size standard
  SIDFEEndIdx      the end index of the 0:n relation pointing to Can_SIDFE
  SIDFEStartIdx    the start index of the 0:n relation pointing to Can_SIDFE
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_SIDFCType, CAN_CONST) Can_SIDFC[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FLSSA    LSS    SIDFEEndIdx                                                                   SIDFEStartIdx                                                                         Comment */
  { /*     0 */ 0x0000u, 0x01u,          1u  /* /ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 */,            0u  /* /ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9 */ },  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  { /*     1 */ 0x0000u, 0x03u,          4u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec */ ,            1u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec */  },  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*     2 */ 0x00ACu, 0x01u,          5u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */ ,            4u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */  },  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */ 0x0120u, 0x01u,          6u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 */ ,            5u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56 */  }   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_SIDFE
**********************************************************************************************************************/
/** 
  \var    Can_SIDFE
  \brief  Standard ID filters
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_SIDFEType, CAN_CONST) Can_SIDFE[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     SIDFE                                   Comment                               Referable Keys */
  /*     0 */  0x88000000u  /*  I: 0 S0 FIFO_0 */,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */  0xBA000000u  /* FULLCAN_0 */      ,  /* [CT_TC37X_VCU_CAN00_22cb8fec]  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */  0xBA010001u  /* FULLCAN_1 */      ,  /* [CT_TC37X_VCU_CAN00_22cb8fec]  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     3 */  0x88000000u  /*  I: 0 S0 FIFO_0 */,  /* [CT_TC37X_VCU_CAN00_22cb8fec]  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     4 */  0x88000000u  /*  I: 0 S0 FIFO_0 */,  /* [CT_TC37X_VCU_CAN01_55ccbf7a]  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     5 */  0x88000000u  /*  I: 0 S0 FIFO_0 */   /* [CT_TC37X_VCU_CAN03_bbc2de56]  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_SRN_Address
**********************************************************************************************************************/
/** 
  \var    Can_SRN_Address
  \brief  Service Request Node Addresses
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_SRN_AddressType, CAN_CONST) Can_SRN_Address[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     SRN_Address      Comment */
  /*     0 */  0xF00385F0u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */  0xF00385B0u,  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */  0xF00385B4u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */  0xF00385BCu   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_ShmAdr
**********************************************************************************************************************/
/** 
  \var    Can_ShmAdr
  \brief  CAN Shared Message RAM configuration
  \details
  Element     Description
  RXBA        RX Buffer Address
  RXF0A       RX FIFO0 Address
  RXF1A       RX FIFO1 Address
  SIDFA       Standard Filters Address
  StartAdr    Start address of the shared memory area
  StopAdr     Stop address of the shared memory area
  TXBA        TX Buffer address
  TXEFA       TX Event FIFO address
  XIDFA       Extended Filters Address
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_ShmAdrType, CAN_CONST) Can_ShmAdr[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RXBA                            RXF0A                           RXF1A                          SIDFA                           StartAdr     StopAdr      TXBA                            TXEFA                          XIDFA                                Comment */
  { /*     0 */ 0xF0210000u  /* Size[B]: 0 */ , 0xF0210004u  /* Size[B]: 96 */, 0xF0210000u  /* Size[B]: 0 */, 0xF0210000u  /* Size[B]: 4 */ , 0xF0210000u, 0xF0210075u, 0xF0210064u  /* Size[B]: 16 */, 0xF0210000u  /* Size[B]: 0 */, 0xF0210000u  /* Size[B]: 0 */ },  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  { /*     1 */ 0xF020006Cu  /* Size[B]: 32 */, 0xF020000Cu  /* Size[B]: 96 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u  /* Size[B]: 12 */, 0xF0200000u, 0xF02000ADu, 0xF020008Cu  /* Size[B]: 32 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u  /* Size[B]: 0 */ },  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*     2 */ 0xF0200000u  /* Size[B]: 0 */ , 0xF02000B0u  /* Size[B]: 96 */, 0xF0200000u  /* Size[B]: 0 */, 0xF02000ACu  /* Size[B]: 4 */ , 0xF0200000u, 0xF0200121u, 0xF0200110u  /* Size[B]: 16 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u  /* Size[B]: 0 */ },  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */ 0xF0200000u  /* Size[B]: 0 */ , 0xF0200124u  /* Size[B]: 96 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200120u  /* Size[B]: 4 */ , 0xF0200000u, 0xF0200195u, 0xF0200184u  /* Size[B]: 16 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u  /* Size[B]: 0 */ }   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_TDCR
**********************************************************************************************************************/
/** 
  \var    Can_TDCR
  \brief  Transmitter Delay Compensation
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_TDCRType, CAN_CONST) Can_TDCR[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TDCR       Comment */
  /*     0 */  0x00u,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9 - CanControllerBaudrateConfig] */
  /*     1 */  0x00u,  /* [CT_TC37X_VCU_CAN00_22cb8fec - CanControllerBaudrateConfig] */
  /*     2 */  0x00u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a - CanControllerBaudrateConfig] */
  /*     3 */  0x00u   /* [CT_TC37X_VCU_CAN03_bbc2de56 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDAM
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_XIDAMType, CAN_CONST) Can_XIDAM[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     XIDAM            Comment */
  /*     0 */  0x1FFFFFFFu,  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */  0x1FFFFFFFu,  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */  0x1FFFFFFFu,  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */  0x1FFFFFFFu   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDFC
**********************************************************************************************************************/
/** 
  \var    Can_XIDFC
  \brief  Extended ID filter configuration
  \details
  Element    Description
  FLESA      Filter List Extended Start Address
  LSE        List size extended
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_XIDFCType, CAN_CONST) Can_XIDFC[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FLESA  LSE          Comment */
  { /*     0 */ 0x00u, 0x00u },  /* [CT_KAMA_FP_EPT_0303_1b7da7f9] */
  { /*     1 */ 0x00u, 0x00u },  /* [CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*     2 */ 0x00u, 0x00u },  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */ 0x00u, 0x00u }   /* [CT_TC37X_VCU_CAN03_bbc2de56] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDFE
**********************************************************************************************************************/
/** 
  \var    Can_XIDFE
  \brief  Extended ID filters
  \details
  Element    Description
  EIDFE_0
  EIDFE_1
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_XIDFEType, CAN_CONST) Can_XIDFE[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    EIDFE_0  EIDFE_1 */
  { /*     0 */   0x00u,   0x00u }
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendObject
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendObject
  \brief  temporary data for TX object
  \details
  Element    Description
  State      send state like cancelled or send activ
  Pdu        buffered PduId for confirmation or cancellation
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Can_ActiveSendObjectType, CAN_VAR_NOINIT) Can_ActiveSendObject[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerData
**********************************************************************************************************************/
/** 
  \var    Can_ControllerData
  \brief  struct for all controller related variable data
  \details
  Element                      Description
  IntEnable                    CAN Interrupt Enable state for each controller
  NonFdObjectsPendingFlag      CAN Tx Objects pending with CAN-FD format
  TXBCR                        CAN Tx Buffer Cancellation Request for each controller
  TXBRP                        CAN Tx Buffer request Pending for each controller
  BusOffNotification           CAN state for each controller: busoff occur
  BusOffTransitionRequest      CAN state request for each controller: ContinueBusOffRecovery=0x00, FinishBusOffRecovery=0x01
  CanInterruptCounter          CAN interrupt disable counter for each controller
  IsBusOff                     CAN state for each controller: busoff occur
  LastInitObject               last set baudrate for reinit
  LastState                    CAN mode transition request status for each controller
  LogStatus                    CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80
  ModeTransitionRequest        CAN state request for each controller: INIT=0x00, SLEEP=0x01, WAKEUP=0x02, STOP+INIT=0x03, START=0x04, START+INIT=0x05, NONE=0x06
  PrevMode                     CAN mode transition request for each controller
  RamCheckTransitionRequest    CAN state request for each controller: kCanSuppressRamCheck=0x01, kCanExecuteRamCheck=0x00
  CanInterruptOldStatus        last CAN interrupt status for restore interrupt for each controller
  LoopTimeout                  hw loop timeout for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Can_ControllerDataType, CAN_VAR_NOINIT) Can_ControllerData[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/




