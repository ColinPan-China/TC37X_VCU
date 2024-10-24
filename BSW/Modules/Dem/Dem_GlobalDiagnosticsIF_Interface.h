/* ********************************************************************************************************************
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
 *  -------------------------------------------------------------------------------------------------------------------
 */
/*!
 *  \defgroup   Dem_GlobalDiagnosticsIF GlobalDiagnosticsIF
 *  \{
 *  \file       Dem_GlobalDiagnosticsIF_Interface.h
 *  \brief      Implementation of unit GlobalDiagnosticsIF.
 *  \details    Realizes the public interfaces of its parent logical unit, i.e. both Dem external service APIs and Dem internal APIs.
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  REFER TO DEM.H
 *********************************************************************************************************************/

#if !defined (DEM_GLOBALDIAGNOSTICSIF_INTERFACE_H)
#define DEM_GLOBALDIAGNOSTICSIF_INTERFACE_H

/* ********************************************************************************************************************
 *  GLOBAL MISRA JUSTIFICATIONS
 *********************************************************************************************************************/
/* PRQA S 2880 EOF */ /* MD_DEM_2.1_UNREACHABLE_STATEMENT */
/* PRQA S 2982 EOF */ /* MD_DEM_2982 */
/* PRQA S 2983 EOF */ /* MD_DEM_2983 */
/* PRQA S 2985 EOF */ /* MD_DEM_2985 */
/* PRQA S 2986 EOF */ /* MD_DEM_2986 */
/* PRQA S 2987 EOF */ /* MD_DEM_2987 */
/* PRQA S 2991 EOF */ /* MD_DEM_2991 */
/* PRQA S 2992 EOF */ /* MD_DEM_2992 */
/* PRQA S 2995 EOF */ /* MD_DEM_2995 */
/* PRQA S 2996 EOF */ /* MD_DEM_2996 */
/* PRQA S 3415 EOF */ /* MD_DEM_13.5_cf */

/* ********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

                                                  /* Own subcomponent header */
/* ------------------------------------------------------------------------- */

/* ********************************************************************************************************************
 *  SUBCOMPONENT OBJECT FUNCTION DECLARATIONS
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 *  SUBCOMPONENT API FUNCTION DECLARATIONS
 *********************************************************************************************************************/
#define DEM_START_SEC_CODE
#include "MemMap.h"                                                                                                              /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*!
 * \defgroup Dem_GlobalDiagnosticsIF_Public Public Methods
 * \{
 */
#if ((DEM_CFG_SUPPORT_DCM == STD_ON) && (DEM_CFG_SUPPORT_WWHOBD == STD_ON) && (DEM_CFG_SUPPORT_PID91 == STD_ON))                                                                                         
/* ****************************************************************************
 * Dem_GlobalDiagnostics_TranslateActivationMode
 *****************************************************************************/
/*!
 * \brief         Maps the activation mode state to DCM format
 *
 * \details       This function maps the given activation mode state to the
 *                respective DCM representation:
 *                DEM_INDICATOR_CONTINUOUS -> 0x03
 *                DEM_INDICATOR_SHORT      -> 0x02
 *                DEM_INDICATOR_ON_DEMAND  -> 0x01
 *                DEM_INDICATOR_OFF        -> 0x00
 *
 * \param[in]     ActivationMode
 *                The internal activation mode state
 *
 * \return        DCM encoded Activation Mode
 *
 * \pre           -
 * \config          ((DEM_CFG_SUPPORT_DCM == STD_ON) \
 *                && (DEM_CFG_SUPPORT_WWHOBD == STD_ON) \ 
 *                && (DEM_CFG_SUPPORT_PID91 == STD_ON))    
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(uint8, DEM_CODE)
Dem_GlobalDiagnostics_TranslateActivationMode(
  CONST(Dem_IndicatorStatusType, AUTOMATIC)  ActivationMode
  );
#endif

/*!
 * \}
 */
#define DEM_STOP_SEC_CODE
#include "MemMap.h"                                                                                                              /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* DEM_GLOBALDIAGNOSTICSIF_INTERFACE_H */

/*!
 * \}
 */
/* ********************************************************************************************************************
 *  END OF FILE: Dem_GlobalDiagnosticsIF_Interface.h
 *********************************************************************************************************************/
