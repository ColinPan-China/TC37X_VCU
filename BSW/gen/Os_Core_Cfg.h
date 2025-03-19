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
 *              File: Os_Core_Cfg.h
 *   Generation Time: 2025-03-19 15:20:34
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_CORE_CFG_H
# define OS_CORE_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether all the threads use the FPU unit (STD_ON) or not (STD_OFF). */
# define OS_CFG_THREAD_FPU_CONTEXT_FOR_ALL_THREADS_ENABLED       (STD_OFF)

/*! Defines whether the FPU context support is enabled (STD_ON) or not (STD_OFF). */
# define OS_CFG_THREAD_FPU_CONTEXT_ENABLED                       (STD_OFF)

/*! Defines whether at least for one core a PreStartTask is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_OS_PRESTARTTASK                                  (STD_OFF)

/*! Number of user barriers. */
# define OS_CFG_NUM_BARRIERS                                     (0uL)

/*! Number of ISR2 nesting levels. */
# define OS_CFG_NUM_ISRLEVELS                                    (23uL)

/*! Number of all spinlocks. */
# define OS_CFG_NUM_SYSTEM_SPINLOCKS                             (0uL)

/*! Number of physical core identifiers. */
# define OS_CFG_COREPHYSICALID_COUNT                             (3uL)

/* Number of core objects: OsCore0 */
# define OS_CFG_NUM_CORE_OSCORE0_APPS             (1uL)
# define OS_CFG_NUM_CORE_OSCORE0_HOOKS            (3uL)
# define OS_CFG_NUM_CORE_OSCORE0_IOCS             (0uL)
# define OS_CFG_NUM_CORE_OSCORE0_RESOURCES        (1uL)
# define OS_CFG_NUM_CORE_OSCORE0_STACKS           (12uL)
# define OS_CFG_NUM_CORE_OSCORE0_ISRS             (23uL)

/* Number of core objects: OsCore1 */
# define OS_CFG_NUM_CORE_OSCORE1_APPS             (0uL)
# define OS_CFG_NUM_CORE_OSCORE1_HOOKS            (3uL)
# define OS_CFG_NUM_CORE_OSCORE1_IOCS             (0uL)
# define OS_CFG_NUM_CORE_OSCORE1_RESOURCES        (1uL)
# define OS_CFG_NUM_CORE_OSCORE1_STACKS           (11uL)
# define OS_CFG_NUM_CORE_OSCORE1_ISRS             (2uL)

/* Number of core objects: OsCore2 */
# define OS_CFG_NUM_CORE_OSCORE2_APPS             (0uL)
# define OS_CFG_NUM_CORE_OSCORE2_HOOKS            (3uL)
# define OS_CFG_NUM_CORE_OSCORE2_IOCS             (0uL)
# define OS_CFG_NUM_CORE_OSCORE2_RESOURCES        (1uL)
# define OS_CFG_NUM_CORE_OSCORE2_STACKS           (11uL)
# define OS_CFG_NUM_CORE_OSCORE2_ISRS             (2uL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_CORE_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Core_Cfg.h
 *********************************************************************************************************************/

