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
 *              File: Os_Alarm_Lcfg.c
 *   Generation Time: 2024-09-04 17:27:55
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_ALARM_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Alarm_Lcfg.h"
#include "Os_Alarm.h"

/* Os kernel module dependencies */
#include "Os_Application_Lcfg.h"
#include "Os_Cfg.h"
#include "Os_Common.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"
#include "Os_Task_Lcfg.h"
#include "Os_Timer.h"

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

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic alarm data: Rte_Al_TE2_Bsw_Task_0_10ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE2_Bsw_Task_0_10ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE2_Bsw_Task_0_20ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE2_Bsw_Task_0_20ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE_SWC1_SWC1_Runnable10ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE_SWC1_SWC1_Runnable10ms_Dyn;

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


/*! Alarm configuration data: Rte_Al_TE2_Bsw_Task_0_10ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Bsw_Task_0_10ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Bsw_Task_0_10ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPFRT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication) | OS_APPID2MASK(SystemApplication_OsCore0)),  /* PRQA S 0410 */ /* MD_MSR_Dir1.1 */
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication
  },
  /* .Task  = */ &OsCfg_Task_Bsw_Task,
  /* .Mask  = */ Rte_Ev_Cyclic2_Bsw_Task_0_10ms
};


/*! Alarm configuration data: Rte_Al_TE2_Bsw_Task_0_20ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Bsw_Task_0_20ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Bsw_Task_0_20ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPFRT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication) | OS_APPID2MASK(SystemApplication_OsCore0)),  /* PRQA S 0410 */ /* MD_MSR_Dir1.1 */
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication
  },
  /* .Task  = */ &OsCfg_Task_Bsw_Task,
  /* .Mask  = */ Rte_Ev_Cyclic2_Bsw_Task_0_20ms
};


/*! Alarm configuration data: Rte_Al_TE_SWC1_SWC1_Runnable10ms */
CONST(Os_AlarmActivateTaskConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_SWC1_SWC1_Runnable10ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE_SWC1_SWC1_Runnable10ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPFRT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionActivateTask
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication) | OS_APPID2MASK(SystemApplication_OsCore0)),  /* PRQA S 0410 */ /* MD_MSR_Dir1.1 */
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication
  },
  /* .Task  = */ &OsCfg_Task_AswTask
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for alarms. */
CONSTP2CONST(Os_AlarmConfigType, OS_CONST, OS_CONST) OsCfg_AlarmRefs[OS_ALARMID_COUNT + 1] =  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */
{
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Bsw_Task_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Bsw_Task_0_20ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE_SWC1_SWC1_Runnable10ms),
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
 *  END OF FILE: Os_Alarm_Lcfg.c
 *********************************************************************************************************************/
