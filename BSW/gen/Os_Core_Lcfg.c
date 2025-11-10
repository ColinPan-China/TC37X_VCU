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
 *              File: Os_Core_Lcfg.c
 *   Generation Time: 2025-11-10 14:36:51
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_CORE_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Core_Cfg.h"
#include "Os_Core_Lcfg.h"
#include "Os_Core.h"

/* Os kernel module dependencies */
#include "Os_Application_Lcfg.h"
#include "Os_Barrier_Lcfg.h"
#include "Os_Common.h"
#include "Os_Hook.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Resource_Lcfg.h"
#include "Os_Scheduler_Lcfg.h"
#include "Os_Spinlock_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"
#include "Os.h"

/* Os hal dependencies */
#include "Os_Hal_Core_Cfg.h"
#include "Os_Hal_Core_Lcfg.h"
#include "Os_Hal_Kernel_Lcfg.h"


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

#define OS_START_SEC_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic core status: OsCore0 */
OS_LOCAL VAR(Os_CoreAsrStatusType, OS_VAR_NOINIT) OsCfg_Core_OsCore0_Status_Dyn;

#define OS_STOP_SEC_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Thread class data for: OsCore0 */
OS_LOCAL VAR(Os_ThreadClassType, OS_VAR_NOINIT) OsCfg_Core_OsCore0_ThreadClass;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORESTATUS_CORE1_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic core status: OsCore1 */
OS_LOCAL VAR(Os_CoreAsrStatusType, OS_VAR_NOINIT) OsCfg_Core_OsCore1_Status_Dyn;

#define OS_STOP_SEC_CORESTATUS_CORE1_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE1_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Thread class data for: OsCore1 */
OS_LOCAL VAR(Os_ThreadClassType, OS_VAR_NOINIT) OsCfg_Core_OsCore1_ThreadClass;

#define OS_STOP_SEC_CORE1_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORESTATUS_CORE2_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic core status: OsCore2 */
OS_LOCAL VAR(Os_CoreAsrStatusType, OS_VAR_NOINIT) OsCfg_Core_OsCore2_Status_Dyn;

#define OS_STOP_SEC_CORESTATUS_CORE2_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE2_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Thread class data for: OsCore2 */
OS_LOCAL VAR(Os_ThreadClassType, OS_VAR_NOINIT) OsCfg_Core_OsCore2_ThreadClass;

#define OS_STOP_SEC_CORE2_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic core boot barrier: OsCore0 */
OS_LOCAL VAR(Os_CoreBootBarrierType, OS_VAR_NOINIT) OsCfg_Core_OsCore0_BootBarrier_Dyn;

/*! Dynamic core boot barrier: OsCore1 */
OS_LOCAL VAR(Os_CoreBootBarrierType, OS_VAR_NOINIT) OsCfg_Core_OsCore1_BootBarrier_Dyn;

/*! Dynamic core boot barrier: OsCore2 */
OS_LOCAL VAR(Os_CoreBootBarrierType, OS_VAR_NOINIT) OsCfg_Core_OsCore2_BootBarrier_Dyn;

#define OS_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic core data: OsCore0 */
VAR(Os_CoreAsrType, OS_VAR_NOINIT) OsCfg_Core_OsCore0_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE1_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic core data: OsCore1 */
VAR(Os_CoreAsrType, OS_VAR_NOINIT) OsCfg_Core_OsCore1_Dyn;

#define OS_STOP_SEC_CORE1_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE2_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic core data: OsCore2 */
VAR(Os_CoreAsrType, OS_VAR_NOINIT) OsCfg_Core_OsCore2_Dyn;

#define OS_STOP_SEC_CORE2_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for core hooks: OsCore0 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_Core_OsCore0_HookRefs[OS_CFG_NUM_CORE_OSCORE0_HOOKS + 1u] =
{
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore0),
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ShutdownHook_OsCore0),
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore0),
  NULL_PTR
};

/*! Object reference table for core applications: OsCore0 */
OS_LOCAL CONST(Os_AppConfigRefType, OS_CONST) OsCfg_Core_OsCore0_AppRefs[OS_CFG_NUM_CORE_OSCORE0_APPS + 1u] =
{
  NULL_PTR
};

/*! Object reference table for core IOC communications: OsCore0 */
OS_LOCAL CONST(Os_IocConfigRefType, OS_CONST) OsCfg_Core_OsCore0_IocRefs[OS_CFG_NUM_CORE_OSCORE0_IOCS + 1u] =
{
  NULL_PTR
};

/*! Object reference table for core barriers: OsCore0 */
OS_LOCAL CONST(Os_BarrierBaseConfigRefType, OS_CONST) OsCfg_Core_OsCore0_BarrierRefs[OS_CFG_NUM_BARRIERS + 1u] =  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */ 
{
  NULL_PTR
};

/*! Object reference table for core resources: OsCore0 */
OS_LOCAL CONST(Os_ResourceConfigRefType, OS_CONST) OsCfg_Core_OsCore0_ResourceRefs[OS_CFG_NUM_CORE_OSCORE0_RESOURCES + 1u] =
{
  OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_OsResource_Core0),
  NULL_PTR
};

/*! Object reference table for core stacks: OsCore0 */
OS_LOCAL CONST(Os_StackConfigRefType, OS_CONST) OsCfg_Core_OsCore0_StackRefs[OS_CFG_NUM_CORE_OSCORE0_STACKS + 1u] =
{
  (Os_StackConfigRefType) &OsCfg_Stack_Core0_Bsw_Task,
  (Os_StackConfigRefType) &OsCfg_Stack_Core0_CddTask,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Error,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Init,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Isr_Core,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Kernel,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Shutdown,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Task_Prio4294967295,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Task_Prio49,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Task_Prio50,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore0_Task_Prio64,
  NULL_PTR
};

/*! Object reference table for core ISRs: OsCore0 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_Core_OsCore0_IsrRefs[OS_CFG_NUM_CORE_OSCORE0_ISRS + 1u] =
{
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC0SR0_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC11SR0_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC1SR0_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC2SR0_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC3SR0_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC8SR0_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN1ERR_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN1RX_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN1TX_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN2ERR_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN2RX_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN2TX_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN3ERR_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN3RX_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN3TX_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN4ERR_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN4RX_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ASCLIN4TX_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_3), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_6), 
  OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_CounterIsr_SystemTimer_Core0), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_DMACH10SR_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_DMACH11SR_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_GTMTOM1SR0_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_GTMTOM1SR1_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_GTMTOM1SR3_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_GTMTOM1SR4_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_QSPI3ERR_ISR), 
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_QSPI3PT_ISR), 
  OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore0), 
  NULL_PTR
};

/*! Core configuration data: OsCore0 */
CONST(Os_CoreAsrConfigType, OS_CONST) OsCfg_Core_OsCore0 =
{
  /* .Core                 = */
  {
    /* .Status               = */ OS_CORE_CASTSTATUS_COREASRSTATUS_2_CORESTATUS(OsCfg_Core_OsCore0_Status_Dyn),
    /* .HwConfig             = */ &OsCfg_Hal_Core_OsCore0,
    /* .InterruptSourceRefs  = */ OsCfg_Hal_Core_OsCore0_InterruptSourceRefs,
    /* .InterruptSourceCount = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE0_INTERRUPTSOURCEREFS,
    /* .Id                   = */ OS_CORE_ID_0,
    /* .Trace                = */ NULL_PTR,
    /* .IsAsrCore            = */ TRUE,
    /* .IsAutostart          = */ TRUE,
    /* .IsMasterStartAllowed = */ TRUE,
    /* .HasPrivilegedHardwareAccess = */ TRUE
  },
  /* .Dyn                  = */ &OsCfg_Core_OsCore0_Dyn,
  /* .Scheduler            = */ &OsCfg_Scheduler_OsCore0,
  /* .IdleTask             = */ &OsCfg_Task_IdleTask_OsCore0,
  /* .KernelApp            = */ &OsCfg_App_SystemApplication_OsCore0,
  /* .KernelStack          = */ &OsCfg_Stack_OsCore0_Kernel,
  /* .PreStartTask         = */ NULL_PTR,
  /* .PreStartTaskCallback = */ NULL_PTR,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ &OsCfg_Hook_ShutdownHook_OsCore0,
  /* .ErrorHookRef         = */ &OsCfg_Hook_ErrorHook_OsCore0,
  /* .ProtectionHookRef    = */ NULL_PTR,
  /* .InitHookRef          = */ &OsCfg_Hook_Os_CoreInitHook_OsCore0,
  /* .HookRefs             = */ OsCfg_Core_OsCore0_HookRefs,
  /* .HookCount            = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE0_HOOKS,
  /* .AppRefs              = */ OsCfg_Core_OsCore0_AppRefs,
  /* .AppCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE0_APPS,
  /* .ResourceRefs         = */ OsCfg_Core_OsCore0_ResourceRefs,
  /* .ResourceCount        = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE0_RESOURCES,
  /* .HwConfig             = */ &OsCfg_Hal_CoreAsr_OsCore0,
  /* .MemoryProtection     = */ NULL_PTR,
  /* .TimingProtection     = */ NULL_PTR,
  /* .StackRefs            = */ OsCfg_Core_OsCore0_StackRefs,
  /* .StackCount           = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE0_STACKS,
  /* .CoreIdx              = */ OS_COREASRCOREIDX_0,
  /* .XSignal              = */ &OsCfg_XSig_OsCore0,
  /* .IocRefs              = */ OsCfg_Core_OsCore0_IocRefs,
  /* .IocCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE0_IOCS,
  /* .Barrier              = */ &OsCfg_Barrier_OsCore0,
  /* .BarrierRefs          = */ OsCfg_Core_OsCore0_BarrierRefs,
  /* .BarrierCount         = */ (Os_ObjIdxType)OS_CFG_NUM_BARRIERS,
  /* .ThreadClass          = */ &OsCfg_Core_OsCore0_ThreadClass,
  /* .IsrRefs              = */ OsCfg_Core_OsCore0_IsrRefs,
  /* .IsrCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE0_ISRS
}
;

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for core hooks: OsCore1 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_Core_OsCore1_HookRefs[OS_CFG_NUM_CORE_OSCORE1_HOOKS + 1u] =
{
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore1),
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ShutdownHook_OsCore1),
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore1),
  NULL_PTR
};

/*! Object reference table for core applications: OsCore1 */
OS_LOCAL CONST(Os_AppConfigRefType, OS_CONST) OsCfg_Core_OsCore1_AppRefs[OS_CFG_NUM_CORE_OSCORE1_APPS + 1u] =
{
  NULL_PTR
};

/*! Object reference table for core IOC communications: OsCore1 */
OS_LOCAL CONST(Os_IocConfigRefType, OS_CONST) OsCfg_Core_OsCore1_IocRefs[OS_CFG_NUM_CORE_OSCORE1_IOCS + 1u] =
{
  NULL_PTR
};

/*! Object reference table for core barriers: OsCore1 */
OS_LOCAL CONST(Os_BarrierBaseConfigRefType, OS_CONST) OsCfg_Core_OsCore1_BarrierRefs[OS_CFG_NUM_BARRIERS + 1u] =  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */ 
{
  NULL_PTR
};

/*! Object reference table for core resources: OsCore1 */
OS_LOCAL CONST(Os_ResourceConfigRefType, OS_CONST) OsCfg_Core_OsCore1_ResourceRefs[OS_CFG_NUM_CORE_OSCORE1_RESOURCES + 1u] =
{
  OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_OsResource_Core1),
  NULL_PTR
};

