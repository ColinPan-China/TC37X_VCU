/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2021 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dcm_CfgWrapper.h
 *         \unit  CfgWrapper
 *        \brief  Contains public inline function definitions of CfgWrapper unit.
 *
 *      \details  MICROSAR DCM based on AR 4.0.3
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/
#if !defined(DCM_CFGWRAPPER_H)
# define DCM_CFGWRAPPER_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "Dcm_CfgWrapperInt.h"
/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/

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
 *  GLOBAL FUNCTION DECLARATIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA DECLARATIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
# define DCM_START_SEC_CODE
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_MemMap */
# if !defined(DCM_NOUNIT_CFGWRAPPER)                                                                                                                 /* COV_DCM_NOUNIT TX */
#  if (DCM_SVC_01_SUPPORT_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_CfgWrapSvc01ServiceInfoGetEntry()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
DCM_GLOBAL_INLINE FUNC(Std_ReturnType, DCM_CODE) Dcm_CfgWrapSvc01ServiceInfoGetEntry(                                                                /* PRQA S 3219 */ /* MD_MSR_Unreachable */
  uint8_least index,
  CONSTP2VAR(Dcm_CfgSvc01ServiceInfoPtrType, AUTOMATIC, AUTOMATIC) pServiceInfo,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  Std_ReturnType lResult;

  if(Dcm_DebugDetectRuntimeError(index >= DCM_CFGSVC01SERVICEINFOTABLE_SIZE))                                                                        /* PRQA S 2992 */ /* MD_Dcm_ConstExpr */
  {
    Dcm_DebugReportError(DCM_SID_INTERNAL, DCM_E_CRITICAL_ERROR);

    *ErrorCode = DCM_E_PANIC_NRC;                                                                                                                    /* SBSW_DCM_PARAM_PTR_WRITE */
    lResult = DCM_E_NOT_OK;
  }
  else
  {
    *pServiceInfo = &Dcm_CfgSvc01ServiceInfoTable[index];                                                                                            /* SBSW_DCM_PARAM_PTR_WRITE */
    lResult = DCM_E_OK;
  }

  return lResult;
}
#  endif

#  if (DCM_OBDIDMGR_OBDMID_SUPPORT_BY_DCM_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_CfgWrapSvc06MidTidInfoGetEntry()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
DCM_GLOBAL_INLINE FUNC(Std_ReturnType, DCM_CODE) Dcm_CfgWrapSvc06MidTidInfoGetEntry(                                                                 /* PRQA S 3219 */ /* MD_MSR_Unreachable */
  uint8_least index,
  CONSTP2VAR(Dcm_CfgSvc06MidTidInfoPtrType, AUTOMATIC, AUTOMATIC) pMidTidInfo,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  Std_ReturnType lResult;

  if(Dcm_DebugDetectRuntimeError(index >= DCM_CFGSVC06MIDTIDINFOTABLE_SIZE))                                                                         /* PRQA S 2992 */ /* MD_Dcm_ConstExpr */
  {
    Dcm_DebugReportError(DCM_SID_INTERNAL, DCM_E_CRITICAL_ERROR);

    *ErrorCode = DCM_E_PANIC_NRC;                                                                                                                    /* SBSW_DCM_PARAM_PTR_WRITE */
    lResult = DCM_E_NOT_OK;
  }
  else
  {
    *pMidTidInfo = &Dcm_CfgSvc06MidTidInfoTable[index];                                                                                              /* SBSW_DCM_PARAM_PTR_WRITE */
    lResult = DCM_E_OK;
  }

  return lResult;
}
#  endif

#  if (DCM_SVC_08_SUPPORT_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_CfgWrapSvc08ServiceInfoGetEntry()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
DCM_GLOBAL_INLINE FUNC(Std_ReturnType, DCM_CODE) Dcm_CfgWrapSvc08ServiceInfoGetEntry(                                                                /* PRQA S 3219 */ /* MD_MSR_Unreachable */
  uint8_least index,
  CONSTP2VAR(Dcm_CfgSvc08ServiceInfoPtrType, AUTOMATIC, AUTOMATIC) pServiceInfo,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  Std_ReturnType lResult;

  if(Dcm_DebugDetectRuntimeError(index >= DCM_CFGSVC08SERVICEINFOTABLE_SIZE))                                                                        /* PRQA S 2992 */ /* MD_Dcm_ConstExpr */
  {
    Dcm_DebugReportError(DCM_SID_INTERNAL, DCM_E_CRITICAL_ERROR);

    *ErrorCode = DCM_E_PANIC_NRC;                                                                                                                    /* SBSW_DCM_PARAM_PTR_WRITE */
    lResult = DCM_E_NOT_OK;
  }
  else
  {
    *pServiceInfo = &Dcm_CfgSvc08ServiceInfoTable[index];                                                                                            /* SBSW_DCM_PARAM_PTR_WRITE */
    lResult = DCM_E_OK;
  }

  return lResult;
}
#  endif

#  if (DCM_SVC_09_SUPPORT_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_CfgWrapSvc09ServiceInfoGetEntry()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
DCM_GLOBAL_INLINE FUNC(Std_ReturnType, DCM_CODE) Dcm_CfgWrapSvc09ServiceInfoGetEntry(                                                                /* PRQA S 3219 */ /* MD_MSR_Unreachable */
  uint8_least index,
  CONSTP2VAR(Dcm_CfgSvc09ServiceInfoPtrType, AUTOMATIC, AUTOMATIC) pServiceInfo,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  Std_ReturnType lResult;

  if(Dcm_DebugDetectRuntimeError(index >= DCM_CFGSVC09SERVICEINFOTABLE_SIZE))                                                                        /* PRQA S 2992 */ /* MD_Dcm_ConstExpr */
  {
    Dcm_DebugReportError(DCM_SID_INTERNAL, DCM_E_CRITICAL_ERROR);

    *ErrorCode = DCM_E_PANIC_NRC;                                                                                                                    /* SBSW_DCM_PARAM_PTR_WRITE */
    lResult = DCM_E_NOT_OK;
  }
  else
  {
    *pServiceInfo = &Dcm_CfgSvc09ServiceInfoTable[index];                                                                                            /* SBSW_DCM_PARAM_PTR_WRITE */
    lResult = DCM_E_OK;
  }

  return lResult;
}
#  endif
# endif /* !defined(DCM_NOUNIT_CFGWRAPPER) */
# define DCM_STOP_SEC_CODE
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_MemMap */

#endif /* !defined(DCM_CFGWRAPPER_H) */

/**********************************************************************************************************************
 *  END OF FILE: Dcm_CfgWrapper.h
 *********************************************************************************************************************/
