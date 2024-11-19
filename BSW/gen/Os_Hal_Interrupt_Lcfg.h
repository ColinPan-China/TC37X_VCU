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
 *              File: Os_Hal_Interrupt_Lcfg.h
 *   Generation Time: 2024-11-18 17:40:24
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */

#ifndef OS_HAL_INTERRUPT_LCFG_H
# define OS_HAL_INTERRUPT_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_Interrupt_Cfg.h"
# include "Os_Hal_Interrupt_Types.h"

/* Os kernel module dependencies */
# include "Os_Interrupt_Types.h"

/* Os hal dependencies */
# include "Os_Hal_Core_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL ISR configuration data: ADC0SR0_ISR */
extern CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC0SR0_ISR;
extern CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC0SR0_ISR;

/*! HAL ISR configuration data: ADC11SR0_ISR */
extern CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC11SR0_ISR;
extern CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC11SR0_ISR;

/*! HAL ISR configuration data: ADC1SR0_ISR */
extern CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC1SR0_ISR;
extern CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC1SR0_ISR;

/*! HAL ISR configuration data: ADC2SR0_ISR */
extern CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC2SR0_ISR;
extern CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC2SR0_ISR;

/*! HAL ISR configuration data: ADC3SR0_ISR */
extern CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC3SR0_ISR;
extern CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC3SR0_ISR;

/*! HAL ISR configuration data: CanIsr_0 */
extern CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0;
extern CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CanIsr_0;

/*! HAL ISR configuration data: CanIsr_1 */
extern CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1;
extern CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CanIsr_1;

/*! HAL ISR configuration data: CounterIsr_SystemTimer */
extern CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CounterIsr_SystemTimer;
extern CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CounterIsr_SystemTimer;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_HAL_INTERRUPT_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Interrupt_Lcfg.h
 *********************************************************************************************************************/
