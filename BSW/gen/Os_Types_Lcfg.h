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
 *   Generation Time: 2025-09-19 16:14:43
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
#define Core0_AswTask Core0_AswTask
#define Core0_Asw_Init Core0_Asw_Init
#define Core0_Bsw_Task Core0_Bsw_Task
#define Core1_Asw_Init Core1_Asw_Init
#define Core1_Asw_Task Core1_Asw_Task
#define Core1_Bsw_Task Core1_Bsw_Task
#define Core2_Asw_Init Core2_Asw_Init
#define Core2_Asw_Task Core2_Asw_Task
#define Core2_Bsw_Task Core2_Bsw_Task
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
#define ASCLIN3ERR_ISR ASCLIN3ERR_ISR
#define ASCLIN3RX_ISR ASCLIN3RX_ISR
#define ASCLIN3TX_ISR ASCLIN3TX_ISR
#define ASCLIN4ERR_ISR ASCLIN4ERR_ISR
#define ASCLIN4RX_ISR ASCLIN4RX_ISR
#define ASCLIN4TX_ISR ASCLIN4TX_ISR
#define CanIsr_0 CanIsr_0
#define CanIsr_1 CanIsr_1
#define CanIsr_3 CanIsr_3
#define CanIsr_4 CanIsr_4
#define CanIsr_6 CanIsr_6
#define CounterIsr_SystemTimer_Core0 CounterIsr_SystemTimer_Core0
#define CounterIsr_SystemTimer_Core1 CounterIsr_SystemTimer_Core1
#define CounterIsr_SystemTimer_Core2 CounterIsr_SystemTimer_Core2
#define DMACH10SR_ISR DMACH10SR_ISR
#define DMACH11SR_ISR DMACH11SR_ISR
#define GTMTOM1SR0_ISR GTMTOM1SR0_ISR
#define GTMTOM1SR1_ISR GTMTOM1SR1_ISR
#define GTMTOM1SR3_ISR GTMTOM1SR3_ISR
#define GTMTOM1SR4_ISR GTMTOM1SR4_ISR
#define QSPI3ERR_ISR QSPI3ERR_ISR
#define QSPI3PT_ISR QSPI3PT_ISR
#define XSignalIsr_OsCore0 XSignalIsr_OsCore0
#define XSignalIsr_OsCore1 XSignalIsr_OsCore1
#define XSignalIsr_OsCore2 XSignalIsr_OsCore2

/* Alarm identifiers. */
#define Rte_Al_TE2_Core0_Bsw_Task_0_10ms Rte_Al_TE2_Core0_Bsw_Task_0_10ms
#define Rte_Al_TE2_Core0_Bsw_Task_0_20ms Rte_Al_TE2_Core0_Bsw_Task_0_20ms
#define Rte_Al_TE2_Core0_Bsw_Task_0_5ms Rte_Al_TE2_Core0_Bsw_Task_0_5ms
#define Rte_Al_TE2_EcuM_EcuM_MainFunction Rte_Al_TE2_EcuM_EcuM_MainFunction
#define Rte_Al_TE3_EcuM_EcuM_MainFunction Rte_Al_TE3_EcuM_EcuM_MainFunction
#define Rte_Al_TE_Com_SWC_Com_Runnable_2ms Rte_Al_TE_Com_SWC_Com_Runnable_2ms
#define Rte_Al_TE_Com_SWC_Com_Runnable_500ms Rte_Al_TE_Com_SWC_Com_Runnable_500ms
#define Rte_Al_TE_Core1App_SWC_Core1App_SWC_Runnable_10ms Rte_Al_TE_Core1App_SWC_Core1App_SWC_Runnable_10ms
#define Rte_Al_TE_Core2App_SWC_Core2App_SWC_Runnable_10ms Rte_Al_TE_Core2App_SWC_Core2App_SWC_Runnable_10ms
#define Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_10ms Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_10ms
#define Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms
#define Rte_Al_TE_SWC1_SWC1_Runnable10ms Rte_Al_TE_SWC1_SWC1_Runnable10ms

/* Counter identifiers. */
#define SystemTimer_Core0 SystemTimer_Core0
#define SystemTimer_Core1 SystemTimer_Core1
#define SystemTimer_Core2 SystemTimer_Core2

/* ScheduleTable identifiers. */

/* Resource identifiers. */
#define OsResource_Core0 OsResource_Core0
#define OsResource_Core1 OsResource_Core1
#define OsResource_Core2 OsResource_Core2

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
  Core0_AswTask = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core0_Asw_Init = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core0_Bsw_Task = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core1_Asw_Init = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core1_Asw_Task = 4,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core1_Bsw_Task = 5,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core2_Asw_Init = 6,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core2_Asw_Task = 7,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Core2_Bsw_Task = 8,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
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
  ASCLIN3ERR_ISR = 12,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN3RX_ISR = 13,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN3TX_ISR = 14,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN4ERR_ISR = 15,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN4RX_ISR = 16,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ASCLIN4TX_ISR = 17,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_0 = 18,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_1 = 19,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_3 = 20,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_4 = 21,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsr_6 = 22,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer_Core0 = 23,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer_Core1 = 24,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer_Core2 = 25,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  DMACH10SR_ISR = 26,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  DMACH11SR_ISR = 27,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  GTMTOM1SR0_ISR = 28,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  GTMTOM1SR1_ISR = 29,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  GTMTOM1SR3_ISR = 30,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  GTMTOM1SR4_ISR = 31,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  QSPI3ERR_ISR = 32,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  QSPI3PT_ISR = 33,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  XSignalIsr_OsCore0 = 34,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  XSignalIsr_OsCore1 = 35,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  XSignalIsr_OsCore2 = 36,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ISRID_COUNT = 37,
  INVALID_ISR = OS_ISRID_COUNT
} ISRType;

/*! Alarm identifiers. */
typedef enum
{
  Rte_Al_TE2_Core0_Bsw_Task_0_10ms = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE2_Core0_Bsw_Task_0_20ms = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE2_Core0_Bsw_Task_0_5ms = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE2_EcuM_EcuM_MainFunction = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE3_EcuM_EcuM_MainFunction = 4,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Com_SWC_Com_Runnable_2ms = 5,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Com_SWC_Com_Runnable_500ms = 6,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Core1App_SWC_Core1App_SWC_Runnable_10ms = 7,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_Core2App_SWC_Core2App_SWC_Runnable_10ms = 8,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_10ms = 9,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms = 10,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_SWC1_SWC1_Runnable10ms = 11,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ALARMID_COUNT = 12
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
  OsResource_Core0 = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OsResource_Core1 = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OsResource_Core2 = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
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
