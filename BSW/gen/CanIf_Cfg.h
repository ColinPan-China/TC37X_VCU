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
 *              File: CanIf_Cfg.h
 *   Generation Time: 2024-10-09 14:09:24
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#if !defined(CANIF_CFG_H)
#define CANIF_CFG_H


/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/
#include "Can.h"




/**********************************************************************************************************************
  \def  Version defines
**********************************************************************************************************************/

#define CANIF_CFG5_VERSION                                 0x0500u
#define CANIF_CFG5_RELEASE_VERSION                         0x01u
#define IF_ASRIFCAN_GENTOOL_CFG5_MAJOR_VERSION             0x05u
#define IF_ASRIFCAN_GENTOOL_CFG5_MINOR_VERSION             0x00u
#define IF_ASRIFCAN_GENTOOL_CFG5_PATCH_VERSION             0x01u

#define CANIF_CFG5_GENERATOR_COMPATIBILITY_VERSION         0x0212u

/**********************************************************************************************************************
  \def  Switches
**********************************************************************************************************************/

#define CANIF_TRANSMIT_BUFFER                              STD_OFF /* Signals if Tx-buffer is enabled at all in CanIf. The value is determined from parameter "CanIfPublicTxBuffering". */
#define CANIF_TRANSMIT_BUFFER_PRIO_BY_CANID                STD_OFF
#define CANIF_TRANSMIT_BUFFER_FIFO                         STD_OFF
#define CANIF_BITQUEUE                                     STD_OFF
#define CANIF_STATIC_FD_TXQUEUE                            STD_OFF
#define CANIF_WAKEUP_SUPPORT                               STD_OFF
#define CANIF_WAKEUP_VALIDATION                            STD_OFF
#define CANIF_WAKEUP_VALID_ALL_RX_MSGS                     STD_OFF
#define CANIF_WAKEUP_VALID_ONLY_NM_RX_MSGS                 STD_OFF
#define CANIF_CHECK_WAKEUP_CAN_RET_TYPE                    STD_OFF
#define CANIF_DEV_ERROR_DETECT                             STD_ON
#define CANIF_DEV_ERROR_REPORT                             STD_ON
#define CANIF_TRANSMIT_CANCELLATION                        STD_OFF
#define CANIF_CANCEL_SUPPORT_API                           STD_OFF
#define CANIF_VERSION_INFO_API                             STD_OFF
#define CANIF_DLC_CHECK                                    STD_ON
#define CANIF_SUPPORT_NMOSEK_INDICATION                    STD_OFF
#define CANIF_TRCV_HANDLING                                STD_OFF
#define CANIF_TRCV_MAPPING                                 STD_OFF
#define CANIF_PN_TRCV_HANDLING                             STD_OFF
#define CANIF_EXTENDEDID_SUPPORT                           STD_OFF
#define CANIF_SETDYNAMICTXID_API                           STD_OFF
#define CANIF_PN_WU_TX_PDU_FILTER                          STD_OFF
#define CANIF_PUBLIC_TX_CONFIRM_POLLING_SUPPORT            STD_OFF
#define CANIF_RX_INDICATION_TYPE_I_IS_USED                 STD_OFF
#define CANIF_RX_INDICATION_TYPE_IV_IS_USED                STD_OFF
#define CANIF_CHANGE_BAUDRATE_SUPPORT                      STD_OFF
#define CANIF_SET_BAUDRATE_API                             STD_OFF
#define CANIF_META_DATA_RX_SUPPORT                         STD_OFF
#define CANIF_META_DATA_TX_SUPPORT                         STD_OFF
#define CANIF_J1939_DYN_ADDR_SUPPORT                       CANIF_J1939_DYN_ADDR_DISABLED
#define CANIF_MULTIPLE_CANDRV_SUPPORT                      STD_OFF
#define CANIF_RX_SEARCH_CONSIDER_MSG_TYPE                  STD_OFF
#define CANIF_ECUC_SAFE_BSW_CHECKS                         STD_OFF
#define CANIF_EXTENDED_RAM_CHECK_SUPPORT                   STD_OFF
#define CANIF_DATA_CHECKSUM_RX_SUPPORT                     STD_OFF
#define CANIF_DATA_CHECKSUM_TX_SUPPORT                     STD_OFF
#define CANIF_SET_PDU_RECEPTION_MODE_SUPPORT               STD_OFF
#define CANIF_BUS_MIRRORING_SUPPORT                        STD_OFF
#define CANIF_ENABLE_SECURITY_EVENT_REPORTING              STD_OFF
#define CANIF_SUPPORT_CANDRV_ASR440                        STD_OFF

#define CANIF_SUPPRESS_EXTENDED_VERSION_CHECK

#ifndef CANIF_USE_DUMMY_STATEMENT
#define CANIF_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANIF_DUMMY_STATEMENT
#define CANIF_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANIF_DUMMY_STATEMENT_CONST
#define CANIF_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANIF_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CANIF_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CANIF_ATOMIC_VARIABLE_ACCESS
#define CANIF_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CANIF_PROCESSOR_TC377T
#define CANIF_PROCESSOR_TC377T
#endif
#ifndef CANIF_COMP_TASKING
#define CANIF_COMP_TASKING
#endif
#ifndef CANIF_GEN_GENERATOR_MSR
#define CANIF_GEN_GENERATOR_MSR
#endif
#ifndef CANIF_CPUTYPE_BITORDER_LSB2MSB
#define CANIF_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_PRECOMPILE
#define CANIF_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_LINKTIME
#define CANIF_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CANIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CANIF_CONFIGURATION_VARIANT
#define CANIF_CONFIGURATION_VARIANT CANIF_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CANIF_POSTBUILD_VARIANT_SUPPORT
#define CANIF_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define CANIF_CPU_TYPE_SET_IN_ECUC_MODULE                  CPU_TYPE_32

/**********************************************************************************************************************
  \def  Search algorithm
**********************************************************************************************************************/
#define CANIF_SEARCH_ALGORITHM                             CANIF_LINEAR


/**********************************************************************************************************************
  \def  Configuration variant
**********************************************************************************************************************/
#define CANIF_CONFIG_VARIANT                               CANIF_CFGVAR_PRECOMPILETIME


/**********************************************************************************************************************
  Type definitions
**********************************************************************************************************************/

/**********************************************************************************************************************
  \def  Tx-buffer - queue size type
**********************************************************************************************************************/
typedef uint8 CanIf_TxBufferSizeType;


/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
#include "CanIf_Types.h"

/**********************************************************************************************************************
  \def  Memory mapping keywords
**********************************************************************************************************************/
#define CANIF_XCFG                                         CANIF_CONST
#define CANIF_VAR_XCFG_NOINIT                              CANIF_VAR_NOINIT


/**********************************************************************************************************************
  \def  Invalid PDU handle
**********************************************************************************************************************/
#define CanIf_TxPduHnd_INVALID                             0xFFu
#define CanIf_RxPduHnd_INVALID                             0xFFu


/**********************************************************************************************************************
  \def  Tx-buffer - handling types
**********************************************************************************************************************/
#define CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID                                                             1u
#define CANIF_TXBUFFER_HANDLINGTYPE_FIFO                                                                    2u
#define CANIF_TXBUFFER_HANDLINGTYPE_NONE                                                                    3u



/**********************************************************************************************************************
  \def  CAN controller - symbolic handles
**********************************************************************************************************************/

#define CanIfConf_CanIfCtrlCfg_CT_TC37X_VCU_CAN00_22cb8fec                                          0u








/**********************************************************************************************************************
  \def  Tx PDU handles
**********************************************************************************************************************/

#define CanIfTxPduHnd_XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx                                     0u
#define CanIfTxPduHnd_VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx                                        1u
#define CanIfTxPduHnd_VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx                                        2u
#define CanIfTxPduHnd_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx                                   3u


/**********************************************************************************************************************
  \def  Rx PDU handles (Rx indication function specific ones)
**********************************************************************************************************************/

/* These definitions can change at Post-build configuration time. Use them wisely. */
/* Assigned to: NULL_PTR*/
/* Assigned to: CanNm_RxIndication*/
#define CanIfRxPduHnd_VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx                                   0u
/* Assigned to: PduR_CanIfRxIndication*/
#define CanIfRxPduHnd_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx                                        0u
#define CanIfRxPduHnd_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx                                        1u
/* Assigned to: Xcp_CanIfRxIndication*/
#define CanIfRxPduHnd_XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx                                      0u



/**********************************************************************************************************************
  \def  AUTOSAR Tx PDU handles
**********************************************************************************************************************/

#define CanIfConf_CanIfTxPduCfg_XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx                           0u
#define CanIfConf_CanIfTxPduCfg_VcuTxMsg2_oTC37X_VCU_CAN00_674a89a8_Tx                              1u
#define CanIfConf_CanIfTxPduCfg_VcuTxMsg1_oTC37X_VCU_CAN00_78140f53_Tx                              2u
#define CanIfConf_CanIfTxPduCfg_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_560cc988_Tx                         3u


/**********************************************************************************************************************
  \def  AUTOSAR Rx PDU handles
**********************************************************************************************************************/

#define CanIfConf_CanIfRxPduCfg_XCP_Request_oTC37X_VCU_CAN00_e22de59e_Rx                            0u
#define CanIfConf_CanIfRxPduCfg_VCU_Rx_500h_NM_oTC37X_VCU_CAN00_2f971b6a_Rx                         1u
#define CanIfConf_CanIfRxPduCfg_VcuRxMsg2_oTC37X_VCU_CAN00_de1782b6_Rx                              2u
#define CanIfConf_CanIfRxPduCfg_VcuRxMsg1_oTC37X_VCU_CAN00_c149044d_Rx                              3u



/**********************************************************************************************************************
  \def  Tx buffer type
**********************************************************************************************************************/

#define CanIfTxBufferType                    NONE

/**********************************************************************************************************************
  \def  For ASR4.0.3/ASR4.2.2 compatibility - indirection macros
**********************************************************************************************************************/
#define  CanIf_RxIndication(Hrh, CanId, CanDlc, CanSduPtr) CanIf_RxIndicationAsr403((Hrh), (CanId), (CanDlc), (CanSduPtr)) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */









/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/


