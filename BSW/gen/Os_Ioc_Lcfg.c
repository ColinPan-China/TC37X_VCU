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
 *              File: Os_Ioc_Lcfg.c
 *   Generation Time: 2025-05-30 16:20:15
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_IOC_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"
#include "vstdlib.h"

/* Os module declarations */
#include "Os_Ioc_Cfg.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_Ioc_Types.h"
#include "Os_Ioc.h"
#include "Ioc.h"

/* Os kernel module dependencies */
#include "Os_Fifo08.h"
#include "Os_Fifo16.h"
#include "Os_Fifo32.h"
#include "Os_Hook.h"
#include "Os_Spinlock_Lcfg.h"
#include "OsInt.h"

/* Os hal dependencies */

/* User file includes */
# include "Rte.h"
# include "usrostyp.h"


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
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Os_IocCopy_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes()
 *********************************************************************************************************************/
/*! \brief        Copies the given target data to the source address, based on the native data type.
 *  \details      -
 *  \param[in]    Source  The source address to read from. Parameter must not be NULL.
 *  \param[out]   Target  The target address to write to. Parameter must not be NULL.
 *  \context      OS_INTERNAL
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) Os_IocCopy_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes
(
  P2CONST(void, AUTOMATIC, OS_APPL_DATA) Source,
  P2VAR(void, AUTOMATIC, OS_APPL_DATA) Target
);

/**********************************************************************************************************************
 *  Os_IocInit_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes()
 *********************************************************************************************************************/
/*! \brief        Initializes the data buffer with configured initial values.
 *  \details      -
 *  \param[in]    Data  The pointer to the data buffer. Parameter must not be NULL.
 *  \context      OS_INTERNAL
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *  \pre          -
 *********************************************************************************************************************/
OS_LOCAL FUNC(void, OS_CODE) Os_IocInit_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes
(
  P2VAR(void, AUTOMATIC, OS_APPL_DATA) Data
);

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_SystemApplication_OsCore1_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic IOC receive data: Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes */
OS_LOCAL VAR(Os_IocReadType, OS_VAR_NOINIT) OsCfg_IocRecv_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Dyn;

#define OS_STOP_SEC_SystemApplication_OsCore1_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic IOC send data: Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes */
OS_LOCAL VAR(Os_IocWriteType, OS_VAR_NOINIT) OsCfg_IocSend_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Dyn;

/*! IOC communication single data buffer: Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes */
OS_LOCAL VAR(IDT_Arry8Bytes, OS_APPL_DATA) OsCfg_Ioc_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Buffer_Dyn;

#define OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/*! IOC receive configuration data: Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes */
CONST(Os_IocReadConfigType, OS_CONST) OsCfg_IocRecv_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes =
{
  /* .Ioc      = */
  {
      /* .Spinlock              = */ &OsCfg_Spinlock_IocSpinlock_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes,
      /* .LockMode              = */ OS_IOCLOCKMODE_SPINLOCKS,
      /* .Dyn                   = */ OS_IOC_CASTDYN_IOCREAD_2_IOC(OsCfg_IocRecv_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Dyn),
      /* .SubClass              = */ IocRead,
      /* .AccessingApplications = */ OS_APPID2MASK(SystemApplication_OsCore1)  /* PRQA S 0410 */ /* MD_MSR_Dir1.1 */
    },
  /* .Data     = */ &OsCfg_Ioc_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Buffer_Dyn,   /* PRQA S 0315 */ /* MD_Os_Dir1.1_0315 */
  /* .CopyCbk  = */ Os_IocCopy_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes
};

