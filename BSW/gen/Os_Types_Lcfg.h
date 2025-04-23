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
 *              File: Os_Types_Lcfg.h
 *   Generation Time: 2025-04-23 11:05:19
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_TYPES_LCFG_H
# define OS_TYPES_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* OS-Application identifiers. */
#define SystemApplication_OsCore0 SystemApplication_OsCore0
#define SystemApplication_OsCore1 SystemApplication_OsCore1
#define SystemApplication_OsCore2 SystemApplication_OsCore2

/* Trusted function identifiers. */

/* Non-trusted function identifiers. */

/* Fast trusted function identifiers. */

/* Task identifiers. */
#define Core0_AswInit Core0_AswInit
#define Core0_AswTask Core0_AswTask
#define Core0_BswTask Core0_BswTask
#define Core1_AswInit Core1_AswInit
#define Core1_AswTask Core1_AswTask
#define Core1_BswTask Core1_BswTask
#define Core2_AswInit Core2_AswInit
#define Core2_AswTask Core2_AswTask
#define Core2_BswTask Core2_BswTask
#define Default_Init_Task Default_Init_Task
#define Default_Init_Task_Core1 Default_Init_Task_Core1
#define Default_Init_Task_Core1_Trusted Default_Init_Task_Core1_Trusted
#define Default_Init_Task_Core2 Default_Init_Task_Core2
#define Default_Init_Task_Core2_Trusted Default_Init_Task_Core2_Trusted
#define Default_Init_Task_Trusted Default_Init_Task_Trusted
#define IdleTask_OsCore0 IdleTask_OsCore0
#define IdleTask_OsCore1 IdleTask_OsCore1
#define IdleTask_OsCore2 IdleTask_OsCore2

/* Category 2 ISR identifiers. */
#define ADC0SR0_ISR ADC0SR0_ISR
#define ADC11SR0_ISR ADC11SR0_ISR
#define ADC1SR0_ISR ADC1SR0_ISR
#define ADC2SR0_ISR ADC2SR0_ISR
#define ADC3SR0_ISR ADC3SR0_ISR
#define ADC8SR0_ISR ADC8SR0_ISR
#define ASCLIN1ERR_ISR ASCLIN1ERR_ISR
#define ASCLIN1RX_ISR ASCLIN1RX_ISR
#define ASCLIN1TX_ISR ASCLIN1TX_ISR
#define ASCLIN2ERR_ISR ASCLIN2ERR_ISR
#define ASCLIN2RX_ISR ASCLIN2RX_ISR
#define ASCLIN2TX_ISR ASCLIN2TX_ISR
#define CanIsr_0 CanIsr_0
#define CanIsr_1 CanIsr_1
#define CanIsr_3 CanIsr_3
#define CanIsr_4 CanIsr_4
#define CounterIsr_SystemTimer0 CounterIsr_SystemTimer0
#define CounterIsr_SystemTimer1 CounterIsr_SystemTimer1
#define CounterIsr_SystemTimer2 CounterIsr_SystemTimer2
#define DMACH10SR_ISR DMACH10SR_ISR
#define DMACH11SR_ISR DMACH11SR_ISR
#define GTMTOM1SR3_ISR GTMTOM1SR3_ISR
#define GTMTOM1SR4_ISR GTMTOM1SR4_ISR
#define QSPI3ERR_ISR QSPI3ERR_ISR
#define QSPI3PT_ISR QSPI3PT_ISR
#define XSignalIsr_OsCore0 XSignalIsr_OsCore0
#define XSignalIsr_OsCore1 XSignalIsr_OsCore1
#define XSignalIsr_OsCore2 XSignalIsr_OsCore2

/* Alarm identifiers. */
#define Rte_Al_TE2_Core0_BswTask_0_10ms Rte_Al_TE2_Core0_BswTask_0_10ms
#define Rte_Al_TE2_Core0_BswTask_0_20ms Rte_Al_TE2_Core0_BswTask_0_20ms
#define Rte_Al_TE2_Core0_BswTask_0_5ms Rte_Al_TE2_Core0_BswTask_0_5ms
#define Rte_Al_TE2_EcuM_EcuM_MainFunction Rte_Al_TE2_EcuM_EcuM_MainFunction
#define Rte_Al_TE3_EcuM_EcuM_MainFunction Rte_Al_TE3_EcuM_EcuM_MainFunction
#define Rte_Al_TE_Com_SWC_Com_Runnable_2ms Rte_Al_TE_Com_SWC_Com_Runnable_2ms
#define Rte_Al_TE_Core0_AswTask_0_10ms Rte_Al_TE_Core0_AswTask_0_10ms
#define Rte_Al_TE_Core1App_SWC_Core1App_Runnable100ms Rte_Al_TE_Core1App_SWC_Core1App_Runnable100ms
#define Rte_Al_TE_Core2App_SWC_Core2App_Runnable100ms Rte_Al_TE_Core2App_SWC_Core2App_Runnable100ms
#define Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms

/* Counter identifiers. */
#define SystemTimer_Core0 SystemTimer_Core0
#define SystemTimer_Core1 SystemTimer_Core1
#define SystemTimer_Core2 SystemTimer_Core2

/* ScheduleTable identifiers. */

/* Resource identifiers. */
#define OsResource0 OsResource0
#define OsResource1 OsResource1
#define OsResource2 OsResource2

/* Spinlock identifiers. */

/* Peripheral identifiers. */

/* Barrier identifiers. */

/* Trace thread identifiers (Tasks and ISRs inclusive system objects). */

