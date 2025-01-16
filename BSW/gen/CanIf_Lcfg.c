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
 *   Generation Time: 2025-01-16 10:23:51
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
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[9] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CtrlStatesIdx                                                                                 PduIdFirst                            PduIdLast                            MailBoxType                    Referable Keys */
  { /*     0 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_KAMA_FP_EPT_0303_1b7da7f9 */,         0u  /* Unused, TxPduId 0 */ ,        0u  /* Unused, TxPduId 1 */ , CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_KAMA_FP_EPT_0303_275b3e6e_Tx] */
  { /*     1 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_KAMA_FP_EPT_0303_1b7da7f9 */,         0u  /* RxPduId */           ,        0u  /* RxPduId  */          , CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_KAMA_FP_EPT_0303_c7999d11_Rx] */
  { /*     2 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,         0u  /* Unused, TxPduId 14 */,        0u  /* Unused, TxPduId 14 */, CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX0] */
  { /*     3 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,         0u  /* Unused, TxPduId 2 */ ,        0u  /* Unused, TxPduId 13 */, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx] */
  { /*     4 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,         6u  /* RxPduId */           ,        6u  /* RxPduId  */          , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx] */
  { /*     5 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,         5u  /* RxPduId */           ,        5u  /* RxPduId  */          , CANIF_RxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx] */
  { /*     6 */            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,         1u  /* RxPduId */           ,        4u  /* RxPduId  */          , CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_c052b9c5_Rx] */
  { /*     7 */            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */ ,         0u  /* Unused, TxPduId 15 */,        0u  /* Unused, TxPduId 17 */, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx] */
  { /*     8 */            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */ ,         7u  /* RxPduId */           ,        9u  /* RxPduId  */          , CANIF_RxBasicCANMailbox }   /* [/ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_2f90d2fb_Rx] */
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
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[10] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPduCanId                                                                              RxPduMask                                                              UpperPduId                                                 RxIndicationFctListIdx                                RxPduDlc                                    Comment                                                                               Referable Keys */
  { /*     0 */    0x007Fu  /* VCU_Minor_03_oKAMA_FP_EPT_0303_610c6b36_Rx, 2.0- or FD-PDU */          ,   0x47FFu  /* VCU_Minor_03_oKAMA_FP_EPT_0303_610c6b36_Rx */          , PduRConf_PduRSrcPdu_PduRSrcPdu_7341a555                  ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Minor_03_oKAMA_FP_EPT_0303_610c6b36_Rx, CanId: 0x7f]            */  /* [CanIfConf_CanIfRxPduCfg_VCU_Minor_03_oKAMA_FP_EPT_0303_610c6b36_Rx] */
  { /*     1 */    0x0701u  /* Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx, 2.0- or FD-PDU */ ,   0x47FFu  /* Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx */ , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_4116ec52           ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx, CanId: 0x701]  */  /* [CanIfConf_CanIfRxPduCfg_Vcu_Uds_Phy_Request_Tp_oTC37X_VCU_CAN00_fc9370a6_Rx] */
  { /*     2 */    0x0700u  /* Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx, 2.0- or FD-PDU */,   0x07FFu  /* Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx */, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_257d590c               ,                     2u  /* CanTp_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx, CanId: 0x700] */  /* [CanIfConf_CanIfRxPduCfg_Vcu_Uds_Func_Request_Tp_oTC37X_VCU_CAN00_b229a038_Rx] */
  { /*     3 */    0x0606u  /* XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx, 2.0- or FD-PDU */            ,   0x07FFu  /* XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx */            , XcpConf_XcpRxPdu_XCP_Request_oTC37X_VCU_CAN00_3c25b45e_Rx,                     4u  /* Xcp_CanIfRxIndication */ ,       8u  /* DLC-Check is enabled */ },  /* [PDU: XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx, CanId: 0x606]             */  /* [CanIfConf_CanIfRxPduCfg_XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx] */
  { /*     4 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx, 2.0- or FD-PDU */         ,   0x07FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx */         , CanNmConf_CanNmRxPdu_CanNmRxPdu                          ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx, CanId: 0x500]          */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx] */
  { /*     5 */    0x0201u  /* VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx, 2.0- or FD-PDU */              ,   0x47FFu  /* VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_803efadc                  ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx, CanId: 0x201]               */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx] */
  { /*     6 */    0x0200u  /* VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx, 2.0- or FD-PDU */              ,   0x47FFu  /* VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_6711bd67                  ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx, CanId: 0x200]               */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx] */
  { /*     7 */    0x0500u  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx, 2.0- or FD-PDU */         ,   0x47FFu  /* VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx */         , CanNmConf_CanNmRxPdu_CanNmRxPdu_1                        ,                     1u  /* CanNm_RxIndication */    ,       8u  /* DLC-Check is enabled */ },  /* [PDU: VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx, CanId: 0x500]          */  /* [CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN01_21ea515e_Rx] */
  { /*     8 */    0x0203u  /* VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_f5b46736                  ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx, CanId: 0x203]               */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg4_oTC37X_VCU_CAN01_1d60377a_Rx] */
  { /*     9 */    0x0202u  /* VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx, 2.0- or FD-PDU */              ,   0x07FFu  /* VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_3905054b                  ,                     3u  /* PduR_CanIfRxIndication */,       8u  /* DLC-Check is enabled */ }   /* [PDU: VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx, CanId: 0x202]               */  /* [CanIfConf_CanIfRxPduCfg_VcuRxMsg3_oTC37X_VCU_CAN01_29174725_Rx] */
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
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[18] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanId    UpperLayerTxPduId                                                 IsTxPduTruncation  CtrlStatesIdx                                                                                 MailBoxConfigIdx                                                                      TxConfirmationFctListIdx                                 TxPduLength        Comment                                                             Referable Keys */
  { /*     0 */ 0x007Eu, PduRConf_PduRDestPdu_VCU_Minor_02_oKAMA_FP_EPT_0303_7ae377f6_Tx , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_KAMA_FP_EPT_0303_1b7da7f9 */,               0u  /* /ActiveEcuC/Can/CanConfigSet/CN_KAMA_FP_EPT_0303_275b3e6e_Tx */,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_Minor_02_oKAMA_FP_EPT_0303_5fe2f6bf_Tx]       */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Minor_02_oKAMA_FP_EPT_0303_5fe2f6bf_Tx] */
  { /*     1 */ 0x0079u, PduRConf_PduRDestPdu_VCU_Minor_01_oKAMA_FP_EPT_0303_45280963_Tx , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_KAMA_FP_EPT_0303_1b7da7f9 */,               0u  /* /ActiveEcuC/Can/CanConfigSet/CN_KAMA_FP_EPT_0303_275b3e6e_Tx */,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VCU_Minor_01_oKAMA_FP_EPT_0303_1cd15024_Tx]       */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Minor_01_oKAMA_FP_EPT_0303_1cd15024_Tx] */
  { /*     2 */ 0x0781u, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_4116ec52                      , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       2u  /* CanTp_TxConfirmation */   ,          8u },  /* [PDU: Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Vcu_Uds_Response_Tp_oTC37X_VCU_CAN00_2ff8982b_Tx] */
  { /*     3 */ 0x0607u, XcpConf_XcpTxPdu_XCP_Response_oTC37X_VCU_CAN00_34d2da2d_Tx      , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       3u  /* Xcp_CanIfTxConfirmation */,          8u },  /* [PDU: XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx]        */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx] */
  { /*     4 */ 0x010Bu, PduRConf_PduRDestPdu_VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx   , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx] */
  { /*     5 */ 0x010Au, PduRConf_PduRDestPdu_VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx   , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx] */
  { /*     6 */ 0x0109u, PduRConf_PduRDestPdu_VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx   , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx] */
  { /*     7 */ 0x0108u, PduRConf_PduRDestPdu_VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx   , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx] */
  { /*     8 */ 0x0107u, PduRConf_PduRDestPdu_VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx   , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx] */
  { /*     9 */ 0x0106u, PduRConf_PduRDestPdu_VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx   , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx] */
  { /*    10 */ 0x0105u, PduRConf_PduRDestPdu_VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx   , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx] */
  { /*    11 */ 0x0104u, PduRConf_PduRDestPdu_VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx   , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx] */
  { /*    12 */ 0x0101u, PduRConf_PduRDestPdu_VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx     , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx] */
  { /*    13 */ 0x0100u, PduRConf_PduRDestPdu_VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx     , TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               3u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN00_07b6c9c8_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx]           */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx] */
  { /*    14 */ 0x051Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_0aa0ce62_Tx, TRUE             ,            1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec */ ,               2u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX0 */          ,                       1u  /* CanNm_TxConfirmation */   ,          8u },  /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx]      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx] */
  { /*    15 */ 0x051Cu, CanNmConf_CanNmTxPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_9aba5863_Tx, TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */ ,               7u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */ ,                       1u  /* CanNm_TxConfirmation */   ,          8u },  /* [PDU: VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx]      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_587183bc_Tx] */
  { /*    16 */ 0x0103u, PduRConf_PduRDestPdu_VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx  , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */ ,               7u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */ ,                       0u  /* NULL_PTR */               ,          8u },  /* [PDU: VcuAdcTxMsg2_oTC37X_VCU_CAN01_fa8a8e09_Tx]        */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxMsg2_oTC37X_VCU_CAN01_fa8a8e09_Tx] */
  { /*    17 */ 0x0102u, PduRConf_PduRDestPdu_VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx  , TRUE             ,            2u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a */ ,               7u  /* /ActiveEcuC/Can/CanConfigSet/CN_TC37X_VCU_CAN01_70b1f95e_Tx */ ,                       0u  /* NULL_PTR */               ,          8u }   /* [PDU: VcuAdcTxMsg1_oTC37X_VCU_CAN01_29adaf4d_Tx]        */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/VcuAdcTxMsg1_oTC37X_VCU_CAN01_29adaf4d_Tx] */
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
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_KAMA_FP_EPT_0303_1b7da7f9] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN00_22cb8fec] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_TC37X_VCU_CAN01_55ccbf7a] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */




