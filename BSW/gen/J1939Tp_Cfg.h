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
 *              File: J1939Tp_Cfg.h
 *   Generation Time: 2025-09-17 15:11:04
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#if !(defined J1939TP_CFG_H)
# define J1939TP_CFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

# include "J1939Tp_Types.h"


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

#ifndef J1939TP_USE_DUMMY_STATEMENT
#define J1939TP_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef J1939TP_DUMMY_STATEMENT
#define J1939TP_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef J1939TP_DUMMY_STATEMENT_CONST
#define J1939TP_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef J1939TP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define J1939TP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef J1939TP_ATOMIC_VARIABLE_ACCESS
#define J1939TP_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef J1939TP_PROCESSOR_TC377T
#define J1939TP_PROCESSOR_TC377T
#endif
#ifndef J1939TP_COMP_TASKING
#define J1939TP_COMP_TASKING
#endif
#ifndef J1939TP_GEN_GENERATOR_MSR
#define J1939TP_GEN_GENERATOR_MSR
#endif
#ifndef J1939TP_CPUTYPE_BITORDER_LSB2MSB
#define J1939TP_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef J1939TP_CONFIGURATION_VARIANT_PRECOMPILE
#define J1939TP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef J1939TP_CONFIGURATION_VARIANT_LINKTIME
#define J1939TP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef J1939TP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define J1939TP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef J1939TP_CONFIGURATION_VARIANT
#define J1939TP_CONFIGURATION_VARIANT J1939TP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef J1939TP_POSTBUILD_VARIANT_SUPPORT
#define J1939TP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define J1939TP_CFG_MAJOR_VERSION (1u)
#define J1939TP_CFG_MINOR_VERSION (6u)
#define J1939TP_CFG_PATCH_VERSION (0u)

#define J1939TP_DEV_ERROR_DETECT STD_ON  /**< /ActiveEcuC/J1939Tp/J1939TpGeneral[0:J1939TpSafeBswChecks] || /ActiveEcuC/J1939Tp/J1939TpGeneral[0:J1939TpDevErrorDetect] */

#define J1939TP_DEV_ERROR_REPORT STD_ON
#define J1939TP_RUNTIME_ERROR_REPORT STD_ON
#define J1939TP_VERSION_INFO_API STD_OFF

#define J1939TP_CANCELLATION_SUPPORT STD_OFF

#define J1939TP_CANIF_DLCCHECK STD_ON

#define J1939TP_ENABLED STD_ON
#define J1939TP_TX_ENABLED STD_ON
#define J1939TP_RX_ENABLED STD_OFF
#define J1939TP_DIRECT_ENABLED STD_OFF
#define J1939TP_DIRECT_TX_ENABLED STD_OFF
#define J1939TP_DIRECT_RX_ENABLED STD_OFF
#define J1939TP_BAM_ENABLED STD_ON
#define J1939TP_BAM_TX_ENABLED STD_ON
#define J1939TP_BAM_RX_ENABLED STD_OFF
#define J1939TP_CMDT_ENABLED STD_ON
#define J1939TP_CMDT_TX_ENABLED STD_ON
#define J1939TP_CMDT_RX_ENABLED STD_OFF
#define J1939TP_ETP_ENABLED STD_OFF
#define J1939TP_ETP_TX_ENABLED STD_OFF
#define J1939TP_ETP_RX_ENABLED STD_OFF
#define J1939TP_FPP_ENABLED STD_OFF
#define J1939TP_FPP_TX_ENABLED STD_OFF
#define J1939TP_FPP_RX_ENABLED STD_OFF



/**
 * \defgroup J1939TpHandleIdsTxN-SDUIDs Handle IDs of handle space Tx N-SDU IDs.
 * \brief Symbolic Name Values (SNVs) for Tx N-SDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939TpConf_J1939TpTxNSdu_BCP_oJ1939_bms_a9d1ea95_Tx          2u
#define J1939TpConf_J1939TpTxNSdu_BCS_oJ1939_bms_baf9d3e6_Tx          0u
#define J1939TpConf_J1939TpTxNSdu_BMT_oJ1939_bms_38156aba_Tx          5u
#define J1939TpConf_J1939TpTxNSdu_BMV_oJ1939_bms_25dabb18_Tx          1u
#define J1939TpConf_J1939TpTxNSdu_BRM_oJ1939_bms_e96b01db_Tx          4u
#define J1939TpConf_J1939TpTxNSdu_BSOC_oJ1939_bms_340842a2_Tx         3u
/**\} */





/**
 * \defgroup J1939TpHandleIdsTxN-PDUIDs Handle IDs of handle space Tx N-PDU IDs.
 * \brief Symbolic Name Values (SNVs) for Tx N-PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939TpConf_J1939TpTxCmNPdu_J1939TpTxCmNPdu_0f7dc027          0u
#define J1939TpConf_J1939TpTxCmNPdu_J1939TpTxCmNPdu_3c21c804          0u
#define J1939TpConf_J1939TpTxCmNPdu_J1939TpTxCmNPdu_6a2e8a3e          0u
#define J1939TpConf_J1939TpTxCmNPdu_J1939TpTxCmNPdu_962cab65          0u
#define J1939TpConf_J1939TpTxCmNPdu_J1939TpTxCmNPdu_dc318261          0u
#define J1939TpConf_J1939TpTxCmNPdu_J1939TpTxCmNPdu_e84075a6          0u
#define J1939TpConf_J1939TpTxDtNPdu_J1939TpTxDtNPdu_0f7dc027          1u
#define J1939TpConf_J1939TpTxDtNPdu_J1939TpTxDtNPdu_3c21c804          1u
#define J1939TpConf_J1939TpTxDtNPdu_J1939TpTxDtNPdu_6a2e8a3e          1u
#define J1939TpConf_J1939TpTxDtNPdu_J1939TpTxDtNPdu_962cab65          1u
#define J1939TpConf_J1939TpTxDtNPdu_J1939TpTxDtNPdu_dc318261          1u
#define J1939TpConf_J1939TpTxDtNPdu_J1939TpTxDtNPdu_e84075a6          1u
/**\} */



