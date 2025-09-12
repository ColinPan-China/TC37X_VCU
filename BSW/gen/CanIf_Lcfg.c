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
 *            Module: CanIf
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Lcfg.c
 *   Generation Time: 2025-09-12 16:00:44
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#define CANIF_LCFG_SOURCE

/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/ 

#include "CanIf_Cfg.h"

 /*  CanNm Header Files  */ 
#include "CanNm_Cfg.h"
#include "CanNm_Cbk.h"
 /*  CanTp Header Files  */ 
#include "CanTp_Cfg.h"
#include "CanTp_Cbk.h"
 /*  PduR Header Files  */ 
#include "PduR_Cfg.h"
#include "PduR_CanIf.h"
 /*  Xcp Header Files  */ 
#include "CanXcp.h"
 /*  CanSM Header Files  */ 
#include "CanSM_Cbk.h"

#define CANIF_START_SEC_APPL_CODE

#include "CanIf_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

/**********************************************************************************************************************
  \var  Prototypes of callback functions
**********************************************************************************************************************/

/** 
  \brief  Tx confirmation functions.
*/



/** 
  \brief  Rx indication functions.
*/





#define CANIF_STOP_SEC_APPL_CODE

#include "CanIf_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

/**********************************************************************************************************************
  ComStackLib
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
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr = CanSM_ControllerBusOff;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MappedTxBuffersConfigEndIdx                                                                                                 MappedTxBuffersConfigStartIdx                                                                                                       Referable Keys */
  { /*     0 */                          1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,                            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */ },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */                          2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,                            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */ },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  { /*     2 */                          3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,                            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */                          4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,                            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  { /*     4 */                          5u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b */             ,                            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b */              }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr = CanSM_ControllerModeIndication;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfg         
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferFifoConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[14] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CtrlStatesIdx                                                                                                 PduIdFirst                            PduIdLast                            TxBufferCfg                                          TxBufferCfgIdx                                                                              TxBufferHandlingType              MailBoxType                    Referable Keys */
  { /*     0 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,         0u  /* Unused, TxPduId 11 */,        0u  /* Unused, TxPduId 11 */,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex0 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx_94h] */
  { /*     1 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,         0u  /* Unused, TxPduId 10 */,        0u  /* Unused, TxPduId 10 */,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex1 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx_95h] */
  { /*     2 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,         0u  /* Unused, TxPduId 0 */ ,        0u  /* Unused, TxPduId 9 */ , CANIF_TXBUFFERFIFOCONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */, CANIF_TXBUFFER_HANDLINGTYPE_FIFO, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx] */
  { /*     3 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,         1u  /* RxPduId */           ,       20u  /* RxPduId  */          ,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex3 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_64375107_Rx] */
  { /*     4 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,         0u  /* Unused, TxPduId 30 */,        0u  /* Unused, TxPduId 30 */,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex4 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_95h] */
  { /*     5 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,         0u  /* Unused, TxPduId 29 */,        0u  /* Unused, TxPduId 29 */,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex5 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_96h] */
  { /*     6 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,         0u  /* Unused, TxPduId 12 */,        0u  /* Unused, TxPduId 28 */, CANIF_TXBUFFERFIFOCONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29 */, CANIF_TXBUFFER_HANDLINGTYPE_FIFO, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx] */
  { /*     7 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,        22u  /* RxPduId */           ,       90u  /* RxPduId  */          ,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex7 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_bde8b0ce_Rx] */
  { /*     8 */            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,         0u  /* Unused, TxPduId 31 */,        0u  /* Unused, TxPduId 44 */, CANIF_TXBUFFERFIFOCONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */, CANIF_TXBUFFER_HANDLINGTYPE_FIFO, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx] */
  { /*     9 */            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,        91u  /* RxPduId */           ,       96u  /* RxPduId  */          ,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex9 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_2f90d2fb_Rx] */
  { /*    10 */            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,         0u  /* Unused, TxPduId 45 */,        0u  /* Unused, TxPduId 47 */, CANIF_TXBUFFERFIFOCONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */, CANIF_TXBUFFER_HANDLINGTYPE_FIFO, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx] */
  { /*    11 */            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,        97u  /* RxPduId */           ,       99u  /* RxPduId  */          ,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex11 */                               , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_2b6502c6_Rx] */
  { /*    12 */            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b */             ,         0u  /* Unused, TxPduId 48 */,        0u  /* Unused, TxPduId 49 */, CANIF_TXBUFFERFIFOCONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     4u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304 */, CANIF_TXBUFFER_HANDLINGTYPE_FIFO, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_XCP_d05a85ac_Tx] */
  { /*    13 */            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b */             ,       100u  /* RxPduId */           ,      100u  /* RxPduId  */          ,                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex13 */                               , CANIF_TXBUFFER_HANDLINGTYPE_NONE, CANIF_RxBasicCANMailbox }   /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_XCP_74d45e3b_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MailBoxConfigIdx                                                                                            Referable Keys */
  { /*     0 */               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */ },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */ },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  { /*     2 */               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */              10u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  { /*     4 */              12u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_XCP_d05a85ac_Tx */              }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxIndicationFct                                               RxIndicationLayout                                                                 Referable Keys */
  { /*     0 */  { (CanIf_SimpleRxIndicationFctType)NULL_PTR }              , CanIf_SimpleRxIndicationLayout    /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ },  /* [NULL_PTR] */
  { /*     1 */  { (CanIf_SimpleRxIndicationFctType)CanNm_RxIndication }    , CanIf_AdvancedRxIndicationLayout  /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ },  /* [CanNm_RxIndication] */
  { /*     2 */  { (CanIf_SimpleRxIndicationFctType)CanTp_RxIndication }    , CanIf_AdvancedRxIndicationLayout  /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ },  /* [CanTp_RxIndication] */
  { /*     3 */  { (CanIf_SimpleRxIndicationFctType)PduR_CanIfRxIndication }, CanIf_AdvancedRxIndicationLayout  /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ },  /* [PduR_CanIfRxIndication] */
  { /*     4 */  { (CanIf_SimpleRxIndicationFctType)Xcp_CanIfRxIndication } , CanIf_AdvancedRxIndicationLayout  /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ }   /* [Xcp_CanIfRxIndication] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfig
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  RxPduCanId                Rx-PDU: CAN identifier.
  RxPduMask                 Rx-PDU: CAN identifier mask.
  UpperPduId                PDU ID defined by upper layer.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  RxPduDlc                  Rx-PDU length (DLC).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[101] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPduCanId                                                                                                RxPduMask                                                                                UpperPduId                                                             RxIndicationFctListIdx                                RxPduDlc                                    Comment                                                                                                 Referable Keys */
  { /*     0 */    0x0500u  /* Lower CanId of range: VCU_42a243c5_Rx, 2.0- or FD-PDU */                                 ,   0x657Fu  /* Upper CanId of range: VCU_42a243c5_Rx */                                 , CanNmConf_CanNmRxPdu_ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_Rx,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_42a243c5_Rx, Lower CanId of range: 0x500]                                         */  /* [CanIfConf_CanIfRxPduCfg_VCU_42a243c5_Rx] */
  { /*     1 */    0x0352u  /* SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_316b9b30                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx, CanId: 0x352]                   */  /* [CanIfConf_CanIfRxPduCfg_SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx] */
  { /*     2 */    0x020Du  /* ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_bc9c1fec                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx, CanId: 0x20d]              */  /* [CanIfConf_CanIfRxPduCfg_ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx] */
  { /*     3 */    0x00F6u  /* ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_0dbe25ba                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx, CanId: 0xf6]                    */  /* [CanIfConf_CanIfRxPduCfg_ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx] */
  { /*     4 */    0x00F5u  /* ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_9eae4558                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx, CanId: 0xf5]                    */  /* [CanIfConf_CanIfRxPduCfg_ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx] */
  { /*     5 */    0x00E6u  /* ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx, 2.0- or FD-PDU */                 ,   0x07FFu  /* ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx */                 , PduRConf_PduRSrcPdu_PduRSrcPdu_08ea31b4                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx, CanId: 0xe6]                   */  /* [CanIfConf_CanIfRxPduCfg_ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx] */
  { /*     6 */    0x00E4u  /* ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_d84c121b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx, CanId: 0xe4]               */  /* [CanIfConf_CanIfRxPduCfg_ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx] */
  { /*     7 */    0x00E2u  /* ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_686bd310                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx, CanId: 0xe2]               */  /* [CanIfConf_CanIfRxPduCfg_ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx] */
  { /*     8 */    0x00E0u  /* ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_56f39b3b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx, CanId: 0xe0]               */  /* [CanIfConf_CanIfRxPduCfg_ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx] */
  { /*     9 */    0x00BCu  /* IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_65adbba1                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx, CanId: 0xbc]             */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx] */
  { /*    10 */    0x00BAu  /* IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_6a5d743a                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx, CanId: 0xba]             */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx] */
  { /*    11 */    0x00B9u  /* IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_629168fc                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx, CanId: 0xb9]                */  /* [CanIfConf_CanIfRxPduCfg_IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx] */
  { /*    12 */    0x00B8u  /* IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx, 2.0- or FD-PDU */                 ,   0x07FFu  /* IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx */                 , PduRConf_PduRSrcPdu_PduRSrcPdu_ca3eaa8a                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx, CanId: 0xb8]                   */  /* [CanIfConf_CanIfRxPduCfg_IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx] */
  { /*    13 */    0x00B7u  /* IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx, 2.0- or FD-PDU */                 ,   0x07FFu  /* IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx */                 , PduRConf_PduRSrcPdu_PduRSrcPdu_283e282c                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx, CanId: 0xb7]                   */  /* [CanIfConf_CanIfRxPduCfg_IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx] */
  { /*    14 */    0x00B4u  /* IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_12481f07                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx, CanId: 0xb4]             */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx] */
  { /*    15 */    0x00B3u  /* IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_77b4603c                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx, CanId: 0xb3]             */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx] */
  { /*    16 */    0x00B2u  /* IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_d09902f0                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx, CanId: 0xb2]             */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx] */
  { /*    17 */    0x00B1u  /* IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_ca150190                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx, CanId: 0xb1]         */  /* [CanIfConf_CanIfRxPduCfg_IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx] */
  { /*    18 */    0x00B0u  /* IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_fcecab79                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx, CanId: 0xb0]         */  /* [CanIfConf_CanIfRxPduCfg_IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx] */
  { /*    19 */    0x0097u  /* ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx, 2.0- or FD-PDU */                ,   0x07FFu  /* ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx */                , PduRConf_PduRSrcPdu_PduRSrcPdu_f767588b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx, CanId: 0x97]                  */  /* [CanIfConf_CanIfRxPduCfg_ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx] */
  { /*    20 */    0x0090u  /* IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx, 2.0- or FD-PDU */    ,   0x07FFu  /* IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx */    , PduRConf_PduRSrcPdu_PduRSrcPdu_4e239512                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx, CanId: 0x90]      */  /* [CanIfConf_CanIfRxPduCfg_IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx] */
  { /*    21 */    0x0500u  /* Lower CanId of range: VCU_8f9a5a9f_Rx, 2.0- or FD-PDU */                                 ,   0x657Fu  /* Upper CanId of range: VCU_8f9a5a9f_Rx */                                 , CanNmConf_CanNmRxPdu_ATOM_CAN_Matrix_PT_V600_20250211_CAN_5212fbaf_Rx,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_8f9a5a9f_Rx, Lower CanId of range: 0x500]                                         */  /* [CanIfConf_CanIfRxPduCfg_VCU_8f9a5a9f_Rx] */
  { /*    22 */    0x07FFu  /* DiagReq_ALL_Tp_oATOM_CAN_Matrix_PT_V600_20250211_683a156f_Rx, 2.0- or FD-PDU */          ,   0x07FFu  /* DiagReq_ALL_Tp_oATOM_CAN_Matrix_PT_V600_20250211_683a156f_Rx */          , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_4e4f92b2                           ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: DiagReq_ALL_Tp_oATOM_CAN_Matrix_PT_V600_20250211_683a156f_Rx, CanId: 0x7ff]           */  /* [CanIfConf_CanIfRxPduCfg_DiagReq_ALL_Tp_oATOM_CAN_Matrix_PT_V600_20250211_683a156f_Rx] */
  { /*    23 */    0x07EAu  /* DiagReq_PT_Tp_oATOM_CAN_Matrix_PT_V600_20250211_52e67120_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* DiagReq_PT_Tp_oATOM_CAN_Matrix_PT_V600_20250211_52e67120_Rx */           , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_822169b4                           ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: DiagReq_PT_Tp_oATOM_CAN_Matrix_PT_V600_20250211_52e67120_Rx, CanId: 0x7ea]            */  /* [CanIfConf_CanIfRxPduCfg_DiagReq_PT_Tp_oATOM_CAN_Matrix_PT_V600_20250211_52e67120_Rx] */
  { /*    24 */    0x07E0u  /* DiagReq_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_1fcdbf51_Rx, 2.0- or FD-PDU */      ,   0x07FFu  /* DiagReq_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_1fcdbf51_Rx */      , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_fb36dff5                           ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: DiagReq_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_1fcdbf51_Rx, CanId: 0x7e0]       */  /* [CanIfConf_CanIfRxPduCfg_DiagReq_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_1fcdbf51_Rx] */
  { /*    25 */    0x07DFu  /* DiagReq_FUN_Tp_oATOM_CAN_Matrix_PT_V600_20250211_e7003379_Rx, 2.0- or FD-PDU */          ,   0x07FFu  /* DiagReq_FUN_Tp_oATOM_CAN_Matrix_PT_V600_20250211_e7003379_Rx */          , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0b84ecc7                           ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: DiagReq_FUN_Tp_oATOM_CAN_Matrix_PT_V600_20250211_e7003379_Rx, CanId: 0x7df]           */  /* [CanIfConf_CanIfRxPduCfg_DiagReq_FUN_Tp_oATOM_CAN_Matrix_PT_V600_20250211_e7003379_Rx] */
  { /*    26 */    0x07ACu  /* DiagReq_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_79dda889_Rx, 2.0- or FD-PDU */          ,   0x07FFu  /* DiagReq_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_79dda889_Rx */          , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_341356c5                       ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: DiagReq_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_79dda889_Rx, CanId: 0x7ac]           */  /* [CanIfConf_CanIfRxPduCfg_DiagReq_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_79dda889_Rx] */
  { /*    27 */    0x0733u  /* DiagReq_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_6244654e_Rx, 2.0- or FD-PDU */          ,   0x07FFu  /* DiagReq_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_6244654e_Rx */          , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_8a537d14                           ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: DiagReq_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_6244654e_Rx, CanId: 0x733]           */  /* [CanIfConf_CanIfRxPduCfg_DiagReq_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_6244654e_Rx] */
  { /*    28 */    0x0711u  /* Uds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_e449ee36_Rx, 2.0- or FD-PDU */    ,   0x07FFu  /* Uds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_e449ee36_Rx */    , PduRConf_PduRSrcPdu_PduRSrcPdu_0a6cd4f7                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: Uds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_e449ee36_Rx, CanId: 0x711]     */  /* [CanIfConf_CanIfRxPduCfg_Uds_EPT_Boot_Request_oATOM_CAN_Matrix_PT_V600_20250211_e449ee36_Rx] */
  { /*    29 */    0x03C0u  /* SGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1b833339_Rx, 2.0- or FD-PDU */,   0x07FFu  /* SGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1b833339_Rx */, PduRConf_PduRSrcPdu_PduRSrcPdu_160807d5                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1b833339_Rx, CanId: 0x3c0] */  /* [CanIfConf_CanIfRxPduCfg_SGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_1b833339_Rx] */
  { /*    30 */    0x03B0u  /* IVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_24f49b57_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* IVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_24f49b57_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_a8951de4                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_24f49b57_Rx, CanId: 0x3b0]        */  /* [CanIfConf_CanIfRxPduCfg_IVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_24f49b57_Rx] */
  { /*    31 */    0x03AAu  /* BMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_3dc51a58_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* BMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_3dc51a58_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_0c4dce36                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_3dc51a58_Rx, CanId: 0x3aa]          */  /* [CanIfConf_CanIfRxPduCfg_BMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_3dc51a58_Rx] */
  { /*    32 */    0x03A8u  /* BMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_d8ba1e38_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* BMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_d8ba1e38_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_7dfb13db                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_d8ba1e38_Rx, CanId: 0x3a8]            */  /* [CanIfConf_CanIfRxPduCfg_BMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_d8ba1e38_Rx] */
  { /*    33 */    0x03A7u  /* BMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_c4095af1_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* BMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_c4095af1_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_55b90c68                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_c4095af1_Rx, CanId: 0x3a7]          */  /* [CanIfConf_CanIfRxPduCfg_BMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_c4095af1_Rx] */
  { /*    34 */    0x03A6u  /* BMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_152c9d4b_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* BMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_152c9d4b_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_3881d9ad                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_152c9d4b_Rx, CanId: 0x3a6]          */  /* [CanIfConf_CanIfRxPduCfg_BMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_152c9d4b_Rx] */
  { /*    35 */    0x03A5u  /* BMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_5511d976_Rx, 2.0- or FD-PDU */                 ,   0x07FFu  /* BMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_5511d976_Rx */                 , PduRConf_PduRSrcPdu_PduRSrcPdu_e3e26218                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_5511d976_Rx, CanId: 0x3a5]                  */  /* [CanIfConf_CanIfRxPduCfg_BMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_5511d976_Rx] */
  { /*    36 */    0x03A4u  /* BMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_8ca088c6_Rx, 2.0- or FD-PDU */        ,   0x07FFu  /* BMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_8ca088c6_Rx */        , PduRConf_PduRSrcPdu_PduRSrcPdu_334e1a89                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_8ca088c6_Rx, CanId: 0x3a4]         */  /* [CanIfConf_CanIfRxPduCfg_BMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_8ca088c6_Rx] */
  { /*    37 */    0x0393u  /* MCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_991cd74d_Rx, 2.0- or FD-PDU */      ,   0x07FFu  /* MCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_991cd74d_Rx */      , PduRConf_PduRSrcPdu_PduRSrcPdu_2d50859d                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: MCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_991cd74d_Rx, CanId: 0x393]       */  /* [CanIfConf_CanIfRxPduCfg_MCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_991cd74d_Rx] */
  { /*    38 */    0x0392u  /* MCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_15d6c7c0_Rx, 2.0- or FD-PDU */      ,   0x07FFu  /* MCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_15d6c7c0_Rx */      , PduRConf_PduRSrcPdu_PduRSrcPdu_51994caa                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: MCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_15d6c7c0_Rx, CanId: 0x392]       */  /* [CanIfConf_CanIfRxPduCfg_MCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_15d6c7c0_Rx] */
  { /*    39 */    0x0382u  /* CGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_088f7594_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* CGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_088f7594_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_c43586a5                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: CGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_088f7594_Rx, CanId: 0x382]              */  /* [CanIfConf_CanIfRxPduCfg_CGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_088f7594_Rx] */
  { /*    40 */    0x0381u  /* CGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_76badae8_Rx, 2.0- or FD-PDU */                ,   0x07FFu  /* CGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_76badae8_Rx */                , PduRConf_PduRSrcPdu_PduRSrcPdu_3d0f621e                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: CGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_76badae8_Rx, CanId: 0x381]                 */  /* [CanIfConf_CanIfRxPduCfg_CGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_76badae8_Rx] */
  { /*    41 */    0x0380u  /* CGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_43fd203c_Rx, 2.0- or FD-PDU */                ,   0x07FFu  /* CGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_43fd203c_Rx */                , PduRConf_PduRSrcPdu_PduRSrcPdu_1c3803b9                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: CGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_43fd203c_Rx, CanId: 0x380]                 */  /* [CanIfConf_CanIfRxPduCfg_CGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_43fd203c_Rx] */
  { /*    42 */    0x035Au  /* CGW_02_oATOM_CAN_Matrix_PT_V600_20250211_926ea823_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* CGW_02_oATOM_CAN_Matrix_PT_V600_20250211_926ea823_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_47d97d6b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: CGW_02_oATOM_CAN_Matrix_PT_V600_20250211_926ea823_Rx, CanId: 0x35a]                   */  /* [CanIfConf_CanIfRxPduCfg_CGW_02_oATOM_CAN_Matrix_PT_V600_20250211_926ea823_Rx] */
  { /*    43 */    0x033Au  /* BCM_05_oATOM_CAN_Matrix_PT_V600_20250211_5bda8f2d_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* BCM_05_oATOM_CAN_Matrix_PT_V600_20250211_5bda8f2d_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_c4d092fa                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BCM_05_oATOM_CAN_Matrix_PT_V600_20250211_5bda8f2d_Rx, CanId: 0x33a]                   */  /* [CanIfConf_CanIfRxPduCfg_BCM_05_oATOM_CAN_Matrix_PT_V600_20250211_5bda8f2d_Rx] */
  { /*    44 */    0x0334u  /* BCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_dab81413_Rx, 2.0- or FD-PDU */      ,   0x07FFu  /* BCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_dab81413_Rx */      , PduRConf_PduRSrcPdu_PduRSrcPdu_07ad9208                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_dab81413_Rx, CanId: 0x334]       */  /* [CanIfConf_CanIfRxPduCfg_BCM_Authentication_oATOM_CAN_Matrix_PT_V600_20250211_dab81413_Rx] */
  { /*    45 */    0x0313u  /* POD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6b16ec07_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* POD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6b16ec07_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_4262a7c2                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: POD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6b16ec07_Rx, CanId: 0x313]        */  /* [CanIfConf_CanIfRxPduCfg_POD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_6b16ec07_Rx] */
  { /*    46 */    0x0304u  /* BMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_a264f431_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* BMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_a264f431_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_c6a6b7d8                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_a264f431_Rx, CanId: 0x304]            */  /* [CanIfConf_CanIfRxPduCfg_BMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_a264f431_Rx] */
  { /*    47 */    0x0303u  /* BMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_73bae360_Rx, 2.0- or FD-PDU */                 ,   0x07FFu  /* BMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_73bae360_Rx */                 , PduRConf_PduRSrcPdu_PduRSrcPdu_7d63f76e                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_73bae360_Rx, CanId: 0x303]                  */  /* [CanIfConf_CanIfRxPduCfg_BMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_73bae360_Rx] */
  { /*    48 */    0x0302u  /* POD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_04706390_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* POD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_04706390_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_2eb983a0                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: POD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_04706390_Rx, CanId: 0x302]              */  /* [CanIfConf_CanIfRxPduCfg_POD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_04706390_Rx] */
  { /*    49 */    0x02B6u  /* IVI_01_oATOM_CAN_Matrix_PT_V600_20250211_1eee27bc_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* IVI_01_oATOM_CAN_Matrix_PT_V600_20250211_1eee27bc_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_768473b3                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IVI_01_oATOM_CAN_Matrix_PT_V600_20250211_1eee27bc_Rx, CanId: 0x2b6]                   */  /* [CanIfConf_CanIfRxPduCfg_IVI_01_oATOM_CAN_Matrix_PT_V600_20250211_1eee27bc_Rx] */
    /* Index    RxPduCanId                                                                                                RxPduMask                                                                                UpperPduId                                                             RxIndicationFctListIdx                                RxPduDlc                                    Comment                                                                                                 Referable Keys */
  { /*    50 */    0x02B5u  /* SGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_ad5190bf_Rx, 2.0- or FD-PDU */               ,   0x07FFu  /* SGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_ad5190bf_Rx */               , PduRConf_PduRSrcPdu_PduRSrcPdu_999b8108                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_ad5190bf_Rx, CanId: 0x2b5]                */  /* [CanIfConf_CanIfRxPduCfg_SGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_ad5190bf_Rx] */
  { /*    51 */    0x02B4u  /* SGW_16_oATOM_CAN_Matrix_PT_V600_20250211_a8f68129_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* SGW_16_oATOM_CAN_Matrix_PT_V600_20250211_a8f68129_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_f4111595                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_16_oATOM_CAN_Matrix_PT_V600_20250211_a8f68129_Rx, CanId: 0x2b4]                   */  /* [CanIfConf_CanIfRxPduCfg_SGW_16_oATOM_CAN_Matrix_PT_V600_20250211_a8f68129_Rx] */
  { /*    52 */    0x028Bu  /* DCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_9166f992_Rx, 2.0- or FD-PDU */               ,   0x07FFu  /* DCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_9166f992_Rx */               , PduRConf_PduRSrcPdu_PduRSrcPdu_3867459e                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: DCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_9166f992_Rx, CanId: 0x28b]                */  /* [CanIfConf_CanIfRxPduCfg_DCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_9166f992_Rx] */
  { /*    53 */    0x028Au  /* DCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_7e6e4c82_Rx, 2.0- or FD-PDU */               ,   0x07FFu  /* DCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_7e6e4c82_Rx */               , PduRConf_PduRSrcPdu_PduRSrcPdu_f6cb4db3                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: DCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_7e6e4c82_Rx, CanId: 0x28a]                */  /* [CanIfConf_CanIfRxPduCfg_DCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_7e6e4c82_Rx] */
  { /*    54 */    0x0285u  /* DCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_c4468cbb_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* DCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_c4468cbb_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_653320c0                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: DCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_c4468cbb_Rx, CanId: 0x285]                   */  /* [CanIfConf_CanIfRxPduCfg_DCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_c4468cbb_Rx] */
  { /*    55 */    0x0284u  /* DCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_041757a7_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* DCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_041757a7_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_e5f98abc                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: DCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_041757a7_Rx, CanId: 0x284]                   */  /* [CanIfConf_CanIfRxPduCfg_DCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_041757a7_Rx] */
  { /*    56 */    0x0283u  /* DCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_6a17879c_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* DCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_6a17879c_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_249eb541                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: DCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_6a17879c_Rx, CanId: 0x283]                   */  /* [CanIfConf_CanIfRxPduCfg_DCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_6a17879c_Rx] */
  { /*    57 */    0x0278u  /* CGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3b499cca_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* CGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3b499cca_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_36051844                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: CGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3b499cca_Rx, CanId: 0x278]                   */  /* [CanIfConf_CanIfRxPduCfg_CGW_01_oATOM_CAN_Matrix_PT_V600_20250211_3b499cca_Rx] */
  { /*    58 */    0x0272u  /* BCM_11_oATOM_CAN_Matrix_PT_V600_20250211_540aeca8_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* BCM_11_oATOM_CAN_Matrix_PT_V600_20250211_540aeca8_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_eebd1636                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BCM_11_oATOM_CAN_Matrix_PT_V600_20250211_540aeca8_Rx, CanId: 0x272]                   */  /* [CanIfConf_CanIfRxPduCfg_BCM_11_oATOM_CAN_Matrix_PT_V600_20250211_540aeca8_Rx] */
  { /*    59 */    0x0271u  /* BCM_06_oATOM_CAN_Matrix_PT_V600_20250211_f2fdbbc4_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* BCM_06_oATOM_CAN_Matrix_PT_V600_20250211_f2fdbbc4_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_794cc76a                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BCM_06_oATOM_CAN_Matrix_PT_V600_20250211_f2fdbbc4_Rx, CanId: 0x271]                   */  /* [CanIfConf_CanIfRxPduCfg_BCM_06_oATOM_CAN_Matrix_PT_V600_20250211_f2fdbbc4_Rx] */
  { /*    60 */    0x0266u  /* EVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_fae06f9a_Rx, 2.0- or FD-PDU */          ,   0x07FFu  /* EVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_fae06f9a_Rx */          , PduRConf_PduRSrcPdu_PduRSrcPdu_fcbdca80                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: EVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_fae06f9a_Rx, CanId: 0x266]           */  /* [CanIfConf_CanIfRxPduCfg_EVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_fae06f9a_Rx] */
  { /*    61 */    0x0265u  /* APTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_28c64e42_Rx, 2.0- or FD-PDU */                ,   0x07FFu  /* APTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_28c64e42_Rx */                , PduRConf_PduRSrcPdu_PduRSrcPdu_993d8e8a                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: APTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_28c64e42_Rx, CanId: 0x265]                 */  /* [CanIfConf_CanIfRxPduCfg_APTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_28c64e42_Rx] */
  { /*    62 */    0x0261u  /* TCU_02_oATOM_CAN_Matrix_PT_V600_20250211_70eff9bb_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* TCU_02_oATOM_CAN_Matrix_PT_V600_20250211_70eff9bb_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_f8476887                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: TCU_02_oATOM_CAN_Matrix_PT_V600_20250211_70eff9bb_Rx, CanId: 0x261]                   */  /* [CanIfConf_CanIfRxPduCfg_TCU_02_oATOM_CAN_Matrix_PT_V600_20250211_70eff9bb_Rx] */
  { /*    63 */    0x0260u  /* TCU_01_oATOM_CAN_Matrix_PT_V600_20250211_d9c8cd52_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* TCU_01_oATOM_CAN_Matrix_PT_V600_20250211_d9c8cd52_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_db4bf9f4                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: TCU_01_oATOM_CAN_Matrix_PT_V600_20250211_d9c8cd52_Rx, CanId: 0x260]                   */  /* [CanIfConf_CanIfRxPduCfg_TCU_01_oATOM_CAN_Matrix_PT_V600_20250211_d9c8cd52_Rx] */
  { /*    64 */    0x0253u  /* MCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_6e18eae9_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* MCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_6e18eae9_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_fa5a6015                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: MCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_6e18eae9_Rx, CanId: 0x253]          */  /* [CanIfConf_CanIfRxPduCfg_MCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_6e18eae9_Rx] */
  { /*    65 */    0x0252u  /* MCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_013e3848_Rx, 2.0- or FD-PDU */      ,   0x07FFu  /* MCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_013e3848_Rx */      , PduRConf_PduRSrcPdu_PduRSrcPdu_a01ee3b0                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: MCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_013e3848_Rx, CanId: 0x252]       */  /* [CanIfConf_CanIfRxPduCfg_MCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_013e3848_Rx] */
  { /*    66 */    0x0249u  /* POD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_cf7150d5_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* POD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_cf7150d5_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_2e10d998                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: POD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_cf7150d5_Rx, CanId: 0x249]        */  /* [CanIfConf_CanIfRxPduCfg_POD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_cf7150d5_Rx] */
  { /*    67 */    0x0248u  /* PRND_oATOM_CAN_Matrix_PT_V600_20250211_f3f01afb_Rx, 2.0- or FD-PDU */                    ,   0x07FFu  /* PRND_oATOM_CAN_Matrix_PT_V600_20250211_f3f01afb_Rx */                    , PduRConf_PduRSrcPdu_PduRSrcPdu_27fe156b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: PRND_oATOM_CAN_Matrix_PT_V600_20250211_f3f01afb_Rx, CanId: 0x248]                     */  /* [CanIfConf_CanIfRxPduCfg_PRND_oATOM_CAN_Matrix_PT_V600_20250211_f3f01afb_Rx] */
  { /*    68 */    0x0245u  /* POD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_386be088_Rx, 2.0- or FD-PDU */     ,   0x07FFu  /* POD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_386be088_Rx */     , PduRConf_PduRSrcPdu_PduRSrcPdu_55bb8b3e                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: POD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_386be088_Rx, CanId: 0x245]      */  /* [CanIfConf_CanIfRxPduCfg_POD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_386be088_Rx] */
  { /*    69 */    0x0244u  /* POD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_14ca095a_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* POD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_14ca095a_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_14a43957                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: POD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_14ca095a_Rx, CanId: 0x244]        */  /* [CanIfConf_CanIfRxPduCfg_POD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_14ca095a_Rx] */
  { /*    70 */    0x0242u  /* POD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_03a7dd19_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* POD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_03a7dd19_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_2c23a96a                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: POD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_03a7dd19_Rx, CanId: 0x242]              */  /* [CanIfConf_CanIfRxPduCfg_POD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_03a7dd19_Rx] */
  { /*    71 */    0x0241u  /* POD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_67276c9b_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* POD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_67276c9b_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_787801bd                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: POD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_67276c9b_Rx, CanId: 0x241]            */  /* [CanIfConf_CanIfRxPduCfg_POD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_67276c9b_Rx] */
  { /*    72 */    0x0240u  /* POD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3af03926_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* POD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3af03926_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_6a4f8110                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: POD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3af03926_Rx, CanId: 0x240]            */  /* [CanIfConf_CanIfRxPduCfg_POD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_3af03926_Rx] */
  { /*    73 */    0x023Cu  /* SGW_01_oATOM_CAN_Matrix_PT_V600_20250211_0e01d645_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* SGW_01_oATOM_CAN_Matrix_PT_V600_20250211_0e01d645_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_2ab3ccf5                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_01_oATOM_CAN_Matrix_PT_V600_20250211_0e01d645_Rx, CanId: 0x23c]                   */  /* [CanIfConf_CanIfRxPduCfg_SGW_01_oATOM_CAN_Matrix_PT_V600_20250211_0e01d645_Rx] */
  { /*    74 */    0x0235u  /* SGW_04_oATOM_CAN_Matrix_PT_V600_20250211_2e198d3f_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* SGW_04_oATOM_CAN_Matrix_PT_V600_20250211_2e198d3f_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_ca105c2f                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_04_oATOM_CAN_Matrix_PT_V600_20250211_2e198d3f_Rx, CanId: 0x235]                   */  /* [CanIfConf_CanIfRxPduCfg_SGW_04_oATOM_CAN_Matrix_PT_V600_20250211_2e198d3f_Rx] */
  { /*    75 */    0x0234u  /* SGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_f8e1fd1f_Rx, 2.0- or FD-PDU */                ,   0x07FFu  /* SGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_f8e1fd1f_Rx */                , PduRConf_PduRSrcPdu_PduRSrcPdu_3e9241c6                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_f8e1fd1f_Rx, CanId: 0x234]                 */  /* [CanIfConf_CanIfRxPduCfg_SGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_f8e1fd1f_Rx] */
  { /*    76 */    0x0231u  /* SGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_18dbd081_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* SGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_18dbd081_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_a393dab1                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_18dbd081_Rx, CanId: 0x231]               */  /* [CanIfConf_CanIfRxPduCfg_SGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_18dbd081_Rx] */
  { /*    77 */    0x0230u  /* SGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e767388d_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* SGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e767388d_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_5cf167cd                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e767388d_Rx, CanId: 0x230]               */  /* [CanIfConf_CanIfRxPduCfg_SGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_e767388d_Rx] */
  { /*    78 */    0x0218u  /* BMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_dc7716a9_Rx, 2.0- or FD-PDU */            ,   0x07FFu  /* BMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_dc7716a9_Rx */            , PduRConf_PduRSrcPdu_PduRSrcPdu_4ed79f7d                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_dc7716a9_Rx, CanId: 0x218]             */  /* [CanIfConf_CanIfRxPduCfg_BMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_dc7716a9_Rx] */
  { /*    79 */    0x0217u  /* BMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_f8b61923_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* BMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_f8b61923_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_e3bed30b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_f8b61923_Rx, CanId: 0x217]          */  /* [CanIfConf_CanIfRxPduCfg_BMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_f8b61923_Rx] */
  { /*    80 */    0x0215u  /* BMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_07dfc0bf_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* BMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_07dfc0bf_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_9e2ae37f                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_07dfc0bf_Rx, CanId: 0x215]            */  /* [CanIfConf_CanIfRxPduCfg_BMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_07dfc0bf_Rx] */
  { /*    81 */    0x0214u  /* BMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_3e135a91_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* BMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_3e135a91_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_2dd16f9f                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_3e135a91_Rx, CanId: 0x214]            */  /* [CanIfConf_CanIfRxPduCfg_BMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_3e135a91_Rx] */
  { /*    82 */    0x0213u  /* BMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_5ad82f6c_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* BMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_5ad82f6c_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_2f5b0f93                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_5ad82f6c_Rx, CanId: 0x213]            */  /* [CanIfConf_CanIfRxPduCfg_BMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_5ad82f6c_Rx] */
  { /*    83 */    0x0212u  /* BMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_070f7ad1_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* BMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_070f7ad1_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_18355f69                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_070f7ad1_Rx, CanId: 0x212]            */  /* [CanIfConf_CanIfRxPduCfg_BMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_070f7ad1_Rx] */
  { /*    84 */    0x0210u  /* BMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_de479d1f_Rx, 2.0- or FD-PDU */        ,   0x07FFu  /* BMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_de479d1f_Rx */        , PduRConf_PduRSrcPdu_PduRSrcPdu_b34f4ed8                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_de479d1f_Rx, CanId: 0x210]         */  /* [CanIfConf_CanIfRxPduCfg_BMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_de479d1f_Rx] */
  { /*    85 */    0x00F9u  /* IVI_03_oATOM_CAN_Matrix_PT_V600_20250211_d0d400f2_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* IVI_03_oATOM_CAN_Matrix_PT_V600_20250211_d0d400f2_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_56ab55cb                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IVI_03_oATOM_CAN_Matrix_PT_V600_20250211_d0d400f2_Rx, CanId: 0xf9]                    */  /* [CanIfConf_CanIfRxPduCfg_IVI_03_oATOM_CAN_Matrix_PT_V600_20250211_d0d400f2_Rx] */
  { /*    86 */    0x00F3u  /* MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0c5263e7_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0c5263e7_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_5fe77ffa                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0c5263e7_Rx, CanId: 0xf3]                    */  /* [CanIfConf_CanIfRxPduCfg_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_0c5263e7_Rx] */
  { /*    87 */    0x00C2u  /* BMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_bc716bc5_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* BMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_bc716bc5_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_6d932377                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_bc716bc5_Rx, CanId: 0xc2]             */  /* [CanIfConf_CanIfRxPduCfg_BMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_bc716bc5_Rx] */
  { /*    88 */    0x00C1u  /* BMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_e1a63e78_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* BMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_e1a63e78_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_5187e753                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: BMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_e1a63e78_Rx, CanId: 0xc1]             */  /* [CanIfConf_CanIfRxPduCfg_BMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_e1a63e78_Rx] */
  { /*    89 */    0x00BBu  /* IBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_3b732231_Rx, 2.0- or FD-PDU */           ,   0x07FFu  /* IBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_3b732231_Rx */           , PduRConf_PduRSrcPdu_PduRSrcPdu_75f9cd0c                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_3b732231_Rx, CanId: 0xbb]             */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_3b732231_Rx] */
  { /*    90 */    0x0098u  /* MCU_01_oATOM_CAN_Matrix_PT_V600_20250211_a575570e_Rx, 2.0- or FD-PDU */                  ,   0x07FFu  /* MCU_01_oATOM_CAN_Matrix_PT_V600_20250211_a575570e_Rx */                  , PduRConf_PduRSrcPdu_PduRSrcPdu_6a0fc49c                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: MCU_01_oATOM_CAN_Matrix_PT_V600_20250211_a575570e_Rx, CanId: 0x98]                    */  /* [CanIfConf_CanIfRxPduCfg_MCU_01_oATOM_CAN_Matrix_PT_V600_20250211_a575570e_Rx] */
  { /*    91 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx, 2.0- or FD-PDU */                           ,   0x47FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx */                           , CanNmConf_CanNmRxPdu_CanNmRxPdu_1                                    ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx, CanId: 0x500]                            */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx] */
  { /*    92 */    0x0203u  /* VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx, 2.0- or FD-PDU */                                ,   0x07FFu  /* VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx */                                , PduRConf_PduRSrcPdu_PduRSrcPdu_f5b46736                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx, CanId: 0x203]                                 */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx] */
  { /*    93 */    0x0202u  /* VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx, 2.0- or FD-PDU */                                ,   0x07FFu  /* VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx */                                , PduRConf_PduRSrcPdu_PduRSrcPdu_3905054b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx, CanId: 0x202]                                 */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx] */
  { /*    94 */    0x0110u  /* VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx, 2.0- or FD-PDU */                            ,   0x07FFu  /* VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx */                            , PduRConf_PduRSrcPdu_PduRSrcPdu_d7cb99e6                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx, CanId: 0x110]                             */  /* [CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx] */
  { /*    95 */    0x010Fu  /* VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx, 2.0- or FD-PDU */                            ,   0x07FFu  /* VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx */                            , PduRConf_PduRSrcPdu_PduRSrcPdu_35c74fdb                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx, CanId: 0x10f]                             */  /* [CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx] */
  { /*    96 */    0x010Eu  /* VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx, 2.0- or FD-PDU */                            ,   0x07FFu  /* VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx */                            , PduRConf_PduRSrcPdu_PduRSrcPdu_01131484                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx, CanId: 0x10e]                             */  /* [CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx] */
  { /*    97 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN03_3d10c536_Rx, 2.0- or FD-PDU */                           ,   0x47FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN03_3d10c536_Rx */                           , CanNmConf_CanNmRxPdu_CanNmRxPdu_002                                  ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN03_3d10c536_Rx, CanId: 0x500]                            */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN03_3d10c536_Rx] */
  { /*    98 */    0x0213u  /* VcuCan03RxMsg2_oTC37X_VCU_CAN03_90956af5_Rx, 2.0- or FD-PDU */                           ,   0x07FFu  /* VcuCan03RxMsg2_oTC37X_VCU_CAN03_90956af5_Rx */                           , PduRConf_PduRSrcPdu_PduRSrcPdu_a2204cbf                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuCan03RxMsg2_oTC37X_VCU_CAN03_90956af5_Rx, CanId: 0x213]                            */  /* [CanIfConf_CanIfRxPduCfg_VcuCan03RxMsg2_oTC37X_VCU_CAN03_90956af5_Rx] */
  { /*    99 */    0x0212u  /* VcuCan03RxMsg1_oTC37X_VCU_CAN03_d3a6cc6e_Rx, 2.0- or FD-PDU */                           ,   0x07FFu  /* VcuCan03RxMsg1_oTC37X_VCU_CAN03_d3a6cc6e_Rx */                           , PduRConf_PduRSrcPdu_PduRSrcPdu_4e610413                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuCan03RxMsg1_oTC37X_VCU_CAN03_d3a6cc6e_Rx, CanId: 0x212]                            */  /* [CanIfConf_CanIfRxPduCfg_VcuCan03RxMsg1_oTC37X_VCU_CAN03_d3a6cc6e_Rx] */
    /* Index    RxPduCanId                                                                                                RxPduMask                                                                                UpperPduId                                                             RxIndicationFctListIdx                                RxPduDlc                                    Comment                                                                                                 Referable Keys */
  { /*   100 */    0x07F0u  /* XCP_Request_oTC37X_VCU_CAN12_XCP_6cbaea30_Rx, 2.0- or FD-PDU */                          ,   0x47FFu  /* XCP_Request_oTC37X_VCU_CAN12_XCP_6cbaea30_Rx */                          , XcpConf_XcpRxPdu_XCP_Request_oTC37X_VCU_CAN12_XCP_52af259e_Rx        ,                     4u  /* Xcp_CanIfRxIndication */ ,       8u  /* DLC-Check is enabled */ }   /* [PDU: XCP_Request_oTC37X_VCU_CAN12_XCP_6cbaea30_Rx, CanId: 0x7f0]                           */  /* [CanIfConf_CanIfRxPduCfg_XCP_Request_oTC37X_VCU_CAN12_XCP_6cbaea30_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferFifoConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferFifoConfig
  \brief  Tx-buffer: FIFO
  \details
  Element                    Description
  TxFifoQueueDataEndIdx      the end index of the 1:n relation pointing to CanIf_TxFifoQueueData
  TxFifoQueueDataStartIdx    the start index of the 1:n relation pointing to CanIf_TxFifoQueueData
  SizeOfOnePayloadEl     
  TxBufferFifoBaseIdx        the index of the 1:1 relation pointing to CanIf_TxBufferFifoBase
  TxFifoQueueBaseEndIdx      the end index of the 1:n relation pointing to CanIf_TxFifoQueueBase
  TxFifoQueueBaseLength      the number of relations pointing to CanIf_TxFifoQueueBase
  TxFifoQueueBaseStartIdx    the start index of the 1:n relation pointing to CanIf_TxFifoQueueBase
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxBufferFifoConfigType, CANIF_CONST) CanIf_TxBufferFifoConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxFifoQueueDataEndIdx                                                      TxFifoQueueDataStartIdx                                                      SizeOfOnePayloadEl  TxBufferFifoBaseIdx                                                      TxFifoQueueBaseEndIdx                                                      TxFifoQueueBaseLength                                                      TxFifoQueueBaseStartIdx                                                            Referable Keys */
  { /*     0 */                   80u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */,                      0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */,                 8u,                  0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */,                   10u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */,                   10u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */,                      0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     1 */                  232u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29 */,                     80u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29 */,                 8u,                  1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29 */,                   29u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29 */,                   19u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29 */,                     10u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29 */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29] */
  { /*     2 */                  344u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */,                    232u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */,                 8u,                  2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */,                   43u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */,                   14u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */,                     29u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*     3 */                  368u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */,                    344u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */,                 8u,                  3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */,                   46u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */,                    3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */,                     43u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  { /*     4 */                  384u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304 */,                    368u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304 */,                 8u,                  4u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304 */,                   48u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304 */,                    2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304 */,                     46u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304 */ }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxConfirmationFctList                      Referable Keys */
  /*     0 */ (CanIf_TxConfirmationFctType)NULL_PTR ,  /* [NULL_PTR] */
  /*     1 */ CanNm_TxConfirmation                  ,  /* [CanNm_TxConfirmation] */
  /*     2 */ CanTp_TxConfirmation                  ,  /* [CanTp_TxConfirmation] */
  /*     3 */ PduR_CanIfTxConfirmation              ,  /* [PduR_CanIfTxConfirmation] */
  /*     4 */ Xcp_CanIfTxConfirmation                  /* [Xcp_CanIfTxConfirmation] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfig
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle-Id (8bit / 16bit).
  IsTxPduTruncation           TRUE: Truncation of Tx-PDU is enabled, FALSE: Truncation of Tx-PDU is disabled
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
  TxPduLength                 Tx-PDU length.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[50] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanId    UpperLayerTxPduId                                                                         IsTxPduTruncation  CtrlStatesIdx                                                                                                 MailBoxConfigIdx                                                                                          TxConfirmationFctListIdx                                  TxPduLength        Comment                                                                                Referable Keys */
  { /*     0 */ 0x052Cu, CanNmConf_CanNmTxPdu_NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_7321f2c3_Tx               , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       1u  /* CanNm_TxConfirmation */    ,          8u },  /* [PDU: NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx] */
  { /*     1 */ 0x4391u, PduRConf_PduRDestPdu_VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx   , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx] */
  { /*     2 */ 0x4319u, PduRConf_PduRDestPdu_VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx               , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx] */
  { /*     3 */ 0x4318u, PduRConf_PduRDestPdu_VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx    , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx] */
  { /*     4 */ 0x4317u, PduRConf_PduRDestPdu_VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx    , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx] */
  { /*     5 */ 0x4223u, PduRConf_PduRDestPdu_VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx               , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx] */
  { /*     6 */ 0x4222u, PduRConf_PduRDestPdu_VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx               , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx] */
  { /*     7 */ 0x40D3u, PduRConf_PduRDestPdu_VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx       , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx]        */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx] */
  { /*     8 */ 0x40D2u, PduRConf_PduRDestPdu_VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx         , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx]          */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx] */
  { /*     9 */ 0x40D1u, PduRConf_PduRDestPdu_VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx              , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx]               */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx] */
  { /*    10 */ 0x4095u, PduRConf_PduRDestPdu_VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx           , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx_95h */,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx] */
  { /*    11 */ 0x4094u, PduRConf_PduRDestPdu_VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx           , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               0u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx_94h */,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx] */
  { /*    12 */ 0x07E8u, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_fb36dff5                                          , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       2u  /* CanTp_TxConfirmation */    ,          8u },  /* [PDU: DiagResp_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_56f96c78_Tx]   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/DiagResp_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_56f96c78_Tx] */
  { /*    13 */ 0x0791u, PduRConf_PduRDestPdu_Uds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_c47c83fb_Tx, TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: Uds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_17c5802f_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Uds_EPT_Boot_Response_oATOM_CAN_Matrix_PT_V600_20250211_17c5802f_Tx] */
  { /*    14 */ 0x072Cu, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_341356c5                                              , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       2u  /* CanTp_TxConfirmation */    ,          8u },  /* [PDU: DiagResp_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_81d5a184_Tx]       */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/DiagResp_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_81d5a184_Tx] */
  { /*    15 */ 0x052Cu, CanNmConf_CanNmTxPdu_NM_VCU_oATOM_CAN_Matrix_PT_V600_20250211_16e84d4a_Tx               , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       1u  /* CanNm_TxConfirmation */    ,          8u },  /* [PDU: NM_VCU_oATOM_CAN_Matrix_PT_V600_20250211_21d4212a_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/NM_VCU_oATOM_CAN_Matrix_PT_V600_20250211_21d4212a_Tx] */
  { /*    16 */ 0x042Cu, PduRConf_PduRDestPdu_VCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_99a29031_Tx        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_a221e0ee_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_DiagInfor_oATOM_CAN_Matrix_PT_V600_20250211_a221e0ee_Tx] */
  { /*    17 */ 0x031Bu, PduRConf_PduRDestPdu_VCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_901dd9e6_Tx    , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_ce5997a6_Tx]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_ce5997a6_Tx] */
  { /*    18 */ 0x0319u, PduRConf_PduRDestPdu_VCU_02_oATOM_CAN_Matrix_PT_V600_20250211_dc79618a_Tx               , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_02_oATOM_CAN_Matrix_PT_V600_20250211_d64c1292_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_02_oATOM_CAN_Matrix_PT_V600_20250211_d64c1292_Tx] */
  { /*    19 */ 0x0318u, PduRConf_PduRDestPdu_VCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_51f286fc_Tx    , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_b18572fb_Tx]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_02_oATOM_CAN_Matrix_PT_V600_20250211_b18572fb_Tx] */
  { /*    20 */ 0x0225u, PduRConf_PduRDestPdu_VCU_06_oATOM_CAN_Matrix_PT_V600_20250211_6d261160_Tx               , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_06_oATOM_CAN_Matrix_PT_V600_20250211_91495a4f_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_06_oATOM_CAN_Matrix_PT_V600_20250211_91495a4f_Tx] */
  { /*    21 */ 0x0224u, PduRConf_PduRDestPdu_VCU_05_oATOM_CAN_Matrix_PT_V600_20250211_f466f60f_Tx               , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_05_oATOM_CAN_Matrix_PT_V600_20250211_386e6ea6_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_05_oATOM_CAN_Matrix_PT_V600_20250211_386e6ea6_Tx] */
  { /*    22 */ 0x0221u, PduRConf_PduRDestPdu_VCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_e6bfcc3d_Tx              , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_c350eb20_Tx]               */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_c350eb20_Tx] */
  { /*    23 */ 0x0220u, PduRConf_PduRDestPdu_VCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_2cf6caff_Tx             , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_c9a902ae_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_c9a902ae_Tx] */
  { /*    24 */ 0x013Fu, PduRConf_PduRDestPdu_VCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_fde06b01_Tx        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_59ebe7dd_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_59ebe7dd_Tx] */
  { /*    25 */ 0x0121u, PduRConf_PduRDestPdu_VCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_bb987d73_Tx              , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_d17423c6_Tx]               */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_d17423c6_Tx] */
  { /*    26 */ 0x00D6u, PduRConf_PduRDestPdu_VCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_1016cc10_Tx           , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_ef1d8001_Tx]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_ef1d8001_Tx] */
  { /*    27 */ 0x00D2u, PduRConf_PduRDestPdu_VCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_5930977d_Tx         , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_0136bf08_Tx]          */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_AccPedal_oATOM_CAN_Matrix_PT_V600_20250211_0136bf08_Tx] */
  { /*    28 */ 0x00D1u, PduRConf_PduRDestPdu_VCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_e81d87a2_Tx              , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               6u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_Tx */    ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_d9bb8aad_Tx]               */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_BMS_oATOM_CAN_Matrix_PT_V600_20250211_d9bb8aad_Tx] */
  { /*    29 */ 0x0096u, PduRConf_PduRDestPdu_VCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_38095b95_Tx           , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_96h */                              ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_01fbbe2f_Tx]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_01fbbe2f_Tx] */
  { /*    30 */ 0x0095u, PduRConf_PduRDestPdu_VCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_f9e6048f_Tx           , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03 */,               4u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CAN_PT_Tx_95h */                              ,                       3u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: VCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_a9fa037b_Tx]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_MCU_03_oATOM_CAN_Matrix_PT_V600_20250211_a9fa037b_Tx] */
  { /*    31 */ 0x051Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_9aba5863_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       1u  /* CanNm_TxConfirmation */    ,          8u },  /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx] */
  { /*    32 */ 0x0111u, PduRConf_PduRDestPdu_VcuMeasurementMsg0_oTC37X_VCU_CAN01_d96481d0_Tx                    , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx] */
  { /*    33 */ 0x010Du, PduRConf_PduRDestPdu_VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx] */
  { /*    34 */ 0x010Cu, PduRConf_PduRDestPdu_VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx] */
  { /*    35 */ 0x010Bu, PduRConf_PduRDestPdu_VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx] */
  { /*    36 */ 0x010Au, PduRConf_PduRDestPdu_VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx] */
  { /*    37 */ 0x0109u, PduRConf_PduRDestPdu_VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx] */
  { /*    38 */ 0x0108u, PduRConf_PduRDestPdu_VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx] */
  { /*    39 */ 0x0107u, PduRConf_PduRDestPdu_VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx] */
  { /*    40 */ 0x0106u, PduRConf_PduRDestPdu_VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx] */
  { /*    41 */ 0x0105u, PduRConf_PduRDestPdu_VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx] */
  { /*    42 */ 0x0104u, PduRConf_PduRDestPdu_VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx] */
  { /*    43 */ 0x0103u, PduRConf_PduRDestPdu_VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx] */
  { /*    44 */ 0x0102u, PduRConf_PduRDestPdu_VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx                        , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               8u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx] */
  { /*    45 */ 0x051Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_61fe7220_Tx                        , TRUE             ,            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,              10u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx */                     ,                       1u  /* CanNm_TxConfirmation */    ,          8u },  /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx] */
  { /*    46 */ 0x0113u, PduRConf_PduRDestPdu_VcuCan03TxMsg2_oTC37X_VCU_CAN03_0942627e_Tx                        , TRUE             ,            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,              10u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx] */
  { /*    47 */ 0x0112u, PduRConf_PduRDestPdu_VcuCan03TxMsg1_oTC37X_VCU_CAN03_c0767973_Tx                        , TRUE             ,            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,              10u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx */                     ,                       0u  /* NULL_PTR */                ,          8u },  /* [PDU: VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx] */
  { /*    48 */ 0x07F1u, XcpConf_XcpTxPdu_XCP_Response_oTC37X_VCU_CAN12_XCP_931ee635_Tx                          , TRUE             ,            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b */             ,              12u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_XCP_d05a85ac_Tx */                 ,                       4u  /* Xcp_CanIfTxConfirmation */ ,          8u },  /* [PDU: XCP_Response_oTC37X_VCU_CAN12_XCP_f1f333ef_Tx]                       */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/XCP_Response_oTC37X_VCU_CAN12_XCP_f1f333ef_Tx] */
  { /*    49 */ 0x0035u, PduRConf_PduRDestPdu_VcuCan12TxMsg1_oTC37X_VCU_CAN12_XCP_9cae793f_Tx                    , TRUE             ,            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b */             ,              12u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_XCP_d05a85ac_Tx */                 ,                       0u  /* NULL_PTR */                ,          8u }   /* [PDU: VcuCan12TxMsg1_oTC37X_VCU_CAN12_XCP_7546ee7f_Tx]                     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg1_oTC37X_VCU_CAN12_XCP_7546ee7f_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element     Description
  CtrlMode    Controller mode.
  PduMode     PDU mode state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_XCP_5a889f4b] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferFifoBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferFifoBase
  \brief  Variable declaration - Tx-buffer FIFO: buffer-base: write-/read-index, counter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxBufferFifoBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferFifoBase;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxFifoQueueBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxFifoQueueBase
  \brief  Variable declaration - Tx-buffer FIFO: queue-base: CAN identifier, data length, queued / NOT queued.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxFifoQueueBaseUType, CANIF_VAR_NOINIT) CanIf_TxFifoQueueBase;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  /*     9 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  /*    10 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29] */
  /*    28 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29] */
  /*    29 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  /*    42 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  /*    43 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  /*    45 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  /*    46 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304] */
  /*    47 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxFifoQueueData
**********************************************************************************************************************/
/** 
  \var    CanIf_TxFifoQueueData
  \brief  Variable declaration - Tx-buffer FIFO: queue-data.
*/ 
#define CANIF_START_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxFifoQueueDataUType, CANIF_VAR_NOINIT_FAST) CanIf_TxFifoQueueData;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  /*    79 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  /*    80 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29] */
  /*   231 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_beb59c29] */
  /*   232 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  /*   343 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  /*   344 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  /*   367 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  /*   368 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304] */
  /*   383 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_8132b304] */

#define CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */




