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
 *   Generation Time: 2025-09-22 14:02:52
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
CONST(Can_BTPType, CAN_CONST) Can_BTP[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     BTP              Comment */
  /*     0 */  0x00013A13u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CanControllerBaudrateConfig] */
  /*     1 */  0x02130401u,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CanControllerBaudrateConfig] */
  /*     2 */  0x00130401u,  /* [CT_ATOM_CAN_XCP_40afa023 - CanControllerBaudrateConfig] */
  /*     3 */  0x00130401u,  /* [CT_J1939_bms_92f0044b - CanControllerBaudrateConfig] */
  /*     4 */  0x00013A13u   /* [CT_TC37X_VCU_CAN01_55ccbf7a - CanControllerBaudrateConfig] */
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
CONST(Can_BufferConfigType, CAN_CONST) Can_BufferConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RXF0C        TXBC         RXBC   RXF1C  TXEFC        Comment */
  { /*     0 */ 0x00060004u, 0x00060064u, 0x00u, 0x00u, 0x00u },  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */ 0x00060004u, 0x00070064u, 0x00u, 0x00u, 0x00u },  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  { /*     2 */ 0x000600C8u, 0x00010128u, 0x00u, 0x00u, 0x00u },  /* [CT_ATOM_CAN_XCP_40afa023] */
  { /*     3 */ 0x000600DCu, 0x0002013Cu, 0x00u, 0x00u, 0x00u },  /* [CT_J1939_bms_92f0044b] */
  { /*     4 */ 0x00060160u, 0x000101C0u, 0x00u, 0x00u, 0x00u }   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     CanIfChannelId      Comment */
  /*     0 */              0u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */              1u,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */              2u,  /* [CT_ATOM_CAN_XCP_40afa023] */
  /*     3 */              3u,  /* [CT_J1939_bms_92f0044b] */
  /*     4 */              4u   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    BasisAdr     CanControllerDefaultBaudrate  IsTTCan  CanControllerDefaultBaudrateIdx  MailboxRxBasicEndIdx                                                                                                                                                                      MailboxRxBasicLength                                                                                                                                                                      MailboxRxBasicStartIdx                                                                                                                                                                      MailboxTxBasicEndIdx                                                                                                                                                                      MailboxTxBasicLength                                                                                                                                                                      MailboxTxBasicStartIdx                                                                                                                                                                      MailboxTxFullEndIdx                                                                                                                                                                                              MailboxTxFullLength                                                                                                                                                                     MailboxTxFullStartIdx                                                                                                                                                                                              RxBasicHwStart  RxBasicHwStop  RxFullHwStart  RxFullHwStop  RxSelection  TxBasicHwStart  TxBasicHwStop  TxFullHwStart  TxFullHwStop  UnusedHwStart  UnusedHwStop        Comment                                                    Referable Keys */
  { /*     0 */ 0xF0218100u,                         500u,   FALSE,                              0u,                   7u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                     6u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   6u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                     5u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                                           5u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                  5u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                                             0u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,             0u,            1u,            0u,           0u,       0x02u,             5u,            6u,            0u,           5u,            0u,           0u },  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */ 0xF0208D00u,                         500u,   FALSE,                              0u,                  15u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                    14u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                  14u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                    13u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                                          13u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                  6u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,                                             7u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */,             0u,            1u,            0u,           0u,       0x00u,             6u,            7u,            0u,           6u,            0u,           0u },  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  { /*     2 */ 0xF0218900u,                         500u,   FALSE,                              0u,                  17u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    ,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    ,                    16u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    ,                  16u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    ,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    ,                    15u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    , CAN_NO_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    ,                  0u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    , CAN_NO_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                    ,             0u,            1u,            0u,           0u,       0x02u,             0u,            1u,            1u,           1u,            0u,           0u },  /* [CT_ATOM_CAN_XCP_40afa023]                     */  /* [/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023] */
  { /*     3 */ 0xF0208100u,                         500u,    TRUE,                              0u,                  20u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,                    19u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,                  19u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,                    18u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,                                          18u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,                  1u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,                                            17u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                       ,             0u,            1u,            0u,           0u,       0x01u,             1u,            2u,            0u,           1u,            0u,           0u },  /* [CT_J1939_bms_92f0044b]                        */  /* [/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b] */
  { /*     4 */ 0xF0208500u,                         500u,   FALSE,                              0u,                  22u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 ,                   1u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 ,                    21u  /* RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 ,                  21u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 ,                   1u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 ,                    20u  /* TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 , CAN_NO_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 ,                  0u  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 , CAN_NO_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG  /* TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController) */                 ,             0u,            1u,            0u,           0u,       0x01u,             0u,            1u,            1u,           1u,            0u,           0u }   /* [CT_TC37X_VCU_CAN01_55ccbf7a]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a] */
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
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_FBTPType, CAN_CONST) Can_FBTP[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     FBTP             Comment */
  /*     0 */  0x00010D44u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CanControllerBaudrateConfig] */
  /*     1 */  0x00000000u,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CanControllerBaudrateConfig] */
  /*     2 */  0x00000000u,  /* [CT_ATOM_CAN_XCP_40afa023 - CanControllerBaudrateConfig] */
  /*     3 */  0x00000000u,  /* [CT_J1939_bms_92f0044b - CanControllerBaudrateConfig] */
  /*     4 */  0x00000000u   /* [CT_TC37X_VCU_CAN01_55ccbf7a - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_32BIT
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
CONST(Can_GFCType, CAN_CONST) Can_GFC[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     GFC        Comment */
  /*     0 */  0x3Fu,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */  0x3Fu,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */  0x3Fu,  /* [CT_ATOM_CAN_XCP_40afa023] */
  /*     3 */  0x3Fu,  /* [CT_J1939_bms_92f0044b] */
  /*     4 */  0x3Fu   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_INT_PriorityType, CAN_CONST) Can_INT_Priority[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     INT_Priority      Comment */
  /*     0 */         0x00u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */         0x00u,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */         0x00u,  /* [CT_ATOM_CAN_XCP_40afa023] */
  /*     3 */         0x00u,  /* [CT_J1939_bms_92f0044b] */
  /*     4 */         0x31u   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_INT_RoutingGroupType, CAN_CONST) Can_INT_RoutingGroup[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     INT_RoutingGroup      Comment */
  /*     0 */       0x00000000u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */       0x33333333u,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */       0x22222222u,  /* [CT_ATOM_CAN_XCP_40afa023] */
  /*     3 */       0x00000000u,  /* [CT_J1939_bms_92f0044b] */
  /*     4 */       0x11111111u   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitObjectBaudrate      Comment */
  /*     0 */                500u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CanControllerBaudrateConfig] */
  /*     1 */                500u,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CanControllerBaudrateConfig] */
  /*     2 */                500u,  /* [CT_ATOM_CAN_XCP_40afa023 - CanControllerBaudrateConfig] */
  /*     3 */                500u,  /* [CT_J1939_bms_92f0044b - CanControllerBaudrateConfig] */
  /*     4 */                500u   /* [CT_TC37X_VCU_CAN01_55ccbf7a - CanControllerBaudrateConfig] */
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
CONST(Can_InitObjectFdBrsConfigType, CAN_CONST) Can_InitObjectFdBrsConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitObjectFdBrsConfig              */
  /*     0 */  CAN_FD_RXTX_INITOBJECTFDBRSCONFIG,
  /*     1 */     CAN_NONE_INITOBJECTFDBRSCONFIG,
  /*     2 */     CAN_NONE_INITOBJECTFDBRSCONFIG,
  /*     3 */     CAN_NONE_INITOBJECTFDBRSCONFIG,
  /*     4 */     CAN_NONE_INITOBJECTFDBRSCONFIG
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
CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitObjectStartIndex      Comment */
  /*     0 */                    0u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */                    1u,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */                    2u,  /* [CT_ATOM_CAN_XCP_40afa023] */
  /*     3 */                    3u,  /* [CT_J1939_bms_92f0044b] */
  /*     4 */                    4u,  /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     5 */                    5u   /* [stop index] */
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
CONST(Can_OsIsrType, CAN_CONST) Can_IsrOsId[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     IsrOsId       Comment */
  /*     0 */ CanIsr_4 ,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 [Node | Channel] 4] */
  /*     1 */ CanIsr_3 ,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 [Node | Channel] 3] */
  /*     2 */ CanIsr_6 ,  /* [CT_ATOM_CAN_XCP_40afa023 [Node | Channel] 6] */
  /*     3 */ CanIsr_0 ,  /* [CT_J1939_bms_92f0044b [Node | Channel] 0] */
  /*     4 */ CanIsr_1    /* [CT_TC37X_VCU_CAN01_55ccbf7a [Node | Channel] 1] */
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
CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[22] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    IDValue      ActiveSendObject  ControllerConfigIdx                                                                                   HwHandle  MailboxSize  MailboxType                                MaxDataLen  MemorySectionsIndex        Comment                                                       Referable Keys */
  { /*     0 */ 0x00000094u,               0u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,       0u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 64u },  /* [CN_ATOM_CANFD_Matrix_CH_Tx_94h]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_Tx_94h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     1 */ 0x00000095u,               1u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,       1u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 65u },  /* [CN_ATOM_CANFD_Matrix_CH_Tx_95h]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_Tx_95h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     2 */ 0x000000D1u,               2u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,       2u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 66u },  /* [CN_ATOM_CANFD_Matrix_CH_Tx_D1h]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_Tx_D1h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     3 */ 0x000000D2u,               3u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,       3u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 67u },  /* [CN_ATOM_CANFD_Matrix_CH_Tx_D2h]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_Tx_D2h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     4 */ 0x000000D3u,               4u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,       4u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 68u },  /* [CN_ATOM_CANFD_Matrix_CH_Tx_D3h]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_Tx_D3h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     5 */ 0x00000000u,               5u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,       5u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 69u },  /* [CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx] */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     6 */ 0x00000000u,               0u,                  0u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                 32u },  /* [CN_ATOM_CANFD_Matrix_CH_V600_202502_64375107_Rx] */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_64375107_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     7 */ 0x00000095u,               6u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,       0u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                160u },  /* [CN_ATOM_CAN_PT_Tx_95h]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_95h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     8 */ 0x00000096u,               7u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,       1u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                161u },  /* [CN_ATOM_CAN_PT_Tx_96h]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_96h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*     9 */ 0x000000D1u,               8u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,       2u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                162u },  /* [CN_ATOM_CAN_PT_Tx_D1h]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_D1h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    10 */ 0x000000D2u,               9u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,       3u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                163u },  /* [CN_ATOM_CAN_PT_Tx_D2h]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_D2h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    11 */ 0x000000D6u,              10u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,       4u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                164u },  /* [CN_ATOM_CAN_PT_Tx_D6h]                           */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_D6h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    12 */ 0x00000121u,              11u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,       5u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                165u },  /* [CN_ATOM_CAN_PT_Tx_121h]                          */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_121h (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    13 */ 0x00000000u,              12u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,       6u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                166u },  /* [CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx] */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    14 */ 0x00000000u,               0u,                  1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                128u },  /* [CN_ATOM_CAN_Matrix_PT_V600_20250211_bde8b0ce_Rx] */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_bde8b0ce_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    15 */ 0x00000000u,              13u,                  2u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 */                    ,       0u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                160u },  /* [CN_ATOM_CAN_XCP_f42a46d4_Tx]                     */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_XCP_f42a46d4_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    16 */ 0x00000000u,               0u,                  2u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 */                    ,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                160u },  /* [CN_ATOM_CAN_XCP_bbd3e829_Rx]                     */  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_XCP_bbd3e829_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    17 */ 0x901956F4u,              14u,                  3u  /* /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b */                       ,       0u,          1u,  CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                160u },  /* [CN_J1939_bms_101956F4h_Tx]                       */  /* [/ActiveEcuC/Can/CanConfigSet/CN_J1939_bms_101956F4h_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b, TX_FULLCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    18 */ 0x00000000u,              15u,                  3u  /* /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b */                       ,       1u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                161u },  /* [CN_J1939_bms_dea99804_Tx]                        */  /* [/ActiveEcuC/Can/CanConfigSet/CN_J1939_bms_dea99804_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    19 */ 0x00000000u,               0u,                  3u  /* /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b */                       ,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                160u },  /* [CN_J1939_bms_96c04df9_Rx]                        */  /* [/ActiveEcuC/Can/CanConfigSet/CN_J1939_bms_96c04df9_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    20 */ 0x00000000u,              16u,                  4u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,       0u,          1u, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                160u },  /* [CN_TC37X_VCU_CAN01_70b1f95e_Tx]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a, TX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
  { /*    21 */ 0x00000000u,               0u,                  4u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,       0u,          6u, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8u,                160u }   /* [CN_TC37X_VCU_CAN01_2f90d2fb_Rx]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_2f90d2fb_Rx (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanHardwareObject), /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a, RX_BASICCAN_TYPE/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a (DefRef: /MICROSAR/Can_Mpc5700Mcan/Can/CanConfigSet/CanController)] */
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
CONST(Can_MemorySectionInfoType, CAN_CONST) Can_MemorySectionInfo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MemorySectionStart        Comment */
  { /*     0 */                 0u },  /* [MemorySection: TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */                32u },  /* [MemorySection: TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  { /*     2 */                64u },  /* [MemorySection: TxBuffer_CT_ATOM_CAN_XCP_40afa023] */
  { /*     3 */                96u },  /* [MemorySection: TxBuffer_CT_J1939_bms_92f0044b] */
  { /*     4 */               128u }   /* [MemorySection: TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_MemorySectionObjectsType, CAN_CONST) Can_MemorySectionObjects[160] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*     0 */       0u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CN_ATOM_CANFD_Matrix_CH_Tx_94h] */
  { /*     1 */       1u,             0u,            1u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CN_ATOM_CANFD_Matrix_CH_Tx_95h] */
  { /*     2 */       2u,             0u,            2u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CN_ATOM_CANFD_Matrix_CH_Tx_D1h] */
  { /*     3 */       3u,             0u,            3u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CN_ATOM_CANFD_Matrix_CH_Tx_D2h] */
  { /*     4 */       4u,             0u,            4u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CN_ATOM_CANFD_Matrix_CH_Tx_D3h] */
  { /*     5 */       5u,             0u,            5u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx] */
  { /*     6 */       6u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*     7 */       7u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*     8 */       8u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*     9 */       9u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    10 */      10u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    11 */      11u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    12 */      12u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    13 */      13u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    14 */      14u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    15 */      15u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    16 */      16u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    17 */      17u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    18 */      18u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    19 */      19u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    20 */      20u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    21 */      21u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    22 */      22u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    23 */      23u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    24 */      24u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    25 */      25u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    26 */      26u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    27 */      27u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    28 */      28u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    29 */      29u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    30 */      30u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    31 */      31u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - Reserved] */
  { /*    32 */       0u,             0u,            7u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CN_ATOM_CAN_PT_Tx_95h] */
  { /*    33 */       1u,             0u,            8u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CN_ATOM_CAN_PT_Tx_96h] */
  { /*    34 */       2u,             0u,            9u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CN_ATOM_CAN_PT_Tx_D1h] */
  { /*    35 */       3u,             0u,           10u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CN_ATOM_CAN_PT_Tx_D2h] */
  { /*    36 */       4u,             0u,           11u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CN_ATOM_CAN_PT_Tx_D6h] */
  { /*    37 */       5u,             0u,           12u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CN_ATOM_CAN_PT_Tx_121h] */
  { /*    38 */       6u,             0u,           13u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx] */
  { /*    39 */       7u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    40 */       8u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    41 */       9u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    42 */      10u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    43 */      11u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    44 */      12u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    45 */      13u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    46 */      14u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    47 */      15u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    48 */      16u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    49 */      17u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
    /* Index    HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*    50 */      18u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    51 */      19u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    52 */      20u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    53 */      21u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    54 */      22u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    55 */      23u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    56 */      24u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    57 */      25u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    58 */      26u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    59 */      27u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    60 */      28u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    61 */      29u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    62 */      30u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    63 */      31u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - Reserved] */
  { /*    64 */       0u,             0u,           15u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - CN_ATOM_CAN_XCP_f42a46d4_Tx] */
  { /*    65 */       1u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    66 */       2u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    67 */       3u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    68 */       4u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    69 */       5u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    70 */       6u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    71 */       7u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    72 */       8u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    73 */       9u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    74 */      10u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    75 */      11u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    76 */      12u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    77 */      13u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    78 */      14u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    79 */      15u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    80 */      16u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    81 */      17u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    82 */      18u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    83 */      19u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    84 */      20u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    85 */      21u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    86 */      22u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    87 */      23u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    88 */      24u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    89 */      25u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    90 */      26u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    91 */      27u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    92 */      28u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    93 */      29u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    94 */      30u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    95 */      31u,             0u,            0u },  /* [TxBuffer_CT_ATOM_CAN_XCP_40afa023 - Reserved] */
  { /*    96 */       0u,             0u,           17u },  /* [TxBuffer_CT_J1939_bms_92f0044b - CN_J1939_bms_101956F4h_Tx] */
  { /*    97 */       1u,             0u,           18u },  /* [TxBuffer_CT_J1939_bms_92f0044b - CN_J1939_bms_dea99804_Tx] */
  { /*    98 */       2u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*    99 */       3u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
    /* Index    HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*   100 */       4u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   101 */       5u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   102 */       6u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   103 */       7u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   104 */       8u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   105 */       9u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   106 */      10u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   107 */      11u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   108 */      12u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   109 */      13u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   110 */      14u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   111 */      15u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   112 */      16u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   113 */      17u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   114 */      18u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   115 */      19u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   116 */      20u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   117 */      21u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   118 */      22u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   119 */      23u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   120 */      24u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   121 */      25u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   122 */      26u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   123 */      27u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   124 */      28u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   125 */      29u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   126 */      30u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   127 */      31u,             0u,            0u },  /* [TxBuffer_CT_J1939_bms_92f0044b - Reserved] */
  { /*   128 */       0u,             0u,           20u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - CN_TC37X_VCU_CAN01_70b1f95e_Tx] */
  { /*   129 */       1u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   130 */       2u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   131 */       3u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   132 */       4u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   133 */       5u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   134 */       6u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   135 */       7u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   136 */       8u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   137 */       9u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   138 */      10u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   139 */      11u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   140 */      12u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   141 */      13u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   142 */      14u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   143 */      15u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   144 */      16u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   145 */      17u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   146 */      18u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   147 */      19u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   148 */      20u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   149 */      21u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
    /* Index    HwHandle  MailboxElement  MailboxHandle        Comment */
  { /*   150 */      22u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   151 */      23u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   152 */      24u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   153 */      25u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   154 */      26u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   155 */      27u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   156 */      28u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   157 */      29u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   158 */      30u,             0u,            0u },  /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
  { /*   159 */      31u,             0u,            0u }   /* [TxBuffer_CT_TC37X_VCU_CAN01_55ccbf7a - Reserved] */
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
CONST(Can_SIDFCType, CAN_CONST) Can_SIDFC[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FLSSA    LSS    SIDFEEndIdx                                                                                                 SIDFEStartIdx                                                                                                       Comment */
  { /*     0 */ 0x0000u, 0x01u,                        1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,                          0u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */ },  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */ 0x0000u, 0x01u,                        2u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,                          1u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */ },  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  { /*     2 */ 0x00C4u, 0x01u,                        3u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 */                    ,                          2u  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 */                     },  /* [CT_ATOM_CAN_XCP_40afa023] */
  { /*     3 */ 0x0000u, 0x00u, CAN_NO_SIDFEENDIDXOFSIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b */                       , CAN_NO_SIDFESTARTIDXOFSIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b */                        },  /* [CT_J1939_bms_92f0044b] */
  { /*     4 */ 0x015Cu, 0x01u,                        4u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,                          3u  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */                  }   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_SIDFEType, CAN_CONST) Can_SIDFE[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     SIDFE                                   Comment                                               Referable Keys */
  /*     0 */  0x88000000u  /*  I: 0 S0 FIFO_0 */,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */  0x88000000u  /*  I: 0 S0 FIFO_0 */,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */  0x88000000u  /*  I: 0 S0 FIFO_0 */,  /* [CT_ATOM_CAN_XCP_40afa023]                     */  /* [/ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023] */
  /*     3 */  0x88000000u  /*  I: 0 S0 FIFO_0 */   /* [CT_TC37X_VCU_CAN01_55ccbf7a]                  */  /* [/ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_SRN_AddressType, CAN_CONST) Can_SRN_Address[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     SRN_Address      Comment */
  /*     0 */  0xF00385F0u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */  0xF00385BCu,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */  0xF00385F8u,  /* [CT_ATOM_CAN_XCP_40afa023] */
  /*     3 */  0xF00385B0u,  /* [CT_J1939_bms_92f0044b] */
  /*     4 */  0xF00385B4u   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_ShmAdrType, CAN_CONST) Can_ShmAdr[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RXBA                           RXF0A                           RXF1A                          SIDFA                          StartAdr     StopAdr      TXBA                             TXEFA                          XIDFA                                Comment */
  { /*     0 */ 0xF0210000u  /* Size[B]: 0 */, 0xF0210004u  /* Size[B]: 96 */, 0xF0210000u  /* Size[B]: 0 */, 0xF0210000u  /* Size[B]: 4 */, 0xF0210000u, 0xF02100C5u, 0xF0210064u  /* Size[B]: 96 */ , 0xF0210000u  /* Size[B]: 0 */, 0xF0210000u  /* Size[B]: 0 */ },  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */ 0xF0200000u  /* Size[B]: 0 */, 0xF0200004u  /* Size[B]: 96 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u  /* Size[B]: 4 */, 0xF0200000u, 0xF02000D5u, 0xF0200064u  /* Size[B]: 112 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u  /* Size[B]: 0 */ },  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  { /*     2 */ 0xF0210000u  /* Size[B]: 0 */, 0xF02100C8u  /* Size[B]: 96 */, 0xF0210000u  /* Size[B]: 0 */, 0xF02100C4u  /* Size[B]: 4 */, 0xF0210000u, 0xF0210139u, 0xF0210128u  /* Size[B]: 16 */ , 0xF0210000u  /* Size[B]: 0 */, 0xF0210000u  /* Size[B]: 0 */ },  /* [CT_ATOM_CAN_XCP_40afa023] */
  { /*     3 */ 0xF0200000u  /* Size[B]: 0 */, 0xF02000DCu  /* Size[B]: 96 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u, 0xF020015Du, 0xF020013Cu  /* Size[B]: 32 */ , 0xF0200000u  /* Size[B]: 0 */, 0xF02000D4u  /* Size[B]: 8 */ },  /* [CT_J1939_bms_92f0044b] */
  { /*     4 */ 0xF0200000u  /* Size[B]: 0 */, 0xF0200160u  /* Size[B]: 96 */, 0xF0200000u  /* Size[B]: 0 */, 0xF020015Cu  /* Size[B]: 4 */, 0xF0200000u, 0xF02001D1u, 0xF02001C0u  /* Size[B]: 16 */ , 0xF0200000u  /* Size[B]: 0 */, 0xF0200000u  /* Size[B]: 0 */ }   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
