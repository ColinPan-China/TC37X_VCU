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
 *   Generation Time: 2025-08-14 14:36:01
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
  { /*     1 */                          2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,                            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*     2 */                          3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,                            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */                          4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,                            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  { /*     4 */                          5u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81 */                 ,                            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81 */                  }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81] */
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
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdByteQueueConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[15] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CtrlStatesIdx                                                                                                 PduIdFirst                            PduIdLast                            TxBufferCfg                                                          TxBufferCfgIdx                                                                              TxBufferHandlingType                     MailBoxType                    Referable Keys */
  { /*     0 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,         0u  /* Unused, TxPduId 11 */,        0u  /* Unused, TxPduId 11 */,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex0 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx_94h] */
  { /*     1 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,         0u  /* Unused, TxPduId 10 */,        0u  /* Unused, TxPduId 10 */,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex1 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx_95h] */
  { /*     2 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,         0u  /* Unused, TxPduId 0 */ ,        0u  /* Unused, TxPduId 9 */ , CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx] */
  { /*     3 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,         1u  /* RxPduId */           ,       20u  /* RxPduId  */          ,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex3 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_64375107_Rx] */
  { /*     4 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,         0u  /* Unused, TxPduId 24 */,        0u  /* Unused, TxPduId 24 */,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex4 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX0] */
  { /*     5 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,         0u  /* Unused, TxPduId 12 */,        0u  /* Unused, TxPduId 23 */, CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx] */
  { /*     6 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,        26u  /* RxPduId */           ,       26u  /* RxPduId  */          ,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex6 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx] */
  { /*     7 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,        25u  /* RxPduId */           ,       25u  /* RxPduId  */          ,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex7 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx] */
  { /*     8 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,        21u  /* RxPduId */           ,       24u  /* RxPduId  */          ,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex8 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_c052b9c5_Rx] */
  { /*     9 */            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,         0u  /* Unused, TxPduId 25 */,        0u  /* Unused, TxPduId 38 */, CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx] */
  { /*    10 */            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,        27u  /* RxPduId */           ,       32u  /* RxPduId  */          ,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex10 */                               , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_2f90d2fb_Rx] */
  { /*    11 */            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,         0u  /* Unused, TxPduId 39 */,        0u  /* Unused, TxPduId 41 */, CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx] */
  { /*    12 */            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,        33u  /* RxPduId */           ,       35u  /* RxPduId  */          ,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex12 */                               , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_2b6502c6_Rx] */
  { /*    13 */            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81 */                 ,         0u  /* Unused, TxPduId 42 */,        0u  /* Unused, TxPduId 44 */, CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     4u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0 */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_f0a399a5_Tx] */
  { /*    14 */            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81 */                 ,        36u  /* RxPduId */           ,       38u  /* RxPduId  */          ,                                 CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex14 */                               , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox }   /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_0529b638_Rx] */
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
  { /*     1 */               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*     2 */               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*     3 */              11u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx */                  },  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  { /*     4 */              13u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_f0a399a5_Tx */                  }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81] */
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
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[39] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPduCanId                                                                                            RxPduMask                                                                            UpperPduId                                                             RxIndicationFctListIdx                                RxPduDlc                                    Comment                                                                                            Referable Keys */
  { /*     0 */    0x0500u  /* Lower CanId of range: VCU_42a243c5_Rx, 2.0- or FD-PDU */                             ,   0x657Fu  /* Upper CanId of range: VCU_42a243c5_Rx */                             , CanNmConf_CanNmRxPdu_ATOM_CANFD_Matrix_CH_V600_202502_CAN_b5bd2095_Rx,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_42a243c5_Rx, Lower CanId of range: 0x500]                                    */  /* [CanIfConf_CanIfRxPduCfg_VCU_42a243c5_Rx] */
  { /*     1 */    0x0352u  /* SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_316b9b30                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx, CanId: 0x352]              */  /* [CanIfConf_CanIfRxPduCfg_SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_a3accfb6_Rx] */
  { /*     2 */    0x020Du  /* ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_bc9c1fec                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx, CanId: 0x20d]         */  /* [CanIfConf_CanIfRxPduCfg_ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_4e07b11c_Rx] */
  { /*     3 */    0x00F6u  /* ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_0dbe25ba                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx, CanId: 0xf6]               */  /* [CanIfConf_CanIfRxPduCfg_ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_013f48ab_Rx] */
  { /*     4 */    0x00F5u  /* ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_9eae4558                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx, CanId: 0xf5]               */  /* [CanIfConf_CanIfRxPduCfg_ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_a8187c42_Rx] */
  { /*     5 */    0x00E6u  /* ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_08ea31b4                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx, CanId: 0xe6]              */  /* [CanIfConf_CanIfRxPduCfg_ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_006b7786_Rx] */
  { /*     6 */    0x00E4u  /* ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_d84c121b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx, CanId: 0xe4]          */  /* [CanIfConf_CanIfRxPduCfg_ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_49d00f95_Rx] */
  { /*     7 */    0x00E2u  /* ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_686bd310                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx, CanId: 0xe2]          */  /* [CanIfConf_CanIfRxPduCfg_ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_112d0569_Rx] */
  { /*     8 */    0x00E0u  /* ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx */         , PduRConf_PduRSrcPdu_PduRSrcPdu_56f39b3b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx, CanId: 0xe0]          */  /* [CanIfConf_CanIfRxPduCfg_ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_c4c0c3b8_Rx] */
  { /*     9 */    0x00BCu  /* IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_65adbba1                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx, CanId: 0xbc]        */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_d61b4b72_Rx] */
  { /*    10 */    0x00BAu  /* IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_6a5d743a                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx, CanId: 0xba]        */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_09ae2f9b_Rx] */
  { /*    11 */    0x00B9u  /* IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx, 2.0- or FD-PDU */          ,   0x07FFu  /* IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx */          , PduRConf_PduRSrcPdu_PduRSrcPdu_629168fc                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx, CanId: 0xb9]           */  /* [CanIfConf_CanIfRxPduCfg_IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_859bc039_Rx] */
  { /*    12 */    0x00B8u  /* IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_ca3eaa8a                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx, CanId: 0xb8]              */  /* [CanIfConf_CanIfRxPduCfg_IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_bc049b13_Rx] */
  { /*    13 */    0x00B7u  /* IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx */             , PduRConf_PduRSrcPdu_PduRSrcPdu_283e282c                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx, CanId: 0xb7]              */  /* [CanIfConf_CanIfRxPduCfg_IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_85b7a139_Rx] */
  { /*    14 */    0x00B4u  /* IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_12481f07                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx, CanId: 0xb4]        */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_3062b5b5_Rx] */
  { /*    15 */    0x00B3u  /* IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_77b4603c                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx, CanId: 0xb3]        */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_b20084e1_Rx] */
  { /*    16 */    0x00B2u  /* IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx, 2.0- or FD-PDU */       ,   0x07FFu  /* IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu_d09902f0                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx, CanId: 0xb2]        */  /* [CanIfConf_CanIfRxPduCfg_IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_efd7d15c_Rx] */
  { /*    17 */    0x00B1u  /* IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx, 2.0- or FD-PDU */   ,   0x07FFu  /* IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx */   , PduRConf_PduRSrcPdu_PduRSrcPdu_ca150190                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx, CanId: 0xb1]    */  /* [CanIfConf_CanIfRxPduCfg_IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_9a94b166_Rx] */
  { /*    18 */    0x00B0u  /* IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx, 2.0- or FD-PDU */   ,   0x07FFu  /* IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx */   , PduRConf_PduRSrcPdu_PduRSrcPdu_fcecab79                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx, CanId: 0xb0]    */  /* [CanIfConf_CanIfRxPduCfg_IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1af19e81_Rx] */
  { /*    19 */    0x0097u  /* ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx, 2.0- or FD-PDU */            ,   0x07FFu  /* ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx */            , PduRConf_PduRSrcPdu_PduRSrcPdu_f767588b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx, CanId: 0x97]             */  /* [CanIfConf_CanIfRxPduCfg_ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_3a26f0a5_Rx] */
  { /*    20 */    0x0090u  /* IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx, 2.0- or FD-PDU */,   0x07FFu  /* IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx */, PduRConf_PduRSrcPdu_PduRSrcPdu_4e239512                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx, CanId: 0x90] */  /* [CanIfConf_CanIfRxPduCfg_IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_0ce6310f_Rx] */
  { /*    21 */    0x0701u  /* Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx, 2.0- or FD-PDU */               ,   0x47FFu  /* Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx */               , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_4116ec52                       ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx, CanId: 0x701]               */  /* [CanIfConf_CanIfRxPduCfg_Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx] */
  { /*    22 */    0x0700u  /* Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx */              , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_257d590c                           ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx, CanId: 0x700]              */  /* [CanIfConf_CanIfRxPduCfg_Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx] */
  { /*    23 */    0x0606u  /* XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx, 2.0- or FD-PDU */                          ,   0x07FFu  /* XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx */                          , XcpConf_XcpRxPdu_XCP_Request_oTC37X_VCU_CAN00_3c25b45e_Rx            ,                     4u  /* Xcp_CanIfRxIndication */ ,       8u  /* DLC-Check is enabled */ },  /* [PDU: XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx, CanId: 0x606]                          */  /* [CanIfConf_CanIfRxPduCfg_XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx] */
  { /*    24 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx, 2.0- or FD-PDU */                       ,   0x07FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx */                       , CanNmConf_CanNmRxPdu_CanNmRxPdu                                      ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx, CanId: 0x500]                       */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx] */
  { /*    25 */    0x0201u  /* VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx, 2.0- or FD-PDU */                            ,   0x47FFu  /* VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx */                            , PduRConf_PduRSrcPdu_PduRSrcPdu_803efadc                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx, CanId: 0x201]                            */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx] */
  { /*    26 */    0x0200u  /* VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx, 2.0- or FD-PDU */                            ,   0x47FFu  /* VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx */                            , PduRConf_PduRSrcPdu_PduRSrcPdu_6711bd67                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx, CanId: 0x200]                            */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx] */
  { /*    27 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx, 2.0- or FD-PDU */                       ,   0x47FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx */                       , CanNmConf_CanNmRxPdu_CanNmRxPdu_1                                    ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx, CanId: 0x500]                       */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx] */
  { /*    28 */    0x0203u  /* VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx, 2.0- or FD-PDU */                            ,   0x07FFu  /* VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx */                            , PduRConf_PduRSrcPdu_PduRSrcPdu_f5b46736                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx, CanId: 0x203]                            */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx] */
  { /*    29 */    0x0202u  /* VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx, 2.0- or FD-PDU */                            ,   0x07FFu  /* VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx */                            , PduRConf_PduRSrcPdu_PduRSrcPdu_3905054b                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx, CanId: 0x202]                            */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx] */
  { /*    30 */    0x0110u  /* VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx, 2.0- or FD-PDU */                        ,   0x07FFu  /* VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx */                        , PduRConf_PduRSrcPdu_PduRSrcPdu_d7cb99e6                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx, CanId: 0x110]                        */  /* [CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg2_oTC37X_VCU_CAN01_5bdcb8c3_Rx] */
  { /*    31 */    0x010Fu  /* VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx, 2.0- or FD-PDU */                        ,   0x07FFu  /* VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx */                        , PduRConf_PduRSrcPdu_PduRSrcPdu_35c74fdb                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx, CanId: 0x10f]                        */  /* [CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg1_oTC37X_VCU_CAN01_989a1812_Rx] */
  { /*    32 */    0x010Eu  /* VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx, 2.0- or FD-PDU */                        ,   0x07FFu  /* VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx */                        , PduRConf_PduRSrcPdu_PduRSrcPdu_01131484                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx, CanId: 0x10e]                        */  /* [CanIfConf_CanIfRxPduCfg_VcuRxCtrlMsg0_oTC37X_VCU_CAN01_6f777a62_Rx] */
  { /*    33 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN03_3d10c536_Rx, 2.0- or FD-PDU */                       ,   0x47FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN03_3d10c536_Rx */                       , CanNmConf_CanNmRxPdu_CanNmRxPdu_002                                  ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN03_3d10c536_Rx, CanId: 0x500]                       */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN03_3d10c536_Rx] */
  { /*    34 */    0x0213u  /* VcuCan03RxMsg2_oTC37X_VCU_CAN03_90956af5_Rx, 2.0- or FD-PDU */                       ,   0x07FFu  /* VcuCan03RxMsg2_oTC37X_VCU_CAN03_90956af5_Rx */                       , PduRConf_PduRSrcPdu_PduRSrcPdu_a2204cbf                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuCan03RxMsg2_oTC37X_VCU_CAN03_90956af5_Rx, CanId: 0x213]                       */  /* [CanIfConf_CanIfRxPduCfg_VcuCan03RxMsg2_oTC37X_VCU_CAN03_90956af5_Rx] */
  { /*    35 */    0x0212u  /* VcuCan03RxMsg1_oTC37X_VCU_CAN03_d3a6cc6e_Rx, 2.0- or FD-PDU */                       ,   0x07FFu  /* VcuCan03RxMsg1_oTC37X_VCU_CAN03_d3a6cc6e_Rx */                       , PduRConf_PduRSrcPdu_PduRSrcPdu_4e610413                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuCan03RxMsg1_oTC37X_VCU_CAN03_d3a6cc6e_Rx, CanId: 0x212]                       */  /* [CanIfConf_CanIfRxPduCfg_VcuCan03RxMsg1_oTC37X_VCU_CAN03_d3a6cc6e_Rx] */
  { /*    36 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN12_12d706fd_Rx, 2.0- or FD-PDU */                       ,   0x47FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN12_12d706fd_Rx */                       , CanNmConf_CanNmRxPdu_CanNmRxPdu_001                                  ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN12_12d706fd_Rx, CanId: 0x500]                       */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN12_12d706fd_Rx] */
  { /*    37 */    0x0033u  /* VcuCan12RxMsg3_oTC37X_VCU_CAN12_b2a63007_Rx, 2.0- or FD-PDU */                       ,   0x07FFu  /* VcuCan12RxMsg3_oTC37X_VCU_CAN12_b2a63007_Rx */                       , PduRConf_PduRSrcPdu_PduRSrcPdu_9d116735                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuCan12RxMsg3_oTC37X_VCU_CAN12_b2a63007_Rx, CanId: 0x33]                        */  /* [CanIfConf_CanIfRxPduCfg_VcuCan12RxMsg3_oTC37X_VCU_CAN12_b2a63007_Rx] */
  { /*    38 */    0x0032u  /* VcuCan12RxMsg4_oTC37X_VCU_CAN12_0a2fe0b8_Rx, 2.0- or FD-PDU */                       ,   0x07FFu  /* VcuCan12RxMsg4_oTC37X_VCU_CAN12_0a2fe0b8_Rx */                       , PduRConf_PduRSrcPdu_PduRSrcPdu_0a95646f                              ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ }   /* [PDU: VcuCan12RxMsg4_oTC37X_VCU_CAN12_0a2fe0b8_Rx, CanId: 0x32]                        */  /* [CanIfConf_CanIfRxPduCfg_VcuCan12RxMsg4_oTC37X_VCU_CAN12_0a2fe0b8_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueConfig
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE
  \details
  Element                                             Description
  TxBufferPrioByCanIdBaseIdx                          the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase
  TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx      the end index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusLength      the number of relations pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx    the start index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueConfigType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxBufferPrioByCanIdBaseIdx                                                      TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx                                                      TxBufferPrioByCanIdByteQueueMappedTxPdusLength                                                      TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx                                                            Referable Keys */
  { /*     0 */                         0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */,                                            10u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */,                                            10u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */,                                               0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40 */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     1 */                         1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f */,                                            22u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f */,                                            12u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f */,                                              10u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*     2 */                         2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */,                                            36u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */,                                            14u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */,                                              22u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*     3 */                         3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */,                                            39u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */,                                             3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */,                                              36u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1 */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  { /*     4 */                         4u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0 */,                                            42u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0 */,                                             3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0 */,                                              39u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0 */ }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE: Mapped Tx-PDUs
  \details
  Element           Description
  TxPduConfigIdx    the index of the 1:1 relation pointing to CanIf_TxPduConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus[42] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduConfigIdx                                                                                                               Referable Keys */
  { /*     0 */             0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx */             },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     1 */             1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     2 */             2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx */             },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     3 */             3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx */  },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     4 */             4u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx */  },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     5 */             5u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx */             },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     6 */             6u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx */             },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     7 */             7u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx */     },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     8 */             8u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx */       },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*     9 */             9u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx */            },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  { /*    10 */            12u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx */                 },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    11 */            13u  /* /ActiveEcuC/CanIf/CanIfInitCfg/XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx */                        },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    12 */            14u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx */                         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    13 */            15u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx */                         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    14 */            16u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx */                         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    15 */            17u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx */                         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    16 */            18u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx */                         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    17 */            19u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx */                         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    18 */            20u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx */                         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    19 */            21u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx */                         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    20 */            22u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx */                           },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    21 */            23u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx */                           },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  { /*    22 */            25u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    23 */            26u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx */                  },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    24 */            27u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    25 */            28u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    26 */            29u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    27 */            30u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    28 */            31u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    29 */            32u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    30 */            33u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    31 */            34u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    32 */            35u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    33 */            36u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    34 */            37u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    35 */            38u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  { /*    36 */            39u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  { /*    37 */            40u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  { /*    38 */            41u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  { /*    39 */            42u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN12_6b4cd41f_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0] */
  { /*    40 */            43u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg1_oTC37X_VCU_CAN12_a82524bb_Tx */                      },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0] */
  { /*    41 */            44u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg2_oTC37X_VCU_CAN12_eb168220_Tx */                      }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0] */
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
CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxConfirmationFctList                      Referable Keys */
  /*     0 */ (CanIf_TxConfirmationFctType)NULL_PTR ,  /* [NULL_PTR] */
  /*     1 */ CanNm_TxConfirmation                  ,  /* [CanNm_TxConfirmation] */
  /*     2 */ CanTp_TxConfirmation                  ,  /* [CanTp_TxConfirmation] */
  /*     3 */ Xcp_CanIfTxConfirmation                  /* [Xcp_CanIfTxConfirmation] */
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
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[45] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanId    UpperLayerTxPduId                                                                      IsTxPduTruncation  CtrlStatesIdx                                                                                                 MailBoxConfigIdx                                                                                          TxConfirmationFctListIdx                                 TxPduLength        Comment                                                                             Referable Keys */
  { /*     0 */ 0x052Cu, CanNmConf_CanNmTxPdu_NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_7321f2c3_Tx            , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       1u  /* CanNm_TxConfirmation */   ,          8u },  /* [PDU: NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx] */
  { /*     1 */ 0x4391u, PduRConf_PduRDestPdu_VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx, TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx] */
  { /*     2 */ 0x4319u, PduRConf_PduRDestPdu_VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx            , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx] */
  { /*     3 */ 0x4318u, PduRConf_PduRDestPdu_VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx]  */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx] */
  { /*     4 */ 0x4317u, PduRConf_PduRDestPdu_VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx]  */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx] */
  { /*     5 */ 0x4223u, PduRConf_PduRDestPdu_VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx            , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx] */
  { /*     6 */ 0x4222u, PduRConf_PduRDestPdu_VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx            , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx] */
  { /*     7 */ 0x40D3u, PduRConf_PduRDestPdu_VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx    , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx] */
  { /*     8 */ 0x40D2u, PduRConf_PduRDestPdu_VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx      , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx]       */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx] */
  { /*     9 */ 0x40D1u, PduRConf_PduRDestPdu_VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx           , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               2u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx */    ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx] */
  { /*    10 */ 0x4095u, PduRConf_PduRDestPdu_VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx        , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx_95h */,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx] */
  { /*    11 */ 0x4094u, PduRConf_PduRDestPdu_VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx        , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292 */,               0u  /* /ActiveEcuC/Can/CanConfigSet/CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac_Tx_94h */,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx] */
  { /*    12 */ 0x0781u, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_4116ec52                                           , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       2u  /* CanTp_TxConfirmation */   ,          8u },  /* [PDU: Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx]                 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx] */
  { /*    13 */ 0x0607u, XcpConf_XcpTxPdu_XCP_Response_oTC37X_VCU_CAN00_34d2da2d_Tx                           , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       3u  /* Xcp_CanIfTxConfirmation */,          8u },  /* [PDU: XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx]                        */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx] */
  { /*    14 */ 0x010Bu, PduRConf_PduRDestPdu_VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx                        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx] */
  { /*    15 */ 0x010Au, PduRConf_PduRDestPdu_VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx                        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx] */
  { /*    16 */ 0x0109u, PduRConf_PduRDestPdu_VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx                        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx] */
  { /*    17 */ 0x0108u, PduRConf_PduRDestPdu_VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx                        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx] */
  { /*    18 */ 0x0107u, PduRConf_PduRDestPdu_VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx                        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx] */
  { /*    19 */ 0x0106u, PduRConf_PduRDestPdu_VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx                        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx] */
  { /*    20 */ 0x0105u, PduRConf_PduRDestPdu_VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx                        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx] */
  { /*    21 */ 0x0104u, PduRConf_PduRDestPdu_VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx                        , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx] */
  { /*    22 */ 0x0101u, PduRConf_PduRDestPdu_VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx                          , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx]                           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx] */
  { /*    23 */ 0x0100u, PduRConf_PduRDestPdu_VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx                          , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               5u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx]                           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx] */
  { /*    24 */ 0x051Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_0aa0ce62_Tx                     , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */                 ,               4u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX0 */                              ,                       1u  /* CanNm_TxConfirmation */   ,          8u },  /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx] */
  { /*    25 */ 0x051Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_9aba5863_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       1u  /* CanNm_TxConfirmation */   ,          8u },  /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx] */
  { /*    26 */ 0x0111u, PduRConf_PduRDestPdu_VcuMeasurementMsg0_oTC37X_VCU_CAN01_d96481d0_Tx                 , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx]                  */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx] */
  { /*    27 */ 0x010Du, PduRConf_PduRDestPdu_VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx] */
  { /*    28 */ 0x010Cu, PduRConf_PduRDestPdu_VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx] */
  { /*    29 */ 0x010Bu, PduRConf_PduRDestPdu_VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx] */
  { /*    30 */ 0x010Au, PduRConf_PduRDestPdu_VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx] */
  { /*    31 */ 0x0109u, PduRConf_PduRDestPdu_VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx] */
  { /*    32 */ 0x0108u, PduRConf_PduRDestPdu_VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx] */
  { /*    33 */ 0x0107u, PduRConf_PduRDestPdu_VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx] */
  { /*    34 */ 0x0106u, PduRConf_PduRDestPdu_VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx] */
  { /*    35 */ 0x0105u, PduRConf_PduRDestPdu_VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx] */
  { /*    36 */ 0x0104u, PduRConf_PduRDestPdu_VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx] */
  { /*    37 */ 0x0103u, PduRConf_PduRDestPdu_VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx] */
  { /*    38 */ 0x0102u, PduRConf_PduRDestPdu_VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx                     , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */                 ,               9u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx] */
  { /*    39 */ 0x051Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_61fe7220_Tx                     , TRUE             ,            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,              11u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx */                     ,                       1u  /* CanNm_TxConfirmation */   ,          8u },  /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx] */
  { /*    40 */ 0x0113u, PduRConf_PduRDestPdu_VcuCan03TxMsg2_oTC37X_VCU_CAN03_0942627e_Tx                     , TRUE             ,            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,              11u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx] */
  { /*    41 */ 0x0112u, PduRConf_PduRDestPdu_VcuCan03TxMsg1_oTC37X_VCU_CAN03_c0767973_Tx                     , TRUE             ,            3u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56 */                 ,              11u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN03_9ebf9872_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx] */
  { /*    42 */ 0x051Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN12_8673ce21_Tx                     , TRUE             ,            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81 */                 ,              13u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_f0a399a5_Tx */                     ,                       1u  /* CanNm_TxConfirmation */   ,          8u },  /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN12_6b4cd41f_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN12_6b4cd41f_Tx] */
  { /*    43 */ 0x0035u, PduRConf_PduRDestPdu_VcuCan12TxMsg1_oTC37X_VCU_CAN12_2c92f390_Tx                     , TRUE             ,            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81 */                 ,              13u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_f0a399a5_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuCan12TxMsg1_oTC37X_VCU_CAN12_a82524bb_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg1_oTC37X_VCU_CAN12_a82524bb_Tx] */
  { /*    44 */ 0x0034u, PduRConf_PduRDestPdu_VcuCan12TxMsg2_oTC37X_VCU_CAN12_e5a6e89d_Tx                     , TRUE             ,            4u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81 */                 ,              13u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN12_f0a399a5_Tx */                     ,                       0u  /* NULL_PTR */               ,          8u }   /* [PDU: VcuCan12TxMsg2_oTC37X_VCU_CAN12_eb168220_Tx]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg2_oTC37X_VCU_CAN12_eb168220_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduQueueIndex
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduQueueIndex
  \brief  Indirection table: Tx-PDU handle-Id to corresponding Tx buffer handle-Id. NOTE: Only BasicCAN Tx-PDUs have a valid indirection into the Tx buffer.
  \details
  Element       Description
  TxQueue   
  TxQueueIdx    the index of the 0:1 relation pointing to CanIf_TxQueue
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxPduQueueIndexType, CANIF_CONST) CanIf_TxPduQueueIndex[45] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxQueue                                 TxQueueIdx                                                                                                                                         Comment                                                                                                       Referable Keys */
  { /*     0 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx */             },  /* [NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx, BasicCAN TxPdu with Tx-buffer]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     1 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx */ },  /* [VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx, BasicCAN TxPdu with Tx-buffer] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     2 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx */             },  /* [VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx, BasicCAN TxPdu with Tx-buffer]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     3 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx */  },  /* [VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx, BasicCAN TxPdu with Tx-buffer]  */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     4 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   4u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx */  },  /* [VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx, BasicCAN TxPdu with Tx-buffer]  */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     5 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   5u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx */             },  /* [VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx, BasicCAN TxPdu with Tx-buffer]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     6 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   6u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx */             },  /* [VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx, BasicCAN TxPdu with Tx-buffer]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     7 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   7u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx */     },  /* [VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx, BasicCAN TxPdu with Tx-buffer]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     8 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   8u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx */       },  /* [VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx, BasicCAN TxPdu with Tx-buffer]       */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*     9 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                   9u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx */            },  /* [VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx, BasicCAN TxPdu with Tx-buffer]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292] */
  { /*    10 */      CANIF_NO_TXQUEUEOFTXPDUQUEUEINDEX, CANIF_NO_TXQUEUEIDXOFTXPDUQUEUEINDEX  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx */         },  /* [VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx, FullCAN TxPdu NO Tx-buffer]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx] */
  { /*    11 */      CANIF_NO_TXQUEUEOFTXPDUQUEUEINDEX, CANIF_NO_TXQUEUEIDXOFTXPDUQUEUEINDEX  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx */         },  /* [VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx, FullCAN TxPdu NO Tx-buffer]            */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx] */
  { /*    12 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  10u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx */                 },  /* [Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx, BasicCAN TxPdu with Tx-buffer]                 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    13 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  11u  /* /ActiveEcuC/CanIf/CanIfInitCfg/XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx */                        },  /* [XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx, BasicCAN TxPdu with Tx-buffer]                        */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    14 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  12u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx */                         },  /* [VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx, BasicCAN TxPdu with Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    15 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  13u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx */                         },  /* [VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx, BasicCAN TxPdu with Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    16 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  14u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx */                         },  /* [VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx, BasicCAN TxPdu with Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    17 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  15u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx */                         },  /* [VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx, BasicCAN TxPdu with Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    18 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  16u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx */                         },  /* [VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx, BasicCAN TxPdu with Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    19 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  17u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx */                         },  /* [VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx, BasicCAN TxPdu with Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    20 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  18u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx */                         },  /* [VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx, BasicCAN TxPdu with Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    21 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  19u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx */                         },  /* [VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx, BasicCAN TxPdu with Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    22 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  20u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx */                           },  /* [VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx, BasicCAN TxPdu with Tx-buffer]                           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    23 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  21u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx */                           },  /* [VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx, BasicCAN TxPdu with Tx-buffer]                           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  { /*    24 */      CANIF_NO_TXQUEUEOFTXPDUQUEUEINDEX, CANIF_NO_TXQUEUEIDXOFTXPDUQUEUEINDEX  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx */                      },  /* [VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx, FullCAN TxPdu NO Tx-buffer]                         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx] */
  { /*    25 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  22u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx */                      },  /* [VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    26 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  23u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx */                  },  /* [VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx, BasicCAN TxPdu with Tx-buffer]                  */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    27 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  24u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx */                      },  /* [VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    28 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  25u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx */                      },  /* [VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    29 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  26u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx */                      },  /* [VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    30 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  27u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx */                      },  /* [VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    31 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  28u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx */                      },  /* [VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    32 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  29u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx */                      },  /* [VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    33 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  30u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx */                      },  /* [VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    34 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  31u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx */                      },  /* [VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    35 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  32u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx */                      },  /* [VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    36 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  33u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx */                      },  /* [VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    37 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  34u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx */                      },  /* [VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    38 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  35u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx */                      },  /* [VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  { /*    39 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  36u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx */                      },  /* [VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  { /*    40 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  37u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx */                      },  /* [VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  { /*    41 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  38u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx */                      },  /* [VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  { /*    42 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  39u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN12_6b4cd41f_Tx */                      },  /* [VCU_Tx_51Ch_NM_oTC37X_VCU_CAN12_6b4cd41f_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN12_6b4cd41f_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81] */
  { /*    43 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  40u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg1_oTC37X_VCU_CAN12_a82524bb_Tx */                      },  /* [VcuCan12TxMsg1_oTC37X_VCU_CAN12_a82524bb_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg1_oTC37X_VCU_CAN12_a82524bb_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81] */
  { /*    44 */ CANIF_TXQUEUE_TXQUEUEOFTXPDUQUEUEINDEX,                                  41u  /* /ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg2_oTC37X_VCU_CAN12_eb168220_Tx */                      }   /* [VcuCan12TxMsg2_oTC37X_VCU_CAN12_eb168220_Tx, BasicCAN TxPdu with Tx-buffer]                      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg2_oTC37X_VCU_CAN12_eb168220_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81] */
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
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN03_bbc2de56] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN12_d5dedf81] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBase
  \brief  Variable declaration - Tx-buffer: PRIO_BY_CANID as byte/bit-queue. Stores at least the QueueCounter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxBufferPrioByCanIdBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBase;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_785eea40] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_d841867f] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_131d55da] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_5ed5f4d1] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_33fe2cc0] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueue
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueue
  \brief  Variable declaration - Tx byte queue.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxQueueUType, CANIF_VAR_NOINIT) CanIf_TxQueue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/NM_VCU_oATOM_CANFD_Matrix_CH_V600_202502_4d937c12_Tx] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx] */
  /*     5 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx] */
  /*     6 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx] */
  /*     7 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx] */
  /*     8 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx] */
  /*     9 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx] */
  /*    10 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx] */
  /*    11 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx] */
  /*    12 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx] */
  /*    13 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx] */
  /*    14 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx] */
  /*    15 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx] */
  /*    16 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx] */
  /*    17 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx] */
  /*    18 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx] */
  /*    19 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx] */
  /*    20 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx] */
  /*    21 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx] */
  /*    22 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx] */
  /*    23 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx] */
  /*    24 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx] */
  /*    25 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx] */
  /*    26 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx] */
  /*    27 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx] */
  /*    28 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx] */
  /*    29 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx] */
  /*    30 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx] */
  /*    31 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx] */
  /*    32 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx] */
  /*    33 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx] */
  /*    34 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx] */
  /*    35 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx] */
  /*    36 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_448b17d4_Tx] */
  /*    37 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx] */
  /*    38 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx] */
  /*    39 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN12_6b4cd41f_Tx] */
  /*    40 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg1_oTC37X_VCU_CAN12_a82524bb_Tx] */
  /*    41 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuCan12TxMsg2_oTC37X_VCU_CAN12_eb168220_Tx] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */




