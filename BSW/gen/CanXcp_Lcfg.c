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
 *              File: CanXcp_Lcfg.c
 *   Generation Time: 2025-04-23 11:05:19
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

	

#define CANXCP_LCFG_SOURCE

#include "CanXcp_Lcfg.h"

#include "CanIf.h" /* for CanIf symbolic name value defines */

 

/* -----------------------------------------------------------------------------
    &&&~ CanXcp_PduField - 
 ----------------------------------------------------------------------------- */
#define CANXCP_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

CONST(CanXcp_XcpPduType, CANXCP_PBCFG) CanXcp_PduIdField[CANXCP_NUMBER_OF_CHANNELS] =
{
  {
    XcpConf_XcpRxPdu_XCP_Request_oTC37X_VCU_CAN00_3c25b45e_Rx, 
    XcpConf_XcpTxPdu_XCP_Response_oTC37X_VCU_CAN00_34d2da2d_Tx, 
    CanIfConf_CanIfTxPduCfg_XCP_Response_oTC37X_VCU_CAN00_933a9e7a_Tx, 
    8u /*  MaxCto  */ , 
    8u /*  MaxDto  */ , 
    8u /*  PduSizeTx  */ 
  } /*  CanXcpRxPduId CanXcpTxPduId CanIfTxPduId  */ 
}; 

/* -----------------------------------------------------------------------------
    &&&~ CanXcp_Config - 
 ----------------------------------------------------------------------------- */

CONST(CanXcp_ConfigType, CANXCP_PBCFG) CanXcp_Config = 
{
  CanXcp_PduIdField,
  NULL_PTR,
  1
};

#define CANXCP_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */


