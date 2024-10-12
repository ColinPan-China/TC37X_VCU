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
 *            Module: Xcp
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanXcp_Cfg.h
 *   Generation Time: 2024-10-09 14:09:24
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/



#if !defined(CANXCP_CFG_H)
#define CANXCP_CFG_H

/* -----------------------------------------------------------------------------
    &&&~  
 ----------------------------------------------------------------------------- */

#include "CanXcp_Types.h"

#if !defined XcpConfig
#define XcpConfig    CanXcp_Config
#endif

/* CanXcpTxPduId symbolic name defines */



/**
 * \defgroup XcpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define XcpConf_XcpTxPdu_XCP_Response_oTC37X_VCU_CAN00_34d2da2d_Tx    0
/**\} */

/* CanXcpRxPduId symbolic name defines */



/**
 * \defgroup XcpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define XcpConf_XcpRxPdu_XCP_Request_oTC37X_VCU_CAN00_3c25b45e_Rx     0
/**\} */


#ifndef XCP_USE_DUMMY_STATEMENT
#define XCP_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef XCP_DUMMY_STATEMENT
#define XCP_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef XCP_DUMMY_STATEMENT_CONST
#define XCP_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define XCP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef XCP_ATOMIC_VARIABLE_ACCESS
#define XCP_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef XCP_PROCESSOR_TC377T
#define XCP_PROCESSOR_TC377T
#endif
#ifndef XCP_COMP_TASKING
#define XCP_COMP_TASKING
#endif
#ifndef XCP_GEN_GENERATOR_MSR
#define XCP_GEN_GENERATOR_MSR
#endif
#ifndef XCP_CPUTYPE_BITORDER_LSB2MSB
#define XCP_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef XCP_CONFIGURATION_VARIANT_PRECOMPILE
#define XCP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef XCP_CONFIGURATION_VARIANT_LINKTIME
#define XCP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef XCP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define XCP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef XCP_CONFIGURATION_VARIANT
#define XCP_CONFIGURATION_VARIANT XCP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef XCP_POSTBUILD_VARIANT_SUPPORT
#define XCP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define CANXCP_USE_PDUINFOTYPE STD_ON
#define CANXCP_DEV_ERROR_DETECT              STD_ON 
#define CANXCP_VERSION_INFO_API              STD_OFF   

#ifndef CANXCP_AUTOSARVERSION
#define CANXCP_AUTOSARVERSION                4
#endif

#ifndef CANXCP_CONFIGURATOR
#define CANXCP_CONFIGURATOR                  5
#endif

#ifndef CANXCP_CONFIG_VARIANT
#define CANXCP_CONFIG_VARIANT XCP_CONFIGURATION_VARIANT
#endif

/* Transport Layer */
#define CANXCP_MULTI_CHANNEL_DISABLED
#define CANXCP_MULTI_CONN_PROT_DISABLED
#define CANXCP_TRANSPORT_LAYER_VERSION       0x0100u
#define CANXCP_VARIABLE_DLC_ENABLED
#define kXcpSendQueueMinSize                 1u
/* Enable/Disable transport layer activation control API */
#define CANXCP_ENABLE_CONTROL                STD_ON
#define CANXCP_NUMBER_OF_CHANNELS            1u
#define CANXCP_CONF_TIMEOUT                  10u
#define kCanXcpMaxCTO                        8u
#define kCanXcpMaxDTO                        8u

#define CANXCP_PDU_SIZE                      8u /* CAN-FD specific options */
#define CANXCP_ENABLE_PDUMODE                STD_OFF

#define CANXCP_SILENT_CHECK                  STD_OFF
#define CANXCP_AMD_RUNTIME_MEASUREMENT       STD_OFF


#endif /* CANXCP_CFG_H */


