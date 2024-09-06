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
 *   Generation Time: 2024-09-06 13:53:53
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
#define OsApplication OsApplication
#define SystemApplication_OsCore0 SystemApplication_OsCore0

/* Trusted function identifiers. */

/* Non-trusted function identifiers. */

/* Fast trusted function identifiers. */

/* Task identifiers. */
#define AswTask AswTask
#define Asw_Init Asw_Init
#define Bsw_Task Bsw_Task
#define Default_Init_Task Default_Init_Task
#define Default_Init_Task_Trusted Default_Init_Task_Trusted
#define IdleTask_OsCore0 IdleTask_OsCore0

/* Category 2 ISR identifiers. */
#define CanIsr_0 CanIsr_0
#define CounterIsr_SystemTimer CounterIsr_SystemTimer

/* Alarm identifiers. */
#define Rte_Al_TE2_Bsw_Task_0_10ms Rte_Al_TE2_Bsw_Task_0_10ms
#define Rte_Al_TE2_Bsw_Task_0_20ms Rte_Al_TE2_Bsw_Task_0_20ms
#define Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms
#define Rte_Al_TE_SWC1_SWC1_Runnable10ms Rte_Al_TE_SWC1_SWC1_Runnable10ms

/* Counter identifiers. */
#define SystemTimer SystemTimer

/* ScheduleTable identifiers. */

/* Resource identifiers. */
#define OsResource OsResource

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
  OsApplication = 0, /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemApplication_OsCore0 = 1, /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_APPID_COUNT = 2,
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
  AswTask = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Asw_Init = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Bsw_Task = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Default_Init_Task_Trusted = 4,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  IdleTask_OsCore0 = 5,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_TASKID_COUNT = 6,
  INVALID_TASK = OS_TASKID_COUNT
} TaskType;

/*! Category 2 ISR identifiers. */
typedef enum
{
  CanIsr_0 = 0,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer = 1,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ISRID_COUNT = 2,
  INVALID_ISR = OS_ISRID_COUNT
} ISRType;

/*! Alarm identifiers. */
typedef enum
{
  Rte_Al_TE2_Bsw_Task_0_10ms = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE2_Bsw_Task_0_20ms = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_PowerMng_SWC_Led_Runnable1000ms = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_SWC1_SWC1_Runnable10ms = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ALARMID_COUNT = 4
} AlarmType;

/*! Counter identifiers. */
typedef enum
{
  SystemTimer = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_COUNTERID_COUNT = 1
} CounterType;

/*! ScheduleTable identifiers. */
typedef enum
{
  OS_SCHTID_COUNT = 0
} ScheduleTableType;

/*! Resource identifiers. */
typedef enum
{
  OsResource = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_RESOURCEID_COUNT = 1
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
