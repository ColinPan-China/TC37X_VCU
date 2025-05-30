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
 *              File: Os_Ioc_Cfg.h
 *   Generation Time: 2025-05-30 16:20:15
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */

#ifndef OS_IOC_CFG_H
# define OS_IOC_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether IOC is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_IOC                              (STD_ON)

/*! Defines whether IOC callbacks are configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_IOC_HAS_CALLBACKS                (STD_OFF)

/* IOC communication defines: Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes */
# define OS_CFG_SIZE_IOC_RTE_CORE1APP_SWC_P_ARRY8BYTES_DEP_ARRY8BYTES_BUFFER       (0uL)
# define OS_CFG_NUM_IOC_RTE_CORE1APP_SWC_P_ARRY8BYTES_DEP_ARRY8BYTES_CALLBACKS     (0uL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_IOC_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Ioc_Cfg.h
 *********************************************************************************************************************/
