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
 *              File: Os_Isr_Lcfg.c
 *   Generation Time: 2025-02-07 11:21:31
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_ISR_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Isr_Lcfg.h"
#include "Os_Isr.h"

/* Os kernel module dependencies */
#include "Os_AccessCheck_Lcfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Thread.h"
#include "Os_Timer.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"
#include "Os_XSignal_Lcfg.h"
#include "Os_XSignal.h"

/* Os hal dependencies */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Interrupt_Lcfg.h"


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

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic ISR data: ADC0SR0_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ADC0SR0_ISR_Dyn;

/*! Dynamic ISR data: ADC11SR0_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ADC11SR0_ISR_Dyn;

/*! Dynamic ISR data: ADC1SR0_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ADC1SR0_ISR_Dyn;

/*! Dynamic ISR data: ADC2SR0_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ADC2SR0_ISR_Dyn;

/*! Dynamic ISR data: ADC3SR0_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ADC3SR0_ISR_Dyn;

/*! Dynamic ISR data: ADC8SR0_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ADC8SR0_ISR_Dyn;

/*! Dynamic ISR data: ASCLIN1ERR_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ASCLIN1ERR_ISR_Dyn;

/*! Dynamic ISR data: ASCLIN1RX_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ASCLIN1RX_ISR_Dyn;

/*! Dynamic ISR data: ASCLIN1TX_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ASCLIN1TX_ISR_Dyn;

/*! Dynamic ISR data: ASCLIN2ERR_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ASCLIN2ERR_ISR_Dyn;

/*! Dynamic ISR data: ASCLIN2RX_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ASCLIN2RX_ISR_Dyn;

/*! Dynamic ISR data: ASCLIN2TX_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ASCLIN2TX_ISR_Dyn;

/*! Dynamic ISR data: CanIsr_0 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_Dyn;

/*! Dynamic ISR data: CanIsr_1 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_Dyn;

/*! Dynamic ISR data: CanIsr_4 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_Dyn;

/*! Dynamic ISR data: CounterIsr_SystemTimer */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CounterIsr_SystemTimer_Dyn;

/*! Dynamic ISR data: DMACH10SR_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_DMACH10SR_ISR_Dyn;

/*! Dynamic ISR data: DMACH11SR_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_DMACH11SR_ISR_Dyn;

/*! Dynamic ISR data: QSPI3ERR_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_QSPI3ERR_ISR_Dyn;

/*! Dynamic ISR data: QSPI3PT_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_QSPI3PT_ISR_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! ISR configuration data: ADC0SR0_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC0SR0_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ADC0SR0_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ADC0SR0_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC0SR0_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ADC0SR0_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ADC0SR0_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ADC0SR0_ISR_HwConfig,
  /* .IsrId                     = */ ADC0SR0_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ADC11SR0_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC11SR0_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ADC11SR0_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ADC11SR0_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC11SR0_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ADC11SR0_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ADC11SR0_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ADC11SR0_ISR_HwConfig,
  /* .IsrId                     = */ ADC11SR0_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ADC1SR0_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC1SR0_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ADC1SR0_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ADC1SR0_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC1SR0_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ADC1SR0_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ADC1SR0_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ADC1SR0_ISR_HwConfig,
  /* .IsrId                     = */ ADC1SR0_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ADC2SR0_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC2SR0_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ADC2SR0_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ADC2SR0_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC2SR0_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ADC2SR0_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level7_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ADC2SR0_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ADC2SR0_ISR_HwConfig,
  /* .IsrId                     = */ ADC2SR0_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ADC3SR0_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC3SR0_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ADC3SR0_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ADC3SR0_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC3SR0_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ADC3SR0_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ADC3SR0_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ADC3SR0_ISR_HwConfig,
  /* .IsrId                     = */ ADC3SR0_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ADC8SR0_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC8SR0_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ADC8SR0_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ADC8SR0_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC8SR0_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ADC8SR0_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ADC8SR0_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ADC8SR0_ISR_HwConfig,
  /* .IsrId                     = */ ADC8SR0_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ASCLIN1ERR_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN1ERR_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ASCLIN1ERR_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ASCLIN1ERR_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN1ERR_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ASCLIN1ERR_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level16_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ASCLIN1ERR_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ASCLIN1ERR_ISR_HwConfig,
  /* .IsrId                     = */ ASCLIN1ERR_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ASCLIN1RX_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN1RX_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ASCLIN1RX_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ASCLIN1RX_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN1RX_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ASCLIN1RX_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level15_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ASCLIN1RX_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ASCLIN1RX_ISR_HwConfig,
  /* .IsrId                     = */ ASCLIN1RX_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ASCLIN1TX_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN1TX_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ASCLIN1TX_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ASCLIN1TX_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN1TX_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ASCLIN1TX_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level14_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ASCLIN1TX_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ASCLIN1TX_ISR_HwConfig,
  /* .IsrId                     = */ ASCLIN1TX_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ASCLIN2ERR_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN2ERR_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ASCLIN2ERR_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ASCLIN2ERR_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN2ERR_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ASCLIN2ERR_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level13_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ASCLIN2ERR_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ASCLIN2ERR_ISR_HwConfig,
  /* .IsrId                     = */ ASCLIN2ERR_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ASCLIN2RX_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN2RX_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ASCLIN2RX_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ASCLIN2RX_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN2RX_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ASCLIN2RX_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level12_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ASCLIN2RX_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ASCLIN2RX_ISR_HwConfig,
  /* .IsrId                     = */ ASCLIN2RX_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: ASCLIN2TX_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN2TX_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_ASCLIN2TX_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_ASCLIN2TX_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN2TX_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ASCLIN2TX_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level11_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ASCLIN2TX_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_ASCLIN2TX_ISR_HwConfig,
  /* .IsrId                     = */ ASCLIN2TX_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: CanIsr_0 */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_CanIsr_0,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_CanIsr_0,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level2_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_CanIsr_0_HwConfig,
  /* .IsrId                     = */ CanIsr_0,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: CanIsr_1 */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_CanIsr_1,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_CanIsr_1,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level3_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_CanIsr_1_HwConfig,
  /* .IsrId                     = */ CanIsr_1,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: CanIsr_4 */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_CanIsr_4,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_CanIsr_4,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_CanIsr_4_HwConfig,
  /* .IsrId                     = */ CanIsr_4,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: CounterIsr_SystemTimer */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_CounterIsr_SystemTimer,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_CounterIsr_SystemTimer,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_TimerIsrConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer =
{
  /* .Isr     = */
  {
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CounterIsr_SystemTimer,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level1_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CounterIsr_SystemTimer_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_SystemApplication_OsCore0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_CounterIsr_SystemTimer_HwConfig,
  /* .IsrId                     = */ CounterIsr_SystemTimer,
  /* .IsEnabledOnInitialization = */ FALSE
}
,
  /* .Counter = */ OS_COUNTER_CASTCONFIG_TIMERPFRT_2_COUNTER(OsCfg_Counter_SystemTimer)
};
/*! ISR configuration data: DMACH10SR_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_DMACH10SR_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_DMACH10SR_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_DMACH10SR_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_DMACH10SR_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_DMACH10SR_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level19_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_DMACH10SR_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_DMACH10SR_ISR_HwConfig,
  /* .IsrId                     = */ DMACH10SR_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: DMACH11SR_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_DMACH11SR_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_DMACH11SR_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_DMACH11SR_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_DMACH11SR_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_DMACH11SR_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level20_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_DMACH11SR_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_DMACH11SR_ISR_HwConfig,
  /* .IsrId                     = */ DMACH11SR_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: QSPI3ERR_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_QSPI3ERR_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_QSPI3ERR_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_QSPI3ERR_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_QSPI3ERR_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_QSPI3ERR_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level17_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_QSPI3ERR_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_QSPI3ERR_ISR_HwConfig,
  /* .IsrId                     = */ QSPI3ERR_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
/*! ISR configuration data: QSPI3PT_ISR */
CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_QSPI3PT_ISR_HwConfig =
{
  /* .HwConfig                  = */ &OsCfg_Hal_IntIsr_QSPI3PT_ISR,
  /* .MapConfig                 = */ &OsCfg_Hal_IntIsrMap_QSPI3PT_ISR,
  /* .IsMapped                  = */ FALSE,
  /* .IsPostActionRequired      = */ FALSE
}
;  
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_QSPI3PT_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_QSPI3PT_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level18_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_QSPI3PT_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ NULL_PTR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .SourceConfig              = */ &OsCfg_Isr_QSPI3PT_ISR_HwConfig,
  /* .IsrId                     = */ QSPI3PT_ISR,
  /* .IsEnabledOnInitialization = */ TRUE
}
;
#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for category 2 ISRs. */
CONSTP2CONST(Os_IsrConfigType, OS_CONST, OS_CONST) OsCfg_IsrRefs[OS_ISRID_COUNT + 1] =  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */
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
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4),
  OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_CounterIsr_SystemTimer),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_DMACH10SR_ISR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_DMACH11SR_ISR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_QSPI3ERR_ISR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_QSPI3PT_ISR),
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
 *  END OF FILE: Os_Isr_Lcfg.c
 *********************************************************************************************************************/
