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
 *            Module: BswM
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Lcfg.c
 *   Generation Time: 2024-11-18 11:25:47
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#define BSWM_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ MISRA JUSTIFICATION
 ----------------------------------------------------------------------------- */
/* PRQA S 0785, 0786 EOF */ /* MD_CSL_DistinctIdentifiers */

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes a rule.
 * \details     Arbitrates a rule and executes corresponding action list.
 * \param[in]   handleId       Id of the rule to execute.
 * \param[in]   partitionIdx   Current partition context.
 * \return      E_OK      No action list was executed or corresponding action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId,
                                                                   BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \brief       Updates the state of a rule.
 * \details     Set rule state of passed ruleId to passed state.
 * \param[in]   ruleId         Id of the rule to update.
 * \param[in]   state          New state of the rule.
 * \param[in]   partitionIdx   Current partition context.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, 
                                                              BswM_RuleStatesType state,
                                                              BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
/*!
 * \brief       Updates a timer.
 * \details     Set timer value of passed timerId to passed value and calculates the new state.
 * \param[in]   timerId        Id of the timer to update.
 * \param[in]   value          New value of the timer.
 * \param[in]   partitionIdx   Current partition context. 
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx,
                                                         BswM_SizeOfTimerValueType timerId,
                                                         BswM_TimerValueType value);

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_MSR_Rule5.2_0779 */

/**********************************************************************************************************************
 *  Init
 *********************************************************************************************************************/
/*! \defgroup    Init
 * \{
 */
/**********************************************************************************************************************
 *  BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
/*!
 * \brief       Initializes BswM.
 * \details     Part of the BswM_Init. Initializes all generated variables and executes action lists for initialization.
 * \pre         -
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        May only be called by BswM_Init.
 */
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of group Init */

/**********************************************************************************************************************
 *  Common
 *********************************************************************************************************************/
/*! \defgroup    Common
 * \{
 */
/**********************************************************************************************************************
 *  BswM_ModeNotificationFct_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
/*!
 * \brief       Switch Modes of RTE and writes RTE values.
 * \details     Forwards a BswM Switch Action to the RTE and writes value of RteRequestPorts to RTE.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_ModeNotificationFct_BSWM_SINGLEPARTITION(void);
/*! \} */ /* End of group Common */

/**********************************************************************************************************************
 *  SwcModeRequestUpdate
 *********************************************************************************************************************/
/*! \defgroup    SwcModeRequestUpdate
 * \{
 */
