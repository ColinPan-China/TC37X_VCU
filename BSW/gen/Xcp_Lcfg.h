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
 *              File: Xcp_Lcfg.h
 *   Generation Time: 2025-04-23 11:05:19
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

    
#if !defined(XCP_LCFG_H)
#define XCP_LCFG_H

#include "Xcp_Types.h"

#define XCP_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

#if( XCP_DAQ == STD_ON )
extern CONSTP2VAR(uint8, XCP_VAR_NOINIT, AUTOMATIC) Xcp_SendQueueRef[XCP_NUMBER_OF_CORES];
extern CONST(uint32, XCP_CONST) Xcp_SendQueueSize[XCP_NUMBER_OF_CORES];
extern CONST(Xcp_ECcIDType, XCP_CONST) Xcp_ECcIdMapping[XCP_MAX_EVENT];
#endif

extern CONST(Xcp_TlApiType, XCP_CONST) Xcp_TlApi[1];

/* Events */
extern CONST(uint8, XCP_CONST) kXcpEventName_0[21];
extern CONST(uint8, XCP_CONST) kXcpEventName_1[21];

extern CONSTP2CONST(uint8, XCP_CONST, XCP_CONST) kXcpEventName[2];
extern CONST(uint8, XCP_CONST) kXcpEventNameLength[2];
extern CONST(uint8, XCP_CONST) kXcpEventCycle[2];
extern CONST(uint8, XCP_CONST) kXcpEventUnit[2];
extern CONST(uint8, XCP_CONST) kXcpEventDirection[2];
extern CONST(uint8, XCP_CONST) kXcpEventNumDaq[2];


/* Event Channel SNV IDs */



/**
 * \defgroup XcpHandleIdsEventChannelHandleIDs Handle IDs of handle space EventChannel Handle IDs.
 * \brief Symbolic Name Values (SNVs) for EventChannel Handles
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define XcpConf_XcpEventChannel_XcpEventChannel_10MS                  1
#define XcpConf_XcpEventChannel_XcpEventChannel_20MS                  0
/**\} */


/* Flash programming */

#define XCP_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */


#endif /* XCP_LCFG_H */   

