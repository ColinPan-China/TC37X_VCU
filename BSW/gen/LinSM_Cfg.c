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
 *            Module: LinSM
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: LinSM_Cfg.c
 *   Generation Time: 2025-09-17 15:11:03
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#define LINSM_CFG_SOURCE

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "LinSM_Cfg.h"

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  LinSM_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    LinSM_ChannelConfig
  \details
  Element                Description
  ComMChannelHandle  
  TransceiverHandling
*/ 
#define LINSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinSM_ChannelConfigType, LINSM_CONST) LinSM_ChannelConfig[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ComMChannelHandle                       TransceiverHandling        Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_CN_LIN00_b12a0454,    LINSM_TRCV_SLEEP },  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  { /*     1 */ ComMConf_ComMChannel_CN_LIN01_c62d34c2,     LINSM_TRCV_NONE },  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  { /*     2 */ ComMConf_ComMChannel_CN_LIN02_5f246578,     LINSM_TRCV_NONE }   /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */
};
#define LINSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ComMToLinSMChannel
**********************************************************************************************************************/
#define LINSM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinSM_ComMToLinSMChannelType, LINSM_CONST) LinSM_ComMToLinSMChannel[9] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ComMToLinSMChannel               Referable Keys */
  /*     0 */  LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     1 */  LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     2 */  LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     3 */  LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     4 */  LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     5 */  LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     6 */                           0u,  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN00_b12a0454] */
  /*     7 */                           1u,  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN01_c62d34c2] */
  /*     8 */                           2u   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN02_5f246578] */
};
#define LINSM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ComState
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinSM_ComStateUType, LINSM_VAR_NOINIT) LinSM_ComState;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */

#define LINSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ConfirmationTimer
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinSM_ConfirmationTimerUType, LINSM_VAR_NOINIT) LinSM_ConfirmationTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_DesiredConfirmation
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinSM_DesiredConfirmationUType, LINSM_VAR_NOINIT) LinSM_DesiredConfirmation;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_Initialized
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinSM_InitializedType, LINSM_VAR_ZERO_INIT) LinSM_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define LINSM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_NegativeConfirmation
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinSM_NegativeConfirmationUType, LINSM_VAR_NOINIT) LinSM_NegativeConfirmation;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_RequestedComMode
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinSM_RequestedComModeUType, LINSM_VAR_NOINIT) LinSM_RequestedComMode;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_SilenceAfterWakeupTimer
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinSM_SilenceAfterWakeupTimerUType, LINSM_VAR_NOINIT) LinSM_SilenceAfterWakeupTimer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_WakeUpRetryCounter
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinSM_WakeUpRetryCounterUType, LINSM_VAR_NOINIT) LinSM_WakeUpRetryCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


/**********************************************************************************************************************
  END OF FILE: LinSM_Cfg.c
**********************************************************************************************************************/

