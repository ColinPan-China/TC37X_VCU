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
 *              File: CanXcp_Lcfg.h
 *   Generation Time: 2024-10-09 14:09:24
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

	

#include "CanXcp_Types.h"	
#include "CanXcp_Cfg.h"

 

/* -----------------------------------------------------------------------------
    &&&~ CanXcp_PduField - 
 ----------------------------------------------------------------------------- */
#define CANXCP_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

extern CONST(CanXcp_XcpPduType, CANXCP_PBCFG) CanXcp_PduIdField[CANXCP_NUMBER_OF_CHANNELS]; 

/* -----------------------------------------------------------------------------
    &&&~ CanXcp_Config - 
 ----------------------------------------------------------------------------- */

extern CONST(CanXcp_ConfigType, CANXCP_PBCFG) CanXcp_Config;

#define CANXCP_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */


