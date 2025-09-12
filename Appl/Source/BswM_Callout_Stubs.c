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
 *              File: BswM_Callout_Stubs.c
 *   Generation Time: 2025-09-12 17:00:34
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Version>                           DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*********************************************************************************************************************
    INCLUDES
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#define BSWM_CALLOUT_STUBS_SOURCE
#include "BswM.h"
#include "BswM_Private_Cfg.h"



/**********************************************************************************************************************
 *  Additional configured User includes
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Includes>                          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CALLOUT FUNCTIONS
 *********************************************************************************************************************/
#define BSWM_START_SEC_CODE
#include "BswM_vMemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  GENERIC CALLOUTS
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_AL_SetProgrammableInterrupts(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_AL_SetProgrammableInterrupts>      DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_AL_SetProgrammableInterrupts */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterPostRun(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterPostRun>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterPostRun */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterPrepShutdown(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterPrepShutdown>           DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterPrepShutdown */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterRun(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterRun>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterRun */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterShutdown(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterShutdown>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterShutdown */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterWaitForNvm(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterWaitForNvm>             DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterWaitForNvm */


FUNC(void, BSWM_CODE) BswM_ESH_OnEnterWakeup(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_ESH_OnEnterWakeup>                 DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_ESH_OnEnterWakeup */


FUNC(void, BSWM_CODE) BswM_INIT_NvMReadAll(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK BswM_INIT_NvMReadAll>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  NvM_RequestResultType BlockStatus;
  /*NVM ReadAll*/
  NvM_ReadAll();
  do
  {
    Fls_17_Dmu_MainFunction();
    Fee_MainFunction();
    NvM_MainFunction();

    NvM_GetErrorStatus(NvMConf___MultiBlockRequest,&BlockStatus);
  } while ( NVM_REQ_PENDING == BlockStatus );
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

} /* End of BswM_INIT_NvMReadAll */


FUNC(void, BSWM_CODE) ESH_ComM_CheckPendingRequests(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ESH_ComM_CheckPendingRequests>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  ComM_StateType CN_TC37X_VCU_CAN01_70b1f95e = COMM_NO_COM_NO_PENDING_REQUEST;
  ComM_StateType CN_LIN00_b12a0454 = COMM_NO_COM_NO_PENDING_REQUEST;
  ComM_StateType CN_TC37X_VCU_CAN03_9ebf9872 = COMM_NO_COM_NO_PENDING_REQUEST;
  ComM_StateType CN_LIN01_c62d34c2 = COMM_NO_COM_NO_PENDING_REQUEST;
  ComM_StateType CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac = COMM_NO_COM_NO_PENDING_REQUEST;
  ComM_StateType CN_LIN02_5f246578 = COMM_NO_COM_NO_PENDING_REQUEST;
  ComM_StateType CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d = COMM_NO_COM_NO_PENDING_REQUEST;
  ComM_StateType CN_ATOM_CAN_XCP_f42a46d4 = COMM_NO_COM_NO_PENDING_REQUEST;
  
  (void)ComM_GetState(ComMConf_ComMChannel_CN_TC37X_VCU_CAN01_70b1f95e, &CN_TC37X_VCU_CAN01_70b1f95e); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  (void)ComM_GetState(ComMConf_ComMChannel_CN_LIN00_b12a0454, &CN_LIN00_b12a0454); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  (void)ComM_GetState(ComMConf_ComMChannel_CN_TC37X_VCU_CAN03_9ebf9872, &CN_TC37X_VCU_CAN03_9ebf9872); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  (void)ComM_GetState(ComMConf_ComMChannel_CN_LIN01_c62d34c2, &CN_LIN01_c62d34c2); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  (void)ComM_GetState(ComMConf_ComMChannel_CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac, &CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  (void)ComM_GetState(ComMConf_ComMChannel_CN_LIN02_5f246578, &CN_LIN02_5f246578); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  (void)ComM_GetState(ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d, &CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  (void)ComM_GetState(ComMConf_ComMChannel_CN_ATOM_CAN_XCP_f42a46d4, &CN_ATOM_CAN_XCP_f42a46d4); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  
  if((CN_TC37X_VCU_CAN01_70b1f95e != COMM_NO_COM_NO_PENDING_REQUEST) || (CN_LIN00_b12a0454 != COMM_NO_COM_NO_PENDING_REQUEST) || (CN_TC37X_VCU_CAN03_9ebf9872 != COMM_NO_COM_NO_PENDING_REQUEST) || (CN_LIN01_c62d34c2 != COMM_NO_COM_NO_PENDING_REQUEST) || (CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac != COMM_NO_COM_NO_PENDING_REQUEST) || (CN_LIN02_5f246578 != COMM_NO_COM_NO_PENDING_REQUEST) || (CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d != COMM_NO_COM_NO_PENDING_REQUEST) || (CN_ATOM_CAN_XCP_f42a46d4 != COMM_NO_COM_NO_PENDING_REQUEST))
  {
    BswM_RequestMode(BSWM_GENERIC_ESH_ComMPendingRequests, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST);
  }
  else
  {
    BswM_RequestMode(BSWM_GENERIC_ESH_ComMPendingRequests, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST);
  }
  
} /* End of ESH_ComM_CheckPendingRequests */


FUNC(void, BSWM_CODE) ESH_Dem_PostRunRequested(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ESH_Dem_PostRunRequested>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  boolean isRequested = FALSE;
  (void)Dem_PostRunRequested(&isRequested); /* SBSW_BSWM_FCTCALL_LOCALVAR */
  if (isRequested == TRUE)
  {
    BswM_RequestMode(BSWM_GENERIC_ESH_DemPostRunRequested, BSWM_GENERICVALUE_ESH_DemPostRunRequested_TRUE);
  }
  else
  {
    BswM_RequestMode(BSWM_GENERIC_ESH_DemPostRunRequested, BSWM_GENERICVALUE_ESH_DemPostRunRequested_FALSE);
  }
  
} /* End of ESH_Dem_PostRunRequested */




#define BSWM_STOP_SEC_CODE
#include "BswM_vMemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

#if 0
#endif


/**********************************************************************************************************************
 *  END OF FILE: BSWM_CALLOUT_STUBS.C
 *********************************************************************************************************************/