/* Coded in RxPduCanId of table CanIf_RxPduConfig[] */
#define CANIF_MASKCODE_RANGE_FLAG                                                                   0x2000u
#define CANIF_FD_FLAG                                                                               0x4000u
#define CANIF_FD_FLAG_MASKOUT                                                                       0xBFFFu
#define CANIF_FD_FLAG_SHIFTPOS                                                                      14u
/* Coded in RxPduMask of table CanIf_RxPduConfig[] */
#define CANIF_STOP_FLAG                                                                             0x4000u
#define CANIF_RANGE_FLAG                                                                            0x2000u
#define CANIF_STOP_RANGE_FLAG                                                                       0x6000u
#define CANIF_STOP_RANGE_FLAG_MASKOUT                                                               0x9FFFu


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCDataSwitches  CanIf Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_BUSOFFNOTIFICATIONFCTPTR                                                              STD_ON
#define CANIF_CANCONTROLLERIDUPTOLOWMAP                                                             STD_OFF  /**< Deactivateable: 'CanIf_CanControllerIdUpToLowMap' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBLIDXOFCANCONTROLLERIDUPTOLOWMAP                                            STD_OFF  /**< Deactivateable: 'CanIf_CanControllerIdUpToLowMap.CanDrvFctTblIdx' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBLUSEDOFCANCONTROLLERIDUPTOLOWMAP                                           STD_OFF  /**< Deactivateable: 'CanIf_CanControllerIdUpToLowMap.CanDrvFctTblUsed' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CONTROLLEROFCANCONTROLLERIDUPTOLOWMAP                                                 STD_OFF  /**< Deactivateable: 'CanIf_CanControllerIdUpToLowMap.Controller' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBL                                                                          STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANCELTXFCTOFCANDRVFCTTBL                                                             STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CancelTxFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHANGEBAUDRATEFCTOFCANDRVFCTTBL                                                       STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.ChangeBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHECKBAUDRATEFCTOFCANDRVFCTTBL                                                        STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CheckBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHECKWAKEUPFCTOFCANDRVFCTTBL                                                          STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CheckWakeupFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_GETCONTROLLERERRORSTATEFCTOFCANDRVFCTTBL                                              STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.GetControllerErrorStateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_GETCONTROLLERRXERRORCOUNTEROFCANDRVFCTTBL                                             STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.GetControllerRxErrorCounter' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_GETCONTROLLERTXERRORCOUNTEROFCANDRVFCTTBL                                             STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.GetControllerTxErrorCounter' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKENABLECONTROLLERFCTOFCANDRVFCTTBL                                             STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckEnableControllerFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKENABLEMAILBOXFCTOFCANDRVFCTTBL                                                STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckEnableMailboxFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKEXECUTEFCTOFCANDRVFCTTBL                                                      STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckExecuteFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_SETBAUDRATEFCTOFCANDRVFCTTBL                                                          STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.SetBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_SETCONTROLLERMODEFCTOFCANDRVFCTTBL                                                    STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.SetControllerModeFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_WRITEFCTOFCANDRVFCTTBL                                                                STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.WriteFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIG                                                     STD_OFF  /**< Deactivateable: 'CanIf_CanIfCtrlId2MappedTxBuffersConfig' Reason: 'Tx-buffer support is deactivated.' */
#define CANIF_INVALIDHNDOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                                         STD_OFF  /**< Deactivateable: 'CanIf_CanIfCtrlId2MappedTxBuffersConfig.InvalidHnd' Reason: 'Tx-buffer support is deactivated.' */
#define CANIF_CANTRCVFCTTBL                                                                         STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CHECKWAKEFLAGFCTOFCANTRCVFCTTBL                                                       STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.CheckWakeFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CHECKWAKEUPFCTOFCANTRCVFCTTBL                                                         STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.CheckWakeupFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CLEARTRCVWUFFLAGFCTOFCANTRCVFCTTBL                                                    STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.ClearTrcvWufFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_GETBUSWUREASONFCTOFCANTRCVFCTTBL                                                      STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.GetBusWuReasonFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_GETOPMODEFCTOFCANTRCVFCTTBL                                                           STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.GetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_SETOPMODEFCTOFCANTRCVFCTTBL                                                           STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.SetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_SETWAKEUPMODEFCTOFCANTRCVFCTTBL                                                       STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.SetWakeupModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CTRLCONFIG                                                                            STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_FEATUREPNWUTXPDUFILTERENABLEDOFCTRLCONFIG                                             STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.FeaturePnWuTxPduFilterEnabled' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_J1939DYNADDROFFSETOFCTRLCONFIG                                                        STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.J1939DynAddrOffset' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_J1939DYNADDRSUPPORTOFCTRLCONFIG                                                       STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.J1939DynAddrSupport' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_RXDHRANDOMNUMBER1OFCTRLCONFIG                                                         STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.RxDHRandomNumber1' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_RXDHRANDOMNUMBER2OFCTRLCONFIG                                                         STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.RxDHRandomNumber2' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_CTRLMODEINDICATIONFCTPTR                                                              STD_ON
#define CANIF_CTRLSTATES                                                                            STD_ON
#define CANIF_CTRLMODEOFCTRLSTATES                                                                  STD_ON
#define CANIF_PDUMODEOFCTRLSTATES                                                                   STD_ON
#define CANIF_FINALMAGICNUMBER                                                                      STD_OFF  /**< Deactivateable: 'CanIf_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_GENERATORCOMPATIBILITYVERSION                                                         STD_ON
#define CANIF_GENERATORVERSION                                                                      STD_ON
#define CANIF_HXHOFFSET                                                                             STD_OFF  /**< Deactivateable: 'CanIf_HxhOffset' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_INITDATAHASHCODE                                                                      STD_OFF  /**< Deactivateable: 'CanIf_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_MAILBOXCONFIG                                                                         STD_ON
#define CANIF_CTRLSTATESIDXOFMAILBOXCONFIG                                                          STD_ON
#define CANIF_MAILBOXTYPEOFMAILBOXCONFIG                                                            STD_ON
#define CANIF_PDUIDFIRSTOFMAILBOXCONFIG                                                             STD_ON
#define CANIF_PDUIDLASTOFMAILBOXCONFIG                                                              STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIG                                                                 STD_OFF  /**< Deactivateable: 'CanIf_MappedTxBuffersConfig' Reason: 'Tx-buffer support is deactivated.' */
#define CANIF_PDURXMODE                                                                             STD_OFF  /**< Deactivateable: 'CanIf_PduRxMode' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANIF_RXDHADJUST                                                                            STD_OFF  /**< Deactivateable: 'CanIf_RxDHAdjust' Reason: 'Search algorithm "double hash" is deactivated.' */
#define CANIF_RXINDICATIONFCTLIST                                                                   STD_ON
#define CANIF_RXINDICATIONFCTOFRXINDICATIONFCTLIST                                                  STD_ON
#define CANIF_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST                                               STD_ON
#define CANIF_RXPDUCONFIG                                                                           STD_ON
#define CANIF_CANIFRXPDUIDOFRXPDUCONFIG                                                             STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.CanIfRxPduId' Reason: '"CanIfDataChecksumRxSupport" is deactivated.' */
#define CANIF_ISCANNMRXPDUOFRXPDUCONFIG                                                             STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.IsCanNmRxPdu' Reason: 'Wakeup validation only by CAN-Nm Rx-PDUs is deactivated.' */
#define CANIF_ISDATACHECKSUMRXPDUOFRXPDUCONFIG                                                      STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.IsDataChecksumRxPdu' Reason: '"CanIfDataChecksumRxSupport" is deactivated.' */
#define CANIF_MSGTYPEOFRXPDUCONFIG                                                                  STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.MsgType' Reason: '"CanIfRxSearchConsiderMsgType" is deactivated.' */
#define CANIF_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                                                   STD_ON
#define CANIF_RXMETADATALENGTHOFRXPDUCONFIG                                                         STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.RxMetaDataLength' Reason: 'Rx meta data support is deactivated.' */
#define CANIF_RXPDUCANIDOFRXPDUCONFIG                                                               STD_ON
#define CANIF_RXPDUDLCOFRXPDUCONFIG                                                                 STD_ON
#define CANIF_RXPDUMASKOFRXPDUCONFIG                                                                STD_ON
#define CANIF_UPPERPDUIDOFRXPDUCONFIG                                                               STD_ON
#define CANIF_SIZEOFCTRLSTATES                                                                      STD_ON
#define CANIF_SIZEOFMAILBOXCONFIG                                                                   STD_ON
#define CANIF_SIZEOFRXINDICATIONFCTLIST                                                             STD_ON
#define CANIF_SIZEOFRXPDUCONFIG                                                                     STD_ON
#define CANIF_SIZEOFTXCONFIRMATIONFCTLIST                                                           STD_ON
#define CANIF_SIZEOFTXPDUCONFIG                                                                     STD_ON
#define CANIF_TRANSCEIVERUPTOLOWMAP                                                                 STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap' Reason: 'CAN transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CANTRCVFCTTBLIDXOFTRANSCEIVERUPTOLOWMAP                                               STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap.CanTrcvFctTblIdx' Reason: 'CAN transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_TRANSCEIVEROFTRANSCEIVERUPTOLOWMAP                                                    STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap.Transceiver' Reason: 'CAN transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_TRANSCEIVERUPTOUPPERMAP                                                               STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToUpperMap' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_TRCVTOCTRLMAP                                                                         STD_OFF  /**< Deactivateable: 'CanIf_TrcvToCtrlMap' Reason: 'Transceiver handling is deactivated.' */
#define CANIF_TXBUFFERFIFOCONFIG                                                                    STD_OFF  /**< Deactivateable: 'CanIf_TxBufferFifoConfig' Reason: 'Tx-buffer FIFO support is deactivated.' */
#define CANIF_SIZEOFONEPAYLOADELOFTXBUFFERFIFOCONFIG                                                STD_OFF  /**< Deactivateable: 'CanIf_TxBufferFifoConfig.SizeOfOnePayloadEl' Reason: 'Tx-buffer FIFO support is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBITQUEUECONFIG                                                     STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdBitQueueConfig' Reason: 'Tx-buffer PRIO_BY_CANID support as BIT_QUEUE is deactivated.' */
#define CANIF_BITPOS2TXPDUIDOFFSETOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG                               STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdBitQueueConfig.BitPos2TxPduIdOffset' Reason: 'Tx-buffer PRIO_BY_CANID support as BIT_QUEUE is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG                                                    STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdByteQueueConfig' Reason: 'Tx-buffer PRIO_BY_CANID support as BYTE_QUEUE is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUS                                              STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus' Reason: 'Tx-buffer PRIO_BY_CANID support as BYTE_QUEUE is deactivated.' */
#define CANIF_TXCONFIRMATIONFCTLIST                                                                 STD_ON
#define CANIF_TXPDUCONFIG                                                                           STD_ON
#define CANIF_CANIDOFTXPDUCONFIG                                                                    STD_ON
#define CANIF_CANIDTXMASKOFTXPDUCONFIG                                                              STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfig.CanIdTxMask' Reason: 'Tx meta data support is deactivated.' */
#define CANIF_CTRLSTATESIDXOFTXPDUCONFIG                                                            STD_ON
#define CANIF_ISDATACHECKSUMTXPDUOFTXPDUCONFIG                                                      STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfig.IsDataChecksumTxPdu' Reason: '"CanIfDataChecksumTxSupport" is deactivated.' */
#define CANIF_ISPNWUTXPDUOFTXPDUCONFIG                                                              STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfig.IsPnWuTxPdu' Reason: '"CanIfPnWakeupTxPduFilterSupport" is deactivated.' */
#define CANIF_ISTXPDUTRUNCATIONOFTXPDUCONFIG                                                        STD_ON
#define CANIF_MAILBOXCONFIGIDXOFTXPDUCONFIG                                                         STD_ON
#define CANIF_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG                                                 STD_ON
#define CANIF_TXMETADATALENGTHOFTXPDUCONFIG                                                         STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfig.TxMetaDataLength' Reason: 'Tx meta data support is deactivated.' */
#define CANIF_TXPDULENGTHOFTXPDUCONFIG                                                              STD_ON
#define CANIF_UPPERLAYERTXPDUIDOFTXPDUCONFIG                                                        STD_ON
#define CANIF_TXPDUQUEUEINDEX                                                                       STD_OFF  /**< Deactivateable: 'CanIf_TxPduQueueIndex' Reason: 'Tx buffer support is deactivated.' */
#define CANIF_TXPDUSTATIC2DYNAMICINDIRECTION                                                        STD_OFF  /**< Deactivateable: 'CanIf_TxPduStatic2DynamicIndirection' Reason: 'Dynamic Tx-CanId support is deactivated.' */
#define CANIF_TXQUEUEINDEX2DATASTARTSTOP                                                            STD_OFF  /**< Deactivateable: 'CanIf_TxQueueIndex2DataStartStop' Reason: 'Static FD Tx-buffer is deactivated.' */
#define CANIF_ULRXPDUID2INTERNALRXPDUID                                                             STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_RXPDUCONFIGIDXOFULRXPDUID2INTERNALRXPDUID                                             STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId.RxPduConfigIdx' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_RXPDUCONFIGUSEDOFULRXPDUID2INTERNALRXPDUID                                            STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId.RxPduConfigUsed' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_ULTXPDUID2INTERNALTXPDUID                                                             STD_OFF  /**< Deactivateable: 'CanIf_UlTxPduId2InternalTxPduId' Reason: 'Configuration variant is Pre-compile!' */
#define CANIF_WAKEUPCONFIG                                                                          STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig' Reason: 'Wake-up support is deactivated.' */
#define CANIF_CONTROLLERIDOFWAKEUPCONFIG                                                            STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig.ControllerId' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPSOURCEOFWAKEUPCONFIG                                                            STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig.WakeUpSource' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPTARGETADDRESSOFWAKEUPCONFIG                                                     STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig.WakeUpTargetAddress' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPTARGETMODULEOFWAKEUPCONFIG                                                      STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig.WakeUpTargetModule' Reason: 'Wake-up support is deactivated.' */
#define CANIF_PCCONFIG                                                                              STD_ON
#define CANIF_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                                                    STD_ON
#define CANIF_CTRLMODEINDICATIONFCTPTROFPCCONFIG                                                    STD_ON
#define CANIF_CTRLSTATESOFPCCONFIG                                                                  STD_ON
#define CANIF_FINALMAGICNUMBEROFPCCONFIG                                                            STD_OFF  /**< Deactivateable: 'CanIf_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG                                               STD_ON
#define CANIF_GENERATORVERSIONOFPCCONFIG                                                            STD_ON
#define CANIF_INITDATAHASHCODEOFPCCONFIG                                                            STD_OFF  /**< Deactivateable: 'CanIf_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_MAILBOXCONFIGOFPCCONFIG                                                               STD_ON
#define CANIF_RXINDICATIONFCTLISTOFPCCONFIG                                                         STD_ON
#define CANIF_RXPDUCONFIGOFPCCONFIG                                                                 STD_ON
#define CANIF_SIZEOFCTRLSTATESOFPCCONFIG                                                            STD_ON
#define CANIF_SIZEOFMAILBOXCONFIGOFPCCONFIG                                                         STD_ON
#define CANIF_SIZEOFRXINDICATIONFCTLISTOFPCCONFIG                                                   STD_ON
#define CANIF_SIZEOFRXPDUCONFIGOFPCCONFIG                                                           STD_ON
#define CANIF_SIZEOFTXCONFIRMATIONFCTLISTOFPCCONFIG                                                 STD_ON
#define CANIF_SIZEOFTXPDUCONFIGOFPCCONFIG                                                           STD_ON
#define CANIF_TXCONFIRMATIONFCTLISTOFPCCONFIG                                                       STD_ON
#define CANIF_TXPDUCONFIGOFPCCONFIG                                                                 STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCIsReducedToDefineDefines  CanIf Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CANIF_ISDEF_CTRLSTATESIDXOFMAILBOXCONFIG                                                    STD_OFF
#define CANIF_ISDEF_MAILBOXTYPEOFMAILBOXCONFIG                                                      STD_OFF
#define CANIF_ISDEF_PDUIDFIRSTOFMAILBOXCONFIG                                                       STD_OFF
#define CANIF_ISDEF_PDUIDLASTOFMAILBOXCONFIG                                                        STD_OFF
#define CANIF_ISDEF_RXINDICATIONFCTOFRXINDICATIONFCTLIST                                            STD_OFF
#define CANIF_ISDEF_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST                                         STD_OFF
#define CANIF_ISDEF_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                                             STD_OFF
#define CANIF_ISDEF_RXPDUCANIDOFRXPDUCONFIG                                                         STD_OFF
#define CANIF_ISDEF_RXPDUDLCOFRXPDUCONFIG                                                           STD_OFF
#define CANIF_ISDEF_RXPDUMASKOFRXPDUCONFIG                                                          STD_OFF
#define CANIF_ISDEF_UPPERPDUIDOFRXPDUCONFIG                                                         STD_OFF
#define CANIF_ISDEF_TXCONFIRMATIONFCTLIST                                                           STD_OFF
#define CANIF_ISDEF_CANIDOFTXPDUCONFIG                                                              STD_OFF
#define CANIF_ISDEF_CTRLSTATESIDXOFTXPDUCONFIG                                                      STD_OFF
#define CANIF_ISDEF_ISTXPDUTRUNCATIONOFTXPDUCONFIG                                                  STD_OFF
#define CANIF_ISDEF_MAILBOXCONFIGIDXOFTXPDUCONFIG                                                   STD_OFF
#define CANIF_ISDEF_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG                                           STD_OFF
#define CANIF_ISDEF_TXPDULENGTHOFTXPDUCONFIG                                                        STD_OFF
#define CANIF_ISDEF_UPPERLAYERTXPDUIDOFTXPDUCONFIG                                                  STD_OFF
#define CANIF_ISDEF_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                                              STD_ON
#define CANIF_ISDEF_CTRLMODEINDICATIONFCTPTROFPCCONFIG                                              STD_ON
#define CANIF_ISDEF_CTRLSTATESOFPCCONFIG                                                            STD_ON
#define CANIF_ISDEF_MAILBOXCONFIGOFPCCONFIG                                                         STD_ON
#define CANIF_ISDEF_RXINDICATIONFCTLISTOFPCCONFIG                                                   STD_ON
#define CANIF_ISDEF_RXPDUCONFIGOFPCCONFIG                                                           STD_ON
#define CANIF_ISDEF_TXCONFIRMATIONFCTLISTOFPCCONFIG                                                 STD_ON
#define CANIF_ISDEF_TXPDUCONFIGOFPCCONFIG                                                           STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCEqualsAlwaysToDefines  CanIf Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CANIF_EQ2_CTRLSTATESIDXOFMAILBOXCONFIG                                                      
#define CANIF_EQ2_MAILBOXTYPEOFMAILBOXCONFIG                                                        
#define CANIF_EQ2_PDUIDFIRSTOFMAILBOXCONFIG                                                         
#define CANIF_EQ2_PDUIDLASTOFMAILBOXCONFIG                                                          
#define CANIF_EQ2_RXINDICATIONFCTOFRXINDICATIONFCTLIST                                              
#define CANIF_EQ2_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST                                           
#define CANIF_EQ2_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                                               
#define CANIF_EQ2_RXPDUCANIDOFRXPDUCONFIG                                                           
#define CANIF_EQ2_RXPDUDLCOFRXPDUCONFIG                                                             
#define CANIF_EQ2_RXPDUMASKOFRXPDUCONFIG                                                            
#define CANIF_EQ2_UPPERPDUIDOFRXPDUCONFIG                                                           
#define CANIF_EQ2_TXCONFIRMATIONFCTLIST                                                             
#define CANIF_EQ2_CANIDOFTXPDUCONFIG                                                                
#define CANIF_EQ2_CTRLSTATESIDXOFTXPDUCONFIG                                                        
#define CANIF_EQ2_ISTXPDUTRUNCATIONOFTXPDUCONFIG                                                    
#define CANIF_EQ2_MAILBOXCONFIGIDXOFTXPDUCONFIG                                                     
#define CANIF_EQ2_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG                                             
#define CANIF_EQ2_TXPDULENGTHOFTXPDUCONFIG                                                          
#define CANIF_EQ2_UPPERLAYERTXPDUIDOFTXPDUCONFIG                                                    
#define CANIF_EQ2_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                                                (&(CanIf_BusOffNotificationFctPtr))
#define CANIF_EQ2_CTRLMODEINDICATIONFCTPTROFPCCONFIG                                                (&(CanIf_CtrlModeIndicationFctPtr))
#define CANIF_EQ2_CTRLSTATESOFPCCONFIG                                                              CanIf_CtrlStates.raw
#define CANIF_EQ2_MAILBOXCONFIGOFPCCONFIG                                                           CanIf_MailBoxConfig
#define CANIF_EQ2_RXINDICATIONFCTLISTOFPCCONFIG                                                     CanIf_RxIndicationFctList
#define CANIF_EQ2_RXPDUCONFIGOFPCCONFIG                                                             CanIf_RxPduConfig
#define CANIF_EQ2_TXCONFIRMATIONFCTLISTOFPCCONFIG                                                   CanIf_TxConfirmationFctList
#define CANIF_EQ2_TXPDUCONFIGOFPCCONFIG                                                             CanIf_TxPduConfig
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSymbolicInitializationPointers  CanIf Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define CanIf_Config_Ptr                                                                            NULL_PTR  /**< symbolic identifier which shall be used to initialize 'CanIf' */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCInitializationSymbols  CanIf Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define CanIf_Config                                                                                NULL_PTR  /**< symbolic identifier which could be used to initialize 'CanIf */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGeneral  CanIf General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CANIF_CHECK_INIT_POINTER                                                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CANIF_FINAL_MAGIC_NUMBER                                                                    0x3C1Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of CanIf */
#define CANIF_INDIVIDUAL_POSTBUILD                                                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'CanIf' is not configured to be postbuild capable. */
#define CANIF_INIT_DATA                                                                             CANIF_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CANIF_INIT_DATA_HASH_CODE                                                                   -713533440  /**< the precompile constant to validate the initialization structure at initialization time of CanIf with a hashcode. The seed value is '0x3C1Eu' */
#define CANIF_USE_ECUM_BSW_ERROR_HOOK                                                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CANIF_USE_INIT_POINTER                                                                      STD_OFF  /**< STD_ON if the init pointer CanIf shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPBDataSwitches  CanIf Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_PBCONFIG                                                                              STD_OFF  /**< Deactivateable: 'CanIf_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANIF_LTCONFIGIDXOFPBCONFIG                                                                 STD_OFF  /**< Deactivateable: 'CanIf_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANIF_PCCONFIGIDXOFPBCONFIG                                                                 STD_OFF  /**< Deactivateable: 'CanIf_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
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
  \defgroup  CanIfPCGetConstantDuplicatedRootDataMacros  CanIf Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define CanIf_GetBusOffNotificationFctPtrOfPCConfig()                                               (&(CanIf_BusOffNotificationFctPtr))  /**< the pointer to CanIf_BusOffNotificationFctPtr */
