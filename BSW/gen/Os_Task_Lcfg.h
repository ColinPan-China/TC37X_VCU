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
 *              File: Os_Task_Lcfg.h
 *   Generation Time: 2025-03-19 13:54:58
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_TASK_LCFG_H
# define OS_TASK_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Task_Types.h"

/* Os kernel module dependencies */
# include "Os_Ioc_Types.h"
# include "Os_Lcfg.h"

/* Os hal dependencies */


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

/*! Task configuration data: AswTask */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_AswTask;

/*! Task configuration data: Asw_Init */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Asw_Init;

/*! Task configuration data: Bsw_Task */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Bsw_Task;

/*! Task configuration data: Core0_BswTask */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Core0_BswTask;

/*! Task configuration data: Default_Init_Task */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Init_Task;

/*! Task configuration data: Default_Init_Task_Trusted */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Init_Task_Trusted;

/*! Task configuration data: IdleTask_OsCore0 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_IdleTask_OsCore0;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CORE1_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Task configuration data: Core1_AswInit */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Core1_AswInit;

/*! Task configuration data: Core1_AswTask */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Core1_AswTask;

/*! Task configuration data: Core1_BswTask */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Core1_BswTask;

/*! Task configuration data: Default_Init_Task_Core1 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Init_Task_Core1;

/*! Task configuration data: Default_Init_Task_Core1_Trusted */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Init_Task_Core1_Trusted;

/*! Task configuration data: IdleTask_OsCore1 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_IdleTask_OsCore1;

# define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CORE2_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Task configuration data: Core2_AswInit */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Core2_AswInit;

/*! Task configuration data: Core2_AswTask */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Core2_AswTask;

/*! Task configuration data: Core2_BswTask */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Core2_BswTask;

/*! Task configuration data: Default_Init_Task_Core2 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Init_Task_Core2;

/*! Task configuration data: Default_Init_Task_Core2_Trusted */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Init_Task_Core2_Trusted;

/*! Task configuration data: IdleTask_OsCore2 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_IdleTask_OsCore2;

# define OS_STOP_SEC_CORE2_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for tasks. */
extern CONSTP2CONST(Os_TaskConfigType, OS_CONST, OS_CONST) OsCfg_TaskRefs[OS_TASKID_COUNT + 1];  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TASK_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Task_Lcfg.h
 *********************************************************************************************************************/
