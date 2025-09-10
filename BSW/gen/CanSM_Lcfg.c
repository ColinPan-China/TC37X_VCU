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
 *            Module: CanSM
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanSM_Lcfg.c
 *   Generation Time: 2025-09-10 10:53:51
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/




#define CANSM_LCFG_C


 /**********************************************************************************************************************
 *  Includes
 **********************************************************************************************************************/

#include "CanSM_EcuM.h"



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanSM_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanSM_ChannelConfig
  \details
  Element               Description
  NetworkHandle     
  DemEventId_BusOff_
*/ 
#define CANSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanSM_ChannelConfigType, CANSM_CONST) CanSM_ChannelConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    NetworkHandle  DemEventId_BusOff_                     */
  { /*     0 */            1u, DemConf_DemEventParameter_CAN00_BUSOFF },
  { /*     1 */            2u, 0xFFu                                  },
  { /*     2 */            3u, 0xFFu                                  },
  { /*     3 */            0u, 0xFFu                                  },
  { /*     4 */            4u, 0xFFu                                  }
};
#define CANSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanSM_ChannelVarRecord
**********************************************************************************************************************/
#define CANSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanSM_ChannelVarRecordType, CANSM_VAR_NOINIT) CanSM_ChannelVarRecord[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




 /**********************************************************************************************************************
 *  VAR DATA PROTOTYPES
 **********************************************************************************************************************/






/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/








/* -----------------------------------------------------------------------------
    CanSM Functions
 ----------------------------------------------------------------------------- */

#define CANSM_START_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, CANSM_CODE) CanSM_Dem_ReportErrorEvent(Dem_EventIdType CanSM_EventID, Dem_EventStatusType CanSM_EventStatus)
{
  (void)Dem_ReportErrorStatus( CanSM_EventID, CanSM_EventStatus );
}

#define CANSM_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */


