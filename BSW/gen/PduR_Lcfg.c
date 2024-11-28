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
 *            Module: PduR
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Lcfg.c
 *   Generation Time: 2024-11-28 15:38:52
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"
#include "PduR_Fm.h"
#include "PduR_IFQ.h"
#include "PduR_Sm.h"
#include "PduR_RmIf.h"
#include "PduR_RmTp.h"
#include "PduR_RmTp_TxInst.h"
#include "SchM_PduR.h"
#if(PDUR_DEV_ERROR_REPORT == STD_ON)
# include "Det.h"
#endif
# include "PduR_Lcfg.h"



/* Include headers with callbacks */
#include "PduR_CanIf.h"
#include "PduR_Com.h"
#include "PduR_Dcm.h"
#include "PduR_CanTp.h"
#include "PduR_LinIf.h"


/**********************************************************************************************************************
 * LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/* Exclusive Area Wrapper functions */
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void);
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void);
  
/**********************************************************************************************************************
 * LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA
 *********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_DestApplicationManagerRom
**********************************************************************************************************************/
/** 
  \var    PduR_DestApplicationManagerRom
  \brief  Destination Application Manager
  \details
  Element               Description
  RmGDestRomStartIdx    the start index of the 0:n relation pointing to PduR_RmGDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_DestApplicationManagerRomType, PDUR_CONST) PduR_DestApplicationManagerRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomStartIdx        Comment                         Referable Keys */
  { /*     0 */                 0u }   /* [SingleApplication] */  /* [PduRSinglePartitionDummy] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_ExclusiveAreaRom
**********************************************************************************************************************/
/** 
  \var    PduR_ExclusiveAreaRom
  \brief  PduR Exclusive Area Locks
  \details
  Element    Description
  Lock       Lock function
  Unlock     Unlock function
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_ExclusiveAreaRomType, PDUR_CONST) PduR_ExclusiveAreaRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Lock                                        Unlock                                           Referable Keys */
  { /*     0 */ PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0, PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0 }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRLock_PduRExclusiveArea] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_GeneralPropertiesRom
**********************************************************************************************************************/
/** 
  \var    PduR_GeneralPropertiesRom
  \brief  General Properties Switches of the PduR.
  \details
  Element         Description
  hasIfRouting
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_GeneralPropertiesRomType, PDUR_CONST) PduR_GeneralPropertiesRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    hasIfRouting        Referable Keys */
  { /*     0 */         TRUE }   /* [/ActiveEcuC/PduR] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_LockRom
**********************************************************************************************************************/
/** 
  \var    PduR_LockRom
  \brief  PduR Lock Manager Table
  \details
  Element                Description
  ExclusiveAreaRomIdx    the index of the 0:1 relation pointing to PduR_ExclusiveAreaRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_LockRomType, PDUR_CONST) PduR_LockRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ExclusiveAreaRomIdx        Referable Keys */
  { /*     0 */                  0u }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRLock_PduRExclusiveArea] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_MmRom
**********************************************************************************************************************/
/** 
  \var    PduR_MmRom
  \brief  Module manager: Contains all function pointers of the bordering modules.
  \details
  Element                       Description
  MaskedBits                    contains bitcoded the boolean data of PduR_LoIfOfMmRom, PduR_LoTpOfMmRom, PduR_TpCancelTransmitSupportedOfMmRom, PduR_UpIfOfMmRom, PduR_UpTpOfMmRom
  LoTpCancelTransmitFctPtr      Lower layer cancel transmit function pointers.
  UpTpCopyRxDataFctPtr          Transport protocol CopyRxData function pointers
  UpTpCopyTxDataFctPtr          Transport protocol CopyTxData function pointers
  UpIfRxIndicationFctPtr        Upper layer communication interface Rx indication function pointers.
  UpTpStartOfReceptionFctPtr    Transport protocol StartOfReception function pointers
  UpTpTpRxIndicationFctPtr      Transport protocol TpRxIndication function pointers
  UpTpTpTxConfirmationFctPtr    Transport protocol TpTxConfimation function pointers
  LoIfTransmitFctPtr            Lower layer If transmit function pointers
  LoTpTransmitFctPtr            Lower layer Tp transmit function pointers
  UpIfTriggerTransmitFctPtr     Upper layer trigger transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_MmRomType, PDUR_CONST) PduR_MmRom[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaskedBits  LoTpCancelTransmitFctPtr  UpTpCopyRxDataFctPtr  UpTpCopyTxDataFctPtr  UpIfRxIndicationFctPtr  UpTpStartOfReceptionFctPtr  UpTpTpRxIndicationFctPtr  UpTpTpTxConfirmationFctPtr  LoIfTransmitFctPtr  LoTpTransmitFctPtr  UpIfTriggerTransmitFctPtr        Referable Keys */
  { /*     0 */      0x10u, NULL_PTR                , NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , CanIf_Transmit    , NULL_PTR          , NULL_PTR                  },  /* [/ActiveEcuC/PduR/CanIf] */
  { /*     1 */      0x0Cu, CanTp_CancelTransmit    , NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , CanTp_Transmit    , NULL_PTR                  },  /* [/ActiveEcuC/PduR/CanTp] */
  { /*     2 */      0x02u, NULL_PTR                , NULL_PTR            , NULL_PTR            , Com_RxIndication      , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , NULL_PTR          , Com_TriggerTransmit       },  /* [/ActiveEcuC/PduR/Com] */
  { /*     3 */      0x01u, NULL_PTR                , Dcm_CopyRxData      , Dcm_CopyTxData      , NULL_PTR              , Dcm_StartOfReception      , Dcm_TpRxIndication      , Dcm_TpTxConfirmation      , NULL_PTR          , NULL_PTR          , NULL_PTR                  },  /* [/ActiveEcuC/PduR/Dcm] */
  { /*     4 */      0x10u, NULL_PTR                , NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , LinIf_Transmit    , NULL_PTR          , NULL_PTR                  }   /* [/ActiveEcuC/PduR/LinIf] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    PduR_PartitionIdentifiers
  \brief  the partition context in Config
  \details
  Element         Description
  PartitionSNV
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_PartitionIdentifiersType, PDUR_CONST) PduR_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV       */
  { /*     0 */ CommonSharedMemory }
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmDestRom
  \brief  PduR RoutingPathManager destPdu Table
  \details
  Element                      Description
  PduLengthHandlingStrategy    The strategy how larger than configured If Pdus are handled.
  RmGDestRomIdx                the index of the 1:1 relation pointing to PduR_RmGDestRom
  RmSrcRomIdx                  the index of the 1:1 relation pointing to PduR_RmSrcRom
  RoutingType                  Type of the Routing (API Forwarding, Gateway).
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[15] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduLengthHandlingStrategy                         RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                                  Referable Keys */
  { /*     0 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           14u,         14u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx]                 */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx] */
  { /*     1 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            4u,          2u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx_3905054b_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/PduRSrcPdu_3905054b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx_3905054b_Rx] */
  { /*     2 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           12u,          6u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx_4bac36fb_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/PduRSrcPdu_4bac36fb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx_4bac36fb_Rx] */
  { /*     3 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            2u,          0u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx_6711bd67_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/PduRSrcPdu_6711bd67, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx_6711bd67_Rx] */
  { /*     4 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            7u,         11u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx]                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx] */
  { /*     5 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            8u,          4u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin0_RxMsg1_oLIN00_def4d57f_Rx_763211c2_Rx]                */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg1_oLIN00_def4d57f_Rx/PduRSrcPdu_763211c2, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg1_oLIN00_def4d57f_Rx/Vcu_Lin0_RxMsg1_oLIN00_def4d57f_Rx_763211c2_Rx] */
  { /*     6 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            3u,          1u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx_803efadc_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/PduRSrcPdu_803efadc, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx_803efadc_Rx] */
  { /*     7 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            6u,         10u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx]                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx] */
  { /*     8 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           13u,          7u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx_925fbf89_Rx]  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/PduRSrcPdu_925fbf89, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx_925fbf89_Rx] */
  { /*     9 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           11u,         13u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin0_TxMsg2_oLIN00_adade20c_Tx]                            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx/PduRSrcPdu_a77b2a3a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx/Vcu_Lin0_TxMsg2_oLIN00_adade20c_Tx] */
  { /*    10 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           10u,         12u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin0_TxMsg1_oLIN00_db48db31_Tx]                            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx/PduRSrcPdu_af3681f0, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx/Vcu_Lin0_TxMsg1_oLIN00_db48db31_Tx] */
  { /*    11 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            9u,          5u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin0_RxMsg2_oLIN00_a811ec42_Rx_c59add12_Rx]                */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg2_oLIN00_a811ec42_Rx/PduRSrcPdu_c59add12, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg2_oLIN00_a811ec42_Rx/Vcu_Lin0_RxMsg2_oLIN00_a811ec42_Rx_c59add12_Rx] */
  { /*    12 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            1u,          9u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx]                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx/PduRSrcPdu_df42a212, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx/VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx] */
  { /*    13 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            5u,          3u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx_f5b46736_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/PduRSrcPdu_f5b46736, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx_f5b46736_Rx] */
  { /*    14 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            0u,          8u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM }   /* [PduRDestPdu: VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx]                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx/PduRSrcPdu_f8c9b934, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx/VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmGDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmGDestRom
  \brief  PduR RoutingPathManager global destPdu Table
  \details
  Element         Description
  DestHnd         handle to be used as parameter for the StartOfReception, CopyRxData, Transmit or RxIndication function call.
  Direction       Direction of this Pdu: Rx or Tx
  LockRomIdx      the index of the 1:1 relation pointing to PduR_LockRom
  MaxPduLength    Configured PduLength + metadata length.
  MmRomIdx        the index of the 1:1 relation pointing to PduR_MmRom
  RmDestRomIdx    the index of the 1:1 relation pointing to PduR_RmDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[15] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestHnd                                                                              Direction                      LockRomIdx  MaxPduLength  MmRomIdx  RmDestRomIdx        Comment                                                                             Referable Keys */
  { /*     0 */                   CanIfConf_CanIfTxPduCfg_VcuAdcTxMsg1_oTC37X_VCU_CAN01_29adaf4d_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          14u },  /* [Global PduRDestPdu: VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*     1 */                   CanIfConf_CanIfTxPduCfg_VcuAdcTxMsg2_oTC37X_VCU_CAN01_fa8a8e09_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          12u },  /* [Global PduRDestPdu: VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*     2 */                              ComConf_ComIPdu_VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           3u },  /* [Global PduRDestPdu: VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     3 */                              ComConf_ComIPdu_VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           6u },  /* [Global PduRDestPdu: VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     4 */                              ComConf_ComIPdu_VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           1u },  /* [Global PduRDestPdu: VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     5 */                              ComConf_ComIPdu_VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          13u },  /* [Global PduRDestPdu: VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     6 */                      CanIfConf_CanIfTxPduCfg_VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           7u },  /* [Global PduRDestPdu: VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*     7 */                      CanIfConf_CanIfTxPduCfg_VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           4u },  /* [Global PduRDestPdu: VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*     8 */                                  ComConf_ComIPdu_Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           5u },  /* [Global PduRDestPdu: Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx]                */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     9 */                                  ComConf_ComIPdu_Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          11u },  /* [Global PduRDestPdu: Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx]                */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    10 */                                            LinIfConf_LinIfTxPdu_LinIfTxPdu_67e62ef9, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          10u },  /* [Global PduRDestPdu: Vcu_Lin0_TxMsg1_oLIN00_db48db31_Tx]                */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_TxMsg1_oLIN00_db48db31_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    11 */                                            LinIfConf_LinIfTxPdu_LinIfTxPdu_21a51ec5, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,           9u },  /* [Global PduRDestPdu: Vcu_Lin0_TxMsg2_oLIN00_adade20c_Tx]                */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_TxMsg2_oLIN00_adade20c_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    12 */ DcmConf_DcmDslProtocolRx_Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx_f99a7a58, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           7u,       3u,           2u },  /* [Global PduRDestPdu: Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*    13 */  DcmConf_DcmDslProtocolRx_Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx_7ba0ca16, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       3u,           8u },  /* [Global PduRDestPdu: Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*    14 */                                          CanTpConf_CanTpTxNSdu_CanTpTxNSdu_fe7a15ff, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       1u,           0u }   /* [Global PduRDestPdu: Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx]     */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx, /ActiveEcuC/PduR/CanTp, PduRSinglePartitionDummy] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmSrcRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmSrcRom
  \brief  PduR RoutiongManager SrcPdu Table
  \details
  Element                     Description
  TriggerTransmitSupported
  LockRomIdx                  the index of the 1:1 relation pointing to PduR_LockRom
  MmRomIdx                    the index of the 1:1 relation pointing to PduR_MmRom
  RmDestRomStartIdx           the start index of the 1:n relation pointing to PduR_RmDestRom
  SrcHnd                      handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[15] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TriggerTransmitSupported  LockRomIdx  MmRomIdx  RmDestRomStartIdx  SrcHnd                                                                                 Comment                                       Referable Keys */
  { /*     0 */                    FALSE,         0u,       0u,                3u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_6711bd67] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/PduRSrcPdu_6711bd67] */
  { /*     1 */                    FALSE,         0u,       0u,                6u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_803efadc] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/PduRSrcPdu_803efadc] */
  { /*     2 */                    FALSE,         0u,       0u,                1u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3905054b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/PduRSrcPdu_3905054b] */
  { /*     3 */                    FALSE,         0u,       0u,               13u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f5b46736] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/PduRSrcPdu_f5b46736] */
  { /*     4 */                    FALSE,         0u,       4u,                5u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_763211c2] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg1_oLIN00_def4d57f_Rx/PduRSrcPdu_763211c2] */
  { /*     5 */                    FALSE,         0u,       4u,               11u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c59add12] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg2_oLIN00_a811ec42_Rx/PduRSrcPdu_c59add12] */
  { /*     6 */                    FALSE,         0u,       1u,                2u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_4bac36fb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/PduRSrcPdu_4bac36fb] */
  { /*     7 */                    FALSE,         0u,       1u,                8u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_925fbf89] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/PduRSrcPdu_925fbf89] */
  { /*     8 */                    FALSE,         0u,       2u,               14u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f8c9b934] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx/PduRSrcPdu_f8c9b934] */
  { /*     9 */                    FALSE,         0u,       2u,               12u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_df42a212] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx/PduRSrcPdu_df42a212] */
  { /*    10 */                    FALSE,         0u,       2u,                7u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_91d52164] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164] */
  { /*    11 */                    FALSE,         0u,       2u,                4u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_69924b1b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b] */
  { /*    12 */                     TRUE,         0u,       2u,               10u,                              ComConf_ComIPdu_Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx },  /* [PduRSrcPdu: PduRSrcPdu_af3681f0] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx/PduRSrcPdu_af3681f0] */
  { /*    13 */                     TRUE,         0u,       2u,                9u,                              ComConf_ComIPdu_Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx },  /* [PduRSrcPdu: PduRSrcPdu_a77b2a3a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx/PduRSrcPdu_a77b2a3a] */
  { /*    14 */                    FALSE,         0u,       3u,                0u, DcmConf_DcmDslProtocolTx_Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx_666acd3e }   /* [PduRSrcPdu: PduRSrcPdu_1a8748e9] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmTransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_RmTransmitFctPtr
  \brief  Internal routing manager Transmit functions.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmTransmitFctPtrType, PDUR_CONST) PduR_RmTransmitFctPtr[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RmTransmitFctPtr                  Referable Keys */
  /*     0 */ PduR_RmIf_RoutePdu           ,  /* [PduR_RmIf_RoutePdu] */
  /*     1 */ PduR_RmTp_Transmit_MultiDest    /* [PduR_RmTp_Transmit_MultiDest] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Tx2Lo
**********************************************************************************************************************/
/** 
  \var    PduR_Tx2Lo
  \brief  Contains all information to route a Pdu from a upper layer to a lower layer module, or to cancel a transmission
  \details
  Element                Description
  RmSrcRomIdx            the index of the 0:1 relation pointing to PduR_RmSrcRom
  RmTransmitFctPtrIdx    the index of the 1:1 relation pointing to PduR_RmTransmitFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmSrcRomIdx  RmTransmitFctPtrIdx        Referable Keys */
  { /*     0 */          8u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx/PduRSrcPdu_f8c9b934] */
  { /*     1 */          9u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx/PduRSrcPdu_df42a212] */
  { /*     2 */         10u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164] */
  { /*     3 */         11u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b] */
  { /*     4 */         12u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx/PduRSrcPdu_af3681f0] */
  { /*     5 */         13u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx/PduRSrcPdu_a77b2a3a] */
  { /*     6 */         14u,                  1u }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxIf2Up
