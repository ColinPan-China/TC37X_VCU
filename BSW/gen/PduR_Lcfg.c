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
 *   Generation Time: 2025-01-16 10:23:51
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
CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[36] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduLengthHandlingStrategy                         RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                                  Referable Keys */
  { /*     0 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            0u,         15u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EDCU_EXV2_oLIN00_18b050dc_Tx]                                  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EDCU_EXV2_oLIN00_1f8750a5_Tx/PduRSrcPdu_0361509d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EDCU_EXV2_oLIN00_1f8750a5_Tx/EDCU_EXV2_oLIN00_18b050dc_Tx] */
  { /*     1 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           26u,         28u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx/PduRSrcPdu_15ef524a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx/VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx] */
  { /*     2 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            9u,          7u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: SVA_VCU_STD_oLIN00_4f0795ef_Rx_166cd16c_Rx]                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SVA_VCU_STD_oLIN00_4f0795ef_Rx/PduRSrcPdu_166cd16c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SVA_VCU_STD_oLIN00_4f0795ef_Rx/SVA_VCU_STD_oLIN00_4f0795ef_Rx_166cd16c_Rx] */
  { /*     3 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           35u,         35u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx]                 */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx] */
  { /*     4 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           25u,         27u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx/PduRSrcPdu_23c89b9b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx/VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx] */
  { /*     5 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           28u,         30u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx/PduRSrcPdu_275934e8, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx/VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx] */
  { /*     6 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           30u,         32u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx/PduRSrcPdu_27dcf988, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx/VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx] */
  { /*     7 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           21u,         11u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx_3905054b_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/PduRSrcPdu_3905054b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx_3905054b_Rx] */
  { /*     8 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           24u,         26u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx/PduRSrcPdu_3ef2d11c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx/VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx] */
  { /*     9 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            7u,          6u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PMP3_Sts_oLIN00_4e808b3d_Rx_43cea622_Rx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP3_Sts_oLIN00_4e808b3d_Rx/PduRSrcPdu_43cea622, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP3_Sts_oLIN00_4e808b3d_Rx/PMP3_Sts_oLIN00_4e808b3d_Rx_43cea622_Rx] */
  { /*    10 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           33u,         13u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx_4bac36fb_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/PduRSrcPdu_4bac36fb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx_4bac36fb_Rx] */
  { /*    11 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            8u,         16u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PMP_Cmd_oLIN00_6d889c97_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP_Cmd_oLIN00_3912b28b_Tx/PduRSrcPdu_4bd8719a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP_Cmd_oLIN00_3912b28b_Tx/PMP_Cmd_oLIN00_6d889c97_Tx] */
  { /*    12 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           19u,          9u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx_6711bd67_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/PduRSrcPdu_6711bd67, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx_6711bd67_Rx] */
  { /*    13 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           32u,         34u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx]                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx] */
  { /*    14 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           10u,         17u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: TCU_HVCH_Cmd_oLIN00_ddc31229_Tx]                               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/TCU_HVCH_Cmd_oLIN00_385d5651_Tx/PduRSrcPdu_6a17111c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/TCU_HVCH_Cmd_oLIN00_385d5651_Tx/TCU_HVCH_Cmd_oLIN00_ddc31229_Tx] */
  { /*    15 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            2u,          1u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EXV_1_VCU_oLIN00_366267d6_Rx_718a1cfb_Rx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_1_VCU_oLIN00_366267d6_Rx/PduRSrcPdu_718a1cfb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_1_VCU_oLIN00_366267d6_Rx/EXV_1_VCU_oLIN00_366267d6_Rx_718a1cfb_Rx] */
  { /*    16 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           15u,          8u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_Minor_03_oKAMA_FP_EPT_0303_d9755fba_Rx_7341a555_Rx]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_03_oKAMA_FP_EPT_0303_d9755fba_Rx/PduRSrcPdu_7341a555, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_03_oKAMA_FP_EPT_0303_d9755fba_Rx/VCU_Minor_03_oKAMA_FP_EPT_0303_d9755fba_Rx_7341a555_Rx] */
  { /*    17 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           13u,         20u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_Minor_01_oKAMA_FP_EPT_0303_45280963_Tx]                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_01_oKAMA_FP_EPT_0303_39c0a2ee_Tx/PduRSrcPdu_73c8c9ca, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_01_oKAMA_FP_EPT_0303_39c0a2ee_Tx/VCU_Minor_01_oKAMA_FP_EPT_0303_45280963_Tx] */
  { /*    18 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           20u,         10u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx_803efadc_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/PduRSrcPdu_803efadc, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx_803efadc_Rx] */
  { /*    19 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           27u,         29u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx/PduRSrcPdu_886ac60a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx/VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx] */
  { /*    20 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           29u,         31u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx/PduRSrcPdu_8c9b3cfc, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx/VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx] */
  { /*    21 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            5u,          4u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: HVCH_Rsp02_oLIN00_a3ea669e_Rx_90a9658c_Rx]                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp02_oLIN00_a3ea669e_Rx/PduRSrcPdu_90a9658c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp02_oLIN00_a3ea669e_Rx/HVCH_Rsp02_oLIN00_a3ea669e_Rx_90a9658c_Rx] */
  { /*    22 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           11u,         18u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_EXV_1_oLIN00_58a890ac_Tx]                                  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_1_oLIN00_50eec975_Tx/PduRSrcPdu_91ca29f5, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_1_oLIN00_50eec975_Tx/VCU_EXV_1_oLIN00_58a890ac_Tx] */
  { /*    23 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           31u,         33u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx]                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx] */
  { /*    24 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           34u,         14u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx_925fbf89_Rx]  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/PduRSrcPdu_925fbf89, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx_925fbf89_Rx] */
  { /*    25 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           12u,         19u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_EXV_2_oLIN00_2e4da991_Tx]                                  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_2_oLIN00_de61ce96_Tx/PduRSrcPdu_9414725b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_2_oLIN00_de61ce96_Tx/VCU_EXV_2_oLIN00_2e4da991_Tx] */
  { /*    26 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           23u,         25u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx/PduRSrcPdu_96b222db, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx/VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx] */
  { /*    27 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            6u,          5u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PMP2_Sts_oLIN00_200c907c_Rx_9a742e46_Rx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP2_Sts_oLIN00_200c907c_Rx/PduRSrcPdu_9a742e46, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP2_Sts_oLIN00_200c907c_Rx/PMP2_Sts_oLIN00_200c907c_Rx_9a742e46_Rx] */
  { /*    28 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           14u,         21u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_Minor_02_oKAMA_FP_EPT_0303_7ae377f6_Tx]                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_02_oKAMA_FP_EPT_0303_9a962447_Tx/PduRSrcPdu_a98c9d8b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_02_oKAMA_FP_EPT_0303_9a962447_Tx/VCU_Minor_02_oKAMA_FP_EPT_0303_7ae377f6_Tx] */
  { /*    29 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            4u,          3u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: HVCH_Rsp01_oLIN00_d50f5fa3_Rx_aa2a3f7d_Rx]                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp01_oLIN00_d50f5fa3_Rx/PduRSrcPdu_aa2a3f7d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp01_oLIN00_d50f5fa3_Rx/HVCH_Rsp01_oLIN00_d50f5fa3_Rx_aa2a3f7d_Rx] */
  { /*    30 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           16u,         22u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_SVA_CMD_oLIN00_89e2bb7b_Tx]                                */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_SVA_CMD_oLIN00_756d14f6_Tx/PduRSrcPdu_b06eca36, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_SVA_CMD_oLIN00_756d14f6_Tx/VCU_SVA_CMD_oLIN00_89e2bb7b_Tx] */
  { /*    31 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            3u,          2u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EXV_2_VCU_oLIN00_85f64a15_Rx_b894d38e_Rx]                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_2_VCU_oLIN00_85f64a15_Rx/PduRSrcPdu_b894d38e, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_2_VCU_oLIN00_85f64a15_Rx/EXV_2_VCU_oLIN00_85f64a15_Rx_b894d38e_Rx] */
  { /*    32 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            1u,          0u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EXV2_Status_oLIN00_7fcf9f75_Rx_c3f2be6b_Rx]                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV2_Status_oLIN00_7fcf9f75_Rx/PduRSrcPdu_c3f2be6b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV2_Status_oLIN00_7fcf9f75_Rx/EXV2_Status_oLIN00_7fcf9f75_Rx_c3f2be6b_Rx] */
  { /*    33 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           18u,         24u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx]                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx/PduRSrcPdu_df42a212, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx/VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx] */
  { /*    34 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           22u,         12u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx_f5b46736_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/PduRSrcPdu_f5b46736, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx_f5b46736_Rx] */
  { /*    35 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           17u,         23u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM }   /* [PduRDestPdu: VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx]                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx/PduRSrcPdu_f8c9b934, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx/VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx] */
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
CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[36] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestHnd                                                                              Direction                      LockRomIdx  MaxPduLength  MmRomIdx  RmDestRomIdx        Comment                                                                             Referable Keys */
  { /*     0 */                                            LinIfConf_LinIfTxPdu_LinIfTxPdu_51fe7a72, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,           0u },  /* [Global PduRDestPdu: EDCU_EXV2_oLIN00_18b050dc_Tx]                      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EDCU_EXV2_oLIN00_18b050dc_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*     1 */                                      ComConf_ComIPdu_EXV2_Status_oLIN00_d5e93929_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          32u },  /* [Global PduRDestPdu: EXV2_Status_oLIN00_d5e93929_Rx]                    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EXV2_Status_oLIN00_d5e93929_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     2 */                                        ComConf_ComIPdu_EXV_1_VCU_oLIN00_69d4ef5f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          15u },  /* [Global PduRDestPdu: EXV_1_VCU_oLIN00_69d4ef5f_Rx]                      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EXV_1_VCU_oLIN00_69d4ef5f_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     3 */                                        ComConf_ComIPdu_EXV_2_VCU_oLIN00_1e4a3daf_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          31u },  /* [Global PduRDestPdu: EXV_2_VCU_oLIN00_1e4a3daf_Rx]                      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EXV_2_VCU_oLIN00_1e4a3daf_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     4 */                                       ComConf_ComIPdu_HVCH_Rsp01_oLIN00_a6e33eef_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          29u },  /* [Global PduRDestPdu: HVCH_Rsp01_oLIN00_a6e33eef_Rx]                     */  /* [/ActiveEcuC/EcuC/EcucPduCollection/HVCH_Rsp01_oLIN00_a6e33eef_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     5 */                                       ComConf_ComIPdu_HVCH_Rsp02_oLIN00_286c390c_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          21u },  /* [Global PduRDestPdu: HVCH_Rsp02_oLIN00_286c390c_Rx]                     */  /* [/ActiveEcuC/EcuC/EcucPduCollection/HVCH_Rsp02_oLIN00_286c390c_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     6 */                                         ComConf_ComIPdu_PMP2_Sts_oLIN00_cab90b6b_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          27u },  /* [Global PduRDestPdu: PMP2_Sts_oLIN00_cab90b6b_Rx]                       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PMP2_Sts_oLIN00_cab90b6b_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     7 */                                         ComConf_ComIPdu_PMP3_Sts_oLIN00_511c4704_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           9u },  /* [Global PduRDestPdu: PMP3_Sts_oLIN00_511c4704_Rx]                       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PMP3_Sts_oLIN00_511c4704_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     8 */                                            LinIfConf_LinIfTxPdu_LinIfTxPdu_c5fc6a36, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          11u },  /* [Global PduRDestPdu: PMP_Cmd_oLIN00_6d889c97_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PMP_Cmd_oLIN00_6d889c97_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*     9 */                                      ComConf_ComIPdu_SVA_VCU_STD_oLIN00_4526aa1c_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           2u },  /* [Global PduRDestPdu: SVA_VCU_STD_oLIN00_4526aa1c_Rx]                    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/SVA_VCU_STD_oLIN00_4526aa1c_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    10 */                                            LinIfConf_LinIfTxPdu_LinIfTxPdu_d8f856fb, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           4u,       4u,          14u },  /* [Global PduRDestPdu: TCU_HVCH_Cmd_oLIN00_ddc31229_Tx]                   */  /* [/ActiveEcuC/EcuC/EcucPduCollection/TCU_HVCH_Cmd_oLIN00_ddc31229_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    11 */                                            LinIfConf_LinIfTxPdu_LinIfTxPdu_66470162, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          22u },  /* [Global PduRDestPdu: VCU_EXV_1_oLIN00_58a890ac_Tx]                      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_EXV_1_oLIN00_58a890ac_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    12 */                                            LinIfConf_LinIfTxPdu_LinIfTxPdu_814bac9f, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          25u },  /* [Global PduRDestPdu: VCU_EXV_2_oLIN00_2e4da991_Tx]                      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_EXV_2_oLIN00_2e4da991_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    13 */                  CanIfConf_CanIfTxPduCfg_VCU_Minor_01_oKAMA_FP_EPT_0303_1cd15024_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          17u },  /* [Global PduRDestPdu: VCU_Minor_01_oKAMA_FP_EPT_0303_45280963_Tx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_Minor_01_oKAMA_FP_EPT_0303_45280963_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    14 */                  CanIfConf_CanIfTxPduCfg_VCU_Minor_02_oKAMA_FP_EPT_0303_5fe2f6bf_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          28u },  /* [Global PduRDestPdu: VCU_Minor_02_oKAMA_FP_EPT_0303_7ae377f6_Tx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_Minor_02_oKAMA_FP_EPT_0303_7ae377f6_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    15 */                          ComConf_ComIPdu_VCU_Minor_03_oKAMA_FP_EPT_0303_4d74a41f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          16u },  /* [Global PduRDestPdu: VCU_Minor_03_oKAMA_FP_EPT_0303_4d74a41f_Rx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_Minor_03_oKAMA_FP_EPT_0303_4d74a41f_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    16 */                                            LinIfConf_LinIfTxPdu_LinIfTxPdu_d60e946c, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          30u },  /* [Global PduRDestPdu: VCU_SVA_CMD_oLIN00_89e2bb7b_Tx]                    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_SVA_CMD_oLIN00_89e2bb7b_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    17 */                   CanIfConf_CanIfTxPduCfg_VcuAdcTxMsg1_oTC37X_VCU_CAN01_29adaf4d_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          35u },  /* [Global PduRDestPdu: VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    18 */                   CanIfConf_CanIfTxPduCfg_VcuAdcTxMsg2_oTC37X_VCU_CAN01_fa8a8e09_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          33u },  /* [Global PduRDestPdu: VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    19 */                              ComConf_ComIPdu_VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          12u },  /* [Global PduRDestPdu: VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    20 */                              ComConf_ComIPdu_VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          18u },  /* [Global PduRDestPdu: VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    21 */                              ComConf_ComIPdu_VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           7u },  /* [Global PduRDestPdu: VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    22 */                              ComConf_ComIPdu_VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          34u },  /* [Global PduRDestPdu: VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    23 */                    CanIfConf_CanIfTxPduCfg_VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          26u },  /* [Global PduRDestPdu: VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    24 */                    CanIfConf_CanIfTxPduCfg_VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           8u },  /* [Global PduRDestPdu: VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    25 */                    CanIfConf_CanIfTxPduCfg_VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           4u },  /* [Global PduRDestPdu: VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    26 */                    CanIfConf_CanIfTxPduCfg_VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           1u },  /* [Global PduRDestPdu: VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    27 */                    CanIfConf_CanIfTxPduCfg_VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          19u },  /* [Global PduRDestPdu: VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    28 */                    CanIfConf_CanIfTxPduCfg_VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           5u },  /* [Global PduRDestPdu: VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    29 */                    CanIfConf_CanIfTxPduCfg_VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          20u },  /* [Global PduRDestPdu: VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    30 */                    CanIfConf_CanIfTxPduCfg_VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           6u },  /* [Global PduRDestPdu: VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    31 */                      CanIfConf_CanIfTxPduCfg_VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          23u },  /* [Global PduRDestPdu: VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    32 */                      CanIfConf_CanIfTxPduCfg_VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          13u },  /* [Global PduRDestPdu: VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx]            */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    33 */ DcmConf_DcmDslProtocolRx_Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx_f99a7a58, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           7u,       3u,          10u },  /* [Global PduRDestPdu: Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*    34 */  DcmConf_DcmDslProtocolRx_Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx_7ba0ca16, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       3u,          24u },  /* [Global PduRDestPdu: Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*    35 */                                          CanTpConf_CanTpTxNSdu_CanTpTxNSdu_fe7a15ff, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       1u,           3u }   /* [Global PduRDestPdu: Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx]     */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx, /ActiveEcuC/PduR/CanTp, PduRSinglePartitionDummy] */
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
CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[36] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TriggerTransmitSupported  LockRomIdx  MmRomIdx  RmDestRomStartIdx  SrcHnd                                                                                 Comment                                       Referable Keys */
  { /*     0 */                    FALSE,         0u,       4u,               32u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c3f2be6b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV2_Status_oLIN00_7fcf9f75_Rx/PduRSrcPdu_c3f2be6b] */
  { /*     1 */                    FALSE,         0u,       4u,               15u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_718a1cfb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_1_VCU_oLIN00_366267d6_Rx/PduRSrcPdu_718a1cfb] */
  { /*     2 */                    FALSE,         0u,       4u,               31u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_b894d38e] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_2_VCU_oLIN00_85f64a15_Rx/PduRSrcPdu_b894d38e] */
  { /*     3 */                    FALSE,         0u,       4u,               29u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_aa2a3f7d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp01_oLIN00_d50f5fa3_Rx/PduRSrcPdu_aa2a3f7d] */
  { /*     4 */                    FALSE,         0u,       4u,               21u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_90a9658c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp02_oLIN00_a3ea669e_Rx/PduRSrcPdu_90a9658c] */
  { /*     5 */                    FALSE,         0u,       4u,               27u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9a742e46] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP2_Sts_oLIN00_200c907c_Rx/PduRSrcPdu_9a742e46] */
  { /*     6 */                    FALSE,         0u,       4u,                9u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_43cea622] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP3_Sts_oLIN00_4e808b3d_Rx/PduRSrcPdu_43cea622] */
  { /*     7 */                    FALSE,         0u,       4u,                2u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_166cd16c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SVA_VCU_STD_oLIN00_4f0795ef_Rx/PduRSrcPdu_166cd16c] */
  { /*     8 */                    FALSE,         0u,       0u,               16u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_7341a555] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_03_oKAMA_FP_EPT_0303_d9755fba_Rx/PduRSrcPdu_7341a555] */
  { /*     9 */                    FALSE,         0u,       0u,               12u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_6711bd67] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/PduRSrcPdu_6711bd67] */
  { /*    10 */                    FALSE,         0u,       0u,               18u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_803efadc] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/PduRSrcPdu_803efadc] */
  { /*    11 */                    FALSE,         0u,       0u,                7u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3905054b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/PduRSrcPdu_3905054b] */
  { /*    12 */                    FALSE,         0u,       0u,               34u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f5b46736] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/PduRSrcPdu_f5b46736] */
  { /*    13 */                    FALSE,         0u,       1u,               10u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_4bac36fb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/PduRSrcPdu_4bac36fb] */
  { /*    14 */                    FALSE,         0u,       1u,               24u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_925fbf89] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/PduRSrcPdu_925fbf89] */
  { /*    15 */                     TRUE,         0u,       2u,                0u,                                    ComConf_ComIPdu_EDCU_EXV2_oLIN00_1f8750a5_Tx },  /* [PduRSrcPdu: PduRSrcPdu_0361509d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EDCU_EXV2_oLIN00_1f8750a5_Tx/PduRSrcPdu_0361509d] */
  { /*    16 */                     TRUE,         0u,       2u,               11u,                                      ComConf_ComIPdu_PMP_Cmd_oLIN00_3912b28b_Tx },  /* [PduRSrcPdu: PduRSrcPdu_4bd8719a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP_Cmd_oLIN00_3912b28b_Tx/PduRSrcPdu_4bd8719a] */
  { /*    17 */                     TRUE,         0u,       2u,               14u,                                 ComConf_ComIPdu_TCU_HVCH_Cmd_oLIN00_385d5651_Tx },  /* [PduRSrcPdu: PduRSrcPdu_6a17111c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/TCU_HVCH_Cmd_oLIN00_385d5651_Tx/PduRSrcPdu_6a17111c] */
  { /*    18 */                     TRUE,         0u,       2u,               22u,                                    ComConf_ComIPdu_VCU_EXV_1_oLIN00_50eec975_Tx },  /* [PduRSrcPdu: PduRSrcPdu_91ca29f5] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_1_oLIN00_50eec975_Tx/PduRSrcPdu_91ca29f5] */
  { /*    19 */                     TRUE,         0u,       2u,               25u,                                    ComConf_ComIPdu_VCU_EXV_2_oLIN00_de61ce96_Tx },  /* [PduRSrcPdu: PduRSrcPdu_9414725b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_2_oLIN00_de61ce96_Tx/PduRSrcPdu_9414725b] */
  { /*    20 */                    FALSE,         0u,       2u,               17u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_73c8c9ca] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_01_oKAMA_FP_EPT_0303_39c0a2ee_Tx/PduRSrcPdu_73c8c9ca] */
  { /*    21 */                    FALSE,         0u,       2u,               28u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_a98c9d8b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_02_oKAMA_FP_EPT_0303_9a962447_Tx/PduRSrcPdu_a98c9d8b] */
  { /*    22 */                     TRUE,         0u,       2u,               30u,                                  ComConf_ComIPdu_VCU_SVA_CMD_oLIN00_756d14f6_Tx },  /* [PduRSrcPdu: PduRSrcPdu_b06eca36] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_SVA_CMD_oLIN00_756d14f6_Tx/PduRSrcPdu_b06eca36] */
  { /*    23 */                    FALSE,         0u,       2u,               35u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f8c9b934] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx/PduRSrcPdu_f8c9b934] */
  { /*    24 */                    FALSE,         0u,       2u,               33u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_df42a212] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx/PduRSrcPdu_df42a212] */
  { /*    25 */                    FALSE,         0u,       2u,               26u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_96b222db] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx/PduRSrcPdu_96b222db] */
  { /*    26 */                    FALSE,         0u,       2u,                8u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3ef2d11c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx/PduRSrcPdu_3ef2d11c] */
  { /*    27 */                    FALSE,         0u,       2u,                4u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_23c89b9b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx/PduRSrcPdu_23c89b9b] */
  { /*    28 */                    FALSE,         0u,       2u,                1u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_15ef524a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx/PduRSrcPdu_15ef524a] */
  { /*    29 */                    FALSE,         0u,       2u,               19u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_886ac60a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx/PduRSrcPdu_886ac60a] */
  { /*    30 */                    FALSE,         0u,       2u,                5u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_275934e8] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx/PduRSrcPdu_275934e8] */
  { /*    31 */                    FALSE,         0u,       2u,               20u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_8c9b3cfc] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx/PduRSrcPdu_8c9b3cfc] */
  { /*    32 */                    FALSE,         0u,       2u,                6u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_27dcf988] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx/PduRSrcPdu_27dcf988] */
  { /*    33 */                    FALSE,         0u,       2u,               23u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_91d52164] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164] */
  { /*    34 */                    FALSE,         0u,       2u,               13u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_69924b1b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b] */
  { /*    35 */                    FALSE,         0u,       3u,                3u, DcmConf_DcmDslProtocolTx_Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx_666acd3e }   /* [PduRSrcPdu: PduRSrcPdu_1a8748e9] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9] */
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
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[21] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmSrcRomIdx  RmTransmitFctPtrIdx        Referable Keys */
  { /*     0 */         15u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EDCU_EXV2_oLIN00_1f8750a5_Tx/PduRSrcPdu_0361509d] */
  { /*     1 */         16u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP_Cmd_oLIN00_3912b28b_Tx/PduRSrcPdu_4bd8719a] */
  { /*     2 */         17u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/TCU_HVCH_Cmd_oLIN00_385d5651_Tx/PduRSrcPdu_6a17111c] */
  { /*     3 */         18u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_1_oLIN00_50eec975_Tx/PduRSrcPdu_91ca29f5] */
  { /*     4 */         19u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_2_oLIN00_de61ce96_Tx/PduRSrcPdu_9414725b] */
  { /*     5 */         20u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_01_oKAMA_FP_EPT_0303_39c0a2ee_Tx/PduRSrcPdu_73c8c9ca] */
  { /*     6 */         21u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Minor_02_oKAMA_FP_EPT_0303_9a962447_Tx/PduRSrcPdu_a98c9d8b] */
  { /*     7 */         22u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_SVA_CMD_oLIN00_756d14f6_Tx/PduRSrcPdu_b06eca36] */
  { /*     8 */         23u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx/PduRSrcPdu_f8c9b934] */
  { /*     9 */         24u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx/PduRSrcPdu_df42a212] */
  { /*    10 */         25u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx/PduRSrcPdu_96b222db] */
  { /*    11 */         26u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx/PduRSrcPdu_3ef2d11c] */
  { /*    12 */         27u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx/PduRSrcPdu_23c89b9b] */
  { /*    13 */         28u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx/PduRSrcPdu_15ef524a] */
  { /*    14 */         29u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx/PduRSrcPdu_886ac60a] */
  { /*    15 */         30u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx/PduRSrcPdu_275934e8] */
  { /*    16 */         31u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx/PduRSrcPdu_8c9b3cfc] */
  { /*    17 */         32u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx/PduRSrcPdu_27dcf988] */
  { /*    18 */         33u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164] */
  { /*    19 */         34u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b] */
  { /*    20 */         35u,                  1u }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9] */
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
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[20] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomIdx        Referable Keys */
  { /*     0 */            0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/EDCU_EXV2_oLIN00_18b050dc_Tx] */
  { /*     1 */            8u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PMP_Cmd_oLIN00_6d889c97_Tx] */
  { /*     2 */           10u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TCU_HVCH_Cmd_oLIN00_ddc31229_Tx] */
  { /*     3 */           11u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_EXV_1_oLIN00_58a890ac_Tx] */
  { /*     4 */           12u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_EXV_2_oLIN00_2e4da991_Tx] */
  { /*     5 */           13u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_Minor_01_oKAMA_FP_EPT_0303_45280963_Tx] */
  { /*     6 */           14u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_Minor_02_oKAMA_FP_EPT_0303_7ae377f6_Tx] */
  { /*     7 */           16u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_SVA_CMD_oLIN00_89e2bb7b_Tx] */
  { /*     8 */           17u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxMsg1_oTC37X_VCU_CAN01_6685c7bf_Tx] */
  { /*     9 */           18u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxMsg2_oTC37X_VCU_CAN01_afb1dcb2_Tx] */
  { /*    10 */           23u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx] */
  { /*    11 */           24u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx] */
  { /*    12 */           25u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx] */
  { /*    13 */           26u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx] */
  { /*    14 */           27u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx] */
  { /*    15 */           28u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx] */
  { /*    16 */           29u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx] */
  { /*    17 */           30u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx] */
  { /*    18 */           31u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx] */
  { /*    19 */           32u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx] */
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

