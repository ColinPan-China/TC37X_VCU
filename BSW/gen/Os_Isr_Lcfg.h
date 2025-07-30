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
 *              File: Os_Isr_Lcfg.h
 *   Generation Time: 2025-07-29 16:22:57
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef OS_ISR_LCFG_H
# define OS_ISR_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Isr_Types.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"
# include "Os_Timer_Types.h"
# include "Os_XSignal_Types.h"

/* Os hal dependencies */


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
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! ISR configuration data: ADC0SR0_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC0SR0_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC0SR0_ISR;

/*! ISR configuration data: ADC11SR0_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC11SR0_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC11SR0_ISR;

/*! ISR configuration data: ADC1SR0_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC1SR0_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC1SR0_ISR;

/*! ISR configuration data: ADC2SR0_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC2SR0_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC2SR0_ISR;

/*! ISR configuration data: ADC3SR0_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC3SR0_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC3SR0_ISR;

/*! ISR configuration data: ADC8SR0_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ADC8SR0_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC8SR0_ISR;

/*! ISR configuration data: ASCLIN1ERR_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN1ERR_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN1ERR_ISR;

/*! ISR configuration data: ASCLIN1RX_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN1RX_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN1RX_ISR;

/*! ISR configuration data: ASCLIN1TX_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN1TX_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN1TX_ISR;

/*! ISR configuration data: ASCLIN2ERR_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN2ERR_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN2ERR_ISR;

/*! ISR configuration data: ASCLIN2RX_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN2RX_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN2RX_ISR;

/*! ISR configuration data: ASCLIN2TX_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_ASCLIN2TX_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ASCLIN2TX_ISR;

/*! ISR configuration data: CanIsr_0 */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0;

/*! ISR configuration data: CanIsr_1 */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1;

/*! ISR configuration data: CanIsr_4 */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4;

/*! ISR configuration data: CanIsr_6 */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CanIsr_6_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_6;

/*! ISR configuration data: CounterIsr_SystemTimer */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer_HwConfig;
extern CONST(Os_TimerIsrConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer;

/*! ISR configuration data: DMACH10SR_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_DMACH10SR_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_DMACH10SR_ISR;

/*! ISR configuration data: DMACH11SR_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_DMACH11SR_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_DMACH11SR_ISR;

/*! ISR configuration data: GTMTOM1SR3_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_GTMTOM1SR3_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_GTMTOM1SR3_ISR;

/*! ISR configuration data: GTMTOM1SR4_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_GTMTOM1SR4_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_GTMTOM1SR4_ISR;

/*! ISR configuration data: QSPI3ERR_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_QSPI3ERR_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_QSPI3ERR_ISR;

/*! ISR configuration data: QSPI3PT_ISR */
extern CONST(Os_IsrHwConfigType, OS_CONST) OsCfg_Isr_QSPI3PT_ISR_HwConfig;
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_QSPI3PT_ISR;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for category 2 ISRs. */
extern CONSTP2CONST(Os_IsrConfigType, OS_CONST, OS_CONST) OsCfg_IsrRefs[OS_ISRID_COUNT + 1];  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_ISR_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Isr_Lcfg.h
 *********************************************************************************************************************/