#define CanIf_GetCtrlModeIndicationFctPtrOfPCConfig()                                               (&(CanIf_CtrlModeIndicationFctPtr))  /**< the pointer to CanIf_CtrlModeIndicationFctPtr */
#define CanIf_GetCtrlStatesOfPCConfig()                                                             CanIf_CtrlStates.raw  /**< the pointer to CanIf_CtrlStates */
#define CanIf_GetGeneratorCompatibilityVersionOfPCConfig()                                          0x0212u
#define CanIf_GetGeneratorVersionOfPCConfig()                                                       0x00050001u
#define CanIf_GetMailBoxConfigOfPCConfig()                                                          CanIf_MailBoxConfig  /**< the pointer to CanIf_MailBoxConfig */
#define CanIf_GetRxIndicationFctListOfPCConfig()                                                    CanIf_RxIndicationFctList  /**< the pointer to CanIf_RxIndicationFctList */
#define CanIf_GetRxPduConfigOfPCConfig()                                                            CanIf_RxPduConfig  /**< the pointer to CanIf_RxPduConfig */
#define CanIf_GetSizeOfCtrlStatesOfPCConfig()                                                       1u  /**< the number of accomplishable value elements in CanIf_CtrlStates */
#define CanIf_GetSizeOfMailBoxConfigOfPCConfig()                                                    5u  /**< the number of accomplishable value elements in CanIf_MailBoxConfig */
#define CanIf_GetSizeOfRxIndicationFctListOfPCConfig()                                              4u  /**< the number of accomplishable value elements in CanIf_RxIndicationFctList */
#define CanIf_GetSizeOfRxPduConfigOfPCConfig()                                                      4u  /**< the number of accomplishable value elements in CanIf_RxPduConfig */
#define CanIf_GetSizeOfTxConfirmationFctListOfPCConfig()                                            3u  /**< the number of accomplishable value elements in CanIf_TxConfirmationFctList */
#define CanIf_GetSizeOfTxPduConfigOfPCConfig()                                                      4u  /**< the number of accomplishable value elements in CanIf_TxPduConfig */
#define CanIf_GetTxConfirmationFctListOfPCConfig()                                                  CanIf_TxConfirmationFctList  /**< the pointer to CanIf_TxConfirmationFctList */
#define CanIf_GetTxPduConfigOfPCConfig()                                                            CanIf_TxPduConfig  /**< the pointer to CanIf_TxPduConfig */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetDataMacros  CanIf Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define CanIf_GetBusOffNotificationFctPtr()                                                         ((*(CanIf_GetBusOffNotificationFctPtrOfPCConfig())))
#define CanIf_GetCtrlModeIndicationFctPtr()                                                         ((*(CanIf_GetCtrlModeIndicationFctPtrOfPCConfig())))
#define CanIf_GetCtrlModeOfCtrlStates(Index)                                                        (CanIf_GetCtrlStatesOfPCConfig()[(Index)].CtrlModeOfCtrlStates)
#define CanIf_GetPduModeOfCtrlStates(Index)                                                         (CanIf_GetCtrlStatesOfPCConfig()[(Index)].PduModeOfCtrlStates)
#define CanIf_GetCtrlStatesIdxOfMailBoxConfig(Index)                                                (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].CtrlStatesIdxOfMailBoxConfig)
#define CanIf_GetMailBoxTypeOfMailBoxConfig(Index)                                                  (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].MailBoxTypeOfMailBoxConfig)
#define CanIf_GetPduIdFirstOfMailBoxConfig(Index)                                                   (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].PduIdFirstOfMailBoxConfig)
#define CanIf_GetPduIdLastOfMailBoxConfig(Index)                                                    (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].PduIdLastOfMailBoxConfig)
#define CanIf_GetRxIndicationFctOfRxIndicationFctList(Index)                                        (CanIf_GetRxIndicationFctListOfPCConfig()[(Index)].RxIndicationFctOfRxIndicationFctList)
#define CanIf_GetRxIndicationLayoutOfRxIndicationFctList(Index)                                     (CanIf_GetRxIndicationFctListOfPCConfig()[(Index)].RxIndicationLayoutOfRxIndicationFctList)
#define CanIf_GetRxIndicationFctListIdxOfRxPduConfig(Index)                                         (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxIndicationFctListIdxOfRxPduConfig)
#define CanIf_GetRxPduCanIdOfRxPduConfig(Index)                                                     (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxPduCanIdOfRxPduConfig)
#define CanIf_GetRxPduDlcOfRxPduConfig(Index)                                                       (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxPduDlcOfRxPduConfig)
#define CanIf_GetRxPduMaskOfRxPduConfig(Index)                                                      (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxPduMaskOfRxPduConfig)
#define CanIf_GetUpperPduIdOfRxPduConfig(Index)                                                     (CanIf_GetRxPduConfigOfPCConfig()[(Index)].UpperPduIdOfRxPduConfig)
#define CanIf_GetTxConfirmationFctList(Index)                                                       (CanIf_GetTxConfirmationFctListOfPCConfig()[(Index)])
#define CanIf_GetCanIdOfTxPduConfig(Index)                                                          (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CanIdOfTxPduConfig)
#define CanIf_GetCtrlStatesIdxOfTxPduConfig(Index)                                                  (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CtrlStatesIdxOfTxPduConfig)
#define CanIf_IsIsTxPduTruncationOfTxPduConfig(Index)                                               ((CanIf_GetTxPduConfigOfPCConfig()[(Index)].IsTxPduTruncationOfTxPduConfig) != FALSE)
#define CanIf_GetMailBoxConfigIdxOfTxPduConfig(Index)                                               (CanIf_GetTxPduConfigOfPCConfig()[(Index)].MailBoxConfigIdxOfTxPduConfig)
#define CanIf_GetTxConfirmationFctListIdxOfTxPduConfig(Index)                                       (CanIf_GetTxPduConfigOfPCConfig()[(Index)].TxConfirmationFctListIdxOfTxPduConfig)
#define CanIf_GetTxPduLengthOfTxPduConfig(Index)                                                    (CanIf_GetTxPduConfigOfPCConfig()[(Index)].TxPduLengthOfTxPduConfig)
#define CanIf_GetUpperLayerTxPduIdOfTxPduConfig(Index)                                              (CanIf_GetTxPduConfigOfPCConfig()[(Index)].UpperLayerTxPduIdOfTxPduConfig)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetDeduplicatedDataMacros  CanIf Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define CanIf_GetGeneratorCompatibilityVersion()                                                    CanIf_GetGeneratorCompatibilityVersionOfPCConfig()
#define CanIf_GetGeneratorVersion()                                                                 CanIf_GetGeneratorVersionOfPCConfig()
#define CanIf_GetSizeOfCtrlStates()                                                                 CanIf_GetSizeOfCtrlStatesOfPCConfig()
#define CanIf_GetSizeOfMailBoxConfig()                                                              CanIf_GetSizeOfMailBoxConfigOfPCConfig()
#define CanIf_GetSizeOfRxIndicationFctList()                                                        CanIf_GetSizeOfRxIndicationFctListOfPCConfig()
#define CanIf_GetSizeOfRxPduConfig()                                                                CanIf_GetSizeOfRxPduConfigOfPCConfig()
#define CanIf_GetSizeOfTxConfirmationFctList()                                                      CanIf_GetSizeOfTxConfirmationFctListOfPCConfig()
#define CanIf_GetSizeOfTxPduConfig()                                                                CanIf_GetSizeOfTxPduConfigOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSetDataMacros  CanIf Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define CanIf_SetCtrlModeOfCtrlStates(Index, Value)                                                 CanIf_GetCtrlStatesOfPCConfig()[(Index)].CtrlModeOfCtrlStates = (Value)
#define CanIf_SetPduModeOfCtrlStates(Index, Value)                                                  CanIf_GetCtrlStatesOfPCConfig()[(Index)].PduModeOfCtrlStates = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCHasMacros  CanIf Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define CanIf_HasBusOffNotificationFctPtr()                                                         (TRUE != FALSE)
#define CanIf_HasCtrlModeIndicationFctPtr()                                                         (TRUE != FALSE)
#define CanIf_HasCtrlStates()                                                                       (TRUE != FALSE)
#define CanIf_HasCtrlModeOfCtrlStates()                                                             (TRUE != FALSE)
#define CanIf_HasPduModeOfCtrlStates()                                                              (TRUE != FALSE)
#define CanIf_HasGeneratorCompatibilityVersion()                                                    (TRUE != FALSE)
#define CanIf_HasGeneratorVersion()                                                                 (TRUE != FALSE)
#define CanIf_HasMailBoxConfig()                                                                    (TRUE != FALSE)
#define CanIf_HasCtrlStatesIdxOfMailBoxConfig()                                                     (TRUE != FALSE)
#define CanIf_HasMailBoxTypeOfMailBoxConfig()                                                       (TRUE != FALSE)
#define CanIf_HasPduIdFirstOfMailBoxConfig()                                                        (TRUE != FALSE)
#define CanIf_HasPduIdLastOfMailBoxConfig()                                                         (TRUE != FALSE)
#define CanIf_HasRxIndicationFctList()                                                              (TRUE != FALSE)
#define CanIf_HasRxIndicationFctOfRxIndicationFctList()                                             (TRUE != FALSE)
#define CanIf_HasRxIndicationLayoutOfRxIndicationFctList()                                          (TRUE != FALSE)
#define CanIf_HasRxPduConfig()                                                                      (TRUE != FALSE)
#define CanIf_HasRxIndicationFctListIdxOfRxPduConfig()                                              (TRUE != FALSE)
#define CanIf_HasRxPduCanIdOfRxPduConfig()                                                          (TRUE != FALSE)
#define CanIf_HasRxPduDlcOfRxPduConfig()                                                            (TRUE != FALSE)
#define CanIf_HasRxPduMaskOfRxPduConfig()                                                           (TRUE != FALSE)
#define CanIf_HasUpperPduIdOfRxPduConfig()                                                          (TRUE != FALSE)
#define CanIf_HasSizeOfCtrlStates()                                                                 (TRUE != FALSE)
#define CanIf_HasSizeOfMailBoxConfig()                                                              (TRUE != FALSE)
#define CanIf_HasSizeOfRxIndicationFctList()                                                        (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduConfig()                                                                (TRUE != FALSE)
#define CanIf_HasSizeOfTxConfirmationFctList()                                                      (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduConfig()                                                                (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctList()                                                            (TRUE != FALSE)
#define CanIf_HasTxPduConfig()                                                                      (TRUE != FALSE)
#define CanIf_HasCanIdOfTxPduConfig()                                                               (TRUE != FALSE)
#define CanIf_HasCtrlStatesIdxOfTxPduConfig()                                                       (TRUE != FALSE)
#define CanIf_HasIsTxPduTruncationOfTxPduConfig()                                                   (TRUE != FALSE)
#define CanIf_HasMailBoxConfigIdxOfTxPduConfig()                                                    (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctListIdxOfTxPduConfig()                                            (TRUE != FALSE)
#define CanIf_HasTxPduLengthOfTxPduConfig()                                                         (TRUE != FALSE)
#define CanIf_HasUpperLayerTxPduIdOfTxPduConfig()                                                   (TRUE != FALSE)
#define CanIf_HasPCConfig()                                                                         (TRUE != FALSE)
#define CanIf_HasBusOffNotificationFctPtrOfPCConfig()                                               (TRUE != FALSE)
#define CanIf_HasCtrlModeIndicationFctPtrOfPCConfig()                                               (TRUE != FALSE)
#define CanIf_HasCtrlStatesOfPCConfig()                                                             (TRUE != FALSE)
#define CanIf_HasGeneratorCompatibilityVersionOfPCConfig()                                          (TRUE != FALSE)
#define CanIf_HasGeneratorVersionOfPCConfig()                                                       (TRUE != FALSE)
#define CanIf_HasMailBoxConfigOfPCConfig()                                                          (TRUE != FALSE)
#define CanIf_HasRxIndicationFctListOfPCConfig()                                                    (TRUE != FALSE)
#define CanIf_HasRxPduConfigOfPCConfig()                                                            (TRUE != FALSE)
#define CanIf_HasSizeOfCtrlStatesOfPCConfig()                                                       (TRUE != FALSE)
#define CanIf_HasSizeOfMailBoxConfigOfPCConfig()                                                    (TRUE != FALSE)
#define CanIf_HasSizeOfRxIndicationFctListOfPCConfig()                                              (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduConfigOfPCConfig()                                                      (TRUE != FALSE)
#define CanIf_HasSizeOfTxConfirmationFctListOfPCConfig()                                            (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduConfigOfPCConfig()                                                      (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctListOfPCConfig()                                                  (TRUE != FALSE)
#define CanIf_HasTxPduConfigOfPCConfig()                                                            (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCIncrementDataMacros  CanIf Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define CanIf_IncCtrlModeOfCtrlStates(Index)                                                        CanIf_GetCtrlModeOfCtrlStates(Index)++
#define CanIf_IncPduModeOfCtrlStates(Index)                                                         CanIf_GetPduModeOfCtrlStates(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCDecrementDataMacros  CanIf Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define CanIf_DecCtrlModeOfCtrlStates(Index)                                                        CanIf_GetCtrlModeOfCtrlStates(Index)--
#define CanIf_DecPduModeOfCtrlStates(Index)                                                         CanIf_GetPduModeOfCtrlStates(Index)--
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCAddDataMacros  CanIf Add Data Macros (PRE_COMPILE)
  \brief  These macros can be used to add VAR data with numerical nature.
  \{
*/ 
#define CanIf_AddCtrlModeOfCtrlStates(Index, Value)                                                 CanIf_SetCtrlModeOfCtrlStates(Index, (CanIf_GetCtrlModeOfCtrlStates(Index) + Value))
#define CanIf_AddPduModeOfCtrlStates(Index, Value)                                                  CanIf_SetPduModeOfCtrlStates(Index, (CanIf_GetPduModeOfCtrlStates(Index) + Value))
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSubstractDataMacros  CanIf Substract Data Macros (PRE_COMPILE)
  \brief  These macros can be used to substract VAR data with numerical nature.
  \{
*/ 
#define CanIf_SubCtrlModeOfCtrlStates(Index, Value)                                                 CanIf_SetCtrlModeOfCtrlStates(Index, (CanIf_GetCtrlModeOfCtrlStates(Index) - Value))
#define CanIf_SubPduModeOfCtrlStates(Index, Value)                                                  CanIf_SetPduModeOfCtrlStates(Index, (CanIf_GetPduModeOfCtrlStates(Index) - Value))
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

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
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
  \defgroup  CanIfPCIterableTypes  CanIf Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate CanIf_CtrlStates */
typedef uint8_least CanIf_CtrlStatesIterType;

/**   \brief  type used to iterate CanIf_MailBoxConfig */
typedef uint8_least CanIf_MailBoxConfigIterType;

/**   \brief  type used to iterate CanIf_RxIndicationFctList */
typedef uint8_least CanIf_RxIndicationFctListIterType;

/**   \brief  type used to iterate CanIf_RxPduConfig */
typedef uint8_least CanIf_RxPduConfigIterType;

/**   \brief  type used to iterate CanIf_TxConfirmationFctList */
typedef uint8_least CanIf_TxConfirmationFctListIterType;

/**   \brief  type used to iterate CanIf_TxPduConfig */
typedef uint8_least CanIf_TxPduConfigIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCValueTypes  CanIf Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for CanIf_GeneratorCompatibilityVersion */
typedef uint16 CanIf_GeneratorCompatibilityVersionType;

/**   \brief  value based type definition for CanIf_GeneratorVersion */
typedef uint32 CanIf_GeneratorVersionType;

/**   \brief  value based type definition for CanIf_CtrlStatesIdxOfMailBoxConfig */
typedef uint8 CanIf_CtrlStatesIdxOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_PduIdFirstOfMailBoxConfig */
typedef uint8 CanIf_PduIdFirstOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_PduIdLastOfMailBoxConfig */
typedef uint8 CanIf_PduIdLastOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_RxIndicationFctListIdxOfRxPduConfig */
typedef uint8 CanIf_RxIndicationFctListIdxOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduCanIdOfRxPduConfig */
typedef uint16 CanIf_RxPduCanIdOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduDlcOfRxPduConfig */
typedef uint8 CanIf_RxPduDlcOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduMaskOfRxPduConfig */
typedef uint16 CanIf_RxPduMaskOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_UpperPduIdOfRxPduConfig */
typedef PduIdType CanIf_UpperPduIdOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfCtrlStates */
typedef uint8 CanIf_SizeOfCtrlStatesType;

/**   \brief  value based type definition for CanIf_SizeOfMailBoxConfig */
typedef uint8 CanIf_SizeOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_SizeOfRxIndicationFctList */
typedef uint8 CanIf_SizeOfRxIndicationFctListType;

/**   \brief  value based type definition for CanIf_SizeOfRxPduConfig */
typedef uint8 CanIf_SizeOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfTxConfirmationFctList */
typedef uint8 CanIf_SizeOfTxConfirmationFctListType;

/**   \brief  value based type definition for CanIf_SizeOfTxPduConfig */
typedef uint8 CanIf_SizeOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_CanIdOfTxPduConfig */
typedef uint16 CanIf_CanIdOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_CtrlStatesIdxOfTxPduConfig */
typedef uint8 CanIf_CtrlStatesIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_IsTxPduTruncationOfTxPduConfig */
typedef boolean CanIf_IsTxPduTruncationOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_MailBoxConfigIdxOfTxPduConfig */
typedef uint8 CanIf_MailBoxConfigIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxConfirmationFctListIdxOfTxPduConfig */
typedef uint8 CanIf_TxConfirmationFctListIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxPduLengthOfTxPduConfig */
typedef uint8 CanIf_TxPduLengthOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_UpperLayerTxPduIdOfTxPduConfig */
typedef PduIdType CanIf_UpperLayerTxPduIdOfTxPduConfigType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCStructTypes  CanIf Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in CanIf_CtrlStates */
typedef struct sCanIf_CtrlStatesType
{
  CanIf_ControllerModeType CtrlModeOfCtrlStates;  /**< Controller mode. */
  CanIf_PduGetModeType PduModeOfCtrlStates;  /**< PDU mode state. */
} CanIf_CtrlStatesType;

/**   \brief  type used in CanIf_MailBoxConfig */
/*! \spec weak type invariant () { 
 * (self.CtrlStatesIdxOfMailBoxConfig < CanIf_GetSizeOfCtrlStates())
 * } */
typedef struct sCanIf_MailBoxConfigType
{
  CanIf_CtrlStatesIdxOfMailBoxConfigType CtrlStatesIdxOfMailBoxConfig;  /**< the index of the 1:1 relation pointing to CanIf_CtrlStates */
  CanIf_PduIdFirstOfMailBoxConfigType PduIdFirstOfMailBoxConfig;  /**< "First" PDU mapped to mailbox. */
  CanIf_PduIdLastOfMailBoxConfigType PduIdLastOfMailBoxConfig;  /**< "Last" PDU mapped to mailbox. */
  CanIf_MailBoxTypeType MailBoxTypeOfMailBoxConfig;  /**< Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused. */
} CanIf_MailBoxConfigType;

/**   \brief  type used in CanIf_RxIndicationFctList */
typedef struct sCanIf_RxIndicationFctListType
{
  CanIf_RxIndicationFctType RxIndicationFctOfRxIndicationFctList;  /**< Rx indication function. */
  CanIf_RxIndicationLayoutType RxIndicationLayoutOfRxIndicationFctList;  /**< Layout of Rx indication function. */
} CanIf_RxIndicationFctListType;

/**   \brief  type used in CanIf_RxPduConfig */
/*! \spec weak type invariant () { 
 * (self.RxIndicationFctListIdxOfRxPduConfig < CanIf_GetSizeOfRxIndicationFctList())
 * } */
typedef struct sCanIf_RxPduConfigType
{
  CanIf_RxPduCanIdOfRxPduConfigType RxPduCanIdOfRxPduConfig;  /**< Rx-PDU: CAN identifier. */
  CanIf_RxPduMaskOfRxPduConfigType RxPduMaskOfRxPduConfig;  /**< Rx-PDU: CAN identifier mask. */
  CanIf_UpperPduIdOfRxPduConfigType UpperPduIdOfRxPduConfig;  /**< PDU ID defined by upper layer. */
  CanIf_RxIndicationFctListIdxOfRxPduConfigType RxIndicationFctListIdxOfRxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_RxIndicationFctList */
  CanIf_RxPduDlcOfRxPduConfigType RxPduDlcOfRxPduConfig;  /**< Rx-PDU length (DLC). */
} CanIf_RxPduConfigType;

/**   \brief  type used in CanIf_TxPduConfig */
/*! \spec weak type invariant () { 
 * (self.CtrlStatesIdxOfTxPduConfig < CanIf_GetSizeOfCtrlStates()) &&
 * (self.MailBoxConfigIdxOfTxPduConfig < CanIf_GetSizeOfMailBoxConfig()) &&
 * (self.TxConfirmationFctListIdxOfTxPduConfig < CanIf_GetSizeOfTxConfirmationFctList())
 * } */
typedef struct sCanIf_TxPduConfigType
{
  CanIf_CanIdOfTxPduConfigType CanIdOfTxPduConfig;  /**< CAN identifier (16bit / 32bit). */
  CanIf_UpperLayerTxPduIdOfTxPduConfigType UpperLayerTxPduIdOfTxPduConfig;  /**< Upper layer handle-Id (8bit / 16bit). */
  CanIf_IsTxPduTruncationOfTxPduConfigType IsTxPduTruncationOfTxPduConfig;  /**< TRUE: Truncation of Tx-PDU is enabled, FALSE: Truncation of Tx-PDU is disabled */
  CanIf_CtrlStatesIdxOfTxPduConfigType CtrlStatesIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_CtrlStates */
  CanIf_MailBoxConfigIdxOfTxPduConfigType MailBoxConfigIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_MailBoxConfig */
  CanIf_TxConfirmationFctListIdxOfTxPduConfigType TxConfirmationFctListIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList */
  CanIf_TxPduLengthOfTxPduConfigType TxPduLengthOfTxPduConfig;  /**< Tx-PDU length. */
} CanIf_TxPduConfigType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSymbolicStructTypes  CanIf Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to CanIf_CtrlStates */
typedef struct CanIf_CtrlStatesStructSTag
{
  CanIf_CtrlStatesType CT_TC37X_VCU_CAN00_22cb8fec;
} CanIf_CtrlStatesStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCUnionIndexAndSymbolTypes  CanIf Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access CanIf_CtrlStates in an index and symbol based style. */
typedef union CanIf_CtrlStatesUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  CanIf_CtrlStatesType raw[1];
  CanIf_CtrlStatesStructSType str;
} CanIf_CtrlStatesUType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCRootPointerTypes  CanIf Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to CanIf_BusOffNotificationFctPtr */
typedef P2CONST(CanIf_BusOffNotificationFctType, TYPEDEF, CANIF_CONST) CanIf_BusOffNotificationFctPtrPtrType;

/**   \brief  type used to point to CanIf_CtrlModeIndicationFctPtr */
typedef P2CONST(CanIf_CtrlModeIndicationFctType, TYPEDEF, CANIF_CONST) CanIf_CtrlModeIndicationFctPtrPtrType;

/**   \brief  type used to point to CanIf_CtrlStates */
typedef P2VAR(CanIf_CtrlStatesType, TYPEDEF, CANIF_VAR_NOINIT) CanIf_CtrlStatesPtrType;

/**   \brief  type used to point to CanIf_MailBoxConfig */
typedef P2CONST(CanIf_MailBoxConfigType, TYPEDEF, CANIF_CONST) CanIf_MailBoxConfigPtrType;

/**   \brief  type used to point to CanIf_RxIndicationFctList */
typedef P2CONST(CanIf_RxIndicationFctListType, TYPEDEF, CANIF_CONST) CanIf_RxIndicationFctListPtrType;

/**   \brief  type used to point to CanIf_RxPduConfig */
typedef P2CONST(CanIf_RxPduConfigType, TYPEDEF, CANIF_CONST) CanIf_RxPduConfigPtrType;

/**   \brief  type used to point to CanIf_TxConfirmationFctList */
typedef P2CONST(CanIf_TxConfirmationFctType, TYPEDEF, CANIF_CONST) CanIf_TxConfirmationFctListPtrType;

/**   \brief  type used to point to CanIf_TxPduConfig */
typedef P2CONST(CanIf_TxPduConfigType, TYPEDEF, CANIF_CONST) CanIf_TxPduConfigPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCRootValueTypes  CanIf Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in CanIf_PCConfig */
typedef struct sCanIf_PCConfigType
{
  uint8 CanIf_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} CanIf_PCConfigType;

typedef CanIf_PCConfigType CanIf_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr;
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
extern CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr;
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
extern CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[5];
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
extern CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[4];
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
extern CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[4];
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
extern CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[3];
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
extern CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[4];
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
extern VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
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

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/




#endif  /* CANIF_CFG_H */
/**********************************************************************************************************************
  END OF FILE: CanIf_Cfg.h
**********************************************************************************************************************/


