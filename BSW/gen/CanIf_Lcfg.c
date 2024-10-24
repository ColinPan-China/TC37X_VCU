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
 *   Generation Time: 2024-10-24 15:37:49
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
  Element          Description
  CtrlStatesIdx    the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst       "First" PDU mapped to mailbox.
  PduIdLast        "Last" PDU mapped to mailbox.
  MailBoxType      Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CtrlStatesIdx                                                                                PduIdFirst                           PduIdLast                           MailBoxType                    Referable Keys */
  { /*     0 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,         0u  /* Unused, TxPduId 5 */,        0u  /* Unused, TxPduId 5 */, CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX0] */
  { /*     1 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,         0u  /* Unused, TxPduId 0 */,        0u  /* Unused, TxPduId 4 */, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx] */
  { /*     2 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,         7u  /* RxPduId */          ,        7u  /* RxPduId  */         , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx] */
  { /*     3 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,         6u  /* RxPduId */          ,        6u  /* RxPduId  */         , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx] */
  { /*     4 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,         0u  /* RxPduId */          ,        5u  /* RxPduId  */         , CANIF_RxBasicCANMailbox }   /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_c052b9c5_Rx] */
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
  MsgType                   Type of CAN message: *CAN (both 2.0 or FD), *FD_CAN (only FD), *NO_FD_CAN (only 2.0).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPduCanId                                                                               RxPduMask                                                                 UpperPduId                                                 RxIndicationFctListIdx                                RxPduDlc                              MsgType                         Comment                                                                                  Referable Keys */
  { /*     0 */    0x0701u  /* Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx, only FD-PDU */     ,   0x47FFu  /* Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx */    , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c503a1b2               ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */, CANIF_MSG_TYPE_FD_CAN    },  /* [PDU: Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx, CanId: 0x701]     */  /* [CanIfConf_CanIfRxPduCfg_Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx] */
  { /*     1 */    0x0701u  /* Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_20_ec17fac6_Rx, only 2.0-PDU */ ,   0x07FFu  /* Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_20_ec17fac6_Rx */ , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0c44da42               ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_20_ec17fac6_Rx, CanId: 0x701]  */  /* [CanIfConf_CanIfRxPduCfg_Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_20_ec17fac6_Rx] */
  { /*     2 */    0x0700u  /* Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx, only FD-PDU */    ,   0x07FFu  /* Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx */   , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_49d53416               ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */, CANIF_MSG_TYPE_FD_CAN    },  /* [PDU: Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx, CanId: 0x700]    */  /* [CanIfConf_CanIfRxPduCfg_Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx] */
  { /*     3 */    0x0700u  /* Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_20_2d03d5bc_Rx, only 2.0-PDU */,   0x07FFu  /* Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_20_2d03d5bc_Rx */, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_42e8777b               ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */, CANIF_MSG_TYPE_NO_FD_CAN },  /* [PDU: Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_20_2d03d5bc_Rx, CanId: 0x700] */  /* [CanIfConf_CanIfRxPduCfg_Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_20_2d03d5bc_Rx] */
  { /*     4 */    0x0606u  /* XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx, 2.0- or FD-PDU */             ,   0x07FFu  /* XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx */               , XcpConf_XcpRxPdu_XCP_Request_oTC37X_VCU_CAN00_3c25b45e_Rx,                     4u  /* Xcp_CanIfRxIndication */ ,       8u  /* DLC-Check is enabled */, CANIF_MSG_TYPE_CAN       },  /* [PDU: XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx, CanId: 0x606]                */  /* [CanIfConf_CanIfRxPduCfg_XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx] */
  { /*     5 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx, 2.0- or FD-PDU */          ,   0x07FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx */            , CanNmConf_CanNmRxPdu_CanNmRxPdu                          ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */, CANIF_MSG_TYPE_CAN       },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx, CanId: 0x500]             */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx] */
  { /*     6 */    0x0201u  /* VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx, 2.0- or FD-PDU */               ,   0x47FFu  /* VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx */                 , PduRConf_PduRSrcPdu_PduRSrcPdu_803efadc                  ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */, CANIF_MSG_TYPE_CAN       },  /* [PDU: VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx, CanId: 0x201]                  */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx] */
  { /*     7 */    0x0200u  /* VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx, 2.0- or FD-PDU */               ,   0x47FFu  /* VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx */                 , PduRConf_PduRSrcPdu_PduRSrcPdu_6711bd67                  ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */, CANIF_MSG_TYPE_CAN       }   /* [PDU: VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx, CanId: 0x200]                  */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx] */
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
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanId    UpperLayerTxPduId                                                 IsTxPduTruncation  CtrlStatesIdx                                                                                MailBoxConfigIdx                                                                     TxConfirmationFctListIdx                                 TxPduLength        Comment                                                                Referable Keys */
  { /*     0 */ 0x4781u, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c503a1b2                  , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */,                       2u  /* CanTp_TxConfirmation */   ,          8u },  /* [PDU: Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx] */
  { /*     1 */ 0x0781u, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0c44da42                  , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */,                       2u  /* CanTp_TxConfirmation */   ,          8u },  /* [PDU: Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_20_60344e39_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_20_60344e39_Tx] */
  { /*     2 */ 0x4607u, XcpConf_XcpTxPdu_XCP_Response_oTC37X_VCU_CAN00_34d2da2d_Tx      , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */,                       3u  /* Xcp_CanIfTxConfirmation */,          8u },  /* [PDU: XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx] */
  { /*     3 */ 0x4101u, PduRConf_PduRDestPdu_VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx     , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx] */
  { /*     4 */ 0x4100u, PduRConf_PduRDestPdu_VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx     , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx]              */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx] */
  { /*     5 */ 0x451Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_0aa0ce62_Tx, TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */,               0u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX0 */         ,                       1u  /* CanNm_TxConfirmation */   ,          8u }   /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx] */
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
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */




