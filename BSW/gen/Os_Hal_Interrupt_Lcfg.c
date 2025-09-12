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
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Hal_Interrupt_Lcfg.c
 *   Generation Time: 2025-09-12 11:08:10
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_HAL_INTERRUPT_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Interrupt_Lcfg.h"
#include "Os_Hal_Interrupt.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_Core.h"


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL ISR configuration data: ADC0SR0_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC0SR0_ISR =
{
  /* .Level          = */ 40,
  /* .Source         = */ 0x670uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC0SR0_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ADC11SR0_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC11SR0_ISR =
{
  /* .Level          = */ 44,
  /* .Source         = */ 0x720uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC11SR0_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ADC1SR0_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC1SR0_ISR =
{
  /* .Level          = */ 41,
  /* .Source         = */ 0x680uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC1SR0_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ADC2SR0_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC2SR0_ISR =
{
  /* .Level          = */ 42,
  /* .Source         = */ 0x690uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC2SR0_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ADC3SR0_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC3SR0_ISR =
{
  /* .Level          = */ 43,
  /* .Source         = */ 0x6a0uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC3SR0_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ADC8SR0_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC8SR0_ISR =
{
  /* .Level          = */ 45,
  /* .Source         = */ 0x6f0uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ADC8SR0_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN1ERR_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN1ERR_ISR =
{
  /* .Level          = */ 55,
  /* .Source         = */ 0x64uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN1ERR_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN1RX_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN1RX_ISR =
{
  /* .Level          = */ 54,
  /* .Source         = */ 0x60uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN1RX_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN1TX_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN1TX_ISR =
{
  /* .Level          = */ 53,
  /* .Source         = */ 0x5cuL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN1TX_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN2ERR_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN2ERR_ISR =
{
  /* .Level          = */ 52,
  /* .Source         = */ 0x70uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN2ERR_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN2RX_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN2RX_ISR =
{
  /* .Level          = */ 51,
  /* .Source         = */ 0x6cuL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN2RX_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN2TX_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN2TX_ISR =
{
  /* .Level          = */ 50,
  /* .Source         = */ 0x68uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN2TX_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN3ERR_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN3ERR_ISR =
{
  /* .Level          = */ 61,
  /* .Source         = */ 0x7cuL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN3ERR_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN3RX_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN3RX_ISR =
{
  /* .Level          = */ 60,
  /* .Source         = */ 0x78uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN3RX_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN3TX_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN3TX_ISR =
{
  /* .Level          = */ 59,
  /* .Source         = */ 0x74uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN3TX_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN4ERR_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN4ERR_ISR =
{
  /* .Level          = */ 58,
  /* .Source         = */ 0x88uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN4ERR_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN4RX_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN4RX_ISR =
{
  /* .Level          = */ 57,
  /* .Source         = */ 0x84uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN4RX_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: ASCLIN4TX_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ASCLIN4TX_ISR =
{
  /* .Level          = */ 56,
  /* .Source         = */ 0x80uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_ASCLIN4TX_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: CanIsr_0 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0 =
{
  /* .Level          = */ 30,
  /* .Source         = */ 0x5b0uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CanIsr_0 =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: CanIsr_1 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1 =
{
  /* .Level          = */ 31,
  /* .Source         = */ 0x5b4uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CanIsr_1 =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: CanIsr_3 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_3 =
{
  /* .Level          = */ 24,
  /* .Source         = */ 0x5bcuL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CanIsr_3 =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: CanIsr_4 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4 =
{
  /* .Level          = */ 32,
  /* .Source         = */ 0x5f0uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CanIsr_4 =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: CanIsr_6 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_6 =
{
  /* .Level          = */ 33,
  /* .Source         = */ 0x5f8uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CanIsr_6 =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: CounterIsr_SystemTimer */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CounterIsr_SystemTimer =
{
  /* .Level          = */ 1,
  /* .Source         = */ 0x300uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_CounterIsr_SystemTimer =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: DMACH10SR_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_DMACH10SR_ISR =
{
  /* .Level          = */ 114,
  /* .Source         = */ 0x398uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_DMACH10SR_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: DMACH11SR_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_DMACH11SR_ISR =
{
  /* .Level          = */ 115,
  /* .Source         = */ 0x39cuL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_DMACH11SR_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: GTMTOM1SR0_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_GTMTOM1SR0_ISR =
{
  /* .Level          = */ 123,
  /* .Source         = */ 0xe30uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_GTMTOM1SR0_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: GTMTOM1SR1_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_GTMTOM1SR1_ISR =
{
  /* .Level          = */ 124,
  /* .Source         = */ 0xe34uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_GTMTOM1SR1_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: GTMTOM1SR3_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_GTMTOM1SR3_ISR =
{
  /* .Level          = */ 121,
  /* .Source         = */ 0xe3cuL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_GTMTOM1SR3_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: GTMTOM1SR4_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_GTMTOM1SR4_ISR =
{
  /* .Level          = */ 122,
  /* .Source         = */ 0xe40uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_GTMTOM1SR4_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: QSPI3ERR_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_QSPI3ERR_ISR =
{
  /* .Level          = */ 102,
  /* .Source         = */ 0x134uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_QSPI3ERR_ISR =
{
  /* .Dummy         = */ (uint32)0
};

/*! HAL ISR configuration data: QSPI3PT_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_QSPI3PT_ISR =
{
  /* .Level          = */ 103,
  /* .Source         = */ 0x138uL,
  /* .CoreAssignment = */ 0
};

CONST(Os_Hal_IntIsrMapConfigType, OS_CONST) OsCfg_Hal_IntIsrMap_QSPI3PT_ISR =
{
  /* .Dummy         = */ (uint32)0
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Interrupt_Lcfg.c
 *********************************************************************************************************************/