**********************************************************************************************************************/
/** 
  \var    PduR_TxIf2Up
  \brief  This table contains all routing information to perform the Tx handling of an interface routing. Used in the &lt;LLIf&gt;_TriggerTransmit and &lt;LLIf&gt;_TxConfirmation
  \details
  Element          Description
  RmGDestRomIdx    the index of the 1:1 relation pointing to PduR_RmGDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomIdx        Referable Keys */
  { /*     0 */            0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx] */
  { /*     1 */            1u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx] */
  { /*     2 */            6u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx] */
  { /*     3 */            7u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx] */
  { /*     4 */           10u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_TxMsg1_oLIN00_db48db31_Tx] */
  { /*     5 */           11u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_TxMsg2_oLIN00_adade20c_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_InitializedRam
**********************************************************************************************************************/
/** 
  \var    PduR_InitializedRam
  \brief  Initialized status of each partition the PduR runs on.
*/ 
#define PDUR_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(PduR_InitializedRamUType, PDUR_VAR_NO_INIT) PduR_InitializedRam;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [PduRSinglePartitionDummy] */

#define PDUR_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


#define PDUR_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#if(PDUR_USE_INIT_POINTER == STD_ON)
P2CONST(PduR_PBConfigType, PDUR_VAR_CLEARED, PDUR_PBCFG) PduR_ConfigDataPtr = (const PduR_PBConfigType *) NULL_PTR;
#endif

#define PDUR_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#define PDUR_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

VAR(boolean, PDUR_VAR_NO_INIT) PduR_PreInitialized;

#define PDUR_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */
  
/**********************************************************************************************************************
 * LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "PduR_MemMap.h"

/* Exclusive Area Wrapper functions */

/**********************************************************************************************************************
 * PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  enter the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/**********************************************************************************************************************
 * PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  exit the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/* Upper Layer Interface APIs */

/**********************************************************************************************************************
 * PduR_ComTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_DcmTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/* Communication Interface APIs */

/**********************************************************************************************************************
 * PduR_CanIfRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info);  /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_PDU_ID_INVALID);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_LinIfRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_LinIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info);  /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_PDU_ID_INVALID);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_LinIfTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general communication interface TxConfirmation function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_LinIfTxConfirmation(PduIdType TxPduId) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXCONFIRMATIONUSEDOFTXIF2UP == STD_ON)
  PduR_LoIfTxConfirmation(TxPduId);
#endif
  PDUR_DUMMY_STATEMENT(TxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}




/**********************************************************************************************************************
 * PduR_LinIfTriggerTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general TriggerTransmit function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_LinIfTriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  return PduR_LoIfTriggerTransmit(TxPduId, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}


/* Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_CanTpStartOfReception
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call transport protocoll StartOfReception function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */

#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpStartOfReception(id, info, TpSduLength, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_SOR, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);    /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyRxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyRxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyRxData(id, info, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYRX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);  			/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyTxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyTxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if(PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyTxData(id, info, retry, availableDataPtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYTX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     				/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);  					/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);  				/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr);       /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp RxIndication function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpRxIndication(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpRxIndication(id, result);
#else
  PduR_Det_ReportError(PDUR_FCT_TPRXIND, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanTpTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp TxConfirmation function 
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpTxConfirmation(id, result);
#else
  PduR_Det_ReportError(PDUR_FCT_TPTXCFM, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/* CancelReceive global without UseTag API */

/* ChangeParameter global without UseTag  API */

/* Communication Interface / Transport Protocol APIs */

/* Communication Interface / Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_DcmCancelTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CancelTransmit function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmCancelTransmit(PduIdType id)
{
  return PduR_CancelTransmit(id); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "PduR_MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR
    \DESCRIPTION    The API is called with an Id and a pointer.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \N The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       The pointer is provided by the lower layer and is assumed to be valid. It is passed as is to the corresponding function. 

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY
    \DESCRIPTION    The API is called with an Id.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \R The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       
  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY
    \DESCRIPTION    The API call is forwarded to an internal function.
    \COUNTERMEASURE \N The parameter are checked in the called function.

 SBSW_JUSTIFICATION_END */
 
 /* COV_JUSTIFICATION_BEGIN
 
  \ID COV_PDUR_WRAPPER_FUNC
    \ACCEPT X
    \REASON Each neighbouring module call the same internal function. The call is covered by an other module. 
    
  \ID COV_PDUR_RX_OR_TX_ONLY_CONFIG
    \ACCEPT TX
    \REASON The API is mandatory if this Bsw module exists. In case of Rx or Tx only configs the API call is not forwarded to the internal function. 
 
 COV_JUSTIFICATION_END */
 

/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.c
 *********************************************************************************************************************/