/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
/*!
 * \brief       Reads port values from RTE.
 * \details     Gets the current value of SwcModeRequest Ports and SwcNotification Ports from RTE.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION(void);
/*! \} */ /* End of group SwcModeRequestUpdate */

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionListFunctions
 * \{
 */

/*!
 * \{
 * \brief       Execute actions of action list.
 * \details     Generated function which depends on the configuration. Executes the actions of the action list in the
 *              configured order.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_RunToPostRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMToShutdown(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToPrep(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMWakeup(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_InitToWakeup(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitPostRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_EnableReinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableReinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableNoinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Disable_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Enable_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_DISABLE_NM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_ENABLE_NM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Disable_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Enable_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableReinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_EnableReinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableNoinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of sharing description for BswMActionListFunctions */
#define BswM_ActionList_ESH_AL_PostRunToPrepShutdown BswM_ActionList_ESH_AL_WakeupToPrep
/*! \} */ /* End of group BswMActionListFunctions */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMRuleFunctions
 * \{
 */

/*!
 * \{
 * \brief       Arbitrates the configured rule.
 * \details     Generated function which depends on the configuration. Arbitrates the rule and returns the action list
 *              which shall be executed.
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no ActionList shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToShutdown(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToPrep(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToWakeup(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_InitToWakeup(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunToPrepNested(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunNested(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PrepToWait(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRunNested(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_NM_DISABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_NM_ENABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx);
/*! \} */ /* End of sharing description for BswMRuleFunctions */
/*! \} */ /* End of group BswMRuleFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_MSR_Rule5.2_0779 */ 


#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

VAR(uint8, BSWM_VAR_NOINIT) BswM_PduGroupControlInvocation;

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* PRQA S 3218 3 */ /* MD_BswM_3218 */
VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComIPduGroupState;
VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComIPduGroupReinitState;
VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComRxIPduGroupDMState;

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/


/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BSWM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[33] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FctPtr                                                                   Comment                   Referable Keys */
  { /*     0 */ BswM_ActionList_ESH_AL_RunToPostRun                               },  /* [Priority: 0] */  /* [AL_ESH_AL_RunToPostRun] */
  { /*     1 */ BswM_ActionList_ESH_AL_WaitForNvMToShutdown                       },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*     2 */ BswM_ActionList_ESH_AL_WakeupToPrep                               },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToPrep] */
  { /*     3 */ BswM_ActionList_ESH_AL_WaitForNvMWakeup                           },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*     4 */ BswM_ActionList_ESH_AL_WakeupToRun                                },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToRun] */
  { /*     5 */ BswM_ActionList_ESH_AL_InitToWakeup                               },  /* [Priority: 0] */  /* [AL_ESH_AL_InitToWakeup] */
  { /*     6 */ BswM_ActionList_ESH_AL_PostRunToPrepShutdown                      },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*     7 */ BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck                     },  /* [Priority: 0] */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  { /*     8 */ BswM_ActionList_ESH_AL_PostRunToRun                               },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToRun] */
  { /*     9 */ BswM_ActionList_ESH_AL_ExitPostRun                                },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitPostRun] */
  { /*    10 */ BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM                   },  /* [Priority: 0] */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    11 */ BswM_ActionList_INIT_AL_Initialize                                },  /* [Priority: 0] */  /* [AL_INIT_AL_Initialize] */
  { /*    12 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_Disable      },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_Disable] */
  { /*    13 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_Disable      },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_Disable] */
  { /*    14 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_EnableReinit },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_EnableReinit] */
  { /*    15 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableReinit },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableReinit] */
  { /*    16 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableNoinit },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableNoinit] */
  { /*    17 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM          },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM] */
  { /*    18 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT   },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT] */
  { /*    19 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Disable_DM      },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Disable_DM] */
  { /*    20 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Enable_DM       },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Enable_DM] */
  { /*    21 */ BswM_ActionList_ESH_AL_ExitRun                                    },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitRun] */
  { /*    22 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_DISABLE_NM               },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_DISABLE_NM] */
  { /*    23 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_ENABLE_NM                },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_ENABLE_NM] */
  { /*    24 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Disable_DM      },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Disable_DM] */
  { /*    25 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Enable_DM       },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Enable_DM] */
  { /*    26 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableReinit },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableReinit] */
  { /*    27 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM          },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM] */
  { /*    28 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_Disable      },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_Disable] */
  { /*    29 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_EnableReinit },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_EnableReinit] */
  { /*    30 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT   },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT] */
  { /*    31 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_Disable      },  /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_Disable] */
  { /*    32 */ BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableNoinit }   /* [Priority: 0] */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableNoinit] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_CanSMChannelMapping
**********************************************************************************************************************/
/** 
  \var    BswM_CanSMChannelMapping
  \brief  Maps the external id of BswMCanSMIndication to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMCanSMIndication.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_CanSMChannelMappingType, BSWM_CONST) BswM_CanSMChannelMapping[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ExternalId                                        ImmediateUserEndIdx  ImmediateUserStartIdx        Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8,                  1u,                    0u },  /* [CANSM_CHANNEL_0, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*     1 */ ComMConf_ComMChannel_CN_TC37X_VCU_CAN01_70b1f95e,                  2u,                    1u }   /* [CANSM_CHANNEL_1, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelMapping
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelMapping
  \brief  Maps the external id of BswMComMIndication to an internal id and references immediate request ports.
  \details
  Element       Description
  ExternalId    External id of BswMComMIndication.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_ComMChannelMappingType, BSWM_CONST) BswM_ComMChannelMapping[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ExternalId                                              Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8 },  /* [COMM_CHANNEL_0, MRP_ESH_ComMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*     1 */ ComMConf_ComMChannel_CN_TC37X_VCU_CAN01_70b1f95e }   /* [COMM_CHANNEL_1, MRP_ESH_ComMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RulesIdx        Referable Keys */
  { /*     0 */       0u },  /* [R_ESH_RunToPostRun] */
  { /*     1 */       1u },  /* [R_ESH_WaitToShutdown] */
  { /*     2 */       2u },  /* [R_ESH_WakeupToPrep] */
  { /*     3 */       3u },  /* [R_ESH_WaitToWakeup] */
  { /*     4 */       4u },  /* [R_ESH_WakeupToRun] */
  { /*     5 */       8u },  /* [R_ESH_PostRun] */
  { /*     6 */       9u }   /* [R_ESH_PrepToWait] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericMapping
**********************************************************************************************************************/
/** 
  \var    BswM_GenericMapping
  \brief  Maps the external id of BswMGenericRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMGenericRequest.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
  InitValue                Initialization value of port.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ExternalId                                                  ImmediateUserEndIdx                          ImmediateUserStartIdx                          InitValue                                                                     Referable Keys */
  { /*     0 */ BSWM_GENERIC_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8,                                          4u,                                            3u, BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM },  /* [GENERIC_0, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*     1 */ BSWM_GENERIC_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e,                                          5u,                                            4u, BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM },  /* [GENERIC_1, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e] */
  { /*     2 */ BSWM_GENERIC_ESH_ComMPendingRequests                      , BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST          },  /* [GENERIC_2, MRP_ESH_ComMPendingRequests] */
  { /*     3 */ BSWM_GENERIC_ESH_State                                    ,                                          6u,                                            5u, BSWM_GENERICVALUE_ESH_State_ESH_INIT                                   }   /* [GENERIC_3, MRP_ESH_State] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ImmediateUser
**********************************************************************************************************************/
/** 
  \var    BswM_ImmediateUser
  \brief  Contains all immediate request ports.
  \details
  Element             Description
  MaskedBits          contains bitcoded the boolean data of BswM_OnInitOfImmediateUser, BswM_RulesIndUsedOfImmediateUser
  RulesIndEndIdx      the end index of the 0:n relation pointing to BswM_RulesInd
  RulesIndStartIdx    the start index of the 0:n relation pointing to BswM_RulesInd
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaskedBits  RulesIndEndIdx  RulesIndStartIdx        Comment                                                             Referable Keys */
  { /*     0 */      0x01u,             8u,               0u },  /* [Name: CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8]  */  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, CANSM_CHANNEL_0] */
  { /*     1 */      0x01u,            15u,               8u },  /* [Name: CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e]  */  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e, CANSM_CHANNEL_1] */
  { /*     2 */      0x01u,            22u,              15u },  /* [Name: CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8, DCM_COM_0] */
  { /*     3 */      0x01u,            25u,              22u },  /* [Name: CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8]   */  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8, GENERIC_0] */
  { /*     4 */      0x01u,            27u,              25u },  /* [Name: CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e]   */  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e, GENERIC_1] */
  { /*     5 */      0x03u,            35u,              27u },  /* [Name: ESH_State]                                       */  /* [MRP_ESH_State, GENERIC_3] */
  { /*     6 */      0x01u,            39u,              35u }   /* [Name: CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8]     */  /* [MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8, NM_0] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_InitGenVarAndInitAL
**********************************************************************************************************************/
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_InitGenVarAndInitALType, BSWM_CONST) BswM_InitGenVarAndInitAL[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     InitGenVarAndInitAL                            */
  /*     0 */ BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION 
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeNotificationFct
**********************************************************************************************************************/
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_PartitionFunctionType, BSWM_CONST) BswM_ModeNotificationFct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ModeNotificationFct                            */
  /*     0 */ BswM_ModeNotificationFct_BSWM_SINGLEPARTITION 
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    BswM_PartitionIdentifiers
  \brief  the partition contex in Config
  \details
  Element                 Description
  PartitionSNV        
  PCPartitionConfigIdx    the index of the 1:1 relation pointing to BswM_PCPartitionConfig
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_PartitionIdentifiersType, BSWM_CONST) BswM_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV          PCPartitionConfigIdx */
  { /*     0 */ BSWM_SINGLEPARTITION,                   0u }
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element          Description
  Id               External id of rule.
  Init             Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED).
  RuleStatesIdx    the index of the 1:1 relation pointing to BswM_RuleStates
  FctPtr           Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[27] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Id   Init        RuleStatesIdx  FctPtr                                                           Referable Keys */
  { /*     0 */ 21u, BSWM_FALSE,            0u, BswM_Rule_ESH_RunToPostRun                                },  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ModeNotification, MRP_ESH_ComMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_ESH_ComMIndication_CN_TC37X_VCU_CAN01_70b1f95e, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer] */
  { /*     1 */ 23u, BSWM_FALSE,            1u, BswM_Rule_ESH_WaitToShutdown                              },  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_WriteAllTimer, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  { /*     2 */ 25u, BSWM_FALSE,            2u, BswM_Rule_ESH_WakeupToPrep                                },  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_ModeNotification] */
  { /*     3 */ 24u, BSWM_FALSE,            3u, BswM_Rule_ESH_WaitToWakeup                                },  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests] */
  { /*     4 */ 26u, BSWM_FALSE,            4u, BswM_Rule_ESH_WakeupToRun                                 },  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_ModeNotification] */
  { /*     5 */ 16u, BSWM_FALSE,            5u, BswM_Rule_ESH_InitToWakeup                                },  /* [R_ESH_InitToWakeup, MRP_ESH_State] */
  { /*     6 */ 19u, BSWM_FALSE,            6u, BswM_Rule_ESH_PostRunToPrepNested                         },  /* [R_ESH_PostRunToPrepNested] */
  { /*     7 */ 18u, BSWM_FALSE,            7u, BswM_Rule_ESH_PostRunNested                               },  /* [R_ESH_PostRunNested] */
  { /*     8 */ 17u, BSWM_FALSE,            8u, BswM_Rule_ESH_PostRun                                     },  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_ModeNotification] */
  { /*     9 */ 20u, BSWM_FALSE,            9u, BswM_Rule_ESH_PrepToWait                                  },  /* [R_ESH_PrepToWait, MRP_ESH_State, MRP_ESH_ModeNotification] */
  { /*    10 */  4u, BSWM_FALSE,           10u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE       },  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    11 */  2u, BSWM_FALSE,           11u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX               },  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    12 */  5u, BSWM_FALSE,           12u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE        },  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    13 */  6u, BSWM_FALSE,           13u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF },  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    14 */  1u, BSWM_TRUE ,           14u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM           },  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    15 */  0u, BSWM_FALSE,           15u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT    },  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    16 */  3u, BSWM_FALSE,           16u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM            },  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    17 */ 22u, BSWM_FALSE,           17u, BswM_Rule_ESH_RunToPostRunNested                          },  /* [R_ESH_RunToPostRunNested] */
  { /*    18 */  7u, BSWM_FALSE,           18u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_NM_DISABLE                },  /* [R_CC_CN_TC37X_VCU_CAN00_NM_DISABLE, MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    19 */  8u, BSWM_FALSE,           19u, BswM_Rule_CC_CN_TC37X_VCU_CAN00_NM_ENABLE                 },  /* [R_CC_CN_TC37X_VCU_CAN00_NM_ENABLE, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8, MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  { /*    20 */ 12u, BSWM_FALSE,           20u, BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM            },  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  { /*    21 */ 14u, BSWM_FALSE,           21u, BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE        },  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e] */
  { /*    22 */ 10u, BSWM_TRUE ,           22u, BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM           },  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  { /*    23 */ 11u, BSWM_FALSE,           23u, BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX               },  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  { /*    24 */  9u, BSWM_FALSE,           24u, BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT    },  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  { /*    25 */ 13u, BSWM_FALSE,           25u, BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE       },  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  { /*    26 */ 15u, BSWM_FALSE,           26u, BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF }   /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesInd
**********************************************************************************************************************/
/** 
  \var    BswM_RulesInd
  \brief  the indexes of the 1:1 sorted relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[39] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RulesInd      Referable Keys */
  /*     0 */       10u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     1 */       11u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     2 */       12u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     3 */       13u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     4 */       14u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     5 */       15u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     6 */       16u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     7 */       19u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     8 */       20u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*     9 */       21u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*    10 */       22u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*    11 */       23u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*    12 */       24u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*    13 */       25u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*    14 */       26u,  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*    15 */       10u,  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    16 */       11u,  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    17 */       12u,  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    18 */       13u,  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    19 */       16u,  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    20 */       18u,  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    21 */       19u,  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    22 */       12u,  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    23 */       13u,  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    24 */       19u,  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    25 */       21u,  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*    26 */       26u,  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*    27 */        0u,  /* [MRP_ESH_State] */
  /*    28 */        1u,  /* [MRP_ESH_State] */
  /*    29 */        2u,  /* [MRP_ESH_State] */
  /*    30 */        3u,  /* [MRP_ESH_State] */
  /*    31 */        4u,  /* [MRP_ESH_State] */
  /*    32 */        5u,  /* [MRP_ESH_State] */
  /*    33 */        8u,  /* [MRP_ESH_State] */
  /*    34 */        9u,  /* [MRP_ESH_State] */
  /*    35 */       10u,  /* [MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    36 */       12u,  /* [MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    37 */       13u,  /* [MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*    38 */       19u   /* [MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
};
#define BSWM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_SwcModeRequestUpdateFct
**********************************************************************************************************************/
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(BswM_PartitionFunctionType, BSWM_CONST) BswM_SwcModeRequestUpdateFct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     SwcModeRequestUpdateFct                            */
  /*     0 */ BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION 
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ActionListQueueUType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [AL_ESH_AL_RunToPostRun] */
  /*     1 */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  /*     2 */  /* [AL_ESH_AL_WakeupToPrep] */
  /*     3 */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  /*     4 */  /* [AL_ESH_AL_WakeupToRun] */
  /*     5 */  /* [AL_ESH_AL_InitToWakeup] */
  /*     6 */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  /*     7 */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  /*     8 */  /* [AL_ESH_AL_PostRunToRun] */
  /*     9 */  /* [AL_ESH_AL_ExitPostRun] */
  /*    10 */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  /*    11 */  /* [AL_INIT_AL_Initialize] */
  /*    12 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_Disable] */
  /*    13 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_Disable] */
  /*    14 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_EnableReinit] */
  /*    15 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableReinit] */
  /*    16 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableNoinit] */
  /*    17 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM] */
  /*    18 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT] */
  /*    19 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Disable_DM] */
  /*    20 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Enable_DM] */
  /*    21 */  /* [AL_ESH_AL_ExitRun] */
  /*    22 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_DISABLE_NM] */
  /*    23 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN00_ENABLE_NM] */
  /*    24 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Disable_DM] */
  /*    25 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Enable_DM] */
  /*    26 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableReinit] */
  /*    27 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM] */
  /*    28 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_Disable] */
  /*    29 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_EnableReinit] */
  /*    30 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT] */
  /*    31 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_Disable] */
  /*    32 */  /* [AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableNoinit] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_CanSMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_CanSMChannelState
  \brief  Variable to store current mode of BswMCanSMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanSM_BswMCurrentStateType, BSWM_VAR_NOINIT) BswM_CanSMChannelState[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [CANSM_CHANNEL_0, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     1 */  /* [CANSM_CHANNEL_1, MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelState
  \brief  Variable to store current mode of BswMComMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(ComM_ModeType, BSWM_VAR_NOINIT) BswM_ComMChannelState[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [COMM_CHANNEL_0, MRP_ESH_ComMIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     1 */  /* [COMM_CHANNEL_1, MRP_ESH_ComMIndication_CN_TC37X_VCU_CAN01_70b1f95e] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DcmComState
**********************************************************************************************************************/
/** 
  \var    BswM_DcmComState
  \brief  Variable to store current mode of BswMDcmComModeRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Dcm_CommunicationModeType, BSWM_VAR_NOINIT) BswM_DcmComState[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [DCM_COM_0, MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ForcedActionListPriority
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ForcedActionListPriorityType, BSWM_VAR_NOINIT) BswM_ForcedActionListPriority;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericState
**********************************************************************************************************************/
/** 
  \var    BswM_GenericState
  \brief  Variable to store current mode of BswMGenericRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [GENERIC_0, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8] */
  /*     1 */  /* [GENERIC_1, MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e] */
  /*     2 */  /* [GENERIC_2, MRP_ESH_ComMPendingRequests] */
  /*     3 */  /* [GENERIC_3, MRP_ESH_State] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_NOINIT) BswM_Initialized;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[7];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8, CANSM_CHANNEL_0] */
  /*     1 */  /* [MRP_CC_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e, CANSM_CHANNEL_1] */
  /*     2 */  /* [MRP_CC_DcmComIndication_CN_TC37X_VCU_CAN00_07b6c9c8, DCM_COM_0] */
  /*     3 */  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8, GENERIC_0] */
  /*     4 */  /* [MRP_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e, GENERIC_1] */
  /*     5 */  /* [MRP_ESH_State, GENERIC_3] */
  /*     6 */  /* [MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8, NM_0] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_NmState
**********************************************************************************************************************/
/** 
  \var    BswM_NmState
  \brief  Variable to store current mode of BswMNmIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Nm_StateType, BSWM_VAR_NOINIT) BswM_NmState[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [NM_0, MRP_CC_NmIndication_CN_TC37X_VCU_CAN00_07b6c9c8] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_NvMJobState
**********************************************************************************************************************/
/** 
  \var    BswM_NvMJobState
  \brief  Variable to store current mode of BswMNvMJobModeIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(NvM_RequestResultType, BSWM_VAR_NOINIT) BswM_NvMJobState[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [NVM_JOB_0, MRP_ESH_NvMIndication] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueSemaphore
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_QueueSemaphoreType, BSWM_VAR_NOINIT) BswM_QueueSemaphore;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueWritten
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_QueueWrittenType, BSWM_VAR_NOINIT) BswM_QueueWritten;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_RuleStatesUType, BSWM_VAR_NOINIT) BswM_RuleStates;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [R_ESH_RunToPostRun] */
  /*     1 */  /* [R_ESH_WaitToShutdown] */
  /*     2 */  /* [R_ESH_WakeupToPrep] */
  /*     3 */  /* [R_ESH_WaitToWakeup] */
  /*     4 */  /* [R_ESH_WakeupToRun] */
  /*     5 */  /* [R_ESH_InitToWakeup] */
  /*     6 */  /* [R_ESH_PostRunToPrepNested] */
  /*     7 */  /* [R_ESH_PostRunNested] */
  /*     8 */  /* [R_ESH_PostRun] */
  /*     9 */  /* [R_ESH_PrepToWait] */
  /*    10 */  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE] */
  /*    11 */  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX] */
  /*    12 */  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE] */
  /*    13 */  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF] */
  /*    14 */  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM] */
  /*    15 */  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT] */
  /*    16 */  /* [R_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM] */
  /*    17 */  /* [R_ESH_RunToPostRunNested] */
  /*    18 */  /* [R_CC_CN_TC37X_VCU_CAN00_NM_DISABLE] */
  /*    19 */  /* [R_CC_CN_TC37X_VCU_CAN00_NM_ENABLE] */
  /*    20 */  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM] */
  /*    21 */  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE] */
  /*    22 */  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM] */
  /*    23 */  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX] */
  /*    24 */  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT] */
  /*    25 */  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE] */
  /*    26 */  /* [R_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerState
**********************************************************************************************************************/
/** 
  \var    BswM_TimerState
  \brief  Variable to store current state of BswMTimer (STARTED, STOPPER OR EXPIRED).
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_TimerStateUType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [MRP_ESH_NvM_CancelWriteAllTimer] */
  /*     1 */  /* [MRP_ESH_NvM_WriteAllTimer] */
  /*     2 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerValue
**********************************************************************************************************************/
/** 
  \var    BswM_TimerValue
  \brief  Variable to store current timer values.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(BswM_TimerValueUType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [MRP_ESH_NvM_CancelWriteAllTimer] */
  /*     1 */  /* [MRP_ESH_NvM_WriteAllTimer] */
  /*     2 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "BswM_vMemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

VAR(Rte_ModeType_ESH_Mode, BSWM_VAR_NOINIT) BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;

VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_0_requestedMode;
VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_1_requestedMode;
VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_0_requestedMode;
VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_1_requestedMode;
VAR(Rte_ModeType_ESH_Mode, BSWM_VAR_NOINIT) BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode;


VAR(boolean, BSWM_VAR_NOINIT) BswM_PreInitialized;
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */
 
/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void)
{
  Com_IpduGroupVector ipduGroupReinitState;
  Com_IpduGroupVector ipduGroupState;
  Com_IpduGroupVector dmState;
  uint16 iCnt;
  uint8 controlInvocation = BSWM_GROUPCONTROL_IDLE;

  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(BswM_PduGroupControlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_REINIT) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        ipduGroupReinitState[iCnt] = BswM_ComIPduGroupReinitState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    /* Check if also PDU control actions without reinitialization flag were performed.
     * If yes, execute them too and update BswM_ComIPduGroupReinitState */
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        ipduGroupState[iCnt] = BswM_ComIPduGroupState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
        BswM_ComIPduGroupReinitState[iCnt] = BswM_ComIPduGroupState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_DM) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        dmState[iCnt] = BswM_ComRxIPduGroupDMState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    controlInvocation = BswM_PduGroupControlInvocation;
    BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;
  }
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if(controlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((controlInvocation & BSWM_GROUPCONTROL_REINIT) != 0u)
    {
      Com_IpduGroupControl(ipduGroupReinitState, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
    if((controlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      Com_IpduGroupControl(ipduGroupState, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
    if((controlInvocation & BSWM_GROUPCONTROL_DM) != 0u)
    {
      Com_ReceptionDMControl(dmState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
  }
} /* PRQA S 6010, 6030 */ /* MD_MSR_STPTH, MD_MSR_STCYC */

/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId, BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType actionListIndex;
  Std_ReturnType retVal = E_NOT_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if ( BSWM_DEV_ERROR_DETECT == STD_ON )
  if (handleId < BswM_GetSizeOfRules(partitionIdx))
#endif
  {
    SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    actionListIndex = BswM_GetFctPtrOfRules(handleId, partitionIdx)(partitionIdx); /* SBSW_BSWM_RULEFCTPTR */
    SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if(actionListIndex < BswM_GetSizeOfActionLists(partitionIdx))
    {
      retVal = BswM_GetFctPtrOfActionLists(actionListIndex, partitionIdx)(partitionIdx); /* SBSW_BSWM_ACTIONLISTFCTPTR */
    }
    else
    {
      retVal = E_OK;
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  
  return retVal;
} 

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, 
                                                                   BswM_RuleStatesType state,
                                                                   BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  if (ruleId < BswM_GetSizeOfRuleStates(partitionIdx))
  {
    BswM_SetRuleStates(ruleId, state, partitionIdx); /* SBSW_BSWM_SETRULESTATE */
  }
  
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
}

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx,
                                                              BswM_SizeOfTimerValueType timerId,
                                                              BswM_TimerValueType value)
{
  if (timerId < BswM_GetSizeOfTimerValue(partitionIdx))
  {
      SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      BswM_SetTimerValue(timerId, value, partitionIdx); /* SBSW_BSWM_SETTIMER */
      BswM_SetTimerState(timerId, (BswM_TimerStateType)((value != 0u) ? BSWM_TIMER_STARTED : BSWM_TIMER_STOPPED), partitionIdx); /* SBSW_BSWM_SETTIMER */
      SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
}

/**********************************************************************************************************************
 *  BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_InitGenVarAndInitAL_BSWM_SINGLEPARTITION(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{

  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = 0xFFu;
  Request_ESH_RunRequest_0_requestedMode = RELEASED;
  Request_ESH_RunRequest_1_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_0_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_1_requestedMode = RELEASED;
  BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_STARTUP;
  BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;

  /* PRQA S 3109 COMCLEARIPDU */ /* MD_BswM_3109 */
  Com_ClearIpduGroupVector(BswM_ComIPduGroupState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  Com_ClearIpduGroupVector(BswM_ComIPduGroupReinitState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  Com_ClearIpduGroupVector(BswM_ComRxIPduGroupDMState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMCLEARIPDU */
  (void)BswM_ActionList_INIT_AL_Initialize(partitionIdx);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
}

/**********************************************************************************************************************
 *  BswM_ModeNotificationFct_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_ModeNotificationFct_BSWM_SINGLEPARTITION(void)
{
  if(BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode != 0xFFu)
  {
    if(Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode) == RTE_E_OK)
    {
      BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = 0xFFu;
    }
  }
}

/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct_BSWM_SINGLEPARTITION(void)
{
  uint32 mode;
  mode = Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode();
  if (mode != RTE_TRANSITION_ESH_Mode)
  {
    BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = (Rte_ModeType_ESH_Mode)mode;
  }
  (void)Rte_Read_Request_ESH_RunRequest_0_requestedMode(&Request_ESH_RunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_RunRequest_1_requestedMode(&Request_ESH_RunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(&Request_ESH_PostRunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(&Request_ESH_PostRunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
}

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_RunToPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_RunToPostRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_TC37X_VCU_CAN01_70b1f95e, FALSE);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  EcuM_ClearValidatedWakeupEvent(ECUM_WKSOURCE_ALL_SOURCES);
  /*lint -restore */
  BswM_ESH_OnEnterPostRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_POSTRUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WaitForNvMToShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMToShutdown(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_ESH_NvM_WriteAllTimer, 0u);
  BswM_ESH_OnEnterShutdown();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  (void)EcuM_GoToSelectedShutdownTarget();
  /*lint -restore */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WakeupToPrep
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToPrep(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_ESH_OnEnterPrepShutdown();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_SHUTDOWN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WaitForNvMWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMWakeup(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_ESH_NvM_WriteAllTimer, 0u);
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_ESH_NvM_CancelWriteAllTimer, 6000uL);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  NvM_CancelWriteAll();
  /*lint -restore */
  BswM_ESH_OnEnterWakeup();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WakeupToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_ESH_NvM_CancelWriteAllTimer, 0u);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_TC37X_VCU_CAN01_70b1f95e, TRUE);
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_ESH_SelfRunRequestTimer, 1000uL);
  BswM_ESH_OnEnterRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_RUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_RUN);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_InitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_InitToWakeup(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_ESH_OnEnterWakeup();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_PostRunToPrepNested, partitionIdx);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PostRunToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_TC37X_VCU_CAN01_70b1f95e, TRUE);
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_ESH_SelfRunRequestTimer, 1000uL);
  BswM_ESH_OnEnterRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_RUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_RUN);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ExitPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitPostRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_PostRunNested, partitionIdx);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_UpdateTimer(partitionIdx, BSWM_TMR_ESH_NvM_WriteAllTimer, 6000uL);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  NvM_WriteAll();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  BswM_ESH_OnEnterWaitForNvm();
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_INIT_AL_Initialize
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ComM_PreInit(ComM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Nm_PreInit(Nm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  PduR_PreInit(PduR_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Fee_Init(&Fee_Config);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Can_Init(Can_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanIf_Init(CanIf_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Com_Init(Com_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  PduR_Init(PduR_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanSM_Init(CanSM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanNm_Init(CanNm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Nm_Init(Nm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanTp_Init(CanTp_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  CanXcp_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Xcp_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  NvM_Init();
  /*lint -restore */
  BswM_INIT_NvMReadAll();
  BswM_AL_SetProgrammableInterrupts();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ComM_Init(ComM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Dcm_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Dem_Init(Dem_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  ComM_PostInit();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Nm_PostInit();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  Rte_Start();
  /*lint -restore */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_EnableReinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_EnableReinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduReinitGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_REINIT);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableReinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableReinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduReinitGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_REINIT);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableNoinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_RequestMode(BSWM_GENERIC_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8, BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_RequestMode(BSWM_GENERIC_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8, BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Disable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Disable_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Enable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Enable_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN00_Rx_a08bac39, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ExitRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_RunToPostRunNested, partitionIdx);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BSWM_3200 */
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_DISABLE_NM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_DISABLE_NM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  (void)Nm_DisableCommunication(ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_ENABLE_NM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_ENABLE_NM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  (void)Nm_EnableCommunication(ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Disable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Disable_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Enable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Enable_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableReinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableReinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduReinitGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_REINIT);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_RequestMode(BSWM_GENERIC_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e, BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_EnableReinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_EnableReinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduReinitGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_REINIT);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_RequestMode(BSWM_GENERIC_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e, BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_Disable(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableNoinit(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_Rule_ESH_RunToPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_RunToPostRunTransition. */ /* PRQA S 3415 1 */ /* MD_BSWM_3415 */
  if(((BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_ESH_State_ESH_RUN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_RUN)) && (((BswM_GetComMChannelState(0, 0u) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(1, 0u) == COMM_NO_COMMUNICATION)) && ((Request_ESH_RunRequest_0_requestedMode == RELEASED) && (Request_ESH_RunRequest_1_requestedMode == RELEASED)) && (BswM_GetTimerState(2, 0u) == BSWM_TIMER_EXPIRED)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ExitRun. */
    retVal = BSWM_ID_AL_ESH_AL_ExitRun;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WaitToShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToShutdown(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_WaitForNvMToShutdown. */ /* PRQA S 3415 1 */ /* MD_BSWM_3415 */
  if((BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && ((BswM_GetNvMJobState(0, 0u) != NVM_REQ_PENDING) || (BswM_GetTimerState(1, 0u) != BSWM_TIMER_STARTED)) && ((EcuM_GetValidatedWakeupEvents() == 0u) && (BswM_GetGenericState(2, 0u) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WaitForNvMToShutdown. */
    retVal = BSWM_ID_AL_ESH_AL_WaitForNvMToShutdown;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WakeupToPrep
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToPrep(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_WakeupToPrepShutdown. */ /* PRQA S 3415 1 */ /* MD_BSWM_3415 */
  if((BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && ((BswM_GetNvMJobState(0, 0u) != NVM_REQ_PENDING) || (BswM_GetTimerState(0, 0u) != BSWM_TIMER_STARTED)) && (EcuM_GetPendingWakeupEvents() == 0u) && ((EcuM_GetValidatedWakeupEvents() == 0u) && (BswM_GetGenericState(2, 0u) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_WAKEUP))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WakeupToPrep. */
    retVal = BSWM_ID_AL_ESH_AL_WakeupToPrep;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WaitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToWakeup(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_WaitForNvMToWakeup. */ /* PRQA S 3415 1 */ /* MD_BSWM_3415 */
  if((BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(2, 0u) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WaitForNvMWakeup. */
    retVal = BSWM_ID_AL_ESH_AL_WaitForNvMWakeup;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WakeupToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_WakeupToRun. */ /* PRQA S 3415 1 */ /* MD_BSWM_3415 */
  if((BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(2, 0u) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)) && ((BswM_GetNvMJobState(0, 0u) != NVM_REQ_PENDING) || (BswM_GetTimerState(0, 0u) != BSWM_TIMER_STARTED)) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_WAKEUP))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WakeupToRun. */
    retVal = BSWM_ID_AL_ESH_AL_WakeupToRun;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_InitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_InitToWakeup(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_InitToWakeup. */
  if(BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_ESH_State_ESH_INIT)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_InitToWakeup. */
    retVal = BSWM_ID_AL_ESH_AL_InitToWakeup;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRunToPrepNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunToPrepNested(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_Dem_PostRunRequested. */
  if((Request_ESH_PostRunRequest_0_requestedMode == RELEASED) && (Request_ESH_PostRunRequest_1_requestedMode == RELEASED))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PostRunToPrepShutdown. */
    retVal = BSWM_ID_AL_ESH_AL_PostRunToPrepShutdown;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRunNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunNested(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal;
  /* Evaluate logical expression ESH_LE_PostRunToRun. */
  if(((Request_ESH_RunRequest_0_requestedMode == REQUESTED) || (Request_ESH_RunRequest_1_requestedMode == REQUESTED)) || ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(2, 0u) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PostRunToRun. */
    retVal = BSWM_ID_AL_ESH_AL_PostRunToRun;
  }
  else
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck. */
    retVal = BSWM_ID_AL_ESH_AL_ESH_PostRunToPrepCheck;
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRun(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_PostRun. */
  if((BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_POSTRUN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ExitPostRun. */
    retVal = BSWM_ID_AL_ESH_AL_ExitPostRun;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PrepToWait
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PrepToWait(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_PrepShutdownToWaitForNvM. */
  if((BswM_GetGenericState(3, 0u) == BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_SHUTDOWN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM. */
    retVal = BSWM_ID_AL_ESH_AL_PrepShutdownToWaitForNvM;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE. */
  if((BswM_GetCanSMChannelState(0, 0u) != CANSM_BSWM_FULL_COMMUNICATION) || (BswM_GetNmState(0, 0u) == NM_STATE_BUS_SLEEP) || (BswM_GetNmState(0, 0u) == NM_STATE_PREPARE_BUS_SLEEP) || (BswM_GetDcmComState(0, 0u) == DCM_ENABLE_RX_DISABLE_TX_NORM) || (BswM_GetDcmComState(0, 0u) == DCM_DISABLE_RX_TX_NORMAL) || (BswM_GetDcmComState(0, 0u) == DCM_ENABLE_RX_DISABLE_TX_NM) || (BswM_GetDcmComState(0, 0u) == DCM_DISABLE_RX_TX_NM) || (BswM_GetDcmComState(0, 0u) == DCM_ENABLE_RX_DISABLE_TX_NORM_NM) || (BswM_GetDcmComState(0, 0u) == DCM_DISABLE_RX_TX_NORM_NM))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_Disable;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_DISABLE, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN00_07b6c9c8_RX. */
  if((BswM_GetCanSMChannelState(0, 0u) != CANSM_BSWM_NO_COMMUNICATION) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_ENABLE_TX_NORM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORMAL) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_ENABLE_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_ENABLE_TX_NORM_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORM_NM))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_EnableReinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_EnableReinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX, partitionIdx) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX, BSWM_FALSE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_RX_Disable;
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_REINIT. */
  if((BswM_GetCanSMChannelState(0, 0u) == CANSM_BSWM_FULL_COMMUNICATION) && (BswM_GetNmState(0, 0u) != NM_STATE_BUS_SLEEP) && (BswM_GetNmState(0, 0u) != NM_STATE_PREPARE_BUS_SLEEP) && (BswM_GetGenericState(0, 0u) == BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NORM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORMAL) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NORM_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORM_NM))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableReinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableReinit;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE. */
  if((BswM_GetCanSMChannelState(0, 0u) == CANSM_BSWM_FULL_COMMUNICATION) && (BswM_GetNmState(0, 0u) != NM_STATE_BUS_SLEEP) && (BswM_GetNmState(0, 0u) != NM_STATE_PREPARE_BUS_SLEEP) && (BswM_GetGenericState(0, 0u) == BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NORM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORMAL) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NORM_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORM_NM))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_TX_EnableNoinit;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_TX_ENABLE_BUSOFF, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8_EQ_CANSM_BSWM_NO_COMMUNICATION. */
  if(BswM_GetCanSMChannelState(0, 0u) == CANSM_BSWM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_NO_COM, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CanSMIndication_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT. */
  if((BswM_GetCanSMChannelState(0, 0u) == CANSM_BSWM_BUS_OFF) || (BswM_GetCanSMChannelState(0, 0u) == CANSM_BSWM_SILENT_COMMUNICATION))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM. */
  if((BswM_GetCanSMChannelState(0, 0u) == CANSM_BSWM_FULL_COMMUNICATION) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_ENABLE_TX_NORM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORMAL) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_ENABLE_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_ENABLE_TX_NORM_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORM_NM))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Enable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Enable_DM;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM, partitionIdx) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_07b6c9c8_RX_DM, BSWM_FALSE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Disable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_07b6c9c8_Disable_DM;
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_RunToPostRunNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRunNested(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression ESH_LE_ComMNoPendingRequests. */
  if(BswM_GetGenericState(2, 0u) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_RunToPostRun. */
    retVal = BSWM_ID_AL_ESH_AL_RunToPostRun;
  }
  /* No false action list configured. */
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_NM_DISABLE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_NM_DISABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN00_TX_NM_DISABLE. */
  if((BswM_GetDcmComState(0, 0u) == DCM_DISABLE_RX_TX_NM) || (BswM_GetDcmComState(0, 0u) == DCM_DISABLE_RX_TX_NORM_NM))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_NM_DISABLE, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_NM_DISABLE, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_DISABLE_NM. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_DISABLE_NM;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_NM_DISABLE, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN00_NM_ENABLE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN00_NM_ENABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN00_TX_NM_ENABLE. */
  if((BswM_GetCanSMChannelState(0, 0u) == CANSM_BSWM_FULL_COMMUNICATION) && (BswM_GetNmState(0, 0u) != NM_STATE_BUS_SLEEP) && (BswM_GetNmState(0, 0u) != NM_STATE_PREPARE_BUS_SLEEP) && (BswM_GetGenericState(0, 0u) == BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN00_07b6c9c8_BUSOFF_SILENT) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NORM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORMAL) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NM) && (BswM_GetDcmComState(0, 0u) != DCM_ENABLE_RX_DISABLE_TX_NORM_NM) && (BswM_GetDcmComState(0, 0u) != DCM_DISABLE_RX_TX_NORM_NM))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_NM_ENABLE, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_NM_ENABLE, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN00_ENABLE_NM. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN00_ENABLE_NM;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN00_NM_ENABLE, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM. */
  if(BswM_GetCanSMChannelState(1, 0u) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Enable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Enable_DM;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM, partitionIdx) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX_DM, BSWM_FALSE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Disable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_Disable_DM;
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_REINIT. */
  if((BswM_GetCanSMChannelState(1, 0u) == CANSM_BSWM_FULL_COMMUNICATION) && (BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableReinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableReinit;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e_EQ_CANSM_BSWM_NO_COMMUNICATION. */
  if(BswM_GetCanSMChannelState(1, 0u) == CANSM_BSWM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_NO_COM, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN01_70b1f95e_RX. */
  if(BswM_GetCanSMChannelState(1, 0u) != CANSM_BSWM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_EnableReinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_EnableReinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX, partitionIdx) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_RX, BSWM_FALSE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_RX_Disable;
    }
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CanSMIndication_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT. */
  if((BswM_GetCanSMChannelState(1, 0u) == CANSM_BSWM_BUS_OFF) || (BswM_GetCanSMChannelState(1, 0u) == CANSM_BSWM_SILENT_COMMUNICATION))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE. */
  if(BswM_GetCanSMChannelState(1, 0u) != CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_Disable;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_DISABLE, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF(BswM_PCPartitionConfigIdxOfPartitionIdentifiersType partitionIdx)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST(partitionIdx);
  /* Evaluate logical expression CC_LE_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE. */
  if((BswM_GetCanSMChannelState(1, 0u) == CANSM_BSWM_FULL_COMMUNICATION) && (BswM_GetGenericState(1, 0u) == BSWM_GENERICVALUE_CC_Generic_BusOff_CN_TC37X_VCU_CAN01_70b1f95e_BUSOFF_SILENT))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF, partitionIdx) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF, BSWM_TRUE, partitionIdx);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_TC37X_VCU_CAN01_70b1f95e_TX_EnableNoinit;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_TC37X_VCU_CAN01_70b1f95e_TX_ENABLE_BUSOFF, BSWM_FALSE, partitionIdx);
    /* No false action list configured. */
  }
  BSWM_DUMMY_STATEMENT(partitionIdx); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */
  return retVal;
}


#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "BswM_vMemMap.h"