/*! Object reference table for core stacks: OsCore1 */
OS_LOCAL CONST(Os_StackConfigRefType, OS_CONST) OsCfg_Core_OsCore1_StackRefs[OS_CFG_NUM_CORE_OSCORE1_STACKS + 1u] =
{
  (Os_StackConfigRefType) &OsCfg_Stack_Core1_Asw_Task_Qm,
  (Os_StackConfigRefType) &OsCfg_Stack_Core1_Bsw_Task,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Error,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Init,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Isr_Core,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Kernel,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Shutdown,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Task_Prio40,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Task_Prio4294967295,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Task_Prio49,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore1_Task_Prio50,
  NULL_PTR
};

/*! Object reference table for core ISRs: OsCore1 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_Core_OsCore1_IsrRefs[OS_CFG_NUM_CORE_OSCORE1_ISRS + 1u] =
{
  OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_CounterIsr_SystemTimer_Core1), 
  OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore1), 
  NULL_PTR
};

/*! Core configuration data: OsCore1 */
CONST(Os_CoreAsrConfigType, OS_CONST) OsCfg_Core_OsCore1 =
{
  /* .Core                 = */
  {
    /* .Status               = */ OS_CORE_CASTSTATUS_COREASRSTATUS_2_CORESTATUS(OsCfg_Core_OsCore1_Status_Dyn),
    /* .HwConfig             = */ &OsCfg_Hal_Core_OsCore1,
    /* .InterruptSourceRefs  = */ OsCfg_Hal_Core_OsCore1_InterruptSourceRefs,
    /* .InterruptSourceCount = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE1_INTERRUPTSOURCEREFS,
    /* .Id                   = */ OS_CORE_ID_1,
    /* .Trace                = */ NULL_PTR,
    /* .IsAsrCore            = */ TRUE,
    /* .IsAutostart          = */ FALSE,
    /* .IsMasterStartAllowed = */ FALSE,
    /* .HasPrivilegedHardwareAccess = */ FALSE
  },
  /* .Dyn                  = */ &OsCfg_Core_OsCore1_Dyn,
  /* .Scheduler            = */ &OsCfg_Scheduler_OsCore1,
  /* .IdleTask             = */ &OsCfg_Task_IdleTask_OsCore1,
  /* .KernelApp            = */ &OsCfg_App_SystemApplication_OsCore1,
  /* .KernelStack          = */ &OsCfg_Stack_OsCore1_Kernel,
  /* .PreStartTask         = */ NULL_PTR,
  /* .PreStartTaskCallback = */ NULL_PTR,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ &OsCfg_Hook_ShutdownHook_OsCore1,
  /* .ErrorHookRef         = */ &OsCfg_Hook_ErrorHook_OsCore1,
  /* .ProtectionHookRef    = */ NULL_PTR,
  /* .InitHookRef          = */ &OsCfg_Hook_Os_CoreInitHook_OsCore1,
  /* .HookRefs             = */ OsCfg_Core_OsCore1_HookRefs,
  /* .HookCount            = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE1_HOOKS,
  /* .AppRefs              = */ OsCfg_Core_OsCore1_AppRefs,
  /* .AppCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE1_APPS,
  /* .ResourceRefs         = */ OsCfg_Core_OsCore1_ResourceRefs,
  /* .ResourceCount        = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE1_RESOURCES,
  /* .HwConfig             = */ &OsCfg_Hal_CoreAsr_OsCore1,
  /* .MemoryProtection     = */ NULL_PTR,
  /* .TimingProtection     = */ NULL_PTR,
  /* .StackRefs            = */ OsCfg_Core_OsCore1_StackRefs,
  /* .StackCount           = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE1_STACKS,
  /* .CoreIdx              = */ OS_COREASRCOREIDX_1,
  /* .XSignal              = */ &OsCfg_XSig_OsCore1,
  /* .IocRefs              = */ OsCfg_Core_OsCore1_IocRefs,
  /* .IocCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE1_IOCS,
  /* .Barrier              = */ &OsCfg_Barrier_OsCore1,
  /* .BarrierRefs          = */ OsCfg_Core_OsCore1_BarrierRefs,
  /* .BarrierCount         = */ (Os_ObjIdxType)OS_CFG_NUM_BARRIERS,
  /* .ThreadClass          = */ &OsCfg_Core_OsCore1_ThreadClass,
  /* .IsrRefs              = */ OsCfg_Core_OsCore1_IsrRefs,
  /* .IsrCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE1_ISRS
}
;

#define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE2_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for core hooks: OsCore2 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_Core_OsCore2_HookRefs[OS_CFG_NUM_CORE_OSCORE2_HOOKS + 1u] =
{
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore2),
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ShutdownHook_OsCore2),
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore2),
  NULL_PTR
};

/*! Object reference table for core applications: OsCore2 */
OS_LOCAL CONST(Os_AppConfigRefType, OS_CONST) OsCfg_Core_OsCore2_AppRefs[OS_CFG_NUM_CORE_OSCORE2_APPS + 1u] =
{
  NULL_PTR
};

/*! Object reference table for core IOC communications: OsCore2 */
OS_LOCAL CONST(Os_IocConfigRefType, OS_CONST) OsCfg_Core_OsCore2_IocRefs[OS_CFG_NUM_CORE_OSCORE2_IOCS + 1u] =
{
  NULL_PTR
};

/*! Object reference table for core barriers: OsCore2 */
OS_LOCAL CONST(Os_BarrierBaseConfigRefType, OS_CONST) OsCfg_Core_OsCore2_BarrierRefs[OS_CFG_NUM_BARRIERS + 1u] =  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */ 
{
  NULL_PTR
};

/*! Object reference table for core resources: OsCore2 */
OS_LOCAL CONST(Os_ResourceConfigRefType, OS_CONST) OsCfg_Core_OsCore2_ResourceRefs[OS_CFG_NUM_CORE_OSCORE2_RESOURCES + 1u] =
{
  OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_OsResource_Core2),
  NULL_PTR
};

/*! Object reference table for core stacks: OsCore2 */
OS_LOCAL CONST(Os_StackConfigRefType, OS_CONST) OsCfg_Core_OsCore2_StackRefs[OS_CFG_NUM_CORE_OSCORE2_STACKS + 1u] =
{
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Error,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Init,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Isr_Core,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Kernel,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Shutdown,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Task_Prio0,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Task_Prio4294967295,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Task_Prio49,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore2_Task_Prio50,
  NULL_PTR
};

/*! Object reference table for core ISRs: OsCore2 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_Core_OsCore2_IsrRefs[OS_CFG_NUM_CORE_OSCORE2_ISRS + 1u] =
{
  OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_CounterIsr_SystemTimer_Core2), 
  OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore2), 
  NULL_PTR
};

/*! Core configuration data: OsCore2 */
CONST(Os_CoreAsrConfigType, OS_CONST) OsCfg_Core_OsCore2 =
{
  /* .Core                 = */
  {
    /* .Status               = */ OS_CORE_CASTSTATUS_COREASRSTATUS_2_CORESTATUS(OsCfg_Core_OsCore2_Status_Dyn),
    /* .HwConfig             = */ &OsCfg_Hal_Core_OsCore2,
    /* .InterruptSourceRefs  = */ OsCfg_Hal_Core_OsCore2_InterruptSourceRefs,
    /* .InterruptSourceCount = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE2_INTERRUPTSOURCEREFS,
    /* .Id                   = */ OS_CORE_ID_2,
    /* .Trace                = */ NULL_PTR,
    /* .IsAsrCore            = */ TRUE,
    /* .IsAutostart          = */ FALSE,
    /* .IsMasterStartAllowed = */ FALSE,
    /* .HasPrivilegedHardwareAccess = */ FALSE
  },
  /* .Dyn                  = */ &OsCfg_Core_OsCore2_Dyn,
  /* .Scheduler            = */ &OsCfg_Scheduler_OsCore2,
  /* .IdleTask             = */ &OsCfg_Task_IdleTask_OsCore2,
  /* .KernelApp            = */ &OsCfg_App_SystemApplication_OsCore2,
  /* .KernelStack          = */ &OsCfg_Stack_OsCore2_Kernel,
  /* .PreStartTask         = */ NULL_PTR,
  /* .PreStartTaskCallback = */ NULL_PTR,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ &OsCfg_Hook_ShutdownHook_OsCore2,
  /* .ErrorHookRef         = */ &OsCfg_Hook_ErrorHook_OsCore2,
  /* .ProtectionHookRef    = */ NULL_PTR,
  /* .InitHookRef          = */ &OsCfg_Hook_Os_CoreInitHook_OsCore2,
  /* .HookRefs             = */ OsCfg_Core_OsCore2_HookRefs,
  /* .HookCount            = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE2_HOOKS,
  /* .AppRefs              = */ OsCfg_Core_OsCore2_AppRefs,
  /* .AppCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE2_APPS,
  /* .ResourceRefs         = */ OsCfg_Core_OsCore2_ResourceRefs,
  /* .ResourceCount        = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE2_RESOURCES,
  /* .HwConfig             = */ &OsCfg_Hal_CoreAsr_OsCore2,
  /* .MemoryProtection     = */ NULL_PTR,
  /* .TimingProtection     = */ NULL_PTR,
  /* .StackRefs            = */ OsCfg_Core_OsCore2_StackRefs,
  /* .StackCount           = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE2_STACKS,
  /* .CoreIdx              = */ OS_COREASRCOREIDX_2,
  /* .XSignal              = */ &OsCfg_XSig_OsCore2,
  /* .IocRefs              = */ OsCfg_Core_OsCore2_IocRefs,
  /* .IocCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE2_IOCS,
  /* .Barrier              = */ &OsCfg_Barrier_OsCore2,
  /* .BarrierRefs          = */ OsCfg_Core_OsCore2_BarrierRefs,
  /* .BarrierCount         = */ (Os_ObjIdxType)OS_CFG_NUM_BARRIERS,
  /* .ThreadClass          = */ &OsCfg_Core_OsCore2_ThreadClass,
  /* .IsrRefs              = */ OsCfg_Core_OsCore2_IsrRefs,
  /* .IsrCount             = */ (Os_ObjIdxType)OS_CFG_NUM_CORE_OSCORE2_ISRS
}
;

#define OS_STOP_SEC_CORE2_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for system spinlocks. */
OS_LOCAL CONST(Os_SpinlockConfigRefType, OS_CONST) OsCfg_SystemSpinlockRefs[OS_CFG_NUM_SYSTEM_SPINLOCKS + 1u] =
{
  &OsCfg_Spinlock_Rte_Spinlock_BCL_ChargeMode_oBCL_oJ1939_bms_2f4f0f62_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCL_CurrentRequire_oBCL_oJ1939_bms_d7664f08_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCL_VolltageRequire_oBCL_oJ1939_bms_425ed7b1_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCP_AllowChargeVoltageMax_oBCP_oJ1939_bms_fc3dfe75_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCP_AllowTempMax_oBCP_oJ1939_bms_3d5b24f4_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCP_BatteryChargeVoltageMax_oBCP_oJ1939_bms_5d02e2aa_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCP_BatteryNominalEnergy_oBCP_oJ1939_bms_7dc98c8b_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCP_BatteryTotalVoltage_oBCP_oJ1939_bms_19a0567e_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCP_ChargeCurrentMax_oBCP_oJ1939_bms_7cdaf0d4_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCP_SOC_oBCP_oJ1939_bms_78e6b083_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCS_BatteryVoltMaxGroup_oBCS_oJ1939_bms_196f50c9_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCS_BatteryVoltMax_oBCS_oJ1939_bms_11a53a15_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCS_ChargeCurrentMeasure_oBCS_oJ1939_bms_0ae65560_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCS_ChargeVoltageMeasure_oBCS_oJ1939_bms_abbd1969_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCS_EstimatedTimeRemaining_oBCS_oJ1939_bms_c6383d22_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BCS_SOC_oBCS_oJ1939_bms_7466e090_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BEM_ChargeAbortTimeout_oBEM_oJ1939_bms_4849b46c_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BEM_ChargeFinishTimeout_oBEM_oJ1939_bms_2d8e7a9e_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BEM_ChargeStateTimeout_oBEM_oJ1939_bms_4d32efa5_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BEM_ChargeStatisticsTimeout_oBEM_oJ1939_bms_d07a3692_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BEM_ChargerIdTimeout0_oBEM_oJ1939_bms_eb813ae3_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BEM_ChargerIdTimeout1_oBEM_oJ1939_bms_6c27f1a0_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BEM_TimesyncOrPowerTimeout_oBEM_oJ1939_bms_f132cc4f_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BHM_AllowChargeVoltageMax_oBHM_oJ1939_bms_5c3d4762_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryChargeTimes_oBRM_oJ1939_bms_b699eff3_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryProductDay_oBRM_oJ1939_bms_da11520f_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryProductMonth_oBRM_oJ1939_bms_9ee6c732_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryProductYear_oBRM_oJ1939_bms_4f8656a1_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryProperty_oBRM_oJ1939_bms_1c53b5e5_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatterySN_oBRM_oJ1939_bms_10b903de_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatterySystemRatedCapacity_oBRM_oJ1939_bms_8c5f9fd1_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatterySystemRatedVoltage_oBRM_oJ1939_bms_902f9149_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_BatteryType_oBRM_oJ1939_bms_67affdba_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_Manufacturer_oBRM_oJ1939_bms_1506e637_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_ProtocolVersion_oBRM_oJ1939_bms_4595b96f_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_VehicleIdByte17_oBRM_oJ1939_bms_3bcab298_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_VehicleIdByte1_8_oBRM_oJ1939_bms_38f10529_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRM_VehicleIdByte9_16_oBRM_oJ1939_bms_50f2ed11_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BRO_BMSChargeReady_oBRO_oJ1939_bms_639997bd_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSD_AbortSOC_oBSD_oJ1939_bms_1bf4999e_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSD_BatteryTempMax_oBSD_oJ1939_bms_0a97b3dc_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSD_BatteryTempMin_oBSD_oJ1939_bms_ada333a5_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSD_BatteryVoltageMax_oBSD_oJ1939_bms_7df654bd_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSD_BatteryVoltageMin_oBSD_oJ1939_bms_dac2d4c4_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryCurrentState_oBSM_oJ1939_bms_fbd112e0_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryOutpuConnectorState_oBSM_oJ1939_bms_505480e6_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempMaxNo_oBSM_oJ1939_bms_497a5c4e_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempMax_oBSM_oJ1939_bms_85f0b8b3_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempMinNo_oBSM_oJ1939_bms_5a3fbae5_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempMin_oBSM_oJ1939_bms_22c438ca_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryTempState_oBSM_oJ1939_bms_84506101_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryVoltageMaxNo_oBSM_oJ1939_bms_8c4562b4_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_BatteryVoltageState_oBSM_oJ1939_bms_416f5ffb_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_ChargeEnable_oBSM_oJ1939_bms_a2bcc681_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_InsulationState_oBSM_oJ1939_bms_7d927ad9_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BSM_SOC_oBSM_oJ1939_bms_14942cb5_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortAchiveSOC_oBST_oJ1939_bms_c136b77d_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortAchiveSingleVolt_oBST_oJ1939_bms_eba61cdf_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortAchiveTotalVolt_oBST_oJ1939_bms_e1a7b5c9_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortChargparameter_oBST_oJ1939_bms_76c05b72_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortErrorCurrent_oBST_oJ1939_bms_a1621160_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortErrorVoltage_oBST_oJ1939_bms_984fbd12_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultBMSTemp_oBST_oJ1939_bms_1f548a97_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultBatteryTemp_oBST_oJ1939_bms_24bc84f9_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultConnectorTemp_oBST_oJ1939_bms_5ac8c1a2_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultConnector_oBST_oJ1939_bms_c267077a_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultInsulation_oBST_oJ1939_bms_54f72c95_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortFaultOther_oBST_oJ1939_bms_bf783560_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_AbortHVrelayfault_oBST_oJ1939_bms_dd44a377_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_Abortdet2Voltexception_oBST_oJ1939_bms_e015929e_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_BST_Abortmanoperate_oBST_oJ1939_bms_b2432717_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_ChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_d9c09dc2_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_ChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_5e5d12a4_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_DisChargeCurrWU_Ena_oVCU_BS_01_oATOM_HWLIN1_b8f53272_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_DisChargeCurrWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_05d46e7e_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_02_SigGroup_oVCU_02_oATOM_CANFD_Matrix_CH_V600_202502_2fc20804_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_03_SigGroup_oVCU_03_oATOM_CANFD_Matrix_CH_V600_202502_8990e3c1_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_04_SigGroup_oVCU_04_oATOM_CANFD_Matrix_CH_V600_202502_4cce7c18_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_05_SigGroup_oVCU_05_oATOM_CAN_Matrix_PT_V600_20250211_d5c1ee4c_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_06_SigGroup_oVCU_06_oATOM_CAN_Matrix_PT_V600_20250211_e447d442_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_AccPedal_SigGroup_oVCU_AccPedal_oATOM_CANFD_Matrix_CH_V600_202502_aa50ac8d_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_BMS_SigGroup_oVCU_BMS_oATOM_CANFD_Matrix_CH_V600_202502_d27feb30_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_Chassis_01_SigGroup_oVCU_Chassis_01_oATOM_CANFD_Matrix_CH_V600_202502_52963860_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_DCDC_SigGroup_oVCU_DCDC_oATOM_CAN_Matrix_PT_V600_20250211_d0a22af6_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_HMIsignals_01_SigGroup_oVCU_HMIsignals_01_oATOM_CANFD_Matrix_CH_V600_202502_c30c8d8f_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_HMIsignals_02_SigGroup_oVCU_HMIsignals_02_oATOM_CANFD_Matrix_CH_V600_202502_b90a0cf2_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_HMIsignals_03_SigGroup_oVCU_HMIsignals_03_oATOM_CAN_Matrix_PT_V600_20250211_197a0877_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_IBS_01_SigGroup_oVCU_IBS_01_oATOM_CANFD_Matrix_CH_V600_202502_f0f49d09_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_MCU_02_SigGroup_oVCU_MCU_02_oATOM_CAN_Matrix_PT_V600_20250211_2d530015_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_MCU_03_SigGroup_oVCU_MCU_03_oATOM_CANFD_Matrix_CH_V600_202502_c0057d9b_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_MCU_05_SigGroup_oVCU_MCU_05_oATOM_CAN_Matrix_PT_V600_20250211_7ef1168b_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_POD_SigGroup_oVCU_POD_oATOM_CAN_Matrix_PT_V600_20250211_c17d64e5_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_PlugInChrgInfo_SigGroup_oVCU_PlugInChrgInfo_oATOM_CANFD_Matrix_CH_V600_202502_c285d340_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_SynReq_01_SigGroup_oVCU_SynReq_01_oATOM_CAN_Matrix_PT_V600_20250211_2ec232a9_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SG_VCU_TCU_SigGroup_oVCU_TCU_oATOM_CAN_Matrix_PT_V600_20250211_1a98021d_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SOCWU_Ena_oVCU_BS_01_oATOM_HWLIN1_c1ae10c8_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_SOCWU_Treshold_oVCU_BS_01_oATOM_HWLIN1_cb8c1a90_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_ACU_DriverWarningLampSts_oVCU_01_oATOM_HWLIN1_42c2b0b9_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_ACU_PassengerAirbagSts_oVCU_01_oATOM_HWLIN1_a0d9a7b9_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_ACU_PassengerWarningLampSts_oVCU_01_oATOM_HWLIN1_76395bc4_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_ACU_WarningLampSts_oVCU_01_oATOM_HWLIN1_7751b62b_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_BCM_FLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_980b8460_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_BCM_FRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ce21434a_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_BCM_RLSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_bc6dc441_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_BCM_RRSeatBeltRemindReq_oVCU_01_oATOM_HWLIN1_ea47036b_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_CGW_VehicleState_oVCU_01_oATOM_HWLIN1_77400d2e_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_DCDCFail_LIN_oVCU_01_oATOM_HWLIN1_0c50ae50_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_DCM_FL_DoorFLSts_oVCU_01_oATOM_HWLIN1_c9cb9c36_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_DCM_FR_DoorFRSts_oVCU_01_oATOM_HWLIN1_610e09cb_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_DCM_RL_DoorRLSts_oVCU_01_oATOM_HWLIN1_4b0c11ee_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_DCM_RR_DoorRRSts_oVCU_01_oATOM_HWLIN1_e3c98413_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_DriveMotOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_65d20ded_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_HVBatCriFail_LIN_oVCU_01_oATOM_HWLIN1_2bf2157d_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_HVBatOvrTemp_LIN_oVCU_01_oATOM_HWLIN1_7c76df3a_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_IBS_BrakeFluidWarning_oVCU_01_oATOM_HWLIN1_5bfbc2fa_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_IBS_EBDFault_oVCU_01_oATOM_HWLIN1_7e339715_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_IBS_RollerbenchMode_oVCU_01_oATOM_HWLIN1_91a58216_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_IBS_SystemStatus_oVCU_01_oATOM_HWLIN1_7138be07_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_IVI_BulbCheckSts_oVCU_01_oATOM_HWLIN1_d842011f_Tx,
  &OsCfg_Spinlock_Rte_Spinlock_VCU_IVI_VrState_oVCU_01_oATOM_HWLIN1_eab73730_Tx,
  NULL_PTR
};

/*! Object reference table for core boot barriers. */
CONSTP2VAR(Os_CoreBootBarrierType, AUTOMATIC, OS_CONST) OsCfg_CoreBootBarrierRefs[OS_COREID_COUNT + 1u] =               /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */  
{
  &OsCfg_Core_OsCore0_BootBarrier_Dyn,
  &OsCfg_Core_OsCore1_BootBarrier_Dyn,
  &OsCfg_Core_OsCore2_BootBarrier_Dyn,
  NULL_PTR
};

/*! System configuration data. */
CONST(Os_SystemConfigType, OS_CONST) OsCfg_System =
{
  /* .VersionInfo      = */
  {
    /* .vendorID         = */ OS_VENDOR_ID,
    /* .moduleID         = */ OS_MODULE_ID,
    /* .sw_major_version = */ OS_SW_MAJOR_VERSION,
    /* .sw_minor_version = */ OS_SW_MINOR_VERSION,
    /* .sw_patch_version = */ OS_SW_PATCH_VERSION
  },
  /* .NumberOfAsrCores = */ OS_COREASRCOREIDX_COUNT,
  /* .SpinlockRefs     = */ OsCfg_SystemSpinlockRefs,
  /* .SpinlockCount    = */ (Os_ObjIdxType)OS_CFG_NUM_SYSTEM_SPINLOCKS,
  /* .HwConfig         = */ &OsCfg_Hal_System,
  /* .MemoryProtection = */ NULL_PTR,
  /* .InterruptSourceRefs  = */ OsCfg_Hal_System_InterruptSourceRefs,
  /* .InterruptSourceCount = */ (Os_ObjIdxType)OS_CFG_NUM_SYSTEM_INTERRUPTSOURCEREFS,
  /* .Core2Thread      = */ &OsCfg_Hal_Core2Thread
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
 *  END OF FILE: Os_Core_Lcfg.c
 *********************************************************************************************************************/

