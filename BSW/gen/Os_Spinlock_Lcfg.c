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
 *              File: Os_Spinlock_Lcfg.c
 *   Generation Time: 2025-05-30 16:20:15
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_SPINLOCK_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Spinlock_Lcfg.h"
#include "Os_Spinlock.h"

/* Os kernel module dependencies */
#include "Os_Application_Lcfg.h"
#include "Os_Scheduler_Types.h"
#include "Os_Trace_Lcfg.h"

/* Os hal dependencies */


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CORESHARED_0X00000003_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic spinlock data: IocSpinlock_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes */
OS_LOCAL VAR(Os_SpinlockType, OS_VAR_NOINIT) OsCfg_Spinlock_IocSpinlock_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Dyn;

#define OS_STOP_SEC_CORESHARED_0X00000003_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/*! Spinlock configuration data: IocSpinlock_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes */
CONST(Os_SpinlockConfigType, OS_CONST) OsCfg_Spinlock_IocSpinlock_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes =
{
  /* .Lock            = */
  {
    /* .Dyn                   = */ OS_SPINLOCK_CASTDYN_SPINLOCK_2_LOCK(OsCfg_Spinlock_IocSpinlock_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Dyn),
    /* .AccessingApplications = */ (OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1)),  /* PRQA S 0410 */ /* MD_MSR_Dir1.1 */
    /* .Type                  = */ OS_LOCKTYPE_SPINLOCK
  },
  /* .Method          = */ OS_SPINLOCKMETHOD_NOTHING,
  /* .CeilingPriority = */ (Os_TaskPrioType)0uL,
  /* .Mode            = */ OS_SPINLOCKMODE_USER,
  /* .Trace           = */ OS_SPINLOCKTRACE_DISABLED,
  /* .Checks          = */ OS_SPINLOCKCHECK_DISABLED,
  /* .Order           = */ (Os_SpinlockOrderType)0uL,
  /* .TimingHookTrace = */ NULL_PTR
};

/*! Object reference table for spinlocks. */
CONSTP2CONST(Os_SpinlockConfigType, OS_CONST, OS_CONST) OsCfg_SpinlockRefs[OS_SPINLOCKID_COUNT + 1] =           /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */
{
  NULL_PTR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Spinlock_Lcfg.c
 *********************************************************************************************************************/