/* Trace spinlock identifiers (All spinlocks inclusive system objects). */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef uint32  Os_AppAccessMaskType;

/*! OS-Application identifiers. */
typedef enum
{
  SystemApplication_OsCore0 = 0, /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemApplication_OsCore1 = 1, /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemApplication_OsCore2 = 2, /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_APPID_COUNT = 3,
  INVALID_OSAPPLICATION = OS_APPID_COUNT
} ApplicationType;

/*! Trusted function identifiers. */
typedef enum
{
  OS_TRUSTEDFUNCTIONID_COUNT = 0
} TrustedFunctionIndexType;

/*! Non-trusted function identifiers. */
typedef enum
{
  OS_NONTRUSTEDFUNCTIONID_COUNT = 0
} Os_NonTrustedFunctionIndexType;

/*! Fast trusted function identifiers. */
typedef enum
{
  OS_FASTTRUSTEDFUNCTIONID_COUNT = 0
} Os_FastTrustedFunctionIndexType;

/*! Task identifiers. */
typedef enum
{
  Core0_AswInit = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core0_AswTask = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core0_BswTask = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core1_AswInit = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core1_AswTask = 4,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core1_BswTask = 5,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core2_AswInit = 6,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core2_AswTask = 7,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core2_BswTask = 8,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task = 9,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task_Core1 = 10,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task_Core1_Trusted = 11,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task_Core2 = 12,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task_Core2_Trusted = 13,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task_Trusted = 14,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  IdleTask_OsCore0 = 15,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  IdleTask_OsCore1 = 16,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  IdleTask_OsCore2 = 17,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_TASKID_COUNT = 18,
  INVALID_TASK = OS_TASKID_COUNT
} TaskType;

/*! Category 2 ISR identifiers. */
typedef enum
{
  ADC0SR0_ISR = 0,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ADC11SR0_ISR = 1,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ADC1SR0_ISR = 2,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ADC2SR0_ISR = 3,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ADC3SR0_ISR = 4,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ADC8SR0_ISR = 5,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN1ERR_ISR = 6,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN1RX_ISR = 7,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN1TX_ISR = 8,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN2ERR_ISR = 9,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN2RX_ISR = 10,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN2TX_ISR = 11,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_0 = 12,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_1 = 13,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_3 = 14,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_4 = 15,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer0 = 16,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer1 = 17,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer2 = 18,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  DMACH10SR_ISR = 19,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  DMACH11SR_ISR = 20,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  GTMTOM1SR3_ISR = 21,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  GTMTOM1SR4_ISR = 22,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  QSPI3ERR_ISR = 23,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  QSPI3PT_ISR = 24,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  XSignalIsr_OsCore0 = 25,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  XSignalIsr_OsCore1 = 26,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  XSignalIsr_OsCore2 = 27,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ISRID_COUNT = 28,
  INVALID_ISR = OS_ISRID_COUNT
} ISRType;

/*! Alarm identifiers. */
typedef enum
{
  Rte_Al_TE2_Core0_BswTask_0_10ms = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE2_Core0_BswTask_0_20ms = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE2_Core0_BswTask_0_5ms = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE2_EcuM_EcuM_MainFunction = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE3_EcuM_EcuM_MainFunction = 4,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Com_SWC_Com_Runnable_2ms = 5,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Core0_AswTask_0_10ms = 6,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Core1App_SWC_Core1App_Runnable100ms = 7,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Core2App_SWC_Core2App_Runnable100ms = 8,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms = 9,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ALARMID_COUNT = 10
} AlarmType;

/*! Counter identifiers. */
typedef enum
{
  SystemTimer_Core0 = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemTimer_Core1 = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemTimer_Core2 = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_COUNTERID_COUNT = 3
} CounterType;

/*! ScheduleTable identifiers. */
typedef enum
{
  OS_SCHTID_COUNT = 0
} ScheduleTableType;

/*! Resource identifiers. */
typedef enum
{
  OsResource0 = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OsResource1 = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OsResource2 = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_RESOURCEID_COUNT = 3
} ResourceType;

/*! Spinlock identifiers. */
typedef enum
{
  OS_SPINLOCKID_COUNT = 0,
  INVALID_SPINLOCK = OS_SPINLOCKID_COUNT
} SpinlockIdType;

/*! Peripheral identifiers. */
typedef enum
{
  OS_PERIPHERALID_COUNT = 0
} Os_PeripheralIdType;

/*! Barrier identifiers. */
typedef enum
{
  OS_BARRIERID_COUNT = 0
} Os_BarrierIdType;

/*! Trace thread identifiers (Tasks and ISRs inclusive system objects). */
typedef enum
{
  OS_TRACE_THREADID_COUNT = 0,
  OS_TRACE_INVALID_THREAD = OS_TRACE_THREADID_COUNT + 1
} Os_TraceThreadIdType;

/*! Trace spinlock identifiers (All spinlocks inclusive system objects). */
typedef enum
{
  OS_TRACE_NUMBER_OF_CONFIGURED_SPINLOCKS = OS_SPINLOCKID_COUNT,
  OS_TRACE_NUMBER_OF_ALL_SPINLOCKS = OS_SPINLOCKID_COUNT + 0u,  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */
  OS_TRACE_INVALID_SPINLOCK = OS_TRACE_NUMBER_OF_ALL_SPINLOCKS + 1
} Os_TraceSpinlockIdType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TYPES_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Types_Lcfg.h
 *********************************************************************************************************************/
