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
 *  \defgroup   Dem_MarIF Dem_Mar
 *  \{
 *  \file       Dem_MarIF_Interface.h
 *  \brief      Diagnostic Event Manager (Dem) header file
 *  \details    Interface of the MarIF subcomponent which manages calculation of the MAR.
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  REFER TO DEM.H
 *********************************************************************************************************************/

#if !defined (DEM_MARIF_INTERFACE_H)
#define DEM_MARIF_INTERFACE_H

/* ********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/* Own subcomponent header */
/* ------------------------------------------------------------------------- */


/* ********************************************************************************************************************
 *  SUBCOMPONENT OBJECT FUNCTION DECLARATIONS
 *********************************************************************************************************************/
#define DEM_START_SEC_CODE
#include "MemMap.h"                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*!
 * \defgroup Dem_Mar_PublicProperties Public Properties
 * \{
 */

/* ****************************************************************************
 * Dem_Mar_InitNv
 *****************************************************************************/
/*!
 * \brief         Initializes all arrays and variables with zero
 *
 * \details       Initializes all arrays and variables with zero
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(void, DEM_CODE)
Dem_Mar_InitNv(
  void
);

/* ****************************************************************************
 * Dem_Mar_IncrementNumeratorIfAllowed
 *****************************************************************************/
/*!
 * \brief         Increments the numerator by one if allowed
 *
 * \details       Increments the numerator which corresponds to the given 
 *                event Id by one if no MIL illuminating event is pending.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 *                The EventId must be in range [1..Dem_Cfg_GlobalEventCount()[.
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(void, DEM_CODE)
Dem_Mar_IncrementNumeratorIfAllowed(
  CONST(Dem_EventIdType, AUTOMATIC) EventId
);


/* ****************************************************************************
 * Dem_Mar_CountPendingEvents
 *****************************************************************************/
/*!
 * \brief         Counts how many MIL illuminating events are pending
 *
 * \details       Counts how many MIL illuminating events are pending
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(void, DEM_CODE)
Dem_Mar_CountPendingEvents(
  void
);

/* ****************************************************************************
 * Dem_Mar_IncrementPendingEventsIfNeeded
 *****************************************************************************/
/*!
 * \brief         Increments the counter which counts the number of pending
 *                MIL illuminating events
 *
 * \details       Increments the pending counter if the given event is MIL 
 *                illuminating and becomes pending.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 *                The EventId must be in range [1..Dem_Cfg_GlobalEventCount()[.
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(void, DEM_CODE)
Dem_Mar_IncrementPendingEventsIfNeeded(
  CONST(Dem_EventIdType, AUTOMATIC) EventId
);

/* ****************************************************************************
 * Dem_Mar_DecrementPendingEventsIfNeeded
 *****************************************************************************/
/*!
 * \brief         Decrements the counter which counts the number of pending
 *                MIL illuminating events
 *
 * \details       Decrements the pending counter if the given event is MIL 
 *                illuminating and the pending bit is cleared.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 *                The EventId must be in range [1..Dem_Cfg_GlobalEventCount()[.
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(void, DEM_CODE)
Dem_Mar_DecrementPendingEventsIfNeeded(
  CONST(Dem_EventIdType, AUTOMATIC) EventId
);

/* ****************************************************************************
 * Dem_Mar_QueueDenominatorIncrementationIfAllowed
 *****************************************************************************/
/*!
 * \brief         Queues the incremenation of the denominator if no OBD relevant
 *                event is pending
 *
 * \details       Queues the incremenation of the denominator if no OBD relevant
 *                event is pending
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(void, DEM_CODE)
Dem_Mar_QueueDenominatorIncrementationIfAllowed(
  void
);

/* ****************************************************************************
 * Dem_Mar_MainFunction
 *****************************************************************************/
/*!
 * \brief         Scheduled function of logical unit MAR
 *
 * \details       Scheduled function of logical unit MAR
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(void, DEM_CODE)
Dem_Mar_MainFunction(
  void
);

/* ****************************************************************************
 * Dem_Mar_RestartDcy
 *****************************************************************************/
/*!
 * \brief         Resets MAN specific status information
 *
 * \details       Resets the incrementation flags of all MANs
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(void, DEM_CODE)
Dem_Mar_RestartDcy(
  void
);

/* ****************************************************************************
 * Dem_Mar_IsEnabled
 *****************************************************************************/
/*!
 * \brief         Checks if the MAR feature is enabled.
 *
 * \details       Checks if the MAR feature is enabled.
 *
 * \return        TRUE: MAR is enabled.
 *                FALSE: MAR is not enabled.
 *
 * \pre           -
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
DEM_LOCAL_INLINE FUNC(boolean, DEM_CODE)
Dem_Mar_IsEnabled(
  void
);

/*!
 * \}
 */
#define DEM_STOP_SEC_CODE
#include "MemMap.h"

#endif /* DEM_MARIF_INTERFACE_H */

/*!
 * \}
 */
/* ********************************************************************************************************************
 *  END OF FILE: Dem_MarIf_Interface.h
 *********************************************************************************************************************/
