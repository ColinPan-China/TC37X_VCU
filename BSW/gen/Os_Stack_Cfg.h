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
 *              File: Os_Stack_Cfg.h
 *   Generation Time: 2024-09-04 17:27:55
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_STACK_CFG_H
# define OS_STACK_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether stack monitoring is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_STACKMONITORING                  (STD_ON)

/*! Defines whether stack measurement is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_STACKMEASUREMENT                 (STD_OFF)

/* Configured stack sizes (Total: 10240 Byte) */
# define OS_CFG_SIZE_BSW_TASK_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_ERROR_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_INIT_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_ISR_CORE_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_KERNEL_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO4294967295_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO49_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO50_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO63_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO64_STACK     (1024uL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_STACK_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Stack_Cfg.h
 *********************************************************************************************************************/
