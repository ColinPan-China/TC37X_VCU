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
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_TimingProtection_Cfg.h
 *   Generation Time: 2025-04-23 11:05:19
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_TIMINGPROTECTION_CFG_H
# define OS_TIMINGPROTECTION_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  SWITCHES
 *********************************************************************************************************************/
/*! \variation Defines whether timing protection module is active:
 *     OS_CFG_TP_NO_CORE     No timing protection configured on any ASR core.
 *     OS_CFG_TP_SOME_CORES  Timing protection configured on some ASR cores.
 *     OS_CFG_TP_ALL_CORES   Timing protection configured for all ASR cores.
 */
# define OS_CFG_TIMING_PROTECTION                (OS_CFG_TP_NO_CORE)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_TIMINGPROTECTION_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_TimingProtection_Cfg.h
 *********************************************************************************************************************/
