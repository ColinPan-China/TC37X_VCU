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
 *              File: Xcp_Lcfg.c
 *   Generation Time: 2024-10-09 17:09:03
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

    
#define XCP_LCFG_SOURCE
    
#include "Xcp.h"

/*lint -e451 */ /* Suppress ID451 because MemMap.h cannot use a include guard */

#if ( XCP_DAQ == STD_ON )
# define XCP_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

XCP_LOCAL VAR(uint8, XCP_VAR_NOINIT_NOCACHE) Xcp_SendQueue_Core0[XCP_NUMBER_OF_CHANNELS][256uL];

# define XCP_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */
#endif

#define XCP_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

#if( XCP_DAQ == STD_ON )
CONSTP2VAR(uint8, XCP_CONST, XCP_VAR_NOINIT) Xcp_SendQueueRef[XCP_NUMBER_OF_CORES] =
{
  &Xcp_SendQueue_Core0[0][0]
};

CONST(uint32, XCP_CONST) Xcp_SendQueueSize[XCP_NUMBER_OF_CORES] =
{
  sizeof(Xcp_SendQueue_Core0[0])
};

CONST(Xcp_ECcIDType, XCP_CONST) Xcp_ECcIdMapping[XCP_MAX_EVENT] = /* PRQA S 1533 */ /* MD_XCP_1533 */
{
  {
    0u, 
    0u
  }, 
  {
    0u, 
    0u
  }
};
#endif

CONST(Xcp_TlApiType, XCP_CONST) Xcp_TlApi[1] = 
{
  {
    CanXcp_Send /*  ApplXcpSend  */ , 
    CanXcp_SendFlush /*  ApplXcpSendFlush  */ , 
    CanXcp_TLService /*  ApplXcpTLService  */ 
  }
};

/* Events */
CONST(uint8, XCP_CONST) kXcpEventName_0[21] = "XcpEventChannel_20MS";
CONST(uint8, XCP_CONST) kXcpEventName_1[21] = "XcpEventChannel_10MS";

CONSTP2CONST(uint8, XCP_CONST, XCP_CONST) kXcpEventName[2] = /* PRQA S 1533 */ /* MD_XCP_1533 */
{
  &kXcpEventName_0[0], 
  &kXcpEventName_1[0]
};
CONST(uint8, XCP_CONST) kXcpEventNameLength[2] = /* PRQA S 1533 */ /* MD_XCP_1533 */ 
{
  20u, 
  20u
};
CONST(uint8, XCP_CONST) kXcpEventCycle[2] = /* PRQA S 1533 */ /* MD_XCP_1533 */ 
{
  2u, 
  1u
};
CONST(uint8, XCP_CONST) kXcpEventUnit[2] = /* PRQA S 1533 */ /* MD_XCP_1533 */
{
  XCP_DAQ_TIMESTAMP_UNIT_10MS, 
  XCP_DAQ_TIMESTAMP_UNIT_10MS
}; 
CONST(uint8, XCP_CONST) kXcpEventDirection[2] = /* PRQA S 1533 */ /* MD_XCP_1533 */
{
  XCP_DAQ_EVENT_DIRECTION_DAQ, 
  XCP_DAQ_EVENT_DIRECTION_DAQ
}; 
CONST(uint8, XCP_CONST) kXcpEventNumDaq[2] = /* PRQA S 1533 */ /* MD_XCP_1533 */
{
  0x01u, 
  0x64u
}; 
 
/* Flash programming */

#define XCP_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