/**
 * \defgroup J1939TpHandleIdsRxN-PDUIDs Handle IDs of handle space Rx N-PDU IDs.
 * \brief Symbolic Name Values (SNVs) for Rx N-PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939TpConf_J1939TpRxFcNPdu_J1939TpRxFcNPdu_0f7dc027          0u
#define J1939TpConf_J1939TpRxFcNPdu_J1939TpRxFcNPdu_3c21c804          0u
#define J1939TpConf_J1939TpRxFcNPdu_J1939TpRxFcNPdu_6a2e8a3e          0u
#define J1939TpConf_J1939TpRxFcNPdu_J1939TpRxFcNPdu_962cab65          0u
#define J1939TpConf_J1939TpRxFcNPdu_J1939TpRxFcNPdu_dc318261          0u
#define J1939TpConf_J1939TpRxFcNPdu_J1939TpRxFcNPdu_e84075a6          0u
/**\} */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPCDataSwitches  J1939Tp Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define J1939TP_FINALMAGICNUMBER                                                                    STD_OFF  /**< Deactivateable: 'J1939Tp_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939TP_FPPRXSDUSEQUENCECOUNTER                                                             STD_OFF  /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_FPPTXSDUSEQUENCECOUNTER                                                             STD_OFF  /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_INITDATAHASHCODE                                                                    STD_OFF  /**< Deactivateable: 'J1939Tp_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939TP_MAINPERIOD                                                                          STD_ON
#define J1939TP_RXCHANNEL                                                                           STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939TP_COMMCHANNELOFRXCHANNEL                                                              STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.ComMChannel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXCANCELLATIONSUPPORTOFRXCHANNEL                                                    STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxCancellationSupport' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEINDENDIDXOFRXCHANNEL                                      STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL                                    STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEINDUSEDOFRXCHANNEL                                        STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXDAOFRXCHANNEL                                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxDa' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXDYNAMICBLOCKCALCULATIONOFRXCHANNEL                                                STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxDynamicBlockCalculation' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXDYNAMICBUFFERRATIOOFRXCHANNEL                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxDynamicBufferRatio' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXISOBUSCHANNELOFRXCHANNEL                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxIsobusChannel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXPACKETSPERBLOCKOFRXCHANNEL                                                        STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxPacketsPerBlock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXPROTOCOLTYPEOFRXCHANNEL                                                           STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxProtocolType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXRETRYSUPPORTOFRXCHANNEL                                                           STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxRetrySupport' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXSAOFRXCHANNEL                                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxSa' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_TXPDURXETPFCNPDUIDXOFRXCHANNEL                                                      STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxEtpFcNPduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_TXPDURXETPFCNPDUUSEDOFRXCHANNEL                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxEtpFcNPduUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_TXPDURXFCNPDUIDXOFRXCHANNEL                                                         STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxFcNPduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_TXPDURXFCNPDUUSEDOFRXCHANNEL                                                        STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxFcNPduUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXCHANNELRXNSDU                                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannelRxNSdu' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939TP_RXSDURXNSDUIDXOFRXCHANNELRXNSDU                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannelRxNSdu.RxSduRxNSduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEIND                                                       STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannelRxNSduRxNSduTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXPDU                                                                               STD_ON
#define J1939TP_INVALIDHNDOFRXPDU                                                                   STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_ONISOBUSOFRXPDU                                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.OnIsobus' Reason: 'the value of J1939Tp_OnIsobusOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_PDUFORMATOFRXPDU                                                                    STD_ON
#define J1939TP_PDUTYPEOFRXPDU                                                                      STD_ON
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU                                        STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndEndIdx' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU                                      STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndStartIdx' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEINDUSEDOFRXPDU                                          STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndUsed' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU                                                STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndEndIdx' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU                                              STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndStartIdx' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_RXPDURXSDURXSDUTABLEINDUSEDOFRXPDU                                                  STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndUsed' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU                                        STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU                                      STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFRXPDU                                          STD_ON
#define J1939TP_RXPDURXCHANNEL                                                                      STD_OFF  /**< Deactivateable: 'J1939Tp_RxPduRxChannel' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939TP_RXCHANNELRXCHANNELIDXOFRXPDURXCHANNEL                                               STD_OFF  /**< Deactivateable: 'J1939Tp_RxPduRxChannel.RxChannelRxChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEIND                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxPduRxChannelRxChannelTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXPDURXSDU                                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_RxPduRxSdu' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939TP_RXSDURXSDUIDXOFRXPDURXSDU                                                           STD_OFF  /**< Deactivateable: 'J1939Tp_RxPduRxSdu.RxSduRxSduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXPDURXSDURXSDUTABLEIND                                                             STD_OFF  /**< Deactivateable: 'J1939Tp_RxPduRxSduRxSduTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXPDUTXCHANNEL                                                                      STD_ON
#define J1939TP_TXCHANNELTXCHANNELIDXOFRXPDUTXCHANNEL                                               STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEIND                                                     STD_ON
#define J1939TP_RXSDU                                                                               STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939TP_FPPRXSDUSEQUENCECOUNTERIDXOFRXSDU                                                   STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.FppRxSduSequenceCounterIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_FPPRXSDUSEQUENCECOUNTERUSEDOFRXSDU                                                  STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.FppRxSduSequenceCounterUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_INVALIDHNDOFRXSDU                                                                   STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.InvalidHnd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_ISVARIABLEOFRXSDU                                                                   STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.IsVariable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_METADATALENGTHOFRXSDU                                                               STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.MetaDataLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_PGNOFRXSDU                                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.PGN' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_PDULENGTHOFRXSDU                                                                    STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.PduLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXCHANNELCHANNELIDXOFRXSDU                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.RxChannelChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXCHANNELCHANNELUSEDOFRXSDU                                                         STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.RxChannelChannelUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXSDUSTATEIDXOFRXSDU                                                                STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.RxSduStateIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_SDUIDOFRXSDU                                                                        STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.SduId' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_RXSDUSTATE                                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_RxSduState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_SIZEOFRXPDU                                                                         STD_ON
#define J1939TP_SIZEOFRXPDUTXCHANNEL                                                                STD_ON
#define J1939TP_SIZEOFRXPDUTXCHANNELTXCHANNELTABLEIND                                               STD_ON
#define J1939TP_SIZEOFTXCHANNEL                                                                     STD_ON
#define J1939TP_SIZEOFTXCHANNELTXNSDU                                                               STD_ON
#define J1939TP_SIZEOFTXCHANNELTXNSDUTXNSDUTABLEIND                                                 STD_ON
#define J1939TP_SIZEOFTXPDU                                                                         STD_ON
#define J1939TP_SIZEOFTXPDUSTATE                                                                    STD_ON
#define J1939TP_SIZEOFTXPDUTXCHANNEL                                                                STD_ON
#define J1939TP_SIZEOFTXPDUTXCHANNELTXCHANNELTABLEIND                                               STD_ON
#define J1939TP_SIZEOFTXSDU                                                                         STD_ON
#define J1939TP_SIZEOFTXSDUSTATE                                                                    STD_ON
#define J1939TP_TIME_BAM                                                                            STD_ON
#define J1939TP_TIME_FP                                                                             STD_ON
#define J1939TP_TIME_T1                                                                             STD_ON
#define J1939TP_TIME_T2                                                                             STD_ON
#define J1939TP_TIME_T3                                                                             STD_ON
#define J1939TP_TIME_T4                                                                             STD_ON
#define J1939TP_TIME_TH                                                                             STD_ON
#define J1939TP_TIME_TR                                                                             STD_ON
#define J1939TP_TXCHANNEL                                                                           STD_ON
#define J1939TP_COMMCHANNELOFTXCHANNEL                                                              STD_ON
#define J1939TP_TXCANCELLATIONSUPPORTOFTXCHANNEL                                                    STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxCancellationSupport' Reason: 'the value of J1939Tp_TxCancellationSupportOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEINDENDIDXOFTXCHANNEL                                      STD_ON
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL                                    STD_ON
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEINDUSEDOFTXCHANNEL                                        STD_ON
#define J1939TP_TXDAOFTXCHANNEL                                                                     STD_ON
#define J1939TP_TXDYNAMICBLOCKCALCULATIONOFTXCHANNEL                                                STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxDynamicBlockCalculation' Reason: 'the value of J1939Tp_TxDynamicBlockCalculationOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXISOBUSCHANNELOFTXCHANNEL                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxIsobusChannel' Reason: 'the value of J1939Tp_TxIsobusChannelOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXMAXPACKETSPERBLOCKOFTXCHANNEL                                                     STD_ON
#define J1939TP_TXPDUTXCMNPDUIDXOFTXCHANNEL                                                         STD_ON
#define J1939TP_TXPDUTXCMNPDUUSEDOFTXCHANNEL                                                        STD_ON
#define J1939TP_TXPDUTXDTNPDUIDXOFTXCHANNEL                                                         STD_ON
#define J1939TP_TXPDUTXDTNPDUUSEDOFTXCHANNEL                                                        STD_ON
#define J1939TP_TXPDUTXETPCMNPDUIDXOFTXCHANNEL                                                      STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpCmNPduIdx' Reason: 'the optional indirection is deactivated because TxPduTxEtpCmNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDUTXETPCMNPDUUSEDOFTXCHANNEL                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpCmNPduUsed' Reason: 'the optional indirection is deactivated because TxPduTxEtpCmNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDUTXETPDTNPDUIDXOFTXCHANNEL                                                      STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpDtNPduIdx' Reason: 'the optional indirection is deactivated because TxPduTxEtpDtNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDUTXETPDTNPDUUSEDOFTXCHANNEL                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpDtNPduUsed' Reason: 'the optional indirection is deactivated because TxPduTxEtpDtNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPRIOFTXCHANNEL                                                                    STD_ON
#define J1939TP_TXPROTOCOLTYPEOFTXCHANNEL                                                           STD_ON
#define J1939TP_TXRETRYSUPPORTOFTXCHANNEL                                                           STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxRetrySupport' Reason: 'the value of J1939Tp_TxRetrySupportOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXSAOFTXCHANNEL                                                                     STD_ON
#define J1939TP_TXVARPRIOFTXCHANNEL                                                                 STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxVarPri' Reason: 'the value of J1939Tp_TxVarPriOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXCHANNELTXNSDU                                                                     STD_ON
#define J1939TP_TXSDUTXNSDUIDXOFTXCHANNELTXNSDU                                                     STD_ON
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEIND                                                       STD_ON
#define J1939TP_TXCONFTIMEOUT                                                                       STD_ON
#define J1939TP_TXPDU                                                                               STD_ON
#define J1939TP_INVALIDHNDOFTXPDU                                                                   STD_OFF  /**< Deactivateable: 'J1939Tp_TxPdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_ONISOBUSOFTXPDU                                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_TxPdu.OnIsobus' Reason: 'the value of J1939Tp_OnIsobusOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_PDUIDOFTXPDU                                                                        STD_ON
#define J1939TP_PDUTYPEOFTXPDU                                                                      STD_ON
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU                                        STD_OFF  /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndEndIdx' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU                                      STD_OFF  /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndStartIdx' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEINDUSEDOFTXPDU                                          STD_OFF  /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndUsed' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDUSTATEIDXOFTXPDU                                                                STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU                                        STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU                                      STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFTXPDU                                          STD_ON
#define J1939TP_TXPDURXCHANNEL                                                                      STD_OFF  /**< Deactivateable: 'J1939Tp_TxPduRxChannel' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939TP_RXCHANNELRXCHANNELIDXOFTXPDURXCHANNEL                                               STD_OFF  /**< Deactivateable: 'J1939Tp_TxPduRxChannel.RxChannelRxChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEIND                                                     STD_OFF  /**< Deactivateable: 'J1939Tp_TxPduRxChannelRxChannelTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_TXPDUSTATE                                                                          STD_ON
#define J1939TP_TXPDUTXCHANNEL                                                                      STD_ON
#define J1939TP_TXCHANNELTXCHANNELIDXOFTXPDUTXCHANNEL                                               STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEIND                                                     STD_ON
#define J1939TP_TXSDU                                                                               STD_ON
#define J1939TP_FPPTXSDUSEQUENCECOUNTERIDXOFTXSDU                                                   STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.FppTxSduSequenceCounterIdx' Reason: 'the optional indirection is deactivated because FppTxSduSequenceCounterUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_FPPTXSDUSEQUENCECOUNTERUSEDOFTXSDU                                                  STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.FppTxSduSequenceCounterUsed' Reason: 'the optional indirection is deactivated because FppTxSduSequenceCounterUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_INVALIDHNDOFTXSDU                                                                   STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfTxSdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_ISVARIABLEOFTXSDU                                                                   STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.IsVariable' Reason: 'the value of J1939Tp_IsVariableOfTxSdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_METADATALENGTHOFTXSDU                                                               STD_ON
#define J1939TP_PGNOFTXSDU                                                                          STD_ON
#define J1939TP_PDUFORMATOFTXSDU                                                                    STD_ON
#define J1939TP_PDULENGTHOFTXSDU                                                                    STD_ON
#define J1939TP_SDUIDOFTXSDU                                                                        STD_ON
#define J1939TP_TXCHANNELCHANNELIDXOFTXSDU                                                          STD_ON
#define J1939TP_TXCHANNELCHANNELUSEDOFTXSDU                                                         STD_ON
#define J1939TP_TXPDUDIRECTNPDUIDXOFTXSDU                                                           STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.TxPduDirectNPduIdx' Reason: 'the optional indirection is deactivated because TxPduDirectNPduUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDUDIRECTNPDUUSEDOFTXSDU                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.TxPduDirectNPduUsed' Reason: 'the optional indirection is deactivated because TxPduDirectNPduUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXSDUSTATEIDXOFTXSDU                                                                STD_ON
#define J1939TP_TXSDUSTATE                                                                          STD_ON
#define J1939TP_PCCONFIG                                                                            STD_ON
#define J1939TP_FINALMAGICNUMBEROFPCCONFIG                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939TP_INITDATAHASHCODEOFPCCONFIG                                                          STD_OFF  /**< Deactivateable: 'J1939Tp_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939TP_MAINPERIODOFPCCONFIG                                                                STD_ON
#define J1939TP_RXPDUOFPCCONFIG                                                                     STD_ON
#define J1939TP_RXPDUTXCHANNELOFPCCONFIG                                                            STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG                                           STD_ON
#define J1939TP_SIZEOFRXPDUOFPCCONFIG                                                               STD_ON
#define J1939TP_SIZEOFRXPDUTXCHANNELOFPCCONFIG                                                      STD_ON
#define J1939TP_SIZEOFRXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG                                     STD_ON
#define J1939TP_SIZEOFTXCHANNELOFPCCONFIG                                                           STD_ON
#define J1939TP_SIZEOFTXCHANNELTXNSDUOFPCCONFIG                                                     STD_ON
#define J1939TP_SIZEOFTXCHANNELTXNSDUTXNSDUTABLEINDOFPCCONFIG                                       STD_ON
#define J1939TP_SIZEOFTXPDUOFPCCONFIG                                                               STD_ON
#define J1939TP_SIZEOFTXPDUSTATEOFPCCONFIG                                                          STD_ON
#define J1939TP_SIZEOFTXPDUTXCHANNELOFPCCONFIG                                                      STD_ON
#define J1939TP_SIZEOFTXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG                                     STD_ON
#define J1939TP_SIZEOFTXSDUOFPCCONFIG                                                               STD_ON
#define J1939TP_SIZEOFTXSDUSTATEOFPCCONFIG                                                          STD_ON
#define J1939TP_TIME_BAMOFPCCONFIG                                                                  STD_ON
#define J1939TP_TIME_FPOFPCCONFIG                                                                   STD_ON
#define J1939TP_TIME_T1OFPCCONFIG                                                                   STD_ON
#define J1939TP_TIME_T2OFPCCONFIG                                                                   STD_ON
#define J1939TP_TIME_T3OFPCCONFIG                                                                   STD_ON
#define J1939TP_TIME_T4OFPCCONFIG                                                                   STD_ON
#define J1939TP_TIME_THOFPCCONFIG                                                                   STD_ON
#define J1939TP_TIME_TROFPCCONFIG                                                                   STD_ON
#define J1939TP_TXCHANNELOFPCCONFIG                                                                 STD_ON
#define J1939TP_TXCHANNELTXNSDUOFPCCONFIG                                                           STD_ON
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEINDOFPCCONFIG                                             STD_ON
#define J1939TP_TXCONFTIMEOUTOFPCCONFIG                                                             STD_ON
#define J1939TP_TXPDUOFPCCONFIG                                                                     STD_ON
#define J1939TP_TXPDUSTATEOFPCCONFIG                                                                STD_ON
#define J1939TP_TXPDUTXCHANNELOFPCCONFIG                                                            STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG                                           STD_ON
#define J1939TP_TXSDUOFPCCONFIG                                                                     STD_ON
#define J1939TP_TXSDUSTATEOFPCCONFIG                                                                STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCMinNumericValueDefines  J1939Tp Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define J1939TP_MIN_FPPRXSDUSEQUENCECOUNTER                                                         0u
#define J1939TP_MIN_FPPTXSDUSEQUENCECOUNTER                                                         0u
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCMaxNumericValueDefines  J1939Tp Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define J1939TP_MAX_FPPRXSDUSEQUENCECOUNTER                                                         255u
#define J1939TP_MAX_FPPTXSDUSEQUENCECOUNTER                                                         255u
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCNoReferenceDefines  J1939Tp No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define J1939TP_NO_RXCHANNELRXNSDURXNSDUTABLEINDENDIDXOFRXCHANNEL                                   255u
#define J1939TP_NO_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL                                 255u
#define J1939TP_NO_TXPDURXETPFCNPDUIDXOFRXCHANNEL                                                   255u
#define J1939TP_NO_TXPDURXFCNPDUIDXOFRXCHANNEL                                                      255u
#define J1939TP_NO_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU                                     255u
#define J1939TP_NO_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU                                   255u
#define J1939TP_NO_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU                                             255u
#define J1939TP_NO_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU                                           255u
#define J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU                                     255u
#define J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU                                   255u
#define J1939TP_NO_FPPRXSDUSEQUENCECOUNTERIDXOFRXSDU                                                255u
#define J1939TP_NO_RXCHANNELCHANNELIDXOFRXSDU                                                       255u
#define J1939TP_NO_SDUIDOFRXSDU                                                                     255u
#define J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEINDENDIDXOFTXCHANNEL                                   255u
#define J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL                                 255u
#define J1939TP_NO_TXPDUTXCMNPDUIDXOFTXCHANNEL                                                      255u
#define J1939TP_NO_TXPDUTXDTNPDUIDXOFTXCHANNEL                                                      255u
#define J1939TP_NO_TXPDUTXETPCMNPDUIDXOFTXCHANNEL                                                   255u
#define J1939TP_NO_TXPDUTXETPDTNPDUIDXOFTXCHANNEL                                                   255u
#define J1939TP_NO_PDUIDOFTXPDU                                                                     255u
#define J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU                                     255u
#define J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU                                   255u
#define J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU                                     255u
#define J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU                                   255u
#define J1939TP_NO_FPPTXSDUSEQUENCECOUNTERIDXOFTXSDU                                                255u
#define J1939TP_NO_SDUIDOFTXSDU                                                                     255u
#define J1939TP_NO_TXCHANNELCHANNELIDXOFTXSDU                                                       255u
#define J1939TP_NO_TXPDUDIRECTNPDUIDXOFTXSDU                                                        255u
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCEnumExistsDefines  J1939Tp Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define J1939TP_EXISTS_PROTOCOL_UNUSED_RXPROTOCOLTYPEOFRXCHANNEL                                    STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxProtocolType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_EXISTS_PROTOCOL_BAM_RXPROTOCOLTYPEOFRXCHANNEL                                       STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxProtocolType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_EXISTS_PROTOCOL_CMDT_RXPROTOCOLTYPEOFRXCHANNEL                                      STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxProtocolType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_EXISTS_PROTOCOL_ETP_RXPROTOCOLTYPEOFRXCHANNEL                                       STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxProtocolType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_EXISTS_PROTOCOL_FPP_RXPROTOCOLTYPEOFRXCHANNEL                                       STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxProtocolType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_EXISTS_UNDEFINED_PDUFORMATOFRXPDU                                                   STD_OFF
#define J1939TP_EXISTS_PDU1_PDUFORMATOFRXPDU                                                        STD_ON
#define J1939TP_EXISTS_PDU2_PDUFORMATOFRXPDU                                                        STD_OFF
#define J1939TP_EXISTS_UNUSED_PDUTYPEOFRXPDU                                                        STD_OFF
#define J1939TP_EXISTS_DIRECT_PDUTYPEOFRXPDU                                                        STD_OFF
#define J1939TP_EXISTS_TPCM_PDUTYPEOFRXPDU                                                          STD_ON
#define J1939TP_EXISTS_TPDT_PDUTYPEOFRXPDU                                                          STD_OFF
#define J1939TP_EXISTS_ETPCM_PDUTYPEOFRXPDU                                                         STD_OFF
#define J1939TP_EXISTS_ETPDT_PDUTYPEOFRXPDU                                                         STD_OFF
#define J1939TP_EXISTS_FPP_PDUTYPEOFRXPDU                                                           STD_OFF
#define J1939TP_EXISTS_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL                                    STD_ON
#define J1939TP_EXISTS_PROTOCOL_BAM_TXPROTOCOLTYPEOFTXCHANNEL                                       STD_OFF
#define J1939TP_EXISTS_PROTOCOL_CMDT_TXPROTOCOLTYPEOFTXCHANNEL                                      STD_OFF
#define J1939TP_EXISTS_PROTOCOL_ETP_TXPROTOCOLTYPEOFTXCHANNEL                                       STD_OFF
#define J1939TP_EXISTS_PROTOCOL_FPP_TXPROTOCOLTYPEOFTXCHANNEL                                       STD_OFF
#define J1939TP_EXISTS_UNUSED_PDUTYPEOFTXPDU                                                        STD_OFF
#define J1939TP_EXISTS_DIRECT_PDUTYPEOFTXPDU                                                        STD_OFF
#define J1939TP_EXISTS_TPCM_PDUTYPEOFTXPDU                                                          STD_ON
#define J1939TP_EXISTS_TPDT_PDUTYPEOFTXPDU                                                          STD_ON
#define J1939TP_EXISTS_ETPCM_PDUTYPEOFTXPDU                                                         STD_OFF
#define J1939TP_EXISTS_ETPDT_PDUTYPEOFTXPDU                                                         STD_OFF
#define J1939TP_EXISTS_FPP_PDUTYPEOFTXPDU                                                           STD_OFF
#define J1939TP_EXISTS_UNDEFINED_PDUFORMATOFTXSDU                                                   STD_OFF
#define J1939TP_EXISTS_PDU1_PDUFORMATOFTXSDU                                                        STD_ON
#define J1939TP_EXISTS_PDU2_PDUFORMATOFTXSDU                                                        STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCEnumDefines  J1939Tp Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define J1939TP_PROTOCOL_UNUSED_RXPROTOCOLTYPEOFRXCHANNEL                                           0x00u
#define J1939TP_PROTOCOL_BAM_RXPROTOCOLTYPEOFRXCHANNEL                                              0x01u
#define J1939TP_PROTOCOL_CMDT_RXPROTOCOLTYPEOFRXCHANNEL                                             0x02u
#define J1939TP_PROTOCOL_ETP_RXPROTOCOLTYPEOFRXCHANNEL                                              0x03u
#define J1939TP_PROTOCOL_FPP_RXPROTOCOLTYPEOFRXCHANNEL                                              0x04u
#define J1939TP_UNDEFINED_PDUFORMATOFRXPDU                                                          0x00u
#define J1939TP_PDU1_PDUFORMATOFRXPDU                                                               0x01u
#define J1939TP_PDU2_PDUFORMATOFRXPDU                                                               0x02u
#define J1939TP_UNUSED_PDUTYPEOFRXPDU                                                               0x00u
#define J1939TP_DIRECT_PDUTYPEOFRXPDU                                                               0x01u
#define J1939TP_TPCM_PDUTYPEOFRXPDU                                                                 0x02u
#define J1939TP_TPDT_PDUTYPEOFRXPDU                                                                 0x03u
#define J1939TP_ETPCM_PDUTYPEOFRXPDU                                                                0x04u
#define J1939TP_ETPDT_PDUTYPEOFRXPDU                                                                0x05u
#define J1939TP_FPP_PDUTYPEOFRXPDU                                                                  0x06u
#define J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL                                           0x00u
#define J1939TP_PROTOCOL_BAM_TXPROTOCOLTYPEOFTXCHANNEL                                              0x01u
#define J1939TP_PROTOCOL_CMDT_TXPROTOCOLTYPEOFTXCHANNEL                                             0x02u
#define J1939TP_PROTOCOL_ETP_TXPROTOCOLTYPEOFTXCHANNEL                                              0x03u
#define J1939TP_PROTOCOL_FPP_TXPROTOCOLTYPEOFTXCHANNEL                                              0x04u
#define J1939TP_UNUSED_PDUTYPEOFTXPDU                                                               0x00u
#define J1939TP_DIRECT_PDUTYPEOFTXPDU                                                               0x01u
#define J1939TP_TPCM_PDUTYPEOFTXPDU                                                                 0x02u
#define J1939TP_TPDT_PDUTYPEOFTXPDU                                                                 0x03u
#define J1939TP_ETPCM_PDUTYPEOFTXPDU                                                                0x04u
#define J1939TP_ETPDT_PDUTYPEOFTXPDU                                                                0x05u
#define J1939TP_FPP_PDUTYPEOFTXPDU                                                                  0x06u
#define J1939TP_UNDEFINED_PDUFORMATOFTXSDU                                                          0x00u
#define J1939TP_PDU1_PDUFORMATOFTXSDU                                                               0x01u
#define J1939TP_PDU2_PDUFORMATOFTXSDU                                                               0x02u
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCIsReducedToDefineDefines  J1939Tp Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define J1939TP_ISDEF_COMMCHANNELOFRXCHANNEL                                                        STD_OFF
#define J1939TP_ISDEF_RXCANCELLATIONSUPPORTOFRXCHANNEL                                              STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEINDENDIDXOFRXCHANNEL                                STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL                              STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEINDUSEDOFRXCHANNEL                                  STD_OFF
#define J1939TP_ISDEF_RXDAOFRXCHANNEL                                                               STD_OFF
#define J1939TP_ISDEF_RXDYNAMICBLOCKCALCULATIONOFRXCHANNEL                                          STD_OFF
#define J1939TP_ISDEF_RXDYNAMICBUFFERRATIOOFRXCHANNEL                                               STD_OFF
#define J1939TP_ISDEF_RXISOBUSCHANNELOFRXCHANNEL                                                    STD_OFF
#define J1939TP_ISDEF_RXPACKETSPERBLOCKOFRXCHANNEL                                                  STD_OFF
#define J1939TP_ISDEF_RXPROTOCOLTYPEOFRXCHANNEL                                                     STD_OFF
#define J1939TP_ISDEF_RXRETRYSUPPORTOFRXCHANNEL                                                     STD_OFF
#define J1939TP_ISDEF_RXSAOFRXCHANNEL                                                               STD_OFF
#define J1939TP_ISDEF_TXPDURXETPFCNPDUIDXOFRXCHANNEL                                                STD_OFF
#define J1939TP_ISDEF_TXPDURXETPFCNPDUUSEDOFRXCHANNEL                                               STD_OFF
#define J1939TP_ISDEF_TXPDURXFCNPDUIDXOFRXCHANNEL                                                   STD_OFF
#define J1939TP_ISDEF_TXPDURXFCNPDUUSEDOFRXCHANNEL                                                  STD_OFF
#define J1939TP_ISDEF_RXSDURXNSDUIDXOFRXCHANNELRXNSDU                                               STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEIND                                                 STD_OFF
#define J1939TP_ISDEF_INVALIDHNDOFRXPDU                                                             STD_OFF
#define J1939TP_ISDEF_ONISOBUSOFRXPDU                                                               STD_OFF
#define J1939TP_ISDEF_PDUFORMATOFRXPDU                                                              STD_OFF
#define J1939TP_ISDEF_PDUTYPEOFRXPDU                                                                STD_OFF
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU                                  STD_OFF
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU                                STD_OFF
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEINDUSEDOFRXPDU                                    STD_OFF
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU                                          STD_OFF
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU                                        STD_OFF
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEINDUSEDOFRXPDU                                            STD_OFF
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU                                  STD_OFF
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU                                STD_OFF
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFRXPDU                                    STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXCHANNELIDXOFRXPDURXCHANNEL                                         STD_OFF
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEIND                                               STD_OFF
#define J1939TP_ISDEF_RXSDURXSDUIDXOFRXPDURXSDU                                                     STD_OFF
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEIND                                                       STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXCHANNELIDXOFRXPDUTXCHANNEL                                         STD_OFF
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEIND                                               STD_OFF
#define J1939TP_ISDEF_FPPRXSDUSEQUENCECOUNTERIDXOFRXSDU                                             STD_OFF
#define J1939TP_ISDEF_FPPRXSDUSEQUENCECOUNTERUSEDOFRXSDU                                            STD_OFF
#define J1939TP_ISDEF_INVALIDHNDOFRXSDU                                                             STD_OFF
#define J1939TP_ISDEF_ISVARIABLEOFRXSDU                                                             STD_OFF
#define J1939TP_ISDEF_METADATALENGTHOFRXSDU                                                         STD_OFF
#define J1939TP_ISDEF_PGNOFRXSDU                                                                    STD_OFF
#define J1939TP_ISDEF_PDULENGTHOFRXSDU                                                              STD_OFF
#define J1939TP_ISDEF_RXCHANNELCHANNELIDXOFRXSDU                                                    STD_OFF
#define J1939TP_ISDEF_RXCHANNELCHANNELUSEDOFRXSDU                                                   STD_OFF
#define J1939TP_ISDEF_RXSDUSTATEIDXOFRXSDU                                                          STD_OFF
#define J1939TP_ISDEF_SDUIDOFRXSDU                                                                  STD_OFF
#define J1939TP_ISDEF_COMMCHANNELOFTXCHANNEL                                                        STD_OFF
#define J1939TP_ISDEF_TXCANCELLATIONSUPPORTOFTXCHANNEL                                              STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEINDENDIDXOFTXCHANNEL                                STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL                              STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEINDUSEDOFTXCHANNEL                                  STD_OFF
#define J1939TP_ISDEF_TXDAOFTXCHANNEL                                                               STD_OFF
#define J1939TP_ISDEF_TXDYNAMICBLOCKCALCULATIONOFTXCHANNEL                                          STD_OFF
#define J1939TP_ISDEF_TXISOBUSCHANNELOFTXCHANNEL                                                    STD_OFF
#define J1939TP_ISDEF_TXMAXPACKETSPERBLOCKOFTXCHANNEL                                               STD_OFF
#define J1939TP_ISDEF_TXPDUTXCMNPDUIDXOFTXCHANNEL                                                   STD_OFF
#define J1939TP_ISDEF_TXPDUTXCMNPDUUSEDOFTXCHANNEL                                                  STD_OFF
#define J1939TP_ISDEF_TXPDUTXDTNPDUIDXOFTXCHANNEL                                                   STD_OFF
#define J1939TP_ISDEF_TXPDUTXDTNPDUUSEDOFTXCHANNEL                                                  STD_OFF
#define J1939TP_ISDEF_TXPDUTXETPCMNPDUIDXOFTXCHANNEL                                                STD_OFF
#define J1939TP_ISDEF_TXPDUTXETPCMNPDUUSEDOFTXCHANNEL                                               STD_OFF
#define J1939TP_ISDEF_TXPDUTXETPDTNPDUIDXOFTXCHANNEL                                                STD_OFF
#define J1939TP_ISDEF_TXPDUTXETPDTNPDUUSEDOFTXCHANNEL                                               STD_OFF
#define J1939TP_ISDEF_TXPRIOFTXCHANNEL                                                              STD_OFF
#define J1939TP_ISDEF_TXPROTOCOLTYPEOFTXCHANNEL                                                     STD_OFF
#define J1939TP_ISDEF_TXRETRYSUPPORTOFTXCHANNEL                                                     STD_OFF
#define J1939TP_ISDEF_TXSAOFTXCHANNEL                                                               STD_OFF
#define J1939TP_ISDEF_TXVARPRIOFTXCHANNEL                                                           STD_OFF
#define J1939TP_ISDEF_TXSDUTXNSDUIDXOFTXCHANNELTXNSDU                                               STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEIND                                                 STD_OFF
#define J1939TP_ISDEF_INVALIDHNDOFTXPDU                                                             STD_OFF
#define J1939TP_ISDEF_ONISOBUSOFTXPDU                                                               STD_OFF
#define J1939TP_ISDEF_PDUIDOFTXPDU                                                                  STD_OFF
#define J1939TP_ISDEF_PDUTYPEOFTXPDU                                                                STD_OFF
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU                                  STD_OFF
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU                                STD_OFF
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEINDUSEDOFTXPDU                                    STD_OFF
#define J1939TP_ISDEF_TXPDUSTATEIDXOFTXPDU                                                          STD_OFF
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU                                  STD_OFF
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU                                STD_OFF
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFTXPDU                                    STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXCHANNELIDXOFTXPDURXCHANNEL                                         STD_OFF
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEIND                                               STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXCHANNELIDXOFTXPDUTXCHANNEL                                         STD_OFF
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEIND                                               STD_OFF
#define J1939TP_ISDEF_FPPTXSDUSEQUENCECOUNTERIDXOFTXSDU                                             STD_OFF
#define J1939TP_ISDEF_FPPTXSDUSEQUENCECOUNTERUSEDOFTXSDU                                            STD_OFF
#define J1939TP_ISDEF_INVALIDHNDOFTXSDU                                                             STD_OFF
#define J1939TP_ISDEF_ISVARIABLEOFTXSDU                                                             STD_OFF
#define J1939TP_ISDEF_METADATALENGTHOFTXSDU                                                         STD_OFF
#define J1939TP_ISDEF_PGNOFTXSDU                                                                    STD_OFF
#define J1939TP_ISDEF_PDUFORMATOFTXSDU                                                              STD_OFF
#define J1939TP_ISDEF_PDULENGTHOFTXSDU                                                              STD_OFF
#define J1939TP_ISDEF_SDUIDOFTXSDU                                                                  STD_OFF
#define J1939TP_ISDEF_TXCHANNELCHANNELIDXOFTXSDU                                                    STD_OFF
#define J1939TP_ISDEF_TXCHANNELCHANNELUSEDOFTXSDU                                                   STD_OFF
#define J1939TP_ISDEF_TXPDUDIRECTNPDUIDXOFTXSDU                                                     STD_OFF
#define J1939TP_ISDEF_TXPDUDIRECTNPDUUSEDOFTXSDU                                                    STD_OFF
#define J1939TP_ISDEF_TXSDUSTATEIDXOFTXSDU                                                          STD_OFF
#define J1939TP_ISDEF_FINALMAGICNUMBEROFPCCONFIG                                                    STD_OFF
#define J1939TP_ISDEF_INITDATAHASHCODEOFPCCONFIG                                                    STD_OFF
#define J1939TP_ISDEF_RXPDUOFPCCONFIG                                                               STD_ON
#define J1939TP_ISDEF_RXPDUTXCHANNELOFPCCONFIG                                                      STD_ON
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG                                     STD_ON
#define J1939TP_ISDEF_TXCHANNELOFPCCONFIG                                                           STD_ON
#define J1939TP_ISDEF_TXCHANNELTXNSDUOFPCCONFIG                                                     STD_ON
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEINDOFPCCONFIG                                       STD_ON
#define J1939TP_ISDEF_TXPDUOFPCCONFIG                                                               STD_ON
#define J1939TP_ISDEF_TXPDUSTATEOFPCCONFIG                                                          STD_ON
#define J1939TP_ISDEF_TXPDUTXCHANNELOFPCCONFIG                                                      STD_ON
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG                                     STD_ON
#define J1939TP_ISDEF_TXSDUOFPCCONFIG                                                               STD_ON
#define J1939TP_ISDEF_TXSDUSTATEOFPCCONFIG                                                          STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCEqualsAlwaysToDefines  J1939Tp Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define J1939TP_EQ2_COMMCHANNELOFRXCHANNEL                                                          
#define J1939TP_EQ2_RXCANCELLATIONSUPPORTOFRXCHANNEL                                                
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEINDENDIDXOFRXCHANNEL                                  
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL                                
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEINDUSEDOFRXCHANNEL                                    
#define J1939TP_EQ2_RXDAOFRXCHANNEL                                                                 
#define J1939TP_EQ2_RXDYNAMICBLOCKCALCULATIONOFRXCHANNEL                                            
#define J1939TP_EQ2_RXDYNAMICBUFFERRATIOOFRXCHANNEL                                                 
#define J1939TP_EQ2_RXISOBUSCHANNELOFRXCHANNEL                                                      
#define J1939TP_EQ2_RXPACKETSPERBLOCKOFRXCHANNEL                                                    
#define J1939TP_EQ2_RXPROTOCOLTYPEOFRXCHANNEL                                                       
#define J1939TP_EQ2_RXRETRYSUPPORTOFRXCHANNEL                                                       
#define J1939TP_EQ2_RXSAOFRXCHANNEL                                                                 
#define J1939TP_EQ2_TXPDURXETPFCNPDUIDXOFRXCHANNEL                                                  
#define J1939TP_EQ2_TXPDURXETPFCNPDUUSEDOFRXCHANNEL                                                 
#define J1939TP_EQ2_TXPDURXFCNPDUIDXOFRXCHANNEL                                                     
#define J1939TP_EQ2_TXPDURXFCNPDUUSEDOFRXCHANNEL                                                    
#define J1939TP_EQ2_RXSDURXNSDUIDXOFRXCHANNELRXNSDU                                                 
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEIND                                                   
#define J1939TP_EQ2_INVALIDHNDOFRXPDU                                                               
#define J1939TP_EQ2_ONISOBUSOFRXPDU                                                                 
#define J1939TP_EQ2_PDUFORMATOFRXPDU                                                                
#define J1939TP_EQ2_PDUTYPEOFRXPDU                                                                  
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU                                    
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU                                  
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEINDUSEDOFRXPDU                                      
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU                                            
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU                                          
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEINDUSEDOFRXPDU                                              
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU                                    
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU                                  
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFRXPDU                                      
#define J1939TP_EQ2_RXCHANNELRXCHANNELIDXOFRXPDURXCHANNEL                                           
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEIND                                                 
#define J1939TP_EQ2_RXSDURXSDUIDXOFRXPDURXSDU                                                       
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEIND                                                         
#define J1939TP_EQ2_TXCHANNELTXCHANNELIDXOFRXPDUTXCHANNEL                                           
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEIND                                                 
#define J1939TP_EQ2_FPPRXSDUSEQUENCECOUNTERIDXOFRXSDU                                               
#define J1939TP_EQ2_FPPRXSDUSEQUENCECOUNTERUSEDOFRXSDU                                              
#define J1939TP_EQ2_INVALIDHNDOFRXSDU                                                               
#define J1939TP_EQ2_ISVARIABLEOFRXSDU                                                               
#define J1939TP_EQ2_METADATALENGTHOFRXSDU                                                           
#define J1939TP_EQ2_PGNOFRXSDU                                                                      
#define J1939TP_EQ2_PDULENGTHOFRXSDU                                                                
#define J1939TP_EQ2_RXCHANNELCHANNELIDXOFRXSDU                                                      
#define J1939TP_EQ2_RXCHANNELCHANNELUSEDOFRXSDU                                                     
#define J1939TP_EQ2_RXSDUSTATEIDXOFRXSDU                                                            
#define J1939TP_EQ2_SDUIDOFRXSDU                                                                    
#define J1939TP_EQ2_COMMCHANNELOFTXCHANNEL                                                          
#define J1939TP_EQ2_TXCANCELLATIONSUPPORTOFTXCHANNEL                                                
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEINDENDIDXOFTXCHANNEL                                  
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL                                
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEINDUSEDOFTXCHANNEL                                    
#define J1939TP_EQ2_TXDAOFTXCHANNEL                                                                 
#define J1939TP_EQ2_TXDYNAMICBLOCKCALCULATIONOFTXCHANNEL                                            
#define J1939TP_EQ2_TXISOBUSCHANNELOFTXCHANNEL                                                      
#define J1939TP_EQ2_TXMAXPACKETSPERBLOCKOFTXCHANNEL                                                 
#define J1939TP_EQ2_TXPDUTXCMNPDUIDXOFTXCHANNEL                                                     
#define J1939TP_EQ2_TXPDUTXCMNPDUUSEDOFTXCHANNEL                                                    
#define J1939TP_EQ2_TXPDUTXDTNPDUIDXOFTXCHANNEL                                                     
#define J1939TP_EQ2_TXPDUTXDTNPDUUSEDOFTXCHANNEL                                                    
#define J1939TP_EQ2_TXPDUTXETPCMNPDUIDXOFTXCHANNEL                                                  
#define J1939TP_EQ2_TXPDUTXETPCMNPDUUSEDOFTXCHANNEL                                                 
#define J1939TP_EQ2_TXPDUTXETPDTNPDUIDXOFTXCHANNEL                                                  
#define J1939TP_EQ2_TXPDUTXETPDTNPDUUSEDOFTXCHANNEL                                                 
#define J1939TP_EQ2_TXPRIOFTXCHANNEL                                                                
#define J1939TP_EQ2_TXPROTOCOLTYPEOFTXCHANNEL                                                       
#define J1939TP_EQ2_TXRETRYSUPPORTOFTXCHANNEL                                                       
#define J1939TP_EQ2_TXSAOFTXCHANNEL                                                                 
#define J1939TP_EQ2_TXVARPRIOFTXCHANNEL                                                             
#define J1939TP_EQ2_TXSDUTXNSDUIDXOFTXCHANNELTXNSDU                                                 
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEIND                                                   
#define J1939TP_EQ2_INVALIDHNDOFTXPDU                                                               
#define J1939TP_EQ2_ONISOBUSOFTXPDU                                                                 
#define J1939TP_EQ2_PDUIDOFTXPDU                                                                    
#define J1939TP_EQ2_PDUTYPEOFTXPDU                                                                  
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU                                    
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU                                  
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEINDUSEDOFTXPDU                                      
#define J1939TP_EQ2_TXPDUSTATEIDXOFTXPDU                                                            
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU                                    
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU                                  
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFTXPDU                                      
#define J1939TP_EQ2_RXCHANNELRXCHANNELIDXOFTXPDURXCHANNEL                                           
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEIND                                                 
#define J1939TP_EQ2_TXCHANNELTXCHANNELIDXOFTXPDUTXCHANNEL                                           
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEIND                                                 
#define J1939TP_EQ2_FPPTXSDUSEQUENCECOUNTERIDXOFTXSDU                                               
#define J1939TP_EQ2_FPPTXSDUSEQUENCECOUNTERUSEDOFTXSDU                                              
#define J1939TP_EQ2_INVALIDHNDOFTXSDU                                                               
#define J1939TP_EQ2_ISVARIABLEOFTXSDU                                                               
#define J1939TP_EQ2_METADATALENGTHOFTXSDU                                                           
#define J1939TP_EQ2_PGNOFTXSDU                                                                      
#define J1939TP_EQ2_PDUFORMATOFTXSDU                                                                
#define J1939TP_EQ2_PDULENGTHOFTXSDU                                                                
#define J1939TP_EQ2_SDUIDOFTXSDU                                                                    
#define J1939TP_EQ2_TXCHANNELCHANNELIDXOFTXSDU                                                      
#define J1939TP_EQ2_TXCHANNELCHANNELUSEDOFTXSDU                                                     
#define J1939TP_EQ2_TXPDUDIRECTNPDUIDXOFTXSDU                                                       
#define J1939TP_EQ2_TXPDUDIRECTNPDUUSEDOFTXSDU                                                      
#define J1939TP_EQ2_TXSDUSTATEIDXOFTXSDU                                                            
#define J1939TP_EQ2_FINALMAGICNUMBEROFPCCONFIG                                                      
#define J1939TP_EQ2_INITDATAHASHCODEOFPCCONFIG                                                      
#define J1939TP_EQ2_RXPDUOFPCCONFIG                                                                 J1939Tp_RxPdu
#define J1939TP_EQ2_RXPDUTXCHANNELOFPCCONFIG                                                        J1939Tp_RxPduTxChannel
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG                                       J1939Tp_RxPduTxChannelTxChannelTableInd
#define J1939TP_EQ2_TXCHANNELOFPCCONFIG                                                             J1939Tp_TxChannel
#define J1939TP_EQ2_TXCHANNELTXNSDUOFPCCONFIG                                                       J1939Tp_TxChannelTxNSdu
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEINDOFPCCONFIG                                         J1939Tp_TxChannelTxNSduTxNSduTableInd
#define J1939TP_EQ2_TXPDUOFPCCONFIG                                                                 J1939Tp_TxPdu
#define J1939TP_EQ2_TXPDUSTATEOFPCCONFIG                                                            J1939Tp_TxPduState.raw
#define J1939TP_EQ2_TXPDUTXCHANNELOFPCCONFIG                                                        J1939Tp_TxPduTxChannel
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG                                       J1939Tp_TxPduTxChannelTxChannelTableInd
#define J1939TP_EQ2_TXSDUOFPCCONFIG                                                                 J1939Tp_TxSdu
#define J1939TP_EQ2_TXSDUSTATEOFPCCONFIG                                                            J1939Tp_TxSduState.raw
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCSymbolicInitializationPointers  J1939Tp Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define J1939Tp_Config_Ptr                                                                          NULL_PTR  /**< symbolic identifier which shall be used to initialize 'J1939Tp' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCInitializationSymbols  J1939Tp Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define J1939Tp_Config                                                                              NULL_PTR  /**< symbolic identifier which could be used to initialize 'J1939Tp */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCGeneral  J1939Tp General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define J1939TP_CHECK_INIT_POINTER                                                                  STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define J1939TP_FINAL_MAGIC_NUMBER                                                                  0x251Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of J1939Tp */
#define J1939TP_INDIVIDUAL_POSTBUILD                                                                STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'J1939Tp' is not configured to be postbuild capable. */
#define J1939TP_INIT_DATA                                                                           J1939TP_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define J1939TP_INIT_DATA_HASH_CODE                                                                 -2128675164  /**< the precompile constant to validate the initialization structure at initialization time of J1939Tp with a hashcode. The seed value is '0x251Eu' */
#define J1939TP_USE_ECUM_BSW_ERROR_HOOK                                                             STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define J1939TP_USE_INIT_POINTER                                                                    STD_OFF  /**< STD_ON if the init pointer J1939Tp shall be used. */
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPCGetRootDataMacros  J1939Tp Get Root Data Macros (PRE_COMPILE)
  \brief  These macros are used to get data pointers of root data.
  \{
*/ 
#define J1939Tp_GetFinalMagicNumberOfPCConfig()                                                       /**< Deactivateable: 'J1939Tp_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939Tp_GetInitDataHashCodeOfPCConfig()                                                       /**< Deactivateable: 'J1939Tp_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCGetConstantDuplicatedRootDataMacros  J1939Tp Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define J1939Tp_GetMainPeriodOfPCConfig()                                                           10u
#define J1939Tp_GetRxPduOfPCConfig()                                                                J1939Tp_RxPdu  /**< the pointer to J1939Tp_RxPdu */
#define J1939Tp_GetRxPduTxChannelOfPCConfig()                                                       J1939Tp_RxPduTxChannel  /**< the pointer to J1939Tp_RxPduTxChannel */
#define J1939Tp_GetRxPduTxChannelTxChannelTableIndOfPCConfig()                                      J1939Tp_RxPduTxChannelTxChannelTableInd  /**< the pointer to J1939Tp_RxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetSizeOfRxPduOfPCConfig()                                                          1u  /**< the number of accomplishable value elements in J1939Tp_RxPdu */
#define J1939Tp_GetSizeOfRxPduTxChannelOfPCConfig()                                                 6u  /**< the number of accomplishable value elements in J1939Tp_RxPduTxChannel */
#define J1939Tp_GetSizeOfRxPduTxChannelTxChannelTableIndOfPCConfig()                                6u  /**< the number of accomplishable value elements in J1939Tp_RxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetSizeOfTxChannelOfPCConfig()                                                      6u  /**< the number of accomplishable value elements in J1939Tp_TxChannel */
#define J1939Tp_GetSizeOfTxChannelTxNSduOfPCConfig()                                                6u  /**< the number of accomplishable value elements in J1939Tp_TxChannelTxNSdu */
#define J1939Tp_GetSizeOfTxChannelTxNSduTxNSduTableIndOfPCConfig()                                  6u  /**< the number of accomplishable value elements in J1939Tp_TxChannelTxNSduTxNSduTableInd */
#define J1939Tp_GetSizeOfTxPduOfPCConfig()                                                          2u  /**< the number of accomplishable value elements in J1939Tp_TxPdu */
#define J1939Tp_GetSizeOfTxPduStateOfPCConfig()                                                     2u  /**< the number of accomplishable value elements in J1939Tp_TxPduState */
#define J1939Tp_GetSizeOfTxPduTxChannelOfPCConfig()                                                 12u  /**< the number of accomplishable value elements in J1939Tp_TxPduTxChannel */
#define J1939Tp_GetSizeOfTxPduTxChannelTxChannelTableIndOfPCConfig()                                12u  /**< the number of accomplishable value elements in J1939Tp_TxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetSizeOfTxSduOfPCConfig()                                                          6u  /**< the number of accomplishable value elements in J1939Tp_TxSdu */
#define J1939Tp_GetSizeOfTxSduStateOfPCConfig()                                                     6u  /**< the number of accomplishable value elements in J1939Tp_TxSduState */
#define J1939Tp_GetTime_BamOfPCConfig()                                                             5u
#define J1939Tp_GetTime_FpOfPCConfig()                                                              10u
#define J1939Tp_GetTime_T1OfPCConfig()                                                              75u
#define J1939Tp_GetTime_T2OfPCConfig()                                                              125u
#define J1939Tp_GetTime_T3OfPCConfig()                                                              125u
#define J1939Tp_GetTime_T4OfPCConfig()                                                              105u
#define J1939Tp_GetTime_ThOfPCConfig()                                                              50u
#define J1939Tp_GetTime_TrOfPCConfig()                                                              20u
#define J1939Tp_GetTxChannelOfPCConfig()                                                            J1939Tp_TxChannel  /**< the pointer to J1939Tp_TxChannel */
#define J1939Tp_GetTxChannelTxNSduOfPCConfig()                                                      J1939Tp_TxChannelTxNSdu  /**< the pointer to J1939Tp_TxChannelTxNSdu */
#define J1939Tp_GetTxChannelTxNSduTxNSduTableIndOfPCConfig()                                        J1939Tp_TxChannelTxNSduTxNSduTableInd  /**< the pointer to J1939Tp_TxChannelTxNSduTxNSduTableInd */
#define J1939Tp_GetTxConfTimeoutOfPCConfig()                                                        150u
#define J1939Tp_GetTxPduOfPCConfig()                                                                J1939Tp_TxPdu  /**< the pointer to J1939Tp_TxPdu */
#define J1939Tp_GetTxPduStateOfPCConfig()                                                           J1939Tp_TxPduState.raw  /**< the pointer to J1939Tp_TxPduState */
#define J1939Tp_GetTxPduTxChannelOfPCConfig()                                                       J1939Tp_TxPduTxChannel  /**< the pointer to J1939Tp_TxPduTxChannel */
#define J1939Tp_GetTxPduTxChannelTxChannelTableIndOfPCConfig()                                      J1939Tp_TxPduTxChannelTxChannelTableInd  /**< the pointer to J1939Tp_TxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetTxSduOfPCConfig()                                                                J1939Tp_TxSdu  /**< the pointer to J1939Tp_TxSdu */
#define J1939Tp_GetTxSduStateOfPCConfig()                                                           J1939Tp_TxSduState.raw  /**< the pointer to J1939Tp_TxSduState */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCGetDataMacros  J1939Tp Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define J1939Tp_GetFppRxSduSequenceCounter(Index)                                                     /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetFppTxSduSequenceCounter(Index)                                                     /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetComMChannelOfRxChannel(Index)                                                      /**< Deactivateable: 'J1939Tp_RxChannel.ComMChannel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsRxCancellationSupportOfRxChannel(Index)                                             /**< Deactivateable: 'J1939Tp_RxChannel.RxCancellationSupport' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxChannelRxNSduRxNSduTableIndEndIdxOfRxChannel(Index)                              /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxChannelRxNSduRxNSduTableIndStartIdxOfRxChannel(Index)                            /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsRxChannelRxNSduRxNSduTableIndUsedOfRxChannel(Index)                                 /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxDaOfRxChannel(Index)                                                             /**< Deactivateable: 'J1939Tp_RxChannel.RxDa' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsRxDynamicBlockCalculationOfRxChannel(Index)                                         /**< Deactivateable: 'J1939Tp_RxChannel.RxDynamicBlockCalculation' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxDynamicBufferRatioOfRxChannel(Index)                                             /**< Deactivateable: 'J1939Tp_RxChannel.RxDynamicBufferRatio' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsRxIsobusChannelOfRxChannel(Index)                                                   /**< Deactivateable: 'J1939Tp_RxChannel.RxIsobusChannel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxPacketsPerBlockOfRxChannel(Index)                                                /**< Deactivateable: 'J1939Tp_RxChannel.RxPacketsPerBlock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxProtocolTypeOfRxChannel(Index)                                                   /**< Deactivateable: 'J1939Tp_RxChannel.RxProtocolType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsRxRetrySupportOfRxChannel(Index)                                                    /**< Deactivateable: 'J1939Tp_RxChannel.RxRetrySupport' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxSaOfRxChannel(Index)                                                             /**< Deactivateable: 'J1939Tp_RxChannel.RxSa' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetTxPduRxEtpFcNPduIdxOfRxChannel(Index)                                              /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxEtpFcNPduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsTxPduRxEtpFcNPduUsedOfRxChannel(Index)                                              /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxEtpFcNPduUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetTxPduRxFcNPduIdxOfRxChannel(Index)                                                 /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxFcNPduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsTxPduRxFcNPduUsedOfRxChannel(Index)                                                 /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxFcNPduUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxSduRxNSduIdxOfRxChannelRxNSdu(Index)                                             /**< Deactivateable: 'J1939Tp_RxChannelRxNSdu.RxSduRxNSduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxChannelRxNSduRxNSduTableInd(Index)                                               /**< Deactivateable: 'J1939Tp_RxChannelRxNSduRxNSduTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsInvalidHndOfRxPdu(Index)                                                            /**< Deactivateable: 'J1939Tp_RxPdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_IsOnIsobusOfRxPdu(Index)                                                              /**< Deactivateable: 'J1939Tp_RxPdu.OnIsobus' Reason: 'the value of J1939Tp_OnIsobusOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_GetPduFormatOfRxPdu(Index)                                                          (J1939Tp_GetRxPduOfPCConfig()[(Index)].PduFormatOfRxPdu)
#define J1939Tp_GetPduTypeOfRxPdu(Index)                                                            (J1939Tp_GetRxPduOfPCConfig()[(Index)].PduTypeOfRxPdu)
#define J1939Tp_GetRxPduRxChannelRxChannelTableIndEndIdxOfRxPdu(Index)                                /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndEndIdx' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetRxPduRxChannelRxChannelTableIndStartIdxOfRxPdu(Index)                              /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndStartIdx' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_IsRxPduRxChannelRxChannelTableIndUsedOfRxPdu(Index)                                   /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndUsed' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetRxPduRxSduRxSduTableIndEndIdxOfRxPdu(Index)                                        /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndEndIdx' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetRxPduRxSduRxSduTableIndStartIdxOfRxPdu(Index)                                      /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndStartIdx' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_IsRxPduRxSduRxSduTableIndUsedOfRxPdu(Index)                                           /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndUsed' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetRxPduTxChannelTxChannelTableIndEndIdxOfRxPdu(Index)                              (J1939Tp_GetRxPduOfPCConfig()[(Index)].RxPduTxChannelTxChannelTableIndEndIdxOfRxPdu)
#define J1939Tp_GetRxPduTxChannelTxChannelTableIndStartIdxOfRxPdu(Index)                            (J1939Tp_GetRxPduOfPCConfig()[(Index)].RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu)
#define J1939Tp_GetRxChannelRxChannelIdxOfRxPduRxChannel(Index)                                       /**< Deactivateable: 'J1939Tp_RxPduRxChannel.RxChannelRxChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxPduRxChannelRxChannelTableInd(Index)                                             /**< Deactivateable: 'J1939Tp_RxPduRxChannelRxChannelTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxSduRxSduIdxOfRxPduRxSdu(Index)                                                   /**< Deactivateable: 'J1939Tp_RxPduRxSdu.RxSduRxSduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxPduRxSduRxSduTableInd(Index)                                                     /**< Deactivateable: 'J1939Tp_RxPduRxSduRxSduTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetTxChannelTxChannelIdxOfRxPduTxChannel(Index)                                     (J1939Tp_GetRxPduTxChannelOfPCConfig()[(Index)].TxChannelTxChannelIdxOfRxPduTxChannel)
#define J1939Tp_GetRxPduTxChannelTxChannelTableInd(Index)                                           (J1939Tp_GetRxPduTxChannelTxChannelTableIndOfPCConfig()[(Index)])
#define J1939Tp_GetFppRxSduSequenceCounterIdxOfRxSdu(Index)                                           /**< Deactivateable: 'J1939Tp_RxSdu.FppRxSduSequenceCounterIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsFppRxSduSequenceCounterUsedOfRxSdu(Index)                                           /**< Deactivateable: 'J1939Tp_RxSdu.FppRxSduSequenceCounterUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsInvalidHndOfRxSdu(Index)                                                            /**< Deactivateable: 'J1939Tp_RxSdu.InvalidHnd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsIsVariableOfRxSdu(Index)                                                            /**< Deactivateable: 'J1939Tp_RxSdu.IsVariable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetMetaDataLengthOfRxSdu(Index)                                                       /**< Deactivateable: 'J1939Tp_RxSdu.MetaDataLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetPGNOfRxSdu(Index)                                                                  /**< Deactivateable: 'J1939Tp_RxSdu.PGN' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetPduLengthOfRxSdu(Index)                                                            /**< Deactivateable: 'J1939Tp_RxSdu.PduLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxChannelChannelIdxOfRxSdu(Index)                                                  /**< Deactivateable: 'J1939Tp_RxSdu.RxChannelChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IsRxChannelChannelUsedOfRxSdu(Index)                                                  /**< Deactivateable: 'J1939Tp_RxSdu.RxChannelChannelUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxSduStateIdxOfRxSdu(Index)                                                        /**< Deactivateable: 'J1939Tp_RxSdu.RxSduStateIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetSduIdOfRxSdu(Index)                                                                /**< Deactivateable: 'J1939Tp_RxSdu.SduId' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetRxSduState(Index)                                                                  /**< Deactivateable: 'J1939Tp_RxSduState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetComMChannelOfTxChannel(Index)                                                    (J1939Tp_GetTxChannelOfPCConfig()[(Index)].ComMChannelOfTxChannel)
#define J1939Tp_IsTxCancellationSupportOfTxChannel(Index)                                             /**< Deactivateable: 'J1939Tp_TxChannel.TxCancellationSupport' Reason: 'the value of J1939Tp_TxCancellationSupportOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_GetTxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel(Index)                            (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel)
#define J1939Tp_GetTxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel(Index)                          (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel)
#define J1939Tp_GetTxDaOfTxChannel(Index)                                                           (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxDaOfTxChannel)
#define J1939Tp_IsTxDynamicBlockCalculationOfTxChannel(Index)                                         /**< Deactivateable: 'J1939Tp_TxChannel.TxDynamicBlockCalculation' Reason: 'the value of J1939Tp_TxDynamicBlockCalculationOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_IsTxIsobusChannelOfTxChannel(Index)                                                   /**< Deactivateable: 'J1939Tp_TxChannel.TxIsobusChannel' Reason: 'the value of J1939Tp_TxIsobusChannelOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_GetTxMaxPacketsPerBlockOfTxChannel(Index)                                           (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxMaxPacketsPerBlockOfTxChannel)
#define J1939Tp_GetTxPduTxCmNPduIdxOfTxChannel(Index)                                               (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxPduTxCmNPduIdxOfTxChannel)
#define J1939Tp_GetTxPduTxDtNPduIdxOfTxChannel(Index)                                               (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxPduTxDtNPduIdxOfTxChannel)
#define J1939Tp_GetTxPduTxEtpCmNPduIdxOfTxChannel(Index)                                              /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpCmNPduIdx' Reason: 'the optional indirection is deactivated because TxPduTxEtpCmNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_IsTxPduTxEtpCmNPduUsedOfTxChannel(Index)                                              /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpCmNPduUsed' Reason: 'the optional indirection is deactivated because TxPduTxEtpCmNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetTxPduTxEtpDtNPduIdxOfTxChannel(Index)                                              /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpDtNPduIdx' Reason: 'the optional indirection is deactivated because TxPduTxEtpDtNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_IsTxPduTxEtpDtNPduUsedOfTxChannel(Index)                                              /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpDtNPduUsed' Reason: 'the optional indirection is deactivated because TxPduTxEtpDtNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetTxPriOfTxChannel(Index)                                                          (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxPriOfTxChannel)
#define J1939Tp_GetTxProtocolTypeOfTxChannel(Index)                                                 (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxProtocolTypeOfTxChannel)
#define J1939Tp_IsTxRetrySupportOfTxChannel(Index)                                                    /**< Deactivateable: 'J1939Tp_TxChannel.TxRetrySupport' Reason: 'the value of J1939Tp_TxRetrySupportOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_GetTxSaOfTxChannel(Index)                                                           (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxSaOfTxChannel)
#define J1939Tp_IsTxVarPriOfTxChannel(Index)                                                          /**< Deactivateable: 'J1939Tp_TxChannel.TxVarPri' Reason: 'the value of J1939Tp_TxVarPriOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_GetTxSduTxNSduIdxOfTxChannelTxNSdu(Index)                                           (J1939Tp_GetTxChannelTxNSduOfPCConfig()[(Index)].TxSduTxNSduIdxOfTxChannelTxNSdu)
#define J1939Tp_GetTxChannelTxNSduTxNSduTableInd(Index)                                             (J1939Tp_GetTxChannelTxNSduTxNSduTableIndOfPCConfig()[(Index)])
#define J1939Tp_IsInvalidHndOfTxPdu(Index)                                                            /**< Deactivateable: 'J1939Tp_TxPdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_IsOnIsobusOfTxPdu(Index)                                                              /**< Deactivateable: 'J1939Tp_TxPdu.OnIsobus' Reason: 'the value of J1939Tp_OnIsobusOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_GetPduIdOfTxPdu(Index)                                                              (J1939Tp_GetTxPduOfPCConfig()[(Index)].PduIdOfTxPdu)
#define J1939Tp_GetPduTypeOfTxPdu(Index)                                                            (J1939Tp_GetTxPduOfPCConfig()[(Index)].PduTypeOfTxPdu)
#define J1939Tp_GetTxPduRxChannelRxChannelTableIndEndIdxOfTxPdu(Index)                                /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndEndIdx' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetTxPduRxChannelRxChannelTableIndStartIdxOfTxPdu(Index)                              /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndStartIdx' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_IsTxPduRxChannelRxChannelTableIndUsedOfTxPdu(Index)                                   /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndUsed' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetTxPduStateIdxOfTxPdu(Index)                                                      (J1939Tp_GetTxPduOfPCConfig()[(Index)].TxPduStateIdxOfTxPdu)
#define J1939Tp_GetTxPduTxChannelTxChannelTableIndEndIdxOfTxPdu(Index)                              (J1939Tp_GetTxPduOfPCConfig()[(Index)].TxPduTxChannelTxChannelTableIndEndIdxOfTxPdu)
#define J1939Tp_GetTxPduTxChannelTxChannelTableIndStartIdxOfTxPdu(Index)                            (J1939Tp_GetTxPduOfPCConfig()[(Index)].TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu)
#define J1939Tp_GetRxChannelRxChannelIdxOfTxPduRxChannel(Index)                                       /**< Deactivateable: 'J1939Tp_TxPduRxChannel.RxChannelRxChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetTxPduRxChannelRxChannelTableInd(Index)                                             /**< Deactivateable: 'J1939Tp_TxPduRxChannelRxChannelTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_GetTxPduState(Index)                                                                (J1939Tp_GetTxPduStateOfPCConfig()[(Index)])
#define J1939Tp_GetTxChannelTxChannelIdxOfTxPduTxChannel(Index)                                     (J1939Tp_GetTxPduTxChannelOfPCConfig()[(Index)].TxChannelTxChannelIdxOfTxPduTxChannel)
#define J1939Tp_GetTxPduTxChannelTxChannelTableInd(Index)                                           (J1939Tp_GetTxPduTxChannelTxChannelTableIndOfPCConfig()[(Index)])
#define J1939Tp_GetFppTxSduSequenceCounterIdxOfTxSdu(Index)                                           /**< Deactivateable: 'J1939Tp_TxSdu.FppTxSduSequenceCounterIdx' Reason: 'the optional indirection is deactivated because FppTxSduSequenceCounterUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_IsFppTxSduSequenceCounterUsedOfTxSdu(Index)                                           /**< Deactivateable: 'J1939Tp_TxSdu.FppTxSduSequenceCounterUsed' Reason: 'the optional indirection is deactivated because FppTxSduSequenceCounterUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_IsInvalidHndOfTxSdu(Index)                                                            /**< Deactivateable: 'J1939Tp_TxSdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfTxSdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_IsIsVariableOfTxSdu(Index)                                                            /**< Deactivateable: 'J1939Tp_TxSdu.IsVariable' Reason: 'the value of J1939Tp_IsVariableOfTxSdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_GetMetaDataLengthOfTxSdu(Index)                                                     (J1939Tp_GetTxSduOfPCConfig()[(Index)].MetaDataLengthOfTxSdu)
#define J1939Tp_GetPGNOfTxSdu(Index)                                                                (J1939Tp_GetTxSduOfPCConfig()[(Index)].PGNOfTxSdu)
#define J1939Tp_GetPduFormatOfTxSdu(Index)                                                          (J1939Tp_GetTxSduOfPCConfig()[(Index)].PduFormatOfTxSdu)
#define J1939Tp_GetPduLengthOfTxSdu(Index)                                                          (J1939Tp_GetTxSduOfPCConfig()[(Index)].PduLengthOfTxSdu)
#define J1939Tp_GetSduIdOfTxSdu(Index)                                                              (J1939Tp_GetTxSduOfPCConfig()[(Index)].SduIdOfTxSdu)
#define J1939Tp_GetTxChannelChannelIdxOfTxSdu(Index)                                                (J1939Tp_GetTxSduOfPCConfig()[(Index)].TxChannelChannelIdxOfTxSdu)
#define J1939Tp_GetTxPduDirectNPduIdxOfTxSdu(Index)                                                   /**< Deactivateable: 'J1939Tp_TxSdu.TxPduDirectNPduIdx' Reason: 'the optional indirection is deactivated because TxPduDirectNPduUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_IsTxPduDirectNPduUsedOfTxSdu(Index)                                                   /**< Deactivateable: 'J1939Tp_TxSdu.TxPduDirectNPduUsed' Reason: 'the optional indirection is deactivated because TxPduDirectNPduUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_GetTxSduStateIdxOfTxSdu(Index)                                                      (J1939Tp_GetTxSduOfPCConfig()[(Index)].TxSduStateIdxOfTxSdu)
#define J1939Tp_GetTxSduState(Index)                                                                (J1939Tp_GetTxSduStateOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCGetDeduplicatedDataMacros  J1939Tp Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define J1939Tp_GetFinalMagicNumber()                                                                 /**< Deactivateable: 'J1939Tp_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939Tp_GetInitDataHashCode()                                                                 /**< Deactivateable: 'J1939Tp_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939Tp_GetMainPeriod()                                                                     J1939Tp_GetMainPeriodOfPCConfig()
#define J1939Tp_IsRxPduTxChannelTxChannelTableIndUsedOfRxPdu(Index)                                 (((boolean)(J1939Tp_GetRxPduTxChannelTxChannelTableIndStartIdxOfRxPdu(Index) != J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetSizeOfRxPdu()                                                                    J1939Tp_GetSizeOfRxPduOfPCConfig()
#define J1939Tp_GetSizeOfRxPduTxChannel()                                                           J1939Tp_GetSizeOfRxPduTxChannelOfPCConfig()
#define J1939Tp_GetSizeOfRxPduTxChannelTxChannelTableInd()                                          J1939Tp_GetSizeOfRxPduTxChannelTxChannelTableIndOfPCConfig()
#define J1939Tp_GetSizeOfTxChannel()                                                                J1939Tp_GetSizeOfTxChannelOfPCConfig()
#define J1939Tp_GetSizeOfTxChannelTxNSdu()                                                          J1939Tp_GetSizeOfTxChannelTxNSduOfPCConfig()
#define J1939Tp_GetSizeOfTxChannelTxNSduTxNSduTableInd()                                            J1939Tp_GetSizeOfTxChannelTxNSduTxNSduTableIndOfPCConfig()
#define J1939Tp_GetSizeOfTxPdu()                                                                    J1939Tp_GetSizeOfTxPduOfPCConfig()
#define J1939Tp_GetSizeOfTxPduState()                                                               J1939Tp_GetSizeOfTxPduStateOfPCConfig()
#define J1939Tp_GetSizeOfTxPduTxChannel()                                                           J1939Tp_GetSizeOfTxPduTxChannelOfPCConfig()
#define J1939Tp_GetSizeOfTxPduTxChannelTxChannelTableInd()                                          J1939Tp_GetSizeOfTxPduTxChannelTxChannelTableIndOfPCConfig()
#define J1939Tp_GetSizeOfTxSdu()                                                                    J1939Tp_GetSizeOfTxSduOfPCConfig()
#define J1939Tp_GetSizeOfTxSduState()                                                               J1939Tp_GetSizeOfTxSduStateOfPCConfig()
#define J1939Tp_GetTime_Bam()                                                                       J1939Tp_GetTime_BamOfPCConfig()
#define J1939Tp_GetTime_Fp()                                                                        J1939Tp_GetTime_FpOfPCConfig()
#define J1939Tp_GetTime_T1()                                                                        J1939Tp_GetTime_T1OfPCConfig()
#define J1939Tp_GetTime_T2()                                                                        J1939Tp_GetTime_T2OfPCConfig()
#define J1939Tp_GetTime_T3()                                                                        J1939Tp_GetTime_T3OfPCConfig()
#define J1939Tp_GetTime_T4()                                                                        J1939Tp_GetTime_T4OfPCConfig()
#define J1939Tp_GetTime_Th()                                                                        J1939Tp_GetTime_ThOfPCConfig()
#define J1939Tp_GetTime_Tr()                                                                        J1939Tp_GetTime_TrOfPCConfig()
#define J1939Tp_IsTxChannelTxNSduTxNSduTableIndUsedOfTxChannel(Index)                               (((boolean)(J1939Tp_GetTxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel(Index) != J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd */
#define J1939Tp_IsTxPduTxCmNPduUsedOfTxChannel(Index)                                               (((boolean)(J1939Tp_GetTxPduTxCmNPduIdxOfTxChannel(Index) != J1939TP_NO_TXPDUTXCMNPDUIDXOFTXCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_TxPdu */
#define J1939Tp_IsTxPduTxDtNPduUsedOfTxChannel(Index)                                               (((boolean)(J1939Tp_GetTxPduTxDtNPduIdxOfTxChannel(Index) != J1939TP_NO_TXPDUTXDTNPDUIDXOFTXCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_TxPdu */
#define J1939Tp_GetTxConfTimeout()                                                                  J1939Tp_GetTxConfTimeoutOfPCConfig()
#define J1939Tp_IsTxPduTxChannelTxChannelTableIndUsedOfTxPdu(Index)                                 (((boolean)(J1939Tp_GetTxPduTxChannelTxChannelTableIndStartIdxOfTxPdu(Index) != J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd */
#define J1939Tp_IsTxChannelChannelUsedOfTxSdu(Index)                                                (((boolean)(J1939Tp_GetTxChannelChannelIdxOfTxSdu(Index) != J1939TP_NO_TXCHANNELCHANNELIDXOFTXSDU)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_TxChannel */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCSetDataMacros  J1939Tp Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define J1939Tp_SetFppRxSduSequenceCounter(Index, Value)                                              /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_SetFppTxSduSequenceCounter(Index, Value)                                              /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_SetRxSduState(Index, Value)                                                           /**< Deactivateable: 'J1939Tp_RxSduState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_SetTxPduState(Index, Value)                                                         J1939Tp_GetTxPduStateOfPCConfig()[(Index)] = (Value)
#define J1939Tp_SetTxSduState(Index, Value)                                                         J1939Tp_GetTxSduStateOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCHasMacros  J1939Tp Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define J1939Tp_HasFinalMagicNumber()                                                                 /**< Deactivateable: 'J1939Tp_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939Tp_HasFppRxSduSequenceCounter()                                                          /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasFppTxSduSequenceCounter()                                                          /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasInitDataHashCode()                                                                 /**< Deactivateable: 'J1939Tp_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939Tp_HasMainPeriod()                                                                     (TRUE != FALSE)
#define J1939Tp_HasRxChannel()                                                                        /**< Deactivateable: 'J1939Tp_RxChannel' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939Tp_HasComMChannelOfRxChannel()                                                           /**< Deactivateable: 'J1939Tp_RxChannel.ComMChannel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxCancellationSupportOfRxChannel()                                                 /**< Deactivateable: 'J1939Tp_RxChannel.RxCancellationSupport' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxChannelRxNSduRxNSduTableIndEndIdxOfRxChannel()                                   /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxChannelRxNSduRxNSduTableIndStartIdxOfRxChannel()                                 /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxChannelRxNSduRxNSduTableIndUsedOfRxChannel()                                     /**< Deactivateable: 'J1939Tp_RxChannel.RxChannelRxNSduRxNSduTableIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxDaOfRxChannel()                                                                  /**< Deactivateable: 'J1939Tp_RxChannel.RxDa' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxDynamicBlockCalculationOfRxChannel()                                             /**< Deactivateable: 'J1939Tp_RxChannel.RxDynamicBlockCalculation' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxDynamicBufferRatioOfRxChannel()                                                  /**< Deactivateable: 'J1939Tp_RxChannel.RxDynamicBufferRatio' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxIsobusChannelOfRxChannel()                                                       /**< Deactivateable: 'J1939Tp_RxChannel.RxIsobusChannel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxPacketsPerBlockOfRxChannel()                                                     /**< Deactivateable: 'J1939Tp_RxChannel.RxPacketsPerBlock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxProtocolTypeOfRxChannel()                                                        /**< Deactivateable: 'J1939Tp_RxChannel.RxProtocolType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxRetrySupportOfRxChannel()                                                        /**< Deactivateable: 'J1939Tp_RxChannel.RxRetrySupport' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxSaOfRxChannel()                                                                  /**< Deactivateable: 'J1939Tp_RxChannel.RxSa' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasTxPduRxEtpFcNPduIdxOfRxChannel()                                                   /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxEtpFcNPduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasTxPduRxEtpFcNPduUsedOfRxChannel()                                                  /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxEtpFcNPduUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasTxPduRxFcNPduIdxOfRxChannel()                                                      /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxFcNPduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasTxPduRxFcNPduUsedOfRxChannel()                                                     /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxFcNPduUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxChannelRxNSdu()                                                                  /**< Deactivateable: 'J1939Tp_RxChannelRxNSdu' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939Tp_HasRxSduRxNSduIdxOfRxChannelRxNSdu()                                                  /**< Deactivateable: 'J1939Tp_RxChannelRxNSdu.RxSduRxNSduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxChannelRxNSduRxNSduTableInd()                                                    /**< Deactivateable: 'J1939Tp_RxChannelRxNSduRxNSduTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxPdu()                                                                          (TRUE != FALSE)
#define J1939Tp_HasInvalidHndOfRxPdu()                                                                /**< Deactivateable: 'J1939Tp_RxPdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasOnIsobusOfRxPdu()                                                                  /**< Deactivateable: 'J1939Tp_RxPdu.OnIsobus' Reason: 'the value of J1939Tp_OnIsobusOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasPduFormatOfRxPdu()                                                               (TRUE != FALSE)
#define J1939Tp_HasPduTypeOfRxPdu()                                                                 (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannelRxChannelTableIndEndIdxOfRxPdu()                                     /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndEndIdx' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasRxPduRxChannelRxChannelTableIndStartIdxOfRxPdu()                                   /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndStartIdx' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasRxPduRxChannelRxChannelTableIndUsedOfRxPdu()                                       /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxChannelRxChannelTableIndUsed' Reason: 'the optional indirection is deactivated because RxPduRxChannelRxChannelTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasRxPduRxSduRxSduTableIndEndIdxOfRxPdu()                                             /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndEndIdx' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasRxPduRxSduRxSduTableIndStartIdxOfRxPdu()                                           /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndStartIdx' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasRxPduRxSduRxSduTableIndUsedOfRxPdu()                                               /**< Deactivateable: 'J1939Tp_RxPdu.RxPduRxSduRxSduTableIndUsed' Reason: 'the optional indirection is deactivated because RxPduRxSduRxSduTableIndUsedOfRxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasRxPduTxChannelTxChannelTableIndEndIdxOfRxPdu()                                   (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableIndStartIdxOfRxPdu()                                 (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableIndUsedOfRxPdu()                                     (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannel()                                                                   /**< Deactivateable: 'J1939Tp_RxPduRxChannel' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939Tp_HasRxChannelRxChannelIdxOfRxPduRxChannel()                                            /**< Deactivateable: 'J1939Tp_RxPduRxChannel.RxChannelRxChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxPduRxChannelRxChannelTableInd()                                                  /**< Deactivateable: 'J1939Tp_RxPduRxChannelRxChannelTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxPduRxSdu()                                                                       /**< Deactivateable: 'J1939Tp_RxPduRxSdu' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939Tp_HasRxSduRxSduIdxOfRxPduRxSdu()                                                        /**< Deactivateable: 'J1939Tp_RxPduRxSdu.RxSduRxSduIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxPduRxSduRxSduTableInd()                                                          /**< Deactivateable: 'J1939Tp_RxPduRxSduRxSduTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxPduTxChannel()                                                                 (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxChannelIdxOfRxPduTxChannel()                                          (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableInd()                                                (TRUE != FALSE)
#define J1939Tp_HasRxSdu()                                                                            /**< Deactivateable: 'J1939Tp_RxSdu' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939Tp_HasFppRxSduSequenceCounterIdxOfRxSdu()                                                /**< Deactivateable: 'J1939Tp_RxSdu.FppRxSduSequenceCounterIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasFppRxSduSequenceCounterUsedOfRxSdu()                                               /**< Deactivateable: 'J1939Tp_RxSdu.FppRxSduSequenceCounterUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasInvalidHndOfRxSdu()                                                                /**< Deactivateable: 'J1939Tp_RxSdu.InvalidHnd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasIsVariableOfRxSdu()                                                                /**< Deactivateable: 'J1939Tp_RxSdu.IsVariable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasMetaDataLengthOfRxSdu()                                                            /**< Deactivateable: 'J1939Tp_RxSdu.MetaDataLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasPGNOfRxSdu()                                                                       /**< Deactivateable: 'J1939Tp_RxSdu.PGN' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasPduLengthOfRxSdu()                                                                 /**< Deactivateable: 'J1939Tp_RxSdu.PduLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxChannelChannelIdxOfRxSdu()                                                       /**< Deactivateable: 'J1939Tp_RxSdu.RxChannelChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxChannelChannelUsedOfRxSdu()                                                      /**< Deactivateable: 'J1939Tp_RxSdu.RxChannelChannelUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxSduStateIdxOfRxSdu()                                                             /**< Deactivateable: 'J1939Tp_RxSdu.RxSduStateIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasSduIdOfRxSdu()                                                                     /**< Deactivateable: 'J1939Tp_RxSdu.SduId' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasRxSduState()                                                                       /**< Deactivateable: 'J1939Tp_RxSduState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasSizeOfRxPdu()                                                                    (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduTxChannel()                                                           (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduTxChannelTxChannelTableInd()                                          (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannel()                                                                (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelTxNSdu()                                                          (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelTxNSduTxNSduTableInd()                                            (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPdu()                                                                    (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduState()                                                               (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduTxChannel()                                                           (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduTxChannelTxChannelTableInd()                                          (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxSdu()                                                                    (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxSduState()                                                               (TRUE != FALSE)
#define J1939Tp_HasTime_Bam()                                                                       (TRUE != FALSE)
#define J1939Tp_HasTime_Fp()                                                                        (TRUE != FALSE)
#define J1939Tp_HasTime_T1()                                                                        (TRUE != FALSE)
#define J1939Tp_HasTime_T2()                                                                        (TRUE != FALSE)
#define J1939Tp_HasTime_T3()                                                                        (TRUE != FALSE)
#define J1939Tp_HasTime_T4()                                                                        (TRUE != FALSE)
#define J1939Tp_HasTime_Th()                                                                        (TRUE != FALSE)
#define J1939Tp_HasTime_Tr()                                                                        (TRUE != FALSE)
#define J1939Tp_HasTxChannel()                                                                      (TRUE != FALSE)
#define J1939Tp_HasComMChannelOfTxChannel()                                                         (TRUE != FALSE)
#define J1939Tp_HasTxCancellationSupportOfTxChannel()                                                 /**< Deactivateable: 'J1939Tp_TxChannel.TxCancellationSupport' Reason: 'the value of J1939Tp_TxCancellationSupportOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasTxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel()                                 (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel()                               (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduTxNSduTableIndUsedOfTxChannel()                                   (TRUE != FALSE)
#define J1939Tp_HasTxDaOfTxChannel()                                                                (TRUE != FALSE)
#define J1939Tp_HasTxDynamicBlockCalculationOfTxChannel()                                             /**< Deactivateable: 'J1939Tp_TxChannel.TxDynamicBlockCalculation' Reason: 'the value of J1939Tp_TxDynamicBlockCalculationOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasTxIsobusChannelOfTxChannel()                                                       /**< Deactivateable: 'J1939Tp_TxChannel.TxIsobusChannel' Reason: 'the value of J1939Tp_TxIsobusChannelOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasTxMaxPacketsPerBlockOfTxChannel()                                                (TRUE != FALSE)
#define J1939Tp_HasTxPduTxCmNPduIdxOfTxChannel()                                                    (TRUE != FALSE)
#define J1939Tp_HasTxPduTxCmNPduUsedOfTxChannel()                                                   (TRUE != FALSE)
#define J1939Tp_HasTxPduTxDtNPduIdxOfTxChannel()                                                    (TRUE != FALSE)
#define J1939Tp_HasTxPduTxDtNPduUsedOfTxChannel()                                                   (TRUE != FALSE)
#define J1939Tp_HasTxPduTxEtpCmNPduIdxOfTxChannel()                                                   /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpCmNPduIdx' Reason: 'the optional indirection is deactivated because TxPduTxEtpCmNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxPduTxEtpCmNPduUsedOfTxChannel()                                                  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpCmNPduUsed' Reason: 'the optional indirection is deactivated because TxPduTxEtpCmNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxPduTxEtpDtNPduIdxOfTxChannel()                                                   /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpDtNPduIdx' Reason: 'the optional indirection is deactivated because TxPduTxEtpDtNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxPduTxEtpDtNPduUsedOfTxChannel()                                                  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpDtNPduUsed' Reason: 'the optional indirection is deactivated because TxPduTxEtpDtNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxPriOfTxChannel()                                                               (TRUE != FALSE)
#define J1939Tp_HasTxProtocolTypeOfTxChannel()                                                      (TRUE != FALSE)
#define J1939Tp_HasTxRetrySupportOfTxChannel()                                                        /**< Deactivateable: 'J1939Tp_TxChannel.TxRetrySupport' Reason: 'the value of J1939Tp_TxRetrySupportOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasTxSaOfTxChannel()                                                                (TRUE != FALSE)
#define J1939Tp_HasTxVarPriOfTxChannel()                                                              /**< Deactivateable: 'J1939Tp_TxChannel.TxVarPri' Reason: 'the value of J1939Tp_TxVarPriOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasTxChannelTxNSdu()                                                                (TRUE != FALSE)
#define J1939Tp_HasTxSduTxNSduIdxOfTxChannelTxNSdu()                                                (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduTxNSduTableInd()                                                  (TRUE != FALSE)
#define J1939Tp_HasTxConfTimeout()                                                                  (TRUE != FALSE)
#define J1939Tp_HasTxPdu()                                                                          (TRUE != FALSE)
#define J1939Tp_HasInvalidHndOfTxPdu()                                                                /**< Deactivateable: 'J1939Tp_TxPdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasOnIsobusOfTxPdu()                                                                  /**< Deactivateable: 'J1939Tp_TxPdu.OnIsobus' Reason: 'the value of J1939Tp_OnIsobusOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasPduIdOfTxPdu()                                                                   (TRUE != FALSE)
#define J1939Tp_HasPduTypeOfTxPdu()                                                                 (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannelRxChannelTableIndEndIdxOfTxPdu()                                     /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndEndIdx' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxPduRxChannelRxChannelTableIndStartIdxOfTxPdu()                                   /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndStartIdx' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxPduRxChannelRxChannelTableIndUsedOfTxPdu()                                       /**< Deactivateable: 'J1939Tp_TxPdu.TxPduRxChannelRxChannelTableIndUsed' Reason: 'the optional indirection is deactivated because TxPduRxChannelRxChannelTableIndUsedOfTxPdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxPduStateIdxOfTxPdu()                                                           (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableIndEndIdxOfTxPdu()                                   (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableIndStartIdxOfTxPdu()                                 (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableIndUsedOfTxPdu()                                     (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannel()                                                                   /**< Deactivateable: 'J1939Tp_TxPduRxChannel' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939Tp_HasRxChannelRxChannelIdxOfTxPduRxChannel()                                            /**< Deactivateable: 'J1939Tp_TxPduRxChannel.RxChannelRxChannelIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasTxPduRxChannelRxChannelTableInd()                                                  /**< Deactivateable: 'J1939Tp_TxPduRxChannelRxChannelTableInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_HasTxPduState()                                                                     (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannel()                                                                 (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxChannelIdxOfTxPduTxChannel()                                          (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableInd()                                                (TRUE != FALSE)
#define J1939Tp_HasTxSdu()                                                                          (TRUE != FALSE)
#define J1939Tp_HasFppTxSduSequenceCounterIdxOfTxSdu()                                                /**< Deactivateable: 'J1939Tp_TxSdu.FppTxSduSequenceCounterIdx' Reason: 'the optional indirection is deactivated because FppTxSduSequenceCounterUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasFppTxSduSequenceCounterUsedOfTxSdu()                                               /**< Deactivateable: 'J1939Tp_TxSdu.FppTxSduSequenceCounterUsed' Reason: 'the optional indirection is deactivated because FppTxSduSequenceCounterUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasInvalidHndOfTxSdu()                                                                /**< Deactivateable: 'J1939Tp_TxSdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfTxSdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasIsVariableOfTxSdu()                                                                /**< Deactivateable: 'J1939Tp_TxSdu.IsVariable' Reason: 'the value of J1939Tp_IsVariableOfTxSdu is always 'false' due to this, the array is deactivated.' */
#define J1939Tp_HasMetaDataLengthOfTxSdu()                                                          (TRUE != FALSE)
#define J1939Tp_HasPGNOfTxSdu()                                                                     (TRUE != FALSE)
#define J1939Tp_HasPduFormatOfTxSdu()                                                               (TRUE != FALSE)
#define J1939Tp_HasPduLengthOfTxSdu()                                                               (TRUE != FALSE)
#define J1939Tp_HasSduIdOfTxSdu()                                                                   (TRUE != FALSE)
#define J1939Tp_HasTxChannelChannelIdxOfTxSdu()                                                     (TRUE != FALSE)
#define J1939Tp_HasTxChannelChannelUsedOfTxSdu()                                                    (TRUE != FALSE)
#define J1939Tp_HasTxPduDirectNPduIdxOfTxSdu()                                                        /**< Deactivateable: 'J1939Tp_TxSdu.TxPduDirectNPduIdx' Reason: 'the optional indirection is deactivated because TxPduDirectNPduUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxPduDirectNPduUsedOfTxSdu()                                                       /**< Deactivateable: 'J1939Tp_TxSdu.TxPduDirectNPduUsed' Reason: 'the optional indirection is deactivated because TxPduDirectNPduUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939Tp_HasTxSduStateIdxOfTxSdu()                                                           (TRUE != FALSE)
#define J1939Tp_HasTxSduState()                                                                     (TRUE != FALSE)
#define J1939Tp_HasPCConfig()                                                                       (TRUE != FALSE)
#define J1939Tp_HasFinalMagicNumberOfPCConfig()                                                       /**< Deactivateable: 'J1939Tp_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939Tp_HasInitDataHashCodeOfPCConfig()                                                       /**< Deactivateable: 'J1939Tp_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939Tp_HasMainPeriodOfPCConfig()                                                           (TRUE != FALSE)
#define J1939Tp_HasRxPduOfPCConfig()                                                                (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelOfPCConfig()                                                       (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableIndOfPCConfig()                                      (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduOfPCConfig()                                                          (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduTxChannelOfPCConfig()                                                 (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduTxChannelTxChannelTableIndOfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelOfPCConfig()                                                      (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelTxNSduOfPCConfig()                                                (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelTxNSduTxNSduTableIndOfPCConfig()                                  (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduOfPCConfig()                                                          (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduStateOfPCConfig()                                                     (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduTxChannelOfPCConfig()                                                 (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduTxChannelTxChannelTableIndOfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxSduOfPCConfig()                                                          (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxSduStateOfPCConfig()                                                     (TRUE != FALSE)
#define J1939Tp_HasTime_BamOfPCConfig()                                                             (TRUE != FALSE)
#define J1939Tp_HasTime_FpOfPCConfig()                                                              (TRUE != FALSE)
#define J1939Tp_HasTime_T1OfPCConfig()                                                              (TRUE != FALSE)
#define J1939Tp_HasTime_T2OfPCConfig()                                                              (TRUE != FALSE)
#define J1939Tp_HasTime_T3OfPCConfig()                                                              (TRUE != FALSE)
#define J1939Tp_HasTime_T4OfPCConfig()                                                              (TRUE != FALSE)
#define J1939Tp_HasTime_ThOfPCConfig()                                                              (TRUE != FALSE)
#define J1939Tp_HasTime_TrOfPCConfig()                                                              (TRUE != FALSE)
#define J1939Tp_HasTxChannelOfPCConfig()                                                            (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduOfPCConfig()                                                      (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduTxNSduTableIndOfPCConfig()                                        (TRUE != FALSE)
#define J1939Tp_HasTxConfTimeoutOfPCConfig()                                                        (TRUE != FALSE)
#define J1939Tp_HasTxPduOfPCConfig()                                                                (TRUE != FALSE)
#define J1939Tp_HasTxPduStateOfPCConfig()                                                           (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelOfPCConfig()                                                       (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableIndOfPCConfig()                                      (TRUE != FALSE)
#define J1939Tp_HasTxSduOfPCConfig()                                                                (TRUE != FALSE)
#define J1939Tp_HasTxSduStateOfPCConfig()                                                           (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCExistsEnumMacros  J1939Tp Exists Enum Macros (PRE_COMPILE)
  \brief  These macros can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define J1939Tp_ExistsPROTOCOL_UNUSEDRxProtocolTypeOfRxChannel()                                      /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_BAMRxProtocolTypeOfRxChannel()                                         /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_CMDTRxProtocolTypeOfRxChannel()                                        /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_ETPRxProtocolTypeOfRxChannel()                                         /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_FPPRxProtocolTypeOfRxChannel()                                         /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsUNDEFINEDPduFormatOfRxPdu()                                                     /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPDU1PduFormatOfRxPdu()                                                          /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPDU2PduFormatOfRxPdu()                                                          /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsUNUSEDPduTypeOfRxPdu()                                                          /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsDIRECTPduTypeOfRxPdu()                                                          /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsTPCMPduTypeOfRxPdu()                                                            /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsTPDTPduTypeOfRxPdu()                                                            /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsETPCMPduTypeOfRxPdu()                                                           /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsETPDTPduTypeOfRxPdu()                                                           /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsFPPPduTypeOfRxPdu()                                                             /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_UNUSEDTxProtocolTypeOfTxChannel()                                      /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_BAMTxProtocolTypeOfTxChannel()                                         /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_CMDTTxProtocolTypeOfTxChannel()                                        /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_ETPTxProtocolTypeOfTxChannel()                                         /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPROTOCOL_FPPTxProtocolTypeOfTxChannel()                                         /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsUNUSEDPduTypeOfTxPdu()                                                          /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsDIRECTPduTypeOfTxPdu()                                                          /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsTPCMPduTypeOfTxPdu()                                                            /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsTPDTPduTypeOfTxPdu()                                                            /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsETPCMPduTypeOfTxPdu()                                                           /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsETPDTPduTypeOfTxPdu()                                                           /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsFPPPduTypeOfTxPdu()                                                             /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsUNDEFINEDPduFormatOfTxSdu()                                                     /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPDU1PduFormatOfTxSdu()                                                          /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
#define J1939Tp_ExistsPDU2PduFormatOfTxSdu()                                                          /**< Deactivated, because the PrecompilePreprocessingStrategy isn't COMPILETIME_CHECKING! */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCIncrementDataMacros  J1939Tp Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define J1939Tp_IncFppRxSduSequenceCounter(Index)                                                     /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IncFppTxSduSequenceCounter(Index)                                                     /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IncRxSduState(Index)                                                                  /**< Deactivateable: 'J1939Tp_RxSduState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_IncTxPduState(Index)                                                                J1939Tp_GetTxPduState(Index)++
#define J1939Tp_IncTxSduState(Index)                                                                J1939Tp_GetTxSduState(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCDecrementDataMacros  J1939Tp Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define J1939Tp_DecFppRxSduSequenceCounter(Index)                                                     /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_DecFppTxSduSequenceCounter(Index)                                                     /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_DecRxSduState(Index)                                                                  /**< Deactivateable: 'J1939Tp_RxSduState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_DecTxPduState(Index)                                                                J1939Tp_GetTxPduState(Index)--
#define J1939Tp_DecTxSduState(Index)                                                                J1939Tp_GetTxSduState(Index)--
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCAddDataMacros  J1939Tp Add Data Macros (PRE_COMPILE)
  \brief  These macros can be used to add VAR data with numerical nature.
  \{
*/ 
#define J1939Tp_AddFppRxSduSequenceCounter(Index, Value)                                              /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_AddFppTxSduSequenceCounter(Index, Value)                                              /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_AddRxSduState(Index, Value)                                                           /**< Deactivateable: 'J1939Tp_RxSduState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_AddTxPduState(Index, Value)                                                         J1939Tp_SetTxPduState(Index, (J1939Tp_GetTxPduState(Index) + Value))
#define J1939Tp_AddTxSduState(Index, Value)                                                         J1939Tp_SetTxSduState(Index, (J1939Tp_GetTxSduState(Index) + Value))
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCSubstractDataMacros  J1939Tp Substract Data Macros (PRE_COMPILE)
  \brief  These macros can be used to substract VAR data with numerical nature.
  \{
*/ 
#define J1939Tp_SubFppRxSduSequenceCounter(Index, Value)                                              /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_SubFppTxSduSequenceCounter(Index, Value)                                              /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_SubRxSduState(Index, Value)                                                           /**< Deactivateable: 'J1939Tp_RxSduState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939Tp_SubTxPduState(Index, Value)                                                         J1939Tp_SetTxPduState(Index, (J1939Tp_GetTxPduState(Index) - Value))
#define J1939Tp_SubTxSduState(Index, Value)                                                         J1939Tp_SetTxSduState(Index, (J1939Tp_GetTxSduState(Index) - Value))
/** 
  \}
*/ 

  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPCIterableTypes  J1939Tp Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate J1939Tp_RxPdu */
typedef uint8_least J1939Tp_RxPduIterType;

/**   \brief  type used to iterate J1939Tp_RxPduTxChannel */
typedef uint8_least J1939Tp_RxPduTxChannelIterType;

/**   \brief  type used to iterate J1939Tp_RxPduTxChannelTxChannelTableInd */
typedef uint8_least J1939Tp_RxPduTxChannelTxChannelTableIndIterType;

/**   \brief  type used to iterate J1939Tp_TxChannel */
typedef uint8_least J1939Tp_TxChannelIterType;

/**   \brief  type used to iterate J1939Tp_TxChannelTxNSdu */
typedef uint8_least J1939Tp_TxChannelTxNSduIterType;

/**   \brief  type used to iterate J1939Tp_TxChannelTxNSduTxNSduTableInd */
typedef uint8_least J1939Tp_TxChannelTxNSduTxNSduTableIndIterType;

/**   \brief  type used to iterate J1939Tp_TxPdu */
typedef uint8_least J1939Tp_TxPduIterType;

/**   \brief  type used to iterate J1939Tp_TxPduState */
typedef uint8_least J1939Tp_TxPduStateIterType;

/**   \brief  type used to iterate J1939Tp_TxPduTxChannel */
typedef uint8_least J1939Tp_TxPduTxChannelIterType;

/**   \brief  type used to iterate J1939Tp_TxPduTxChannelTxChannelTableInd */
typedef uint8_least J1939Tp_TxPduTxChannelTxChannelTableIndIterType;

/**   \brief  type used to iterate J1939Tp_TxSdu */
typedef uint8_least J1939Tp_TxSduIterType;

/**   \brief  type used to iterate J1939Tp_TxSduState */
typedef uint8_least J1939Tp_TxSduStateIterType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCValueTypes  J1939Tp Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for J1939Tp_MainPeriod */
typedef uint8 J1939Tp_MainPeriodType;

/**   \brief  value based type definition for J1939Tp_PduFormatOfRxPdu */
typedef uint8 J1939Tp_PduFormatOfRxPduType;

/**   \brief  value based type definition for J1939Tp_PduTypeOfRxPdu */
typedef uint8 J1939Tp_PduTypeOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduTxChannelTxChannelTableIndEndIdxOfRxPdu */
typedef uint8 J1939Tp_RxPduTxChannelTxChannelTableIndEndIdxOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu */
typedef uint8 J1939Tp_RxPduTxChannelTxChannelTableIndStartIdxOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduTxChannelTxChannelTableIndUsedOfRxPdu */
typedef boolean J1939Tp_RxPduTxChannelTxChannelTableIndUsedOfRxPduType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxChannelIdxOfRxPduTxChannel */
typedef uint8 J1939Tp_TxChannelTxChannelIdxOfRxPduTxChannelType;

/**   \brief  value based type definition for J1939Tp_RxPduTxChannelTxChannelTableInd */
typedef uint8 J1939Tp_RxPduTxChannelTxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPdu */
typedef uint8 J1939Tp_SizeOfRxPduType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPduTxChannel */
typedef uint8 J1939Tp_SizeOfRxPduTxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPduTxChannelTxChannelTableInd */
typedef uint8 J1939Tp_SizeOfRxPduTxChannelTxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxChannel */
typedef uint8 J1939Tp_SizeOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxChannelTxNSdu */
typedef uint8 J1939Tp_SizeOfTxChannelTxNSduType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxChannelTxNSduTxNSduTableInd */
typedef uint8 J1939Tp_SizeOfTxChannelTxNSduTxNSduTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPdu */
typedef uint8 J1939Tp_SizeOfTxPduType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPduState */
typedef uint8 J1939Tp_SizeOfTxPduStateType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPduTxChannel */
typedef uint8 J1939Tp_SizeOfTxPduTxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPduTxChannelTxChannelTableInd */
typedef uint8 J1939Tp_SizeOfTxPduTxChannelTxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxSdu */
typedef uint8 J1939Tp_SizeOfTxSduType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxSduState */
typedef uint8 J1939Tp_SizeOfTxSduStateType;

/**   \brief  value based type definition for J1939Tp_Time_Bam */
typedef uint8 J1939Tp_Time_BamType;

/**   \brief  value based type definition for J1939Tp_Time_Fp */
typedef uint8 J1939Tp_Time_FpType;

/**   \brief  value based type definition for J1939Tp_Time_T1 */
typedef uint8 J1939Tp_Time_T1Type;

/**   \brief  value based type definition for J1939Tp_Time_T2 */
typedef uint8 J1939Tp_Time_T2Type;

/**   \brief  value based type definition for J1939Tp_Time_T3 */
typedef uint8 J1939Tp_Time_T3Type;

/**   \brief  value based type definition for J1939Tp_Time_T4 */
typedef uint8 J1939Tp_Time_T4Type;

/**   \brief  value based type definition for J1939Tp_Time_Th */
typedef uint8 J1939Tp_Time_ThType;

/**   \brief  value based type definition for J1939Tp_Time_Tr */
typedef uint8 J1939Tp_Time_TrType;

/**   \brief  value based type definition for J1939Tp_ComMChannelOfTxChannel */
typedef NetworkHandleType J1939Tp_ComMChannelOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel */
typedef uint8 J1939Tp_TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel */
typedef uint8 J1939Tp_TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxNSduTxNSduTableIndUsedOfTxChannel */
typedef boolean J1939Tp_TxChannelTxNSduTxNSduTableIndUsedOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxDaOfTxChannel */
typedef uint8 J1939Tp_TxDaOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxMaxPacketsPerBlockOfTxChannel */
typedef uint8 J1939Tp_TxMaxPacketsPerBlockOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxCmNPduIdxOfTxChannel */
typedef uint8 J1939Tp_TxPduTxCmNPduIdxOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxCmNPduUsedOfTxChannel */
typedef boolean J1939Tp_TxPduTxCmNPduUsedOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxDtNPduIdxOfTxChannel */
typedef uint8 J1939Tp_TxPduTxDtNPduIdxOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxDtNPduUsedOfTxChannel */
typedef boolean J1939Tp_TxPduTxDtNPduUsedOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPriOfTxChannel */
typedef uint8 J1939Tp_TxPriOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxProtocolTypeOfTxChannel */
typedef uint8 J1939Tp_TxProtocolTypeOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxSaOfTxChannel */
typedef uint8 J1939Tp_TxSaOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxSduTxNSduIdxOfTxChannelTxNSdu */
typedef uint8 J1939Tp_TxSduTxNSduIdxOfTxChannelTxNSduType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxNSduTxNSduTableInd */
typedef uint8 J1939Tp_TxChannelTxNSduTxNSduTableIndType;

/**   \brief  value based type definition for J1939Tp_TxConfTimeout */
typedef uint8 J1939Tp_TxConfTimeoutType;

/**   \brief  value based type definition for J1939Tp_PduIdOfTxPdu */
typedef uint8 J1939Tp_PduIdOfTxPduType;

/**   \brief  value based type definition for J1939Tp_PduTypeOfTxPdu */
typedef uint8 J1939Tp_PduTypeOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduStateIdxOfTxPdu */
typedef uint8 J1939Tp_TxPduStateIdxOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduTxChannelTxChannelTableIndEndIdxOfTxPdu */
typedef uint8 J1939Tp_TxPduTxChannelTxChannelTableIndEndIdxOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu */
typedef uint8 J1939Tp_TxPduTxChannelTxChannelTableIndStartIdxOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduTxChannelTxChannelTableIndUsedOfTxPdu */
typedef boolean J1939Tp_TxPduTxChannelTxChannelTableIndUsedOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxChannelIdxOfTxPduTxChannel */
typedef uint8 J1939Tp_TxChannelTxChannelIdxOfTxPduTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxChannelTxChannelTableInd */
typedef uint8 J1939Tp_TxPduTxChannelTxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_MetaDataLengthOfTxSdu */
typedef uint8 J1939Tp_MetaDataLengthOfTxSduType;

/**   \brief  value based type definition for J1939Tp_PGNOfTxSdu */
typedef uint16 J1939Tp_PGNOfTxSduType;

/**   \brief  value based type definition for J1939Tp_PduFormatOfTxSdu */
typedef uint8 J1939Tp_PduFormatOfTxSduType;

/**   \brief  value based type definition for J1939Tp_PduLengthOfTxSdu */
typedef uint16 J1939Tp_PduLengthOfTxSduType;

/**   \brief  value based type definition for J1939Tp_SduIdOfTxSdu */
typedef uint8 J1939Tp_SduIdOfTxSduType;

/**   \brief  value based type definition for J1939Tp_TxChannelChannelIdxOfTxSdu */
typedef uint8 J1939Tp_TxChannelChannelIdxOfTxSduType;

/**   \brief  value based type definition for J1939Tp_TxChannelChannelUsedOfTxSdu */
typedef boolean J1939Tp_TxChannelChannelUsedOfTxSduType;

/**   \brief  value based type definition for J1939Tp_TxSduStateIdxOfTxSdu */
typedef uint8 J1939Tp_TxSduStateIdxOfTxSduType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPCStructTypes  J1939Tp Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in J1939Tp_RxPdu */
/*! \spec weak type invariant () { 
 * (!((self.RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu != J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU)) || (self.RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu < J1939Tp_GetSizeOfRxPduTxChannelTxChannelTableInd())) &&
 * (!((self.RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu != J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU)) || (self.RxPduTxChannelTxChannelTableIndEndIdxOfRxPdu < J1939Tp_GetSizeOfRxPduTxChannelTxChannelTableInd()))
 * } */
typedef struct sJ1939Tp_RxPduType
{
  J1939Tp_PduFormatOfRxPduType PduFormatOfRxPdu;  /**< PDU format */
  J1939Tp_PduTypeOfRxPduType PduTypeOfRxPdu;  /**< PDU Type */
  J1939Tp_RxPduTxChannelTxChannelTableIndEndIdxOfRxPduType RxPduTxChannelTxChannelTableIndEndIdxOfRxPdu;  /**< the end index of the 0:n relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd */
  J1939Tp_RxPduTxChannelTxChannelTableIndStartIdxOfRxPduType RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu;  /**< the start index of the 0:n relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd */
} J1939Tp_RxPduType;

/**   \brief  type used in J1939Tp_RxPduTxChannel */
/*! \spec weak type invariant () { 
 * (self.TxChannelTxChannelIdxOfRxPduTxChannel < J1939Tp_GetSizeOfTxChannel())
 * } */
typedef struct sJ1939Tp_RxPduTxChannelType
{
  J1939Tp_TxChannelTxChannelIdxOfRxPduTxChannelType TxChannelTxChannelIdxOfRxPduTxChannel;  /**< the index of the 1:1 relation pointing to J1939Tp_TxChannel */
} J1939Tp_RxPduTxChannelType;

/**   \brief  type used in J1939Tp_TxChannel */
/*! \spec weak type invariant () { 
 * (!((self.TxPduTxCmNPduIdxOfTxChannel != J1939TP_NO_TXPDUTXCMNPDUIDXOFTXCHANNEL)) || (self.TxPduTxCmNPduIdxOfTxChannel < J1939Tp_GetSizeOfTxPdu())) &&
 * (!((self.TxPduTxDtNPduIdxOfTxChannel != J1939TP_NO_TXPDUTXDTNPDUIDXOFTXCHANNEL)) || (self.TxPduTxDtNPduIdxOfTxChannel < J1939Tp_GetSizeOfTxPdu())) &&
 * (!((self.TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel != J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL)) || (self.TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel < J1939Tp_GetSizeOfTxChannelTxNSduTxNSduTableInd())) &&
 * (!((self.TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel != J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL)) || (self.TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel < J1939Tp_GetSizeOfTxChannelTxNSduTxNSduTableInd()))
 * } */
typedef struct sJ1939Tp_TxChannelType
{
  J1939Tp_ComMChannelOfTxChannelType ComMChannelOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxChannelComMNetworkHandleRef */
  J1939Tp_TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannelType TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel;  /**< the end index of the 0:n relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd */
  J1939Tp_TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannelType TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel;  /**< the start index of the 0:n relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd */
  J1939Tp_TxDaOfTxChannelType TxDaOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxDa */
  J1939Tp_TxMaxPacketsPerBlockOfTxChannelType TxMaxPacketsPerBlockOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxMaxPacketsPerBlock */
  J1939Tp_TxPduTxCmNPduIdxOfTxChannelType TxPduTxCmNPduIdxOfTxChannel;  /**< the index of the 0:1 relation pointing to J1939Tp_TxPdu */
  J1939Tp_TxPduTxDtNPduIdxOfTxChannelType TxPduTxDtNPduIdxOfTxChannel;  /**< the index of the 0:1 relation pointing to J1939Tp_TxPdu */
  J1939Tp_TxPriOfTxChannelType TxPriOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxPriority */
  J1939Tp_TxProtocolTypeOfTxChannelType TxProtocolTypeOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxProtocolType */
  J1939Tp_TxSaOfTxChannelType TxSaOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxSa */
} J1939Tp_TxChannelType;

/**   \brief  type used in J1939Tp_TxChannelTxNSdu */
/*! \spec weak type invariant () { 
 * (self.TxSduTxNSduIdxOfTxChannelTxNSdu < J1939Tp_GetSizeOfTxSdu())
 * } */
typedef struct sJ1939Tp_TxChannelTxNSduType
{
  J1939Tp_TxSduTxNSduIdxOfTxChannelTxNSduType TxSduTxNSduIdxOfTxChannelTxNSdu;  /**< the index of the 1:1 relation pointing to J1939Tp_TxSdu */
} J1939Tp_TxChannelTxNSduType;

/**   \brief  type used in J1939Tp_TxPdu */
/*! \spec weak type invariant () { 
 * (self.TxPduStateIdxOfTxPdu < J1939Tp_GetSizeOfTxPduState()) &&
 * (!((self.TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu != J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU)) || (self.TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu < J1939Tp_GetSizeOfTxPduTxChannelTxChannelTableInd())) &&
 * (!((self.TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu != J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU)) || (self.TxPduTxChannelTxChannelTableIndEndIdxOfTxPdu < J1939Tp_GetSizeOfTxPduTxChannelTxChannelTableInd()))
 * } */
typedef struct sJ1939Tp_TxPduType
{
  J1939Tp_PduIdOfTxPduType PduIdOfTxPdu;  /**< PDU ID */
  J1939Tp_PduTypeOfTxPduType PduTypeOfTxPdu;  /**< PDU Type */
  J1939Tp_TxPduStateIdxOfTxPduType TxPduStateIdxOfTxPdu;  /**< the index of the 1:1 relation pointing to J1939Tp_TxPduState */
  J1939Tp_TxPduTxChannelTxChannelTableIndEndIdxOfTxPduType TxPduTxChannelTxChannelTableIndEndIdxOfTxPdu;  /**< the end index of the 0:n relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd */
  J1939Tp_TxPduTxChannelTxChannelTableIndStartIdxOfTxPduType TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu;  /**< the start index of the 0:n relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd */
} J1939Tp_TxPduType;

/**   \brief  type used in J1939Tp_TxPduTxChannel */
/*! \spec weak type invariant () { 
 * (self.TxChannelTxChannelIdxOfTxPduTxChannel < J1939Tp_GetSizeOfTxChannel())
 * } */
typedef struct sJ1939Tp_TxPduTxChannelType
{
  J1939Tp_TxChannelTxChannelIdxOfTxPduTxChannelType TxChannelTxChannelIdxOfTxPduTxChannel;  /**< the index of the 1:1 relation pointing to J1939Tp_TxChannel */
} J1939Tp_TxPduTxChannelType;

/**   \brief  type used in J1939Tp_TxSdu */
/*! \spec weak type invariant () { 
 * (self.TxSduStateIdxOfTxSdu < J1939Tp_GetSizeOfTxSduState()) &&
 * (!((self.TxChannelChannelIdxOfTxSdu != J1939TP_NO_TXCHANNELCHANNELIDXOFTXSDU)) || (self.TxChannelChannelIdxOfTxSdu < J1939Tp_GetSizeOfTxChannel()))
 * } */
typedef struct sJ1939Tp_TxSduType
{
  J1939Tp_PGNOfTxSduType PGNOfTxSdu;  /**< PGN */
  J1939Tp_PduLengthOfTxSduType PduLengthOfTxSdu;  /**< PDU Length */
  J1939Tp_MetaDataLengthOfTxSduType MetaDataLengthOfTxSdu;  /**< MetaData Length */
  J1939Tp_PduFormatOfTxSduType PduFormatOfTxSdu;  /**< PDU format */
  J1939Tp_SduIdOfTxSduType SduIdOfTxSdu;  /**< SDU ID */
  J1939Tp_TxChannelChannelIdxOfTxSduType TxChannelChannelIdxOfTxSdu;  /**< the index of the 0:1 relation pointing to J1939Tp_TxChannel */
  J1939Tp_TxSduStateIdxOfTxSduType TxSduStateIdxOfTxSdu;  /**< the index of the 1:1 relation pointing to J1939Tp_TxSduState */
} J1939Tp_TxSduType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCSymbolicStructTypes  J1939Tp Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to J1939Tp_TxPduState */
typedef struct J1939Tp_TxPduStateStructSTag
{
  J1939Tp_TxNPduStateType TPCM_Tp_oJ1939_bms_7c7c1783_Tx;
  J1939Tp_TxNPduStateType TPDT_Tp_oJ1939_bms_8162bd5c_Tx;
} J1939Tp_TxPduStateStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Tp_TxSduState */
typedef struct J1939Tp_TxSduStateStructSTag
{
  J1939Tp_TxNSduStateType BCS_oJ1939_bms_baf9d3e6_Tx;
  J1939Tp_TxNSduStateType BMV_oJ1939_bms_25dabb18_Tx;
  J1939Tp_TxNSduStateType BCP_oJ1939_bms_a9d1ea95_Tx;
  J1939Tp_TxNSduStateType BSOC_oJ1939_bms_340842a2_Tx;
  J1939Tp_TxNSduStateType BRM_oJ1939_bms_e96b01db_Tx;
  J1939Tp_TxNSduStateType BMT_oJ1939_bms_38156aba_Tx;
} J1939Tp_TxSduStateStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCUnionIndexAndSymbolTypes  J1939Tp Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access J1939Tp_TxPduState in an index and symbol based style. */
typedef union J1939Tp_TxPduStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  J1939Tp_TxNPduStateType raw[2];
  J1939Tp_TxPduStateStructSType str;
} J1939Tp_TxPduStateUType;

/**   \brief  type to access J1939Tp_TxSduState in an index and symbol based style. */
typedef union J1939Tp_TxSduStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  J1939Tp_TxNSduStateType raw[6];
  J1939Tp_TxSduStateStructSType str;
} J1939Tp_TxSduStateUType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCRootPointerTypes  J1939Tp Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to J1939Tp_RxPdu */
typedef P2CONST(J1939Tp_RxPduType, TYPEDEF, J1939TP_CONST) J1939Tp_RxPduPtrType;

/**   \brief  type used to point to J1939Tp_RxPduTxChannel */
typedef P2CONST(J1939Tp_RxPduTxChannelType, TYPEDEF, J1939TP_CONST) J1939Tp_RxPduTxChannelPtrType;

/**   \brief  type used to point to J1939Tp_RxPduTxChannelTxChannelTableInd */
typedef P2CONST(J1939Tp_RxPduTxChannelTxChannelTableIndType, TYPEDEF, J1939TP_CONST) J1939Tp_RxPduTxChannelTxChannelTableIndPtrType;

/**   \brief  type used to point to J1939Tp_TxChannel */
typedef P2CONST(J1939Tp_TxChannelType, TYPEDEF, J1939TP_CONST) J1939Tp_TxChannelPtrType;

/**   \brief  type used to point to J1939Tp_TxChannelTxNSdu */
typedef P2CONST(J1939Tp_TxChannelTxNSduType, TYPEDEF, J1939TP_CONST) J1939Tp_TxChannelTxNSduPtrType;

/**   \brief  type used to point to J1939Tp_TxChannelTxNSduTxNSduTableInd */
typedef P2CONST(J1939Tp_TxChannelTxNSduTxNSduTableIndType, TYPEDEF, J1939TP_CONST) J1939Tp_TxChannelTxNSduTxNSduTableIndPtrType;

/**   \brief  type used to point to J1939Tp_TxPdu */
typedef P2CONST(J1939Tp_TxPduType, TYPEDEF, J1939TP_CONST) J1939Tp_TxPduPtrType;

/**   \brief  type used to point to J1939Tp_TxPduState */
typedef P2VAR(J1939Tp_TxNPduStateType, TYPEDEF, J1939TP_VAR_NOINIT) J1939Tp_TxPduStatePtrType;

/**   \brief  type used to point to J1939Tp_TxPduTxChannel */
typedef P2CONST(J1939Tp_TxPduTxChannelType, TYPEDEF, J1939TP_CONST) J1939Tp_TxPduTxChannelPtrType;

/**   \brief  type used to point to J1939Tp_TxPduTxChannelTxChannelTableInd */
typedef P2CONST(J1939Tp_TxPduTxChannelTxChannelTableIndType, TYPEDEF, J1939TP_CONST) J1939Tp_TxPduTxChannelTxChannelTableIndPtrType;

/**   \brief  type used to point to J1939Tp_TxSdu */
typedef P2CONST(J1939Tp_TxSduType, TYPEDEF, J1939TP_CONST) J1939Tp_TxSduPtrType;

/**   \brief  type used to point to J1939Tp_TxSduState */
typedef P2VAR(J1939Tp_TxNSduStateType, TYPEDEF, J1939TP_VAR_NOINIT) J1939Tp_TxSduStatePtrType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCRootValueTypes  J1939Tp Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in J1939Tp_PCConfig */
typedef struct sJ1939Tp_PCConfigType
{
  uint8 J1939Tp_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} J1939Tp_PCConfigType;

typedef J1939Tp_PCConfigType J1939Tp_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPBValueTypes  J1939Tp Value Types (POST_BUILD)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPBRootValueTypes  J1939Tp Root Value Types (POST_BUILD)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
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
extern CONST(J1939Tp_RxPduType, J1939TP_CONST) J1939Tp_RxPdu[1];
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
extern CONST(J1939Tp_RxPduTxChannelType, J1939TP_CONST) J1939Tp_RxPduTxChannel[6];
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
extern CONST(J1939Tp_RxPduTxChannelTxChannelTableIndType, J1939TP_CONST) J1939Tp_RxPduTxChannelTxChannelTableInd[6];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
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
extern CONST(J1939Tp_TxChannelType, J1939TP_CONST) J1939Tp_TxChannel[6];
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
extern CONST(J1939Tp_TxChannelTxNSduType, J1939TP_CONST) J1939Tp_TxChannelTxNSdu[6];
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
extern CONST(J1939Tp_TxChannelTxNSduTxNSduTableIndType, J1939TP_CONST) J1939Tp_TxChannelTxNSduTxNSduTableInd[6];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
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
extern CONST(J1939Tp_TxPduType, J1939TP_CONST) J1939Tp_TxPdu[2];
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
extern CONST(J1939Tp_TxPduTxChannelType, J1939TP_CONST) J1939Tp_TxPduTxChannel[12];
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
extern CONST(J1939Tp_TxPduTxChannelTxChannelTableIndType, J1939TP_CONST) J1939Tp_TxPduTxChannelTxChannelTableInd[12];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
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
extern CONST(J1939Tp_TxSduType, J1939TP_CONST) J1939Tp_TxSdu[6];
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
extern VAR(J1939Tp_TxPduStateUType, J1939TP_VAR_NOINIT) J1939Tp_TxPduState;  /* PRQA S 0759 */  /* MD_CSL_Union */
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
extern VAR(J1939Tp_TxSduStateUType, J1939TP_VAR_NOINIT) J1939Tp_TxSduState;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* User Config File Start */

/* User Config File End */


#endif  /* J1939TP_CFG_H */

/**********************************************************************************************************************
  END OF FILE: J1939Tp_Cfg.h
**********************************************************************************************************************/

