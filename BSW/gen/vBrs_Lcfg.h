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
 *            Module: vBRS
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: .\vBrs_Lcfg.h
 *   Generation Time: 2025-03-19 13:54:58
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Please note:
 *    The demo and example programs only show special aspects of the software. With regard to the fact
 *    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
 *    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
 *********************************************************************************************************************/

#ifndef _VBRSLCFG_H_
#define _VBRSLCFG_H_

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Std_Types.h"
#include "BrsMain_Types.h"
#include "BrsHw.h"

#if (BRSHW_SOURCECODE_TEMPLATE_VERSION >= 0x0103u)
/*******************************************************************************
 Logical to phyiscal core assingment
*******************************************************************************/
extern const brsMain_CoreType BrsMain_CoreConfig[3u];
extern const uint32 BrsMain_CoreConfig_Size;
#endif /*BRSHW_SOURCECODE_TEMPLATE_VERSION>=0x0103u*/

#endif /* _VBRSLCFG_H_ */