#define OS_STOP_SEC_CORE1_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! IOC send configuration data: Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes */
CONST(Os_IocWriteConfigType, OS_CONST) OsCfg_IocSend_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes =
{
  /* .Ioc       = */
  {
      /* .Spinlock              = */ &OsCfg_Spinlock_IocSpinlock_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes,
      /* .LockMode              = */ OS_IOCLOCKMODE_SPINLOCKS,
      /* .Dyn                   = */ OS_IOC_CASTDYN_IOCWRITE_2_IOC(OsCfg_IocSend_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Dyn),
      /* .SubClass              = */ IocWrite,
      /* .AccessingApplications = */ OS_APPID2MASK(SystemApplication_OsCore0)  /* PRQA S 0410 */ /* MD_MSR_Dir1.1 */
    },
  /* .Data      = */ (P2VAR(void, AUTOMATIC, OS_APPL_DATA)) &OsCfg_Ioc_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes_Buffer_Dyn,  /* PRQA S 0314 */ /* MD_Os_Dir1.1_0314 */
  /* .Callback  = */
  {
      /* .CallbackRefs  = */ NULL_PTR,
      /* .CallbackCount = */ OS_CFG_NUM_IOC_RTE_CORE1APP_SWC_P_ARRY8BYTES_DEP_ARRY8BYTES_CALLBACKS
    },
  /* .CopyCbk   = */ Os_IocCopy_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes,
  /* .InitCbk   = */ Os_IocInit_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  IocRead_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes()
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Redirect call to the general receive function.
 * \endinternal
 */
Std_ReturnType IocRead_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes
(
  IDT_Arry8Bytes *Arg0
)
{
  Std_ReturnType status;
  IDT_Arry8Bytes localVar;

  /* #10 Redirect call to the general receive function. */
  status = Os_TrapIocRead(FALSE, &OsCfg_IocRecv_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes, (P2VAR(void, AUTOMATIC, OS_APPL_DATA)) &localVar);  /* PRQA S 0310, 0314 */ /* MD_Os_Rule11.3_0310, MD_Os_Dir1.1_0314 */ 
  VStdLib_MemCpy(Arg0, &localVar, (VStdLib_CntType) sizeof(IDT_Arry8Bytes));  /* PRQA S 0315 */ /* MD_Os_Dir1.1_0315 */

  return status;
}



/**********************************************************************************************************************
 *  IocWrite_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes()
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Redirect call to the general send function.
 * \endinternal
 */
Std_ReturnType IocWrite_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes
(
  const IDT_Arry8Bytes *Arg0
)
{
  /* #10 Redirect call to the general send function. */
  return Os_TrapIocWrite(FALSE, &OsCfg_IocSend_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes, (P2CONST(void, AUTOMATIC, OS_APPL_DATA)) Arg0);  /* PRQA S 0314, 1340 */ /* MD_Os_Dir1.1_0314, MD_Os_Rule17.8_1340 */
}


/**********************************************************************************************************************
 *  Os_IocCopy_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes()
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Copy data from source to target.
 * \endinternal
 */
OS_LOCAL FUNC(void, OS_CODE) Os_IocCopy_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes
(
  P2CONST(void, AUTOMATIC, OS_APPL_DATA) Source,
  P2VAR(void, AUTOMATIC, OS_APPL_DATA) Target
)
{
  /* #10 Copy data from source to target. */
  VStdLib_MemCpy(Target, Source, (VStdLib_CntType) sizeof(IDT_Arry8Bytes));
}


/**********************************************************************************************************************
 *  Os_IocInit_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes()
 *********************************************************************************************************************/
/*!
 * \internal
 * - #10 Initialize data.
 * \endinternal
 */
OS_LOCAL FUNC(void, OS_CODE) Os_IocInit_Rte_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes
(
  P2VAR(void, AUTOMATIC, OS_APPL_DATA) Data
)
{
  /* #10 Initialize data. */
  VStdLib_MemCpy(Data, &Rte_IocInitValue_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes, (VStdLib_CntType) sizeof(IDT_Arry8Bytes)); /* PRQA S 0315 */ /* MD_Os_Dir1.1_0315 */
}


#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  END OF FILE: Os_Ioc_Lcfg.c
 *********************************************************************************************************************/
