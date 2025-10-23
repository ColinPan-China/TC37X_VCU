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
 *            Module: CanTrcv
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanTrcv_30_Tja1040_Cfg.c
 *   Generation Time: 2025-10-23 10:40:42
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


/* PRQA S 0777 EOF */ /* MD_MSR_Rule5.1 */
/* PRQA S 0779 EOF */ /* MD_MSR_Rule5.2 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "CanTrcv_30_Tja1040.h"

/**********************************************************************************************************************
  VERSION DEFINES (Adapted with: ESCAN00086365)
**********************************************************************************************************************/
#if (DRVTRANS_CAN_30_TJA1040_GENTOOL_CFG5_MAJOR_VERSION != 0x03u)
# error "CanTrcv_30_30_Tja1040_Cfg.c : Incompatible DRVTRANS_30_TJA1040_GENTOOL_CFG5_MAJOR_VERSION in generated File!"
#endif

#if (DRVTRANS_CAN_30_TJA1040_GENTOOL_CFG5_MINOR_VERSION != 0x02u)
# error "CanTrcv_30_30_Tja1040_Cfg.c : Incompatible DRVTRANS_30_TJA1040_GENTOOL_CFG5_MINOR_VERSION in generated File!"
#endif

#if (DRVTRANS_CAN_30_TJA1040_GENTOOL_CFG5_PATCH_VERSION != 0x00u)
# error "CanTrcv_30_30_Tja1040_Cfg.c : Incompatible DRVTRANS_30_TJA1040_GENTOOL_CFG5_PATCH_VERSION in generated File!"
#endif


/**********************************************************************************************************************
    ADDITIONAL (HW SPECIFIC)
**********************************************************************************************************************/



/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
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
  CanTrcv_30_Tja1040_ChannelUsed
**********************************************************************************************************************/
#define CANTRCV_30_TJA1040_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1040_ChannelUsedType, CANTRCV_30_TJA1040_CONST) CanTrcv_30_Tja1040_ChannelUsed[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ChannelUsed  */
  /*     0 */         TRUE
};
#define CANTRCV_30_TJA1040_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1040_DioConfiguration
**********************************************************************************************************************/
/** 
  \var    CanTrcv_30_Tja1040_DioConfiguration
  \details
  Element    Description
  PinRXD 
  PinSTB 
*/ 
#define CANTRCV_30_TJA1040_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1040_DioConfigurationType, CANTRCV_30_TJA1040_CONST) CanTrcv_30_Tja1040_DioConfiguration[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PinRXD                                         PinSTB                              */
  { /*     0 */ DioConf_DioChannel_DioChannel_P00_3_PT_CAN_RX, DioConf_DioChannel_DioChannel_P32_2 }
};
#define CANTRCV_30_TJA1040_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1040_WakeupByBusUsed
**********************************************************************************************************************/
#define CANTRCV_30_TJA1040_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1040_WakeupByBusUsedType, CANTRCV_30_TJA1040_CONST) CanTrcv_30_Tja1040_WakeupByBusUsed[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     WakeupByBusUsed  */
  /*     0 */             TRUE
};
#define CANTRCV_30_TJA1040_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTrcv_30_Tja1040_WakeupSource
**********************************************************************************************************************/
#define CANTRCV_30_TJA1040_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTrcv_30_Tja1040_WakeupSourceType, CANTRCV_30_TJA1040_CONST) CanTrcv_30_Tja1040_WakeupSource[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     WakeupSource  */
  /*     0 */         0x40u
};
#define CANTRCV_30_TJA1040_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/





