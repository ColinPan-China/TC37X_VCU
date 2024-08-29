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
 *              File: Os_Error_Cfg.h
 *   Generation Time: 2024-08-29 16:00:27
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_ERROR_CFG_H
# define OS_ERROR_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether Os assertions are active (STD_ON) or not (STD_OFF). */
# define OS_CFG_ASSERTIONS                       (STD_OFF)

/*! Defines whether OSEK extended checks are active (STD_ON) or not (STD_OFF). */
# define OS_CFG_EXTENDED_STATUS                  (STD_ON)

/*! Defines whether forcible termination (killing) is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_KILLING                          (STD_OFF)

/*! Defines whether AUTOSAR service checks are active (STD_ON) or not (STD_OFF). */
# define OS_CFG_SERVICE_PROTECTION               (STD_OFF)

/*! Defines whether internal exception detection is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_INTERNAL_EXCEPTION_DETECTION     (STD_ON)

/*! Defines the number of Os code sections. */
# define OS_CFG_NUM_OSCODE_SECTIONS              (1uL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_ERROR_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Error_Cfg.h
 *********************************************************************************************************************/
