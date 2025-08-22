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
 *   Generation Time: 2025-08-22 15:59:34
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
CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[94] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduLengthHandlingStrategy                         RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                                                   Referable Keys */
  { /*     0 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           66u,         32u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxCtrlMsg0_oTC37X_VCU_CAN01_3715838b_Rx_01131484_Rx]                         */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg0_oTC37X_VCU_CAN01_3715838b_Rx/PduRSrcPdu_01131484, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg0_oTC37X_VCU_CAN01_3715838b_Rx/VcuRxCtrlMsg0_oTC37X_VCU_CAN01_3715838b_Rx_01131484_Rx] */
  { /*     1 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            8u,         45u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EDCU_EXV2_oLIN00_18b050dc_Tx]                                                   */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EDCU_EXV2_oLIN00_1f8750a5_Tx/PduRSrcPdu_0361509d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EDCU_EXV2_oLIN00_1f8750a5_Tx/EDCU_EXV2_oLIN00_18b050dc_Tx] */
  { /*     2 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           86u,         90u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin0_TxMsg2_oLIN01_74c2430b_Tx]                                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg2_oLIN01_0a12d45a_Tx/PduRSrcPdu_0417dd35, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg2_oLIN01_0a12d45a_Tx/Vcu_Lin0_TxMsg2_oLIN01_74c2430b_Tx] */
  { /*     3 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            7u,          7u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_8a75132b_Rx_08ea31b4_Rx]              */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_8a75132b_Rx/PduRSrcPdu_08ea31b4, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_8a75132b_Rx/ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_8a75132b_Rx_08ea31b4_Rx] */
  { /*     4 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           46u,         63u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_b8ca6989_Tx/PduRSrcPdu_0a2b7a00, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_b8ca6989_Tx/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx] */
  { /*     5 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           62u,         31u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuCan12RxMsg4_oTC37X_VCU_CAN12_211bb20e_Rx_0a95646f_Rx]                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12RxMsg4_oTC37X_VCU_CAN12_211bb20e_Rx/PduRSrcPdu_0a95646f, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12RxMsg4_oTC37X_VCU_CAN12_211bb20e_Rx/VcuCan12RxMsg4_oTC37X_VCU_CAN12_211bb20e_Rx_0a95646f_Rx] */
  { /*     6 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           51u,         68u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_6ee07228_Tx/PduRSrcPdu_0b6ac76d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_6ee07228_Tx/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx] */
  { /*     7 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            1u,          1u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8a035e80_Rx_0dbe25ba_Rx]               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8a035e80_Rx/PduRSrcPdu_0dbe25ba, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8a035e80_Rx/ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8a035e80_Rx_0dbe25ba_Rx] */
  { /*     8 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           50u,         67u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_969aa009_Tx/PduRSrcPdu_1008b467, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_969aa009_Tx/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx] */
  { /*     9 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           40u,         57u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx]                */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_7949a1d5_Tx/PduRSrcPdu_108c7515, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_7949a1d5_Tx/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx] */
  { /*    10 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           83u,         39u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin0_RxMsg1_oLIN01_079b7478_Rx_12331c6c_Rx]                                 */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg1_oLIN01_079b7478_Rx/PduRSrcPdu_12331c6c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg1_oLIN01_079b7478_Rx/Vcu_Lin0_RxMsg1_oLIN01_079b7478_Rx_12331c6c_Rx] */
  { /*    11 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           18u,         17u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f451ac97_Rx_12481f07_Rx]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f451ac97_Rx/PduRSrcPdu_12481f07, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f451ac97_Rx/IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f451ac97_Rx_12481f07_Rx] */
  { /*    12 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           76u,         82u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx/PduRSrcPdu_15ef524a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx/VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx] */
  { /*    13 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           29u,         27u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: SVA_VCU_STD_oLIN00_4f0795ef_Rx_166cd16c_Rx]                                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SVA_VCU_STD_oLIN00_4f0795ef_Rx/PduRSrcPdu_166cd16c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SVA_VCU_STD_oLIN00_4f0795ef_Rx/SVA_VCU_STD_oLIN00_4f0795ef_Rx_166cd16c_Rx] */
  { /*    14 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           41u,         58u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_4c086bc0_Tx/PduRSrcPdu_17f11187, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_4c086bc0_Tx/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx] */
  { /*    15 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           93u,         93u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx]                                  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx] */
  { /*    16 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           47u,         64u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_40b0bba8_Tx/PduRSrcPdu_238e87f9, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_40b0bba8_Tx/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx] */
  { /*    17 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           75u,         81u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx/PduRSrcPdu_23c89b9b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx/VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx] */
  { /*    18 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           78u,         84u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx/PduRSrcPdu_275934e8, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx/VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx] */
  { /*    19 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           80u,         86u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx/PduRSrcPdu_27dcf988, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx/VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx] */
  { /*    20 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           15u,         14u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_8feeb71a_Rx_283e282c_Rx]              */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_8feeb71a_Rx/PduRSrcPdu_283e282c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_8feeb71a_Rx/IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_8feeb71a_Rx_283e282c_Rx] */
  { /*    21 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           90u,         92u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin3_TxMsg2_oLIN02_80a2835b_Tx]                                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_TxMsg2_oLIN02_8266ef99_Tx/PduRSrcPdu_2efa4b01, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_TxMsg2_oLIN02_8266ef99_Tx/Vcu_Lin3_TxMsg2_oLIN02_80a2835b_Tx] */
  { /*    22 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           28u,         26u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_3a9eb4a2_Rx_316b9b30_Rx]               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_3a9eb4a2_Rx/PduRSrcPdu_316b9b30, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_3a9eb4a2_Rx/SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_3a9eb4a2_Rx_316b9b30_Rx] */
  { /*    23 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           34u,         51u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx]                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_0d0df7a0_Tx/PduRSrcPdu_319663fb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_0d0df7a0_Tx/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx] */
  { /*    24 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           54u,         71u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_01894f89_Tx/PduRSrcPdu_350c260d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_01894f89_Tx/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx] */
  { /*    25 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           67u,         33u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxCtrlMsg1_oTC37X_VCU_CAN01_70067570_Rx_35c74fdb_Rx]                         */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg1_oTC37X_VCU_CAN01_70067570_Rx/PduRSrcPdu_35c74fdb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg1_oTC37X_VCU_CAN01_70067570_Rx/VcuRxCtrlMsg1_oTC37X_VCU_CAN01_70067570_Rx_35c74fdb_Rx] */
  { /*    26 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           55u,         72u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_eb0f92eb_Tx/PduRSrcPdu_37fea4b2, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_eb0f92eb_Tx/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx] */
  { /*    27 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           71u,         37u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx_3905054b_Rx]                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/PduRSrcPdu_3905054b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx_3905054b_Rx] */
  { /*    28 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           88u,         42u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin3_RxMsg2_oLIN02_851e8d15_Rx_3b03dfb1_Rx]                                 */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_RxMsg2_oLIN02_851e8d15_Rx/PduRSrcPdu_3b03dfb1, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_RxMsg2_oLIN02_851e8d15_Rx/Vcu_Lin3_RxMsg2_oLIN02_851e8d15_Rx_3b03dfb1_Rx] */
  { /*    29 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           74u,         80u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx/PduRSrcPdu_3ef2d11c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx/VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx] */
  { /*    30 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           26u,         25u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PMP3_Sts_oLIN00_4e808b3d_Rx_43cea622_Rx]                                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP3_Sts_oLIN00_4e808b3d_Rx/PduRSrcPdu_43cea622, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP3_Sts_oLIN00_4e808b3d_Rx/PMP3_Sts_oLIN00_4e808b3d_Rx_43cea622_Rx] */
  { /*    31 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           36u,         53u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx]                   */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d7fdb34f_Tx/PduRSrcPdu_49c8436f, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d7fdb34f_Tx/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx] */
  { /*    32 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           91u,         43u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx_4bac36fb_Rx]                  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/PduRSrcPdu_4bac36fb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx_4bac36fb_Rx] */
  { /*    33 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           27u,         46u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PMP_Cmd_oLIN00_6d889c97_Tx]                                                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP_Cmd_oLIN00_3912b28b_Tx/PduRSrcPdu_4bd8719a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP_Cmd_oLIN00_3912b28b_Tx/PMP_Cmd_oLIN00_6d889c97_Tx] */
  { /*    34 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           22u,         21u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_df4c437b_Rx_4e239512_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_df4c437b_Rx/PduRSrcPdu_4e239512, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_df4c437b_Rx/IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_df4c437b_Rx_4e239512_Rx] */
  { /*    35 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           57u,         28u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuCan03RxMsg1_oTC37X_VCU_CAN03_4dd213bb_Rx_4e610413_Rx]                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03RxMsg1_oTC37X_VCU_CAN03_4dd213bb_Rx/PduRSrcPdu_4e610413, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03RxMsg1_oTC37X_VCU_CAN03_4dd213bb_Rx/VcuCan03RxMsg1_oTC37X_VCU_CAN03_4dd213bb_Rx_4e610413_Rx] */
  { /*    36 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           52u,         69u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_81b2c4c9_Tx/PduRSrcPdu_4fcbec42, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_81b2c4c9_Tx/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx] */
  { /*    37 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            3u,          3u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_9c78bb9f_Rx_56f39b3b_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_9c78bb9f_Rx/PduRSrcPdu_56f39b3b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_9c78bb9f_Rx/ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_9c78bb9f_Rx_56f39b3b_Rx] */
  { /*    38 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           64u,         77u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuCan12TxMsg2_oTC37X_VCU_CAN12_e5a6e89d_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12TxMsg2_oTC37X_VCU_CAN12_3a1dfcb9_Tx/PduRSrcPdu_573a7055, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12TxMsg2_oTC37X_VCU_CAN12_3a1dfcb9_Tx/VcuCan12TxMsg2_oTC37X_VCU_CAN12_e5a6e89d_Tx] */
  { /*    39 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           53u,         70u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_eedbf968_Tx/PduRSrcPdu_624e541b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_eedbf968_Tx/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx] */
  { /*    40 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           21u,         20u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_94259583_Rx_629168fc_Rx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_94259583_Rx/PduRSrcPdu_629168fc, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_94259583_Rx/IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_94259583_Rx_629168fc_Rx] */
  { /*    41 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           20u,         19u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_84e18367_Rx_65adbba1_Rx]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_84e18367_Rx/PduRSrcPdu_65adbba1, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_84e18367_Rx/IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_84e18367_Rx_65adbba1_Rx] */
  { /*    42 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           69u,         35u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx_6711bd67_Rx]                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/PduRSrcPdu_6711bd67, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx_6711bd67_Rx] */
  { /*    43 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            4u,          4u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_aeea498e_Rx_686bd310_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_aeea498e_Rx/PduRSrcPdu_686bd310, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_aeea498e_Rx/ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_aeea498e_Rx_686bd310_Rx] */
  { /*    44 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           82u,         88u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx]                                         */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx] */
  { /*    45 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           30u,         47u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: TCU_HVCH_Cmd_oLIN00_ddc31229_Tx]                                                */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/TCU_HVCH_Cmd_oLIN00_385d5651_Tx/PduRSrcPdu_6a17111c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/TCU_HVCH_Cmd_oLIN00_385d5651_Tx/TCU_HVCH_Cmd_oLIN00_ddc31229_Tx] */
  { /*    46 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           19u,         18u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_dc4e3b12_Rx_6a5d743a_Rx]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_dc4e3b12_Rx/PduRSrcPdu_6a5d743a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_dc4e3b12_Rx/IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_dc4e3b12_Rx_6a5d743a_Rx] */
  { /*    47 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           59u,         74u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuCan03TxMsg1_oTC37X_VCU_CAN03_c0767973_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03TxMsg1_oTC37X_VCU_CAN03_9a29d525_Tx/PduRSrcPdu_6c0ea6d2, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03TxMsg1_oTC37X_VCU_CAN03_9a29d525_Tx/VcuCan03TxMsg1_oTC37X_VCU_CAN03_c0767973_Tx] */
  { /*    48 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           63u,         76u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuCan12TxMsg1_oTC37X_VCU_CAN12_2c92f390_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12TxMsg1_oTC37X_VCU_CAN12_d09b21db_Tx/PduRSrcPdu_6cefc258, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12TxMsg1_oTC37X_VCU_CAN12_d09b21db_Tx/VcuCan12TxMsg1_oTC37X_VCU_CAN12_2c92f390_Tx] */
  { /*    49 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           10u,          9u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EXV_1_VCU_oLIN00_366267d6_Rx_718a1cfb_Rx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_1_VCU_oLIN00_366267d6_Rx/PduRSrcPdu_718a1cfb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_1_VCU_oLIN00_366267d6_Rx/EXV_1_VCU_oLIN00_366267d6_Rx_718a1cfb_Rx] */
    /* Index    PduLengthHandlingStrategy                         RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                                                   Referable Keys */
  { /*    50 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           45u,         62u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_5798df68_Tx/PduRSrcPdu_75ceb29f, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_5798df68_Tx/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx] */
  { /*    51 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           17u,         16u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_35bef38d_Rx_77b4603c_Rx]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_35bef38d_Rx/PduRSrcPdu_77b4603c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_35bef38d_Rx/IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_35bef38d_Rx_77b4603c_Rx] */
  { /*    52 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           89u,         91u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin3_TxMsg1_oLIN02_f647ba66_Tx]                                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_TxMsg1_oLIN02_0ce9e87a_Tx/PduRSrcPdu_78b4954c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_TxMsg1_oLIN02_0ce9e87a_Tx/Vcu_Lin3_TxMsg1_oLIN02_f647ba66_Tx] */
  { /*    53 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           70u,         36u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx_803efadc_Rx]                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/PduRSrcPdu_803efadc, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx_803efadc_Rx] */
  { /*    54 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           77u,         83u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx/PduRSrcPdu_886ac60a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx/VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx] */
  { /*    55 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           56u,         73u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_045d240a_Tx/PduRSrcPdu_88d7da53, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_045d240a_Tx/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx] */
  { /*    56 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           79u,         85u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx/PduRSrcPdu_8c9b3cfc, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx/VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx] */
  { /*    57 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           13u,         12u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: HVCH_Rsp02_oLIN00_a3ea669e_Rx_90a9658c_Rx]                                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp02_oLIN00_a3ea669e_Rx/PduRSrcPdu_90a9658c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp02_oLIN00_a3ea669e_Rx/HVCH_Rsp02_oLIN00_a3ea669e_Rx_90a9658c_Rx] */
  { /*    58 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           87u,         41u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin3_RxMsg1_oLIN02_f3fbb428_Rx_916b2dbb_Rx]                                 */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_RxMsg1_oLIN02_f3fbb428_Rx/PduRSrcPdu_916b2dbb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_RxMsg1_oLIN02_f3fbb428_Rx/Vcu_Lin3_RxMsg1_oLIN02_f3fbb428_Rx_916b2dbb_Rx] */
  { /*    59 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           37u,         54u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_EXV_1_oLIN00_58a890ac_Tx]                                                   */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_1_oLIN00_50eec975_Tx/PduRSrcPdu_91ca29f5, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_1_oLIN00_50eec975_Tx/VCU_EXV_1_oLIN00_58a890ac_Tx] */
  { /*    60 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           81u,         87u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx]                                         */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx] */
  { /*    61 */ PDUR_UNUSED_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           92u,         44u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx_925fbf89_Rx]                   */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/PduRSrcPdu_925fbf89, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx_925fbf89_Rx] */
  { /*    62 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           38u,         55u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_EXV_2_oLIN00_2e4da991_Tx]                                                   */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_2_oLIN00_de61ce96_Tx/PduRSrcPdu_9414725b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_2_oLIN00_de61ce96_Tx/VCU_EXV_2_oLIN00_2e4da991_Tx] */
  { /*    63 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           35u,         52u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx]                          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_1208e503_Tx/PduRSrcPdu_961dd6a8, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_1208e503_Tx/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx] */
  { /*    64 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           73u,         79u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx/PduRSrcPdu_96b222db, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx/VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx] */
  { /*    65 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           25u,         24u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PMP2_Sts_oLIN00_200c907c_Rx_9a742e46_Rx]                                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP2_Sts_oLIN00_200c907c_Rx/PduRSrcPdu_9a742e46, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP2_Sts_oLIN00_200c907c_Rx/PMP2_Sts_oLIN00_200c907c_Rx_9a742e46_Rx] */
  { /*    66 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           61u,         30u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuCan12RxMsg3_oTC37X_VCU_CAN12_2f1174ae_Rx_9d116735_Rx]                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12RxMsg3_oTC37X_VCU_CAN12_2f1174ae_Rx/PduRSrcPdu_9d116735, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12RxMsg3_oTC37X_VCU_CAN12_2f1174ae_Rx/VcuCan12RxMsg3_oTC37X_VCU_CAN12_2f1174ae_Rx_9d116735_Rx] */
  { /*    67 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            0u,          0u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_1343b9ef_Rx_9eae4558_Rx]               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_1343b9ef_Rx/PduRSrcPdu_9eae4558, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_1343b9ef_Rx/ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_1343b9ef_Rx_9eae4558_Rx] */
  { /*    68 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           65u,         78u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuMeasurementMsg0_oTC37X_VCU_CAN01_d96481d0_Tx]                                */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuMeasurementMsg0_oTC37X_VCU_CAN01_0deb23c3_Tx/PduRSrcPdu_9fbb06ad, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuMeasurementMsg0_oTC37X_VCU_CAN01_0deb23c3_Tx/VcuMeasurementMsg0_oTC37X_VCU_CAN01_d96481d0_Tx] */
  { /*    69 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           49u,         66u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_79c816e8_Tx/PduRSrcPdu_9fc32995, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_79c816e8_Tx/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx] */
  { /*    70 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           58u,         29u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuCan03RxMsg2_oTC37X_VCU_CAN03_84e608b6_Rx_a2204cbf_Rx]                        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03RxMsg2_oTC37X_VCU_CAN03_84e608b6_Rx/PduRSrcPdu_a2204cbf, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03RxMsg2_oTC37X_VCU_CAN03_84e608b6_Rx/VcuCan03RxMsg2_oTC37X_VCU_CAN03_84e608b6_Rx_a2204cbf_Rx] */
  { /*    71 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           60u,         75u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuCan03TxMsg2_oTC37X_VCU_CAN03_0942627e_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03TxMsg2_oTC37X_VCU_CAN03_70af0847_Tx/PduRSrcPdu_a59b3a32, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03TxMsg2_oTC37X_VCU_CAN03_70af0847_Tx/VcuCan03TxMsg2_oTC37X_VCU_CAN03_0942627e_Tx] */
  { /*    72 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           43u,         60u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx]               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_20405e82_Tx/PduRSrcPdu_a60cff81, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_20405e82_Tx/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx] */
  { /*    73 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           12u,         11u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: HVCH_Rsp01_oLIN00_d50f5fa3_Rx_aa2a3f7d_Rx]                                      */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp01_oLIN00_d50f5fa3_Rx/PduRSrcPdu_aa2a3f7d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp01_oLIN00_d50f5fa3_Rx/HVCH_Rsp01_oLIN00_d50f5fa3_Rx_aa2a3f7d_Rx] */
  { /*    74 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           48u,         65u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx]                                    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_afe20d49_Tx/PduRSrcPdu_ae15b571, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_afe20d49_Tx/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx] */
  { /*    75 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           44u,         61u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_SVA_CMD_oLIN00_89e2bb7b_Tx]                                                 */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_SVA_CMD_oLIN00_756d14f6_Tx/PduRSrcPdu_b06eca36, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_SVA_CMD_oLIN00_756d14f6_Tx/VCU_SVA_CMD_oLIN00_89e2bb7b_Tx] */
  { /*    76 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           11u,         10u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EXV_2_VCU_oLIN00_85f64a15_Rx_b894d38e_Rx]                                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_2_VCU_oLIN00_85f64a15_Rx/PduRSrcPdu_b894d38e, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_2_VCU_oLIN00_85f64a15_Rx/EXV_2_VCU_oLIN00_85f64a15_Rx_b894d38e_Rx] */
  { /*    77 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            6u,          6u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_599b516e_Rx_bc9c1fec_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_599b516e_Rx/PduRSrcPdu_bc9c1fec, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_599b516e_Rx/ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_599b516e_Rx_bc9c1fec_Rx] */
  { /*    78 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           39u,         56u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx]                */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f29a9fcc_Tx/PduRSrcPdu_c0ac8d7c, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f29a9fcc_Tx/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx] */
  { /*    79 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           42u,         59u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_0d9d0aa9_Tx/PduRSrcPdu_c3983958, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_0d9d0aa9_Tx/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx] */
  { /*    80 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            9u,          8u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: EXV2_Status_oLIN00_7fcf9f75_Rx_c3f2be6b_Rx]                                     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV2_Status_oLIN00_7fcf9f75_Rx/PduRSrcPdu_c3f2be6b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV2_Status_oLIN00_7fcf9f75_Rx/EXV2_Status_oLIN00_7fcf9f75_Rx_c3f2be6b_Rx] */
  { /*    81 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           24u,         23u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_54b7c66f_Rx_ca150190_Rx]    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_54b7c66f_Rx/PduRSrcPdu_ca150190, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_54b7c66f_Rx/IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_54b7c66f_Rx_ca150190_Rx] */
  { /*    82 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           14u,         13u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_205c1446_Rx_ca3eaa8a_Rx]              */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_205c1446_Rx/PduRSrcPdu_ca3eaa8a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_205c1446_Rx/IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_205c1446_Rx_ca3eaa8a_Rx] */
  { /*    83 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           16u,         15u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_acfe14e2_Rx_d09902f0_Rx]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_acfe14e2_Rx/PduRSrcPdu_d09902f0, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_acfe14e2_Rx/IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_acfe14e2_Rx_d09902f0_Rx] */
  { /*    84 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           84u,         40u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Vcu_Lin0_RxMsg2_oLIN01_717e4d45_Rx_d314568e_Rx]                                 */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg2_oLIN01_717e4d45_Rx/PduRSrcPdu_d314568e, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg2_oLIN01_717e4d45_Rx/Vcu_Lin0_RxMsg2_oLIN01_717e4d45_Rx_d314568e_Rx] */
  { /*    85 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           68u,         34u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b9326e7d_Rx_d7cb99e6_Rx]                         */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b9326e7d_Rx/PduRSrcPdu_d7cb99e6, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b9326e7d_Rx/VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b9326e7d_Rx_d7cb99e6_Rx] */
  { /*    86 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            5u,          5u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c0dbb601_Rx_d84c121b_Rx]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c0dbb601_Rx/PduRSrcPdu_d84c121b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c0dbb601_Rx/ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c0dbb601_Rx_d84c121b_Rx] */
  { /*    87 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           33u,         50u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx]                           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_db6dbd42_Tx/PduRSrcPdu_ec53c477, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_db6dbd42_Tx/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx] */
  { /*    88 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           32u,         49u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx]                           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_d824d0f9_Tx/PduRSrcPdu_eeac2237, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_d824d0f9_Tx/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx] */
  { /*    89 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           72u,         38u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx_f5b46736_Rx]                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/PduRSrcPdu_f5b46736, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx_f5b46736_Rx] */
  { /*    90 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,            2u,          2u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_83006605_Rx_f767588b_Rx]             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_83006605_Rx/PduRSrcPdu_f767588b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_83006605_Rx/ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_83006605_Rx_f767588b_Rx] */
  { /*    91 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           23u,         22u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_cdf72100_Rx_fcecab79_Rx]    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_cdf72100_Rx/PduRSrcPdu_fcecab79, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_cdf72100_Rx/IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_cdf72100_Rx_fcecab79_Rx] */
  { /*    92 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           31u,         48u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx]                           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_17bac731_Tx/PduRSrcPdu_fd46d90f, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_17bac731_Tx/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx] */
  { /*    93 */ PDUR_IGNORE_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM,           85u,         89u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM }   /* [PduRDestPdu: Vcu_Lin0_TxMsg1_oLIN01_02277a36_Tx]                                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg1_oLIN01_849dd3b9_Tx/PduRSrcPdu_ff5e60c1, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg1_oLIN01_849dd3b9_Tx/Vcu_Lin0_TxMsg1_oLIN01_02277a36_Tx] */
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
CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[94] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestHnd                                                                                   Direction                      LockRomIdx  MaxPduLength  MmRomIdx  RmDestRomIdx        Comment                                                                                              Referable Keys */
  { /*     0 */                     ComConf_ComIPdu_ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_92b30981_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          67u },  /* [Global PduRDestPdu: ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_92b30981_Rx]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_92b30981_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     1 */                     ComConf_ComIPdu_ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_19603798_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           7u },  /* [Global PduRDestPdu: ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_19603798_Rx]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_19603798_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     2 */                   ComConf_ComIPdu_ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_c3757d77_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          90u },  /* [Global PduRDestPdu: ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_c3757d77_Rx]             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_c3757d77_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     3 */                ComConf_ComIPdu_ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_09e0da82_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          37u },  /* [Global PduRDestPdu: ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_09e0da82_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_09e0da82_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     4 */                ComConf_ComIPdu_ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_73fc26ce_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          43u },  /* [Global PduRDestPdu: ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_73fc26ce_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_73fc26ce_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     5 */                ComConf_ComIPdu_ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_d7aca41b_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          86u },  /* [Global PduRDestPdu: ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_d7aca41b_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_d7aca41b_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     6 */                ComConf_ComIPdu_ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_5c7f9a02_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          77u },  /* [Global PduRDestPdu: ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_5c7f9a02_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_5c7f9a02_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     7 */                    ComConf_ComIPdu_ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_c19ff818_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           3u },  /* [Global PduRDestPdu: ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_c19ff818_Rx]              */  /* [/ActiveEcuC/EcuC/EcucPduCollection/ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_c19ff818_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*     8 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_51fe7a72, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,           1u },  /* [Global PduRDestPdu: EDCU_EXV2_oLIN00_18b050dc_Tx]                                       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EDCU_EXV2_oLIN00_18b050dc_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*     9 */                                           ComConf_ComIPdu_EXV2_Status_oLIN00_d5e93929_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          80u },  /* [Global PduRDestPdu: EXV2_Status_oLIN00_d5e93929_Rx]                                     */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EXV2_Status_oLIN00_d5e93929_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    10 */                                             ComConf_ComIPdu_EXV_1_VCU_oLIN00_69d4ef5f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          49u },  /* [Global PduRDestPdu: EXV_1_VCU_oLIN00_69d4ef5f_Rx]                                       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EXV_1_VCU_oLIN00_69d4ef5f_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    11 */                                             ComConf_ComIPdu_EXV_2_VCU_oLIN00_1e4a3daf_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          76u },  /* [Global PduRDestPdu: EXV_2_VCU_oLIN00_1e4a3daf_Rx]                                       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/EXV_2_VCU_oLIN00_1e4a3daf_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    12 */                                            ComConf_ComIPdu_HVCH_Rsp01_oLIN00_a6e33eef_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          73u },  /* [Global PduRDestPdu: HVCH_Rsp01_oLIN00_a6e33eef_Rx]                                      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/HVCH_Rsp01_oLIN00_a6e33eef_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    13 */                                            ComConf_ComIPdu_HVCH_Rsp02_oLIN00_286c390c_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          57u },  /* [Global PduRDestPdu: HVCH_Rsp02_oLIN00_286c390c_Rx]                                      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/HVCH_Rsp02_oLIN00_286c390c_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    14 */                    ComConf_ComIPdu_IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_ef8c28ba_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          82u },  /* [Global PduRDestPdu: IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_ef8c28ba_Rx]              */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_ef8c28ba_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    15 */                    ComConf_ComIPdu_IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_25d77553_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          20u },  /* [Global PduRDestPdu: IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_25d77553_Rx]              */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_25d77553_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    16 */              ComConf_ComIPdu_IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b0697754_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          83u },  /* [Global PduRDestPdu: IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b0697754_Rx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_b0697754_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    17 */              ComConf_ComIPdu_IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_3bba494d_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          51u },  /* [Global PduRDestPdu: IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_3bba494d_Rx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_3bba494d_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    18 */              ComConf_ComIPdu_IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f4245e85_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          11u },  /* [Global PduRDestPdu: IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f4245e85_Rx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f4245e85_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    19 */              ComConf_ComIPdu_IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_f76d333e_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          46u },  /* [Global PduRDestPdu: IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_f76d333e_Rx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_f76d333e_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    20 */              ComConf_ComIPdu_IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_b3201aef_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          41u },  /* [Global PduRDestPdu: IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_b3201aef_Rx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_b3201aef_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    21 */                 ComConf_ComIPdu_IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_e4106cfa_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          40u },  /* [Global PduRDestPdu: IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_e4106cfa_Rx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_e4106cfa_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    22 */       ComConf_ComIPdu_IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_d229d0d9_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          34u },  /* [Global PduRDestPdu: IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_d229d0d9_Rx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_d229d0d9_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    23 */          ComConf_ComIPdu_IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1c45b3ee_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          91u },  /* [Global PduRDestPdu: IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1c45b3ee_Rx]    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_1c45b3ee_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    24 */          ComConf_ComIPdu_IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_97968df7_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          81u },  /* [Global PduRDestPdu: IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_97968df7_Rx]    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_97968df7_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    25 */                                              ComConf_ComIPdu_PMP2_Sts_oLIN00_cab90b6b_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          65u },  /* [Global PduRDestPdu: PMP2_Sts_oLIN00_cab90b6b_Rx]                                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PMP2_Sts_oLIN00_cab90b6b_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    26 */                                              ComConf_ComIPdu_PMP3_Sts_oLIN00_511c4704_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          30u },  /* [Global PduRDestPdu: PMP3_Sts_oLIN00_511c4704_Rx]                                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PMP3_Sts_oLIN00_511c4704_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    27 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_c5fc6a36, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          33u },  /* [Global PduRDestPdu: PMP_Cmd_oLIN00_6d889c97_Tx]                                         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PMP_Cmd_oLIN00_6d889c97_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    28 */                     ComConf_ComIPdu_SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_9b3e5336_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          22u },  /* [Global PduRDestPdu: SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_9b3e5336_Rx]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_9b3e5336_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    29 */                                           ComConf_ComIPdu_SVA_VCU_STD_oLIN00_4526aa1c_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          13u },  /* [Global PduRDestPdu: SVA_VCU_STD_oLIN00_4526aa1c_Rx]                                     */  /* [/ActiveEcuC/EcuC/EcucPduCollection/SVA_VCU_STD_oLIN00_4526aa1c_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    30 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_d8f856fb, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           4u,       4u,          45u },  /* [Global PduRDestPdu: TCU_HVCH_Cmd_oLIN00_ddc31229_Tx]                                    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/TCU_HVCH_Cmd_oLIN00_ddc31229_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    31 */             CanIfConf_CanIfTxPduCfg_VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_ba0b4faa_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          92u },  /* [Global PduRDestPdu: VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    32 */             CanIfConf_CanIfTxPduCfg_VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_dd165c0d_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          88u },  /* [Global PduRDestPdu: VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    33 */             CanIfConf_CanIfTxPduCfg_VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_33342039_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          87u },  /* [Global PduRDestPdu: VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    34 */       CanIfConf_CanIfTxPduCfg_VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_6e926372_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          23u },  /* [Global PduRDestPdu: VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    35 */            CanIfConf_CanIfTxPduCfg_VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_f1d5756e_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          63u },  /* [Global PduRDestPdu: VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx]              */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    36 */     CanIfConf_CanIfTxPduCfg_VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d9a729e3_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          31u },  /* [Global PduRDestPdu: VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx]       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    37 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_66470162, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          59u },  /* [Global PduRDestPdu: VCU_EXV_1_oLIN00_58a890ac_Tx]                                       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_EXV_1_oLIN00_58a890ac_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    38 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_814bac9f, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          62u },  /* [Global PduRDestPdu: VCU_EXV_2_oLIN00_2e4da991_Tx]                                       */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_EXV_2_oLIN00_2e4da991_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    39 */  CanIfConf_CanIfTxPduCfg_VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_d2142187_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          78u },  /* [Global PduRDestPdu: VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx]    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    40 */  CanIfConf_CanIfTxPduCfg_VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_52710e60_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           9u },  /* [Global PduRDestPdu: VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx]    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    41 */         CanIfConf_CanIfTxPduCfg_VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_7a39d019_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          14u },  /* [Global PduRDestPdu: VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    42 */         CanIfConf_CanIfTxPduCfg_VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_033d9a67_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          79u },  /* [Global PduRDestPdu: VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx]           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    43 */ CanIfConf_CanIfTxPduCfg_VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_bd173cc2_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          72u },  /* [Global PduRDestPdu: VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx]   */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    44 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_d60e946c, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          75u },  /* [Global PduRDestPdu: VCU_SVA_CMD_oLIN00_89e2bb7b_Tx]                                     */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_SVA_CMD_oLIN00_89e2bb7b_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    45 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_fc783169_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          50u },  /* [Global PduRDestPdu: VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    46 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_c296ace0_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           4u },  /* [Global PduRDestPdu: VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    47 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_987e20b2_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          16u },  /* [Global PduRDestPdu: VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    48 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_a690bd3b_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          74u },  /* [Global PduRDestPdu: VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    49 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_347412df_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          69u },  /* [Global PduRDestPdu: VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
    /* Index    DestHnd                                                                                   Direction                      LockRomIdx  MaxPduLength  MmRomIdx  RmDestRomIdx        Comment                                                                                              Referable Keys */
  { /*    50 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_0a9a8f56_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           8u },  /* [Global PduRDestPdu: VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    51 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_50720304_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,           6u },  /* [Global PduRDestPdu: VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    52 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_6e9c9e8d_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          36u },  /* [Global PduRDestPdu: VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    53 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_6aaab333_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          39u },  /* [Global PduRDestPdu: VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    54 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_54442eba_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          24u },  /* [Global PduRDestPdu: VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    55 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_17778821_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          26u },  /* [Global PduRDestPdu: VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    56 */                      CanIfConf_CanIfTxPduCfg_VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_299915a8_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          55u },  /* [Global PduRDestPdu: VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    57 */                              ComConf_ComIPdu_VcuCan03RxMsg1_oTC37X_VCU_CAN03_77e3a75f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          35u },  /* [Global PduRDestPdu: VcuCan03RxMsg1_oTC37X_VCU_CAN03_77e3a75f_Rx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan03RxMsg1_oTC37X_VCU_CAN03_77e3a75f_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    58 */                              ComConf_ComIPdu_VcuCan03RxMsg2_oTC37X_VCU_CAN03_9d657a3d_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          70u },  /* [Global PduRDestPdu: VcuCan03RxMsg2_oTC37X_VCU_CAN03_9d657a3d_Rx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan03RxMsg2_oTC37X_VCU_CAN03_9d657a3d_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    59 */                      CanIfConf_CanIfTxPduCfg_VcuCan03TxMsg1_oTC37X_VCU_CAN03_b4f8e3c0_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          47u },  /* [Global PduRDestPdu: VcuCan03TxMsg1_oTC37X_VCU_CAN03_c0767973_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan03TxMsg1_oTC37X_VCU_CAN03_c0767973_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    60 */                      CanIfConf_CanIfTxPduCfg_VcuCan03TxMsg2_oTC37X_VCU_CAN03_f7cb455b_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          71u },  /* [Global PduRDestPdu: VcuCan03TxMsg2_oTC37X_VCU_CAN03_0942627e_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan03TxMsg2_oTC37X_VCU_CAN03_0942627e_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    61 */                              ComConf_ComIPdu_VcuCan12RxMsg3_oTC37X_VCU_CAN12_38853822_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          66u },  /* [Global PduRDestPdu: VcuCan12RxMsg3_oTC37X_VCU_CAN12_38853822_Rx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan12RxMsg3_oTC37X_VCU_CAN12_38853822_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    62 */                              ComConf_ComIPdu_VcuCan12RxMsg4_oTC37X_VCU_CAN12_d9ab3246_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           5u },  /* [Global PduRDestPdu: VcuCan12RxMsg4_oTC37X_VCU_CAN12_d9ab3246_Rx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan12RxMsg4_oTC37X_VCU_CAN12_d9ab3246_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    63 */                      CanIfConf_CanIfTxPduCfg_VcuCan12TxMsg1_oTC37X_VCU_CAN12_a82524bb_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          48u },  /* [Global PduRDestPdu: VcuCan12TxMsg1_oTC37X_VCU_CAN12_2c92f390_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan12TxMsg1_oTC37X_VCU_CAN12_2c92f390_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    64 */                      CanIfConf_CanIfTxPduCfg_VcuCan12TxMsg2_oTC37X_VCU_CAN12_eb168220_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          38u },  /* [Global PduRDestPdu: VcuCan12TxMsg2_oTC37X_VCU_CAN12_e5a6e89d_Tx]                        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan12TxMsg2_oTC37X_VCU_CAN12_e5a6e89d_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    65 */                  CanIfConf_CanIfTxPduCfg_VcuMeasurementMsg0_oTC37X_VCU_CAN01_b3a7d237_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          68u },  /* [Global PduRDestPdu: VcuMeasurementMsg0_oTC37X_VCU_CAN01_d96481d0_Tx]                    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuMeasurementMsg0_oTC37X_VCU_CAN01_d96481d0_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    66 */                               ComConf_ComIPdu_VcuRxCtrlMsg0_oTC37X_VCU_CAN01_b24a2ab4_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,           0u },  /* [Global PduRDestPdu: VcuRxCtrlMsg0_oTC37X_VCU_CAN01_b24a2ab4_Rx]                         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxCtrlMsg0_oTC37X_VCU_CAN01_b24a2ab4_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    67 */                               ComConf_ComIPdu_VcuRxCtrlMsg1_oTC37X_VCU_CAN01_5d189c55_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          25u },  /* [Global PduRDestPdu: VcuRxCtrlMsg1_oTC37X_VCU_CAN01_5d189c55_Rx]                         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxCtrlMsg1_oTC37X_VCU_CAN01_5d189c55_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    68 */                               ComConf_ComIPdu_VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b79e4137_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          85u },  /* [Global PduRDestPdu: VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b79e4137_Rx]                         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b79e4137_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    69 */                                   ComConf_ComIPdu_VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          42u },  /* [Global PduRDestPdu: VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx]                             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    70 */                                   ComConf_ComIPdu_VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          53u },  /* [Global PduRDestPdu: VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx]                             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    71 */                                   ComConf_ComIPdu_VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          27u },  /* [Global PduRDestPdu: VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx]                             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    72 */                                   ComConf_ComIPdu_VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          89u },  /* [Global PduRDestPdu: VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx]                             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    73 */                         CanIfConf_CanIfTxPduCfg_VcuTxIoMsg1_oTC37X_VCU_CAN00_644aaa1f_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          64u },  /* [Global PduRDestPdu: VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx]                           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    74 */                         CanIfConf_CanIfTxPduCfg_VcuTxIoMsg2_oTC37X_VCU_CAN00_0c9644c1_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          29u },  /* [Global PduRDestPdu: VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx]                           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    75 */                         CanIfConf_CanIfTxPduCfg_VcuTxIoMsg3_oTC37X_VCU_CAN00_2b221e8b_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          17u },  /* [Global PduRDestPdu: VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx]                           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    76 */                         CanIfConf_CanIfTxPduCfg_VcuTxIoMsg4_oTC37X_VCU_CAN00_dd2f997d_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          12u },  /* [Global PduRDestPdu: VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx]                           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    77 */                         CanIfConf_CanIfTxPduCfg_VcuTxIoMsg5_oTC37X_VCU_CAN00_fa9bc337_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          54u },  /* [Global PduRDestPdu: VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx]                           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    78 */                         CanIfConf_CanIfTxPduCfg_VcuTxIoMsg6_oTC37X_VCU_CAN00_92472de9_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          18u },  /* [Global PduRDestPdu: VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx]                           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    79 */                         CanIfConf_CanIfTxPduCfg_VcuTxIoMsg7_oTC37X_VCU_CAN00_b5f377a3_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          56u },  /* [Global PduRDestPdu: VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx]                           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    80 */                         CanIfConf_CanIfTxPduCfg_VcuTxIoMsg8_oTC37X_VCU_CAN00_a52d2444_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          19u },  /* [Global PduRDestPdu: VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx]                           */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    81 */                           CanIfConf_CanIfTxPduCfg_VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          60u },  /* [Global PduRDestPdu: VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx]                             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    82 */                           CanIfConf_CanIfTxPduCfg_VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       0u,          44u },  /* [Global PduRDestPdu: VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx]                             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx, /ActiveEcuC/PduR/CanIf, PduRSinglePartitionDummy] */
  { /*    83 */                                       ComConf_ComIPdu_Vcu_Lin0_RxMsg1_oLIN01_24780c64_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          10u },  /* [Global PduRDestPdu: Vcu_Lin0_RxMsg1_oLIN01_24780c64_Rx]                                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_RxMsg1_oLIN01_24780c64_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    84 */                                       ComConf_ComIPdu_Vcu_Lin0_RxMsg2_oLIN01_aaf70b87_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          84u },  /* [Global PduRDestPdu: Vcu_Lin0_RxMsg2_oLIN01_aaf70b87_Rx]                                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_RxMsg2_oLIN01_aaf70b87_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    85 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_76dd5725, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          93u },  /* [Global PduRDestPdu: Vcu_Lin0_TxMsg1_oLIN01_02277a36_Tx]                                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_TxMsg1_oLIN01_02277a36_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    86 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_87e9e0e9, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,           2u },  /* [Global PduRDestPdu: Vcu_Lin0_TxMsg2_oLIN01_74c2430b_Tx]                                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_TxMsg2_oLIN01_74c2430b_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    87 */                                       ComConf_ComIPdu_Vcu_Lin3_RxMsg1_oLIN02_ac0c37a7_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          58u },  /* [Global PduRDestPdu: Vcu_Lin3_RxMsg1_oLIN02_ac0c37a7_Rx]                                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin3_RxMsg1_oLIN02_ac0c37a7_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    88 */                                       ComConf_ComIPdu_Vcu_Lin3_RxMsg2_oLIN02_22833044_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       2u,          28u },  /* [Global PduRDestPdu: Vcu_Lin3_RxMsg2_oLIN02_22833044_Rx]                                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin3_RxMsg2_oLIN02_22833044_Rx, /ActiveEcuC/PduR/Com, PduRSinglePartitionDummy] */
  { /*    89 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_49b2f4e6, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          52u },  /* [Global PduRDestPdu: Vcu_Lin3_TxMsg1_oLIN02_f647ba66_Tx]                                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin3_TxMsg1_oLIN02_f647ba66_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    90 */                                                 LinIfConf_LinIfTxPdu_LinIfTxPdu_21a8fa18, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       4u,          21u },  /* [Global PduRDestPdu: Vcu_Lin3_TxMsg2_oLIN02_80a2835b_Tx]                                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin3_TxMsg2_oLIN02_80a2835b_Tx, /ActiveEcuC/PduR/LinIf, PduRSinglePartitionDummy] */
  { /*    91 */      DcmConf_DcmDslProtocolRx_Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx_f99a7a58, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           7u,       3u,          32u },  /* [Global PduRDestPdu: Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx]                  */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_21e26bac_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*    92 */       DcmConf_DcmDslProtocolRx_Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx_7ba0ca16, PDUR_RX_DIRECTIONOFRMGDESTROM,         0u,           8u,       3u,          61u },  /* [Global PduRDestPdu: Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx]                   */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_d561dcee_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*    93 */                                               CanTpConf_CanTpTxNSdu_CanTpTxNSdu_fe7a15ff, PDUR_TX_DIRECTIONOFRMGDESTROM,         0u,           8u,       1u,          15u }   /* [Global PduRDestPdu: Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx]                      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Uds_Response_oTC37X_VCU_CAN00_39638a1a_Tx, /ActiveEcuC/PduR/CanTp, PduRSinglePartitionDummy] */
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
CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[94] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TriggerTransmitSupported  LockRomIdx  MmRomIdx  RmDestRomStartIdx  SrcHnd                                                                                 Comment                                       Referable Keys */
  { /*     0 */                    FALSE,         0u,       0u,               67u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9eae4558] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_01_oATOM_CANFD_Matrix_CH_V600_202502_1343b9ef_Rx/PduRSrcPdu_9eae4558] */
  { /*     1 */                    FALSE,         0u,       0u,                7u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_0dbe25ba] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_02_oATOM_CANFD_Matrix_CH_V600_202502_8a035e80_Rx/PduRSrcPdu_0dbe25ba] */
  { /*     2 */                    FALSE,         0u,       0u,               90u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f767588b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ACU_info_oATOM_CANFD_Matrix_CH_V600_202502_83006605_Rx/PduRSrcPdu_f767588b] */
  { /*     3 */                    FALSE,         0u,       0u,               37u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_56f39b3b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_9c78bb9f_Rx/PduRSrcPdu_56f39b3b] */
  { /*     4 */                    FALSE,         0u,       0u,               43u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_686bd310] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_aeea498e_Rx/PduRSrcPdu_686bd310] */
  { /*     5 */                    FALSE,         0u,       0u,               86u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_d84c121b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c0dbb601_Rx/PduRSrcPdu_d84c121b] */
  { /*     6 */                    FALSE,         0u,       0u,               77u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_bc9c1fec] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_599b516e_Rx/PduRSrcPdu_bc9c1fec] */
  { /*     7 */                    FALSE,         0u,       0u,                3u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_08ea31b4] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/ADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_8a75132b_Rx/PduRSrcPdu_08ea31b4] */
  { /*     8 */                    FALSE,         0u,       4u,               80u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c3f2be6b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV2_Status_oLIN00_7fcf9f75_Rx/PduRSrcPdu_c3f2be6b] */
  { /*     9 */                    FALSE,         0u,       4u,               49u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_718a1cfb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_1_VCU_oLIN00_366267d6_Rx/PduRSrcPdu_718a1cfb] */
  { /*    10 */                    FALSE,         0u,       4u,               76u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_b894d38e] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EXV_2_VCU_oLIN00_85f64a15_Rx/PduRSrcPdu_b894d38e] */
  { /*    11 */                    FALSE,         0u,       4u,               73u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_aa2a3f7d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp01_oLIN00_d50f5fa3_Rx/PduRSrcPdu_aa2a3f7d] */
  { /*    12 */                    FALSE,         0u,       4u,               57u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_90a9658c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/HVCH_Rsp02_oLIN00_a3ea669e_Rx/PduRSrcPdu_90a9658c] */
  { /*    13 */                    FALSE,         0u,       0u,               82u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_ca3eaa8a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_205c1446_Rx/PduRSrcPdu_ca3eaa8a] */
  { /*    14 */                    FALSE,         0u,       0u,               20u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_283e282c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_8feeb71a_Rx/PduRSrcPdu_283e282c] */
  { /*    15 */                    FALSE,         0u,       0u,               83u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_d09902f0] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_acfe14e2_Rx/PduRSrcPdu_d09902f0] */
  { /*    16 */                    FALSE,         0u,       0u,               51u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_77b4603c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_35bef38d_Rx/PduRSrcPdu_77b4603c] */
  { /*    17 */                    FALSE,         0u,       0u,               11u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_12481f07] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_f451ac97_Rx/PduRSrcPdu_12481f07] */
  { /*    18 */                    FALSE,         0u,       0u,               46u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_6a5d743a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_dc4e3b12_Rx/PduRSrcPdu_6a5d743a] */
  { /*    19 */                    FALSE,         0u,       0u,               41u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_65adbba1] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_84e18367_Rx/PduRSrcPdu_65adbba1] */
  { /*    20 */                    FALSE,         0u,       0u,               40u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_629168fc] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_94259583_Rx/PduRSrcPdu_629168fc] */
  { /*    21 */                    FALSE,         0u,       0u,               34u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_4e239512] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_df4c437b_Rx/PduRSrcPdu_4e239512] */
  { /*    22 */                    FALSE,         0u,       0u,               91u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_fcecab79] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_cdf72100_Rx/PduRSrcPdu_fcecab79] */
  { /*    23 */                    FALSE,         0u,       0u,               81u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_ca150190] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/IBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_54b7c66f_Rx/PduRSrcPdu_ca150190] */
  { /*    24 */                    FALSE,         0u,       4u,               65u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9a742e46] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP2_Sts_oLIN00_200c907c_Rx/PduRSrcPdu_9a742e46] */
  { /*    25 */                    FALSE,         0u,       4u,               30u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_43cea622] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP3_Sts_oLIN00_4e808b3d_Rx/PduRSrcPdu_43cea622] */
  { /*    26 */                    FALSE,         0u,       0u,               22u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_316b9b30] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SGW_17_oATOM_CANFD_Matrix_CH_V600_202502_3a9eb4a2_Rx/PduRSrcPdu_316b9b30] */
  { /*    27 */                    FALSE,         0u,       4u,               13u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_166cd16c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/SVA_VCU_STD_oLIN00_4f0795ef_Rx/PduRSrcPdu_166cd16c] */
  { /*    28 */                    FALSE,         0u,       0u,               35u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_4e610413] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03RxMsg1_oTC37X_VCU_CAN03_4dd213bb_Rx/PduRSrcPdu_4e610413] */
  { /*    29 */                    FALSE,         0u,       0u,               70u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_a2204cbf] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03RxMsg2_oTC37X_VCU_CAN03_84e608b6_Rx/PduRSrcPdu_a2204cbf] */
  { /*    30 */                    FALSE,         0u,       0u,               66u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9d116735] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12RxMsg3_oTC37X_VCU_CAN12_2f1174ae_Rx/PduRSrcPdu_9d116735] */
  { /*    31 */                    FALSE,         0u,       0u,                5u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_0a95646f] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12RxMsg4_oTC37X_VCU_CAN12_211bb20e_Rx/PduRSrcPdu_0a95646f] */
  { /*    32 */                    FALSE,         0u,       0u,                0u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_01131484] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg0_oTC37X_VCU_CAN01_3715838b_Rx/PduRSrcPdu_01131484] */
  { /*    33 */                    FALSE,         0u,       0u,               25u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_35c74fdb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg1_oTC37X_VCU_CAN01_70067570_Rx/PduRSrcPdu_35c74fdb] */
  { /*    34 */                    FALSE,         0u,       0u,               85u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_d7cb99e6] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxCtrlMsg2_oTC37X_VCU_CAN01_b9326e7d_Rx/PduRSrcPdu_d7cb99e6] */
  { /*    35 */                    FALSE,         0u,       0u,               42u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_6711bd67] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg1_oTC37X_VCU_CAN00_4589bbed_Rx/PduRSrcPdu_6711bd67] */
  { /*    36 */                    FALSE,         0u,       0u,               53u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_803efadc] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg2_oTC37X_VCU_CAN00_8cbda0e0_Rx/PduRSrcPdu_803efadc] */
  { /*    37 */                    FALSE,         0u,       0u,               27u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3905054b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg3_oTC37X_VCU_CAN01_5bb4c01a_Rx/PduRSrcPdu_3905054b] */
  { /*    38 */                    FALSE,         0u,       0u,               89u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f5b46736] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuRxMsg4_oTC37X_VCU_CAN01_55be06ba_Rx/PduRSrcPdu_f5b46736] */
  { /*    39 */                    FALSE,         0u,       4u,               10u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_12331c6c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg1_oLIN01_079b7478_Rx/PduRSrcPdu_12331c6c] */
  { /*    40 */                    FALSE,         0u,       4u,               84u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_d314568e] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_RxMsg2_oLIN01_717e4d45_Rx/PduRSrcPdu_d314568e] */
  { /*    41 */                    FALSE,         0u,       4u,               58u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_916b2dbb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_RxMsg1_oLIN02_f3fbb428_Rx/PduRSrcPdu_916b2dbb] */
  { /*    42 */                    FALSE,         0u,       4u,               28u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3b03dfb1] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_RxMsg2_oLIN02_851e8d15_Rx/PduRSrcPdu_3b03dfb1] */
  { /*    43 */                    FALSE,         0u,       1u,               32u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_4bac36fb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Func_Request_oTC37X_VCU_CAN00_455d4346_Rx/PduRSrcPdu_4bac36fb] */
  { /*    44 */                    FALSE,         0u,       1u,               61u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_925fbf89] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Phy_Request_oTC37X_VCU_CAN00_16119f6f_Rx/PduRSrcPdu_925fbf89] */
  { /*    45 */                     TRUE,         0u,       2u,                1u,                                    ComConf_ComIPdu_EDCU_EXV2_oLIN00_1f8750a5_Tx },  /* [PduRSrcPdu: PduRSrcPdu_0361509d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EDCU_EXV2_oLIN00_1f8750a5_Tx/PduRSrcPdu_0361509d] */
  { /*    46 */                     TRUE,         0u,       2u,               33u,                                      ComConf_ComIPdu_PMP_Cmd_oLIN00_3912b28b_Tx },  /* [PduRSrcPdu: PduRSrcPdu_4bd8719a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP_Cmd_oLIN00_3912b28b_Tx/PduRSrcPdu_4bd8719a] */
  { /*    47 */                     TRUE,         0u,       2u,               45u,                                 ComConf_ComIPdu_TCU_HVCH_Cmd_oLIN00_385d5651_Tx },  /* [PduRSrcPdu: PduRSrcPdu_6a17111c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/TCU_HVCH_Cmd_oLIN00_385d5651_Tx/PduRSrcPdu_6a17111c] */
  { /*    48 */                    FALSE,         0u,       2u,               92u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_fd46d90f] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_17bac731_Tx/PduRSrcPdu_fd46d90f] */
  { /*    49 */                    FALSE,         0u,       2u,               88u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_eeac2237] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_d824d0f9_Tx/PduRSrcPdu_eeac2237] */
    /* Index    TriggerTransmitSupported  LockRomIdx  MmRomIdx  RmDestRomStartIdx  SrcHnd                                                                                 Comment                                       Referable Keys */
  { /*    50 */                    FALSE,         0u,       2u,               87u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_ec53c477] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_db6dbd42_Tx/PduRSrcPdu_ec53c477] */
  { /*    51 */                    FALSE,         0u,       2u,               23u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_319663fb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_0d0df7a0_Tx/PduRSrcPdu_319663fb] */
  { /*    52 */                    FALSE,         0u,       2u,               63u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_961dd6a8] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_1208e503_Tx/PduRSrcPdu_961dd6a8] */
  { /*    53 */                    FALSE,         0u,       2u,               31u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_49c8436f] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d7fdb34f_Tx/PduRSrcPdu_49c8436f] */
  { /*    54 */                     TRUE,         0u,       2u,               59u,                                    ComConf_ComIPdu_VCU_EXV_1_oLIN00_50eec975_Tx },  /* [PduRSrcPdu: PduRSrcPdu_91ca29f5] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_1_oLIN00_50eec975_Tx/PduRSrcPdu_91ca29f5] */
  { /*    55 */                     TRUE,         0u,       2u,               62u,                                    ComConf_ComIPdu_VCU_EXV_2_oLIN00_de61ce96_Tx },  /* [PduRSrcPdu: PduRSrcPdu_9414725b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_2_oLIN00_de61ce96_Tx/PduRSrcPdu_9414725b] */
  { /*    56 */                    FALSE,         0u,       2u,               78u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c0ac8d7c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f29a9fcc_Tx/PduRSrcPdu_c0ac8d7c] */
  { /*    57 */                    FALSE,         0u,       2u,                9u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_108c7515] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_7949a1d5_Tx/PduRSrcPdu_108c7515] */
  { /*    58 */                    FALSE,         0u,       2u,               14u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_17f11187] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_4c086bc0_Tx/PduRSrcPdu_17f11187] */
  { /*    59 */                    FALSE,         0u,       2u,               79u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c3983958] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_0d9d0aa9_Tx/PduRSrcPdu_c3983958] */
  { /*    60 */                    FALSE,         0u,       2u,               72u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_a60cff81] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_20405e82_Tx/PduRSrcPdu_a60cff81] */
  { /*    61 */                     TRUE,         0u,       2u,               75u,                                  ComConf_ComIPdu_VCU_SVA_CMD_oLIN00_756d14f6_Tx },  /* [PduRSrcPdu: PduRSrcPdu_b06eca36] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_SVA_CMD_oLIN00_756d14f6_Tx/PduRSrcPdu_b06eca36] */
  { /*    62 */                    FALSE,         0u,       2u,               50u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_75ceb29f] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_5798df68_Tx/PduRSrcPdu_75ceb29f] */
  { /*    63 */                    FALSE,         0u,       2u,                4u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_0a2b7a00] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_b8ca6989_Tx/PduRSrcPdu_0a2b7a00] */
  { /*    64 */                    FALSE,         0u,       2u,               16u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_238e87f9] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_40b0bba8_Tx/PduRSrcPdu_238e87f9] */
  { /*    65 */                    FALSE,         0u,       2u,               74u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_ae15b571] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_afe20d49_Tx/PduRSrcPdu_ae15b571] */
  { /*    66 */                    FALSE,         0u,       2u,               69u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9fc32995] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_79c816e8_Tx/PduRSrcPdu_9fc32995] */
  { /*    67 */                    FALSE,         0u,       2u,                8u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_1008b467] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_969aa009_Tx/PduRSrcPdu_1008b467] */
  { /*    68 */                    FALSE,         0u,       2u,                6u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_0b6ac76d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_6ee07228_Tx/PduRSrcPdu_0b6ac76d] */
  { /*    69 */                    FALSE,         0u,       2u,               36u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_4fcbec42] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_81b2c4c9_Tx/PduRSrcPdu_4fcbec42] */
  { /*    70 */                    FALSE,         0u,       2u,               39u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_624e541b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_eedbf968_Tx/PduRSrcPdu_624e541b] */
  { /*    71 */                    FALSE,         0u,       2u,               24u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_350c260d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_01894f89_Tx/PduRSrcPdu_350c260d] */
  { /*    72 */                    FALSE,         0u,       2u,               26u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_37fea4b2] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_eb0f92eb_Tx/PduRSrcPdu_37fea4b2] */
  { /*    73 */                    FALSE,         0u,       2u,               55u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_88d7da53] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_045d240a_Tx/PduRSrcPdu_88d7da53] */
  { /*    74 */                    FALSE,         0u,       2u,               47u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_6c0ea6d2] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03TxMsg1_oTC37X_VCU_CAN03_9a29d525_Tx/PduRSrcPdu_6c0ea6d2] */
  { /*    75 */                    FALSE,         0u,       2u,               71u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_a59b3a32] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03TxMsg2_oTC37X_VCU_CAN03_70af0847_Tx/PduRSrcPdu_a59b3a32] */
  { /*    76 */                    FALSE,         0u,       2u,               48u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_6cefc258] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12TxMsg1_oTC37X_VCU_CAN12_d09b21db_Tx/PduRSrcPdu_6cefc258] */
  { /*    77 */                    FALSE,         0u,       2u,               38u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_573a7055] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12TxMsg2_oTC37X_VCU_CAN12_3a1dfcb9_Tx/PduRSrcPdu_573a7055] */
  { /*    78 */                    FALSE,         0u,       2u,               68u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9fbb06ad] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuMeasurementMsg0_oTC37X_VCU_CAN01_0deb23c3_Tx/PduRSrcPdu_9fbb06ad] */
  { /*    79 */                    FALSE,         0u,       2u,               64u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_96b222db] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx/PduRSrcPdu_96b222db] */
  { /*    80 */                    FALSE,         0u,       2u,               29u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3ef2d11c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx/PduRSrcPdu_3ef2d11c] */
  { /*    81 */                    FALSE,         0u,       2u,               17u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_23c89b9b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx/PduRSrcPdu_23c89b9b] */
  { /*    82 */                    FALSE,         0u,       2u,               12u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_15ef524a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx/PduRSrcPdu_15ef524a] */
  { /*    83 */                    FALSE,         0u,       2u,               54u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_886ac60a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx/PduRSrcPdu_886ac60a] */
  { /*    84 */                    FALSE,         0u,       2u,               18u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_275934e8] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx/PduRSrcPdu_275934e8] */
  { /*    85 */                    FALSE,         0u,       2u,               56u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_8c9b3cfc] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx/PduRSrcPdu_8c9b3cfc] */
  { /*    86 */                    FALSE,         0u,       2u,               19u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_27dcf988] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx/PduRSrcPdu_27dcf988] */
  { /*    87 */                    FALSE,         0u,       2u,               60u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_91d52164] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164] */
  { /*    88 */                    FALSE,         0u,       2u,               44u,                                                        PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_69924b1b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b] */
  { /*    89 */                     TRUE,         0u,       2u,               93u,                              ComConf_ComIPdu_Vcu_Lin0_TxMsg1_oLIN01_849dd3b9_Tx },  /* [PduRSrcPdu: PduRSrcPdu_ff5e60c1] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg1_oLIN01_849dd3b9_Tx/PduRSrcPdu_ff5e60c1] */
  { /*    90 */                     TRUE,         0u,       2u,                2u,                              ComConf_ComIPdu_Vcu_Lin0_TxMsg2_oLIN01_0a12d45a_Tx },  /* [PduRSrcPdu: PduRSrcPdu_0417dd35] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg2_oLIN01_0a12d45a_Tx/PduRSrcPdu_0417dd35] */
  { /*    91 */                     TRUE,         0u,       2u,               52u,                              ComConf_ComIPdu_Vcu_Lin3_TxMsg1_oLIN02_0ce9e87a_Tx },  /* [PduRSrcPdu: PduRSrcPdu_78b4954c] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_TxMsg1_oLIN02_0ce9e87a_Tx/PduRSrcPdu_78b4954c] */
  { /*    92 */                     TRUE,         0u,       2u,               21u,                              ComConf_ComIPdu_Vcu_Lin3_TxMsg2_oLIN02_8266ef99_Tx },  /* [PduRSrcPdu: PduRSrcPdu_2efa4b01] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_TxMsg2_oLIN02_8266ef99_Tx/PduRSrcPdu_2efa4b01] */
  { /*    93 */                    FALSE,         0u,       3u,               15u, DcmConf_DcmDslProtocolTx_Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx_666acd3e }   /* [PduRSrcPdu: PduRSrcPdu_1a8748e9] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9] */
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
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[49] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmSrcRomIdx  RmTransmitFctPtrIdx        Referable Keys */
  { /*     0 */         45u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/EDCU_EXV2_oLIN00_1f8750a5_Tx/PduRSrcPdu_0361509d] */
  { /*     1 */         46u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PMP_Cmd_oLIN00_3912b28b_Tx/PduRSrcPdu_4bd8719a] */
  { /*     2 */         47u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/TCU_HVCH_Cmd_oLIN00_385d5651_Tx/PduRSrcPdu_6a17111c] */
  { /*     3 */         48u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_17bac731_Tx/PduRSrcPdu_fd46d90f] */
  { /*     4 */         49u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_d824d0f9_Tx/PduRSrcPdu_eeac2237] */
  { /*     5 */         50u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_db6dbd42_Tx/PduRSrcPdu_ec53c477] */
  { /*     6 */         51u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_0d0df7a0_Tx/PduRSrcPdu_319663fb] */
  { /*     7 */         52u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_1208e503_Tx/PduRSrcPdu_961dd6a8] */
  { /*     8 */         53u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_d7fdb34f_Tx/PduRSrcPdu_49c8436f] */
  { /*     9 */         54u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_1_oLIN00_50eec975_Tx/PduRSrcPdu_91ca29f5] */
  { /*    10 */         55u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_EXV_2_oLIN00_de61ce96_Tx/PduRSrcPdu_9414725b] */
  { /*    11 */         56u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_f29a9fcc_Tx/PduRSrcPdu_c0ac8d7c] */
  { /*    12 */         57u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_7949a1d5_Tx/PduRSrcPdu_108c7515] */
  { /*    13 */         58u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_4c086bc0_Tx/PduRSrcPdu_17f11187] */
  { /*    14 */         59u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_0d9d0aa9_Tx/PduRSrcPdu_c3983958] */
  { /*    15 */         60u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_20405e82_Tx/PduRSrcPdu_a60cff81] */
  { /*    16 */         61u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VCU_SVA_CMD_oLIN00_756d14f6_Tx/PduRSrcPdu_b06eca36] */
  { /*    17 */         62u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_5798df68_Tx/PduRSrcPdu_75ceb29f] */
  { /*    18 */         63u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_b8ca6989_Tx/PduRSrcPdu_0a2b7a00] */
  { /*    19 */         64u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_40b0bba8_Tx/PduRSrcPdu_238e87f9] */
  { /*    20 */         65u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_afe20d49_Tx/PduRSrcPdu_ae15b571] */
  { /*    21 */         66u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_79c816e8_Tx/PduRSrcPdu_9fc32995] */
  { /*    22 */         67u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_969aa009_Tx/PduRSrcPdu_1008b467] */
  { /*    23 */         68u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_6ee07228_Tx/PduRSrcPdu_0b6ac76d] */
  { /*    24 */         69u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_81b2c4c9_Tx/PduRSrcPdu_4fcbec42] */
  { /*    25 */         70u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_eedbf968_Tx/PduRSrcPdu_624e541b] */
  { /*    26 */         71u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_01894f89_Tx/PduRSrcPdu_350c260d] */
  { /*    27 */         72u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_eb0f92eb_Tx/PduRSrcPdu_37fea4b2] */
  { /*    28 */         73u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_045d240a_Tx/PduRSrcPdu_88d7da53] */
  { /*    29 */         74u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03TxMsg1_oTC37X_VCU_CAN03_9a29d525_Tx/PduRSrcPdu_6c0ea6d2] */
  { /*    30 */         75u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan03TxMsg2_oTC37X_VCU_CAN03_70af0847_Tx/PduRSrcPdu_a59b3a32] */
  { /*    31 */         76u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12TxMsg1_oTC37X_VCU_CAN12_d09b21db_Tx/PduRSrcPdu_6cefc258] */
  { /*    32 */         77u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuCan12TxMsg2_oTC37X_VCU_CAN12_3a1dfcb9_Tx/PduRSrcPdu_573a7055] */
  { /*    33 */         78u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuMeasurementMsg0_oTC37X_VCU_CAN01_0deb23c3_Tx/PduRSrcPdu_9fbb06ad] */
  { /*    34 */         79u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx/PduRSrcPdu_96b222db] */
  { /*    35 */         80u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx/PduRSrcPdu_3ef2d11c] */
  { /*    36 */         81u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx/PduRSrcPdu_23c89b9b] */
  { /*    37 */         82u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx/PduRSrcPdu_15ef524a] */
  { /*    38 */         83u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx/PduRSrcPdu_886ac60a] */
  { /*    39 */         84u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx/PduRSrcPdu_275934e8] */
  { /*    40 */         85u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx/PduRSrcPdu_8c9b3cfc] */
  { /*    41 */         86u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx/PduRSrcPdu_27dcf988] */
  { /*    42 */         87u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx/PduRSrcPdu_91d52164] */
  { /*    43 */         88u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx/PduRSrcPdu_69924b1b] */
  { /*    44 */         89u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg1_oLIN01_849dd3b9_Tx/PduRSrcPdu_ff5e60c1] */
  { /*    45 */         90u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin0_TxMsg2_oLIN01_0a12d45a_Tx/PduRSrcPdu_0417dd35] */
  { /*    46 */         91u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_TxMsg1_oLIN02_0ce9e87a_Tx/PduRSrcPdu_78b4954c] */
  { /*    47 */         92u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Lin3_TxMsg2_oLIN02_8266ef99_Tx/PduRSrcPdu_2efa4b01] */
  { /*    48 */         93u,                  1u }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Vcu_Uds_Response_oTC37X_VCU_CAN00_4d111be6_Tx/PduRSrcPdu_1a8748e9] */
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
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[48] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomIdx        Referable Keys */
  { /*     0 */            8u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/EDCU_EXV2_oLIN00_18b050dc_Tx] */
  { /*     1 */           27u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/PMP_Cmd_oLIN00_6d889c97_Tx] */
  { /*     2 */           30u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TCU_HVCH_Cmd_oLIN00_ddc31229_Tx] */
  { /*     3 */           31u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_02_oATOM_CANFD_Matrix_CH_V600_202502_b9b0de03_Tx] */
  { /*     4 */           32u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_03_oATOM_CANFD_Matrix_CH_V600_202502_785f8119_Tx] */
  { /*     5 */           33u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_04_oATOM_CANFD_Matrix_CH_V600_202502_5040169c_Tx] */
  { /*     6 */           34u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_3cf928f4_Tx] */
  { /*     7 */           35u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_8dd4382b_Tx] */
  { /*     8 */           36u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_e79830d3_Tx] */
  { /*     9 */           37u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_EXV_1_oLIN00_58a890ac_Tx] */
  { /*    10 */           38u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_EXV_2_oLIN00_2e4da991_Tx] */
  { /*    11 */           39u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_ad7bde1a_Tx] */
  { /*    12 */           40u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_343b3975_Tx] */
  { /*    13 */           41u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_72f519e8_Tx] */
  { /*    14 */           42u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_9c2fbb06_Tx] */
  { /*    15 */           43u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_f8a23add_Tx] */
  { /*    16 */           44u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VCU_SVA_CMD_oLIN00_89e2bb7b_Tx] */
  { /*    17 */           45u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG0Msg0_oTC37X_VCU_CAN01_0847dbfd_Tx] */
  { /*    18 */           46u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG0Msg1_oTC37X_VCU_CAN01_4f542d06_Tx] */
  { /*    19 */           47u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG1Msg0_oTC37X_VCU_CAN01_613ed098_Tx] */
  { /*    20 */           48u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG1Msg1_oTC37X_VCU_CAN01_262d2663_Tx] */
  { /*    21 */           49u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG2Msg0_oTC37X_VCU_CAN01_dab5cd37_Tx] */
  { /*    22 */           50u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG2Msg1_oTC37X_VCU_CAN01_9da63bcc_Tx] */
  { /*    23 */           51u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG3Msg0_oTC37X_VCU_CAN01_b3ccc652_Tx] */
  { /*    24 */           52u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG3Msg1_oTC37X_VCU_CAN01_f4df30a9_Tx] */
  { /*    25 */           53u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG8Msg0_oTC37X_VCU_CAN01_f56d8c57_Tx] */
  { /*    26 */           54u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG8Msg1_oTC37X_VCU_CAN01_b27e7aac_Tx] */
  { /*    27 */           55u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG8Msg2_oTC37X_VCU_CAN01_7b4a61a1_Tx] */
  { /*    28 */           56u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuAdcTxG8Msg3_oTC37X_VCU_CAN01_3c59975a_Tx] */
  { /*    29 */           59u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan03TxMsg1_oTC37X_VCU_CAN03_c0767973_Tx] */
  { /*    30 */           60u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan03TxMsg2_oTC37X_VCU_CAN03_0942627e_Tx] */
  { /*    31 */           63u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan12TxMsg1_oTC37X_VCU_CAN12_2c92f390_Tx] */
  { /*    32 */           64u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuCan12TxMsg2_oTC37X_VCU_CAN12_e5a6e89d_Tx] */
  { /*    33 */           65u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuMeasurementMsg0_oTC37X_VCU_CAN01_d96481d0_Tx] */
  { /*    34 */           73u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg1_oTC37X_VCU_CAN00_869e33bc_Tx] */
  { /*    35 */           74u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg2_oTC37X_VCU_CAN00_4faa28b1_Tx] */
  { /*    36 */           75u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg3_oTC37X_VCU_CAN00_08b9de4a_Tx] */
  { /*    37 */           76u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg4_oTC37X_VCU_CAN00_06b318ea_Tx] */
  { /*    38 */           77u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg5_oTC37X_VCU_CAN00_41a0ee11_Tx] */
  { /*    39 */           78u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg6_oTC37X_VCU_CAN00_8894f51c_Tx] */
  { /*    40 */           79u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg7_oTC37X_VCU_CAN00_cf8703e7_Tx] */
  { /*    41 */           80u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxIoMsg8_oTC37X_VCU_CAN00_9481785c_Tx] */
  { /*    42 */           81u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg1_oTC37X_VCU_CAN00_c82dd125_Tx] */
  { /*    43 */           82u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VcuTxMsg2_oTC37X_VCU_CAN00_0119ca28_Tx] */
  { /*    44 */           85u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_TxMsg1_oLIN01_02277a36_Tx] */
  { /*    45 */           86u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin0_TxMsg2_oLIN01_74c2430b_Tx] */
  { /*    46 */           89u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin3_TxMsg1_oLIN02_f647ba66_Tx] */
  { /*    47 */           90u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/Vcu_Lin3_TxMsg2_oLIN02_80a2835b_Tx] */
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

