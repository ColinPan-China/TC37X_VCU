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
 *              File: Os_Lcfg.h
 *   Generation Time: 2024-12-11 15:41:00
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_LCFG_H
# define OS_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Cfg.h"
# include "Os_Types.h"
# include "Os_Types_Lcfg.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
# include "Os_Hal_Lcfg.h"

/* User file includes */


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

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_AswTask_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  AswTask()
 *********************************************************************************************************************/
extern FUNC(void, OS_ASWTASK_CODE) Os_Task_AswTask(void);

# define OS_STOP_SEC_AswTask_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Asw_Init_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Asw_Init()
 *********************************************************************************************************************/
extern FUNC(void, OS_ASW_INIT_CODE) Os_Task_Asw_Init(void);

# define OS_STOP_SEC_Asw_Init_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Bsw_Task_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Bsw_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_BSW_TASK_CODE) Os_Task_Bsw_Task(void);

# define OS_STOP_SEC_Bsw_Task_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Default_Init_Task_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Default_Init_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_INIT_TASK_CODE) Os_Task_Default_Init_Task(void);

# define OS_STOP_SEC_Default_Init_Task_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Default_Init_Task_Trusted_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Default_Init_Task_Trusted()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_INIT_TASK_TRUSTED_CODE) Os_Task_Default_Init_Task_Trusted(void);

# define OS_STOP_SEC_Default_Init_Task_Trusted_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ADC0SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ADC0SR0_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ADC0SR0_ISR_CODE) Os_Isr_ADC0SR0_ISR(void);

# define OS_STOP_SEC_ADC0SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ADC11SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ADC11SR0_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ADC11SR0_ISR_CODE) Os_Isr_ADC11SR0_ISR(void);

# define OS_STOP_SEC_ADC11SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ADC1SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ADC1SR0_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ADC1SR0_ISR_CODE) Os_Isr_ADC1SR0_ISR(void);

# define OS_STOP_SEC_ADC1SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ADC2SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ADC2SR0_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ADC2SR0_ISR_CODE) Os_Isr_ADC2SR0_ISR(void);

# define OS_STOP_SEC_ADC2SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ADC3SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ADC3SR0_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ADC3SR0_ISR_CODE) Os_Isr_ADC3SR0_ISR(void);

# define OS_STOP_SEC_ADC3SR0_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ASCLIN1ERR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ASCLIN1ERR_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ASCLIN1ERR_ISR_CODE) Os_Isr_ASCLIN1ERR_ISR(void);

# define OS_STOP_SEC_ASCLIN1ERR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ASCLIN1RX_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ASCLIN1RX_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ASCLIN1RX_ISR_CODE) Os_Isr_ASCLIN1RX_ISR(void);

# define OS_STOP_SEC_ASCLIN1RX_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ASCLIN1TX_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ASCLIN1TX_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ASCLIN1TX_ISR_CODE) Os_Isr_ASCLIN1TX_ISR(void);

# define OS_STOP_SEC_ASCLIN1TX_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ASCLIN2ERR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ASCLIN2ERR_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ASCLIN2ERR_ISR_CODE) Os_Isr_ASCLIN2ERR_ISR(void);

# define OS_STOP_SEC_ASCLIN2ERR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ASCLIN2RX_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ASCLIN2RX_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ASCLIN2RX_ISR_CODE) Os_Isr_ASCLIN2RX_ISR(void);

# define OS_STOP_SEC_ASCLIN2RX_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ASCLIN2TX_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ASCLIN2TX_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_ASCLIN2TX_ISR_CODE) Os_Isr_ASCLIN2TX_ISR(void);

# define OS_STOP_SEC_ASCLIN2TX_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CanIsr_0_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  CanIsr_0()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANISR_0_CODE) Os_Isr_CanIsr_0(void);

# define OS_STOP_SEC_CanIsr_0_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CanIsr_1_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  CanIsr_1()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANISR_1_CODE) Os_Isr_CanIsr_1(void);

# define OS_STOP_SEC_CanIsr_1_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_DMACH10SR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  DMACH10SR_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_DMACH10SR_ISR_CODE) Os_Isr_DMACH10SR_ISR(void);

# define OS_STOP_SEC_DMACH10SR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_DMACH11SR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  DMACH11SR_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_DMACH11SR_ISR_CODE) Os_Isr_DMACH11SR_ISR(void);

# define OS_STOP_SEC_DMACH11SR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_QSPI3ERR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  QSPI3ERR_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_QSPI3ERR_ISR_CODE) Os_Isr_QSPI3ERR_ISR(void);

# define OS_STOP_SEC_QSPI3ERR_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_QSPI3PT_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  QSPI3PT_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_QSPI3PT_ISR_CODE) Os_Isr_QSPI3PT_ISR(void);

# define OS_STOP_SEC_QSPI3PT_ISR_CODE
# include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#endif /* OS_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Lcfg.h
 *********************************************************************************************************************/