CONST(Can_TDCRType, CAN_CONST) Can_TDCR[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TDCR       Comment */
  /*     0 */  0x00u,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 - CanControllerBaudrateConfig] */
  /*     1 */  0x00u,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 - CanControllerBaudrateConfig] */
  /*     2 */  0x00u,  /* [CT_ATOM_CAN_XCP_40afa023 - CanControllerBaudrateConfig] */
  /*     3 */  0x00u,  /* [CT_J1939_bms_92f0044b - CanControllerBaudrateConfig] */
  /*     4 */  0x00u   /* [CT_TC37X_VCU_CAN01_55ccbf7a - CanControllerBaudrateConfig] */
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
CONST(Can_XIDAMType, CAN_CONST) Can_XIDAM[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     XIDAM            Comment */
  /*     0 */  0x1FFFFFFFu,  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */  0x1FFFFFFFu,  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */  0x1FFFFFFFu,  /* [CT_ATOM_CAN_XCP_40afa023] */
  /*     3 */  0x1FFFFFFFu,  /* [CT_J1939_bms_92f0044b] */
  /*     4 */  0x1FFFFFFFu   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
  Element          Description
  FLESA            Filter List Extended Start Address
  LSE              List size extended
  XIDFEEndIdx      the end index of the 0:n relation pointing to Can_XIDFE
  XIDFEStartIdx    the start index of the 0:n relation pointing to Can_XIDFE
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Can_XIDFCType, CAN_CONST) Can_XIDFC[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FLESA  LSE    XIDFEEndIdx                                                                                                 XIDFEStartIdx                                                                                                       Comment */
  { /*     0 */ 0x00u, 0x00u, CAN_NO_XIDFEENDIDXOFXIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */, CAN_NO_XIDFESTARTIDXOFXIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */ },  /* [CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */ 0x00u, 0x00u, CAN_NO_XIDFEENDIDXOFXIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */, CAN_NO_XIDFESTARTIDXOFXIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */ },  /* [CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  { /*     2 */ 0x00u, 0x00u, CAN_NO_XIDFEENDIDXOFXIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 */                    , CAN_NO_XIDFESTARTIDXOFXIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_ATOM_CAN_XCP_40afa023 */                     },  /* [CT_ATOM_CAN_XCP_40afa023] */
  { /*     3 */ 0xD4u, 0x01u,                        1u  /* /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b */                       ,                          0u  /* /ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b */                        },  /* [CT_J1939_bms_92f0044b] */
  { /*     4 */ 0x00u, 0x00u, CAN_NO_XIDFEENDIDXOFXIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */                 , CAN_NO_XIDFESTARTIDXOFXIDFC  /* /ActiveEcuC/Can/CanConfigSet/CT_TC37X_VCU_CAN01_55ccbf7a */                  }   /* [CT_TC37X_VCU_CAN01_55ccbf7a] */
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
    /* Index    EIDFE_0                            EIDFE_1                                  Comment                             Referable Keys */
  { /*     0 */ 0x20000000u  /*  I:0 F0 FIFO_0 */, 0x80000000u  /*  I:0 F1 FIFO_0 */ }   /* [CT_J1939_bms_92f0044b] */  /* [/ActiveEcuC/Can/CanConfigSet/CT_J1939_bms_92f0044b] */
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
VAR(Can_ActiveSendObjectType, CAN_VAR_NOINIT) Can_ActiveSendObject[17];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
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
VAR(Can_ControllerDataType, CAN_VAR_NOINIT) Can_ControllerData[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/




