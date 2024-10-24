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
/**        \file  Dcm_CfgWrapperInt.h
 *         \unit  CfgWrapper
 *        \brief  Contains public function declarations and complex type definitions of CfgWrapper unit.
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
#if !defined(DCM_CFGWRAPPERINT_H)
# define DCM_CFGWRAPPERINT_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "Dcm_CfgWrapperTypes.h"
# include "Dcm_Debug.h"

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
# define DCM_START_SEC_CODE
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_MemMap */
# if (DCM_SVC_01_SUPPORT_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_CfgWrapSvc01ServiceInfoGetEntry()
 *********************************************************************************************************************/
/*! \brief          Get service info descriptor.
 *  \details        -
 *  \param[in]      index           Index to a service info descriptor
 *  \param[out]     pServiceInfo    The service info descriptor
 *  \param[out]     ErrorCode       Negative response code in case return value is DCM_E_NOT_OK
 *  \return         DCM_E_OK        The operation was successful
 *  \return         DCM_E_NOT_OK    The given index was invalid (if runtime checks enabled)
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
DCM_GLOBAL_INLINE FUNC(Std_ReturnType, DCM_CODE) Dcm_CfgWrapSvc01ServiceInfoGetEntry(
  uint8_least index,
  CONSTP2VAR(Dcm_CfgSvc01ServiceInfoPtrType, AUTOMATIC, AUTOMATIC) pServiceInfo,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
# endif

# if (DCM_OBDIDMGR_OBDMID_SUPPORT_BY_DCM_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_CfgWrapSvc06MidTidInfoGetEntry()
 *********************************************************************************************************************/
/*! \brief          Get Mid Tid info descriptor.
 *  \details        -
 *  \param[in]      index           Index to a service info descriptor
 *  \param[out]     pMidTidInfo     The Mid Tid info descriptor.
 *  \param[out]     ErrorCode       Negative response code in case return value is DCM_E_NOT_OK
 *  \return         DCM_E_OK        The operation was successful
 *  \return         DCM_E_NOT_OK    The given index was invalid (if runtime checks enabled)
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
DCM_GLOBAL_INLINE FUNC(Std_ReturnType, DCM_CODE) Dcm_CfgWrapSvc06MidTidInfoGetEntry(
  uint8_least index,
  CONSTP2VAR(Dcm_CfgSvc06MidTidInfoPtrType, AUTOMATIC, AUTOMATIC) pMidTidInfo,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
# endif

# if (DCM_SVC_08_SUPPORT_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_CfgWrapSvc08ServiceInfoGetEntry()
 *********************************************************************************************************************/
/*! \brief          Get service info descriptor.
 *  \details        -
 *  \param[in]      index           Index to a service info descriptor
 *  \param[out]     pServiceInfo    The service info descriptor
 *  \param[out]     ErrorCode       Negative response code in case return value is DCM_E_NOT_OK
 *  \return         DCM_E_OK        The operation was successful
 *  \return         DCM_E_NOT_OK    The given index was invalid (if runtime checks enabled)
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
DCM_GLOBAL_INLINE FUNC(Std_ReturnType, DCM_CODE) Dcm_CfgWrapSvc08ServiceInfoGetEntry(
  uint8_least index,
  CONSTP2VAR(Dcm_CfgSvc08ServiceInfoPtrType, AUTOMATIC, AUTOMATIC) pServiceInfo,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
# endif

# if (DCM_SVC_09_SUPPORT_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_CfgWrapSvc09ServiceInfoGetEntry()
 *********************************************************************************************************************/
/*! \brief          Get service info descriptor.
 *  \details        -
 *  \param[in]      index           Index to a service info descriptor
 *  \param[out]     pServiceInfo    The service info descriptor
 *  \param[out]     ErrorCode       Negative response code in case return value is DCM_E_NOT_OK
 *  \return         DCM_E_OK        The operation was successful
 *  \return         DCM_E_NOT_OK    The given index was invalid (if runtime checks enabled)
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
DCM_GLOBAL_INLINE FUNC(Std_ReturnType, DCM_CODE) Dcm_CfgWrapSvc09ServiceInfoGetEntry(
  uint8_least index,
  CONSTP2VAR(Dcm_CfgSvc09ServiceInfoPtrType, AUTOMATIC, AUTOMATIC) pServiceInfo,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
# endif
# define DCM_STOP_SEC_CODE
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  GLOBAL DATA DECLARATIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

#endif /* !defined(DCM_CFGWRAPPERINT_H) */

/**********************************************************************************************************************
 *  END OF FILE: Dcm_CfgWrapperInt.h
 *********************************************************************************************************************/
