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
 *            Module: ComM
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: ComM_Lcfg.h
 *   Generation Time: 2025-09-17 15:11:04
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#if !defined(COMM_LCFG_H)
#define COMM_LCFG_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "ComM_Cfg.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_MemMap */ 
#include "ComM_vMemMap.h"

extern CONST(ComM_InhibitionStatusType, COMM_CONST) ComM_ECUGroupClassInit;

#define COMM_STOP_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_MemMap */ 
#include "ComM_vMemMap.h"

/* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 

/* PRQA L:EXTERNDECLARATIONS */

#define COMM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "ComM_vMemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_0
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_0(void);
/* PRQA L:EXTERNDECLARATIONS */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_1
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_1(void);
/* PRQA L:EXTERNDECLARATIONS */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_2
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_2(void);
/* PRQA L:EXTERNDECLARATIONS */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_3
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_3(void);
/* PRQA L:EXTERNDECLARATIONS */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_4
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_4(void);
/* PRQA L:EXTERNDECLARATIONS */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_5
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_5(void);
/* PRQA L:EXTERNDECLARATIONS */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_6
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_6(void);
/* PRQA L:EXTERNDECLARATIONS */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_7
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_7(void);
/* PRQA L:EXTERNDECLARATIONS */

 /* PRQA S 3451, 3449 EXTERNDECLARATIONS */ /* MD_ComM_3451_3449 */ 
/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_8
*********************************************************************************************************************/
/*! \brief       Calls ComM_MainFunction() for the corresponding channel. This function is called by RTE with the 
 *               configured channel-specific Main Function Period
 *  \pre         ComM must be initialized
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_MainFunction_8(void);
/* PRQA L:EXTERNDECLARATIONS */

/* -----------------------------------------------------------------------------
    &&&~ INTERNAL GENERATED FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */


#define COMM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "ComM_vMemMap.h"


#endif /* COMM_LCFG_H */

