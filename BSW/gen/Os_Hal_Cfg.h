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
 *              File: Os_Hal_Cfg.h
 *   Generation Time: 2025-09-03 14:21:21
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */

#ifndef OS_HAL_CFG_H
# define OS_HAL_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! HAL configuration major version identification. */
# define OS_CFG_HAL_MAJOR_VERSION                (2u)

/*! HAL configuration minor version identification. */
# define OS_CFG_HAL_MINOR_VERSION                (30u)

/* ISR core and level definitions */
# define OS_ISR_ADC0SR0_ISR_CORE      (0)
# define OS_ISR_ADC0SR0_ISR_LEVEL     (40)
# define OS_ISR_ADC11SR0_ISR_CORE      (0)
# define OS_ISR_ADC11SR0_ISR_LEVEL     (44)
# define OS_ISR_ADC1SR0_ISR_CORE      (0)
# define OS_ISR_ADC1SR0_ISR_LEVEL     (41)
# define OS_ISR_ADC2SR0_ISR_CORE      (0)
# define OS_ISR_ADC2SR0_ISR_LEVEL     (42)
# define OS_ISR_ADC3SR0_ISR_CORE      (0)
# define OS_ISR_ADC3SR0_ISR_LEVEL     (43)
# define OS_ISR_ADC8SR0_ISR_CORE      (0)
# define OS_ISR_ADC8SR0_ISR_LEVEL     (45)
# define OS_ISR_ASCLIN1ERR_ISR_CORE      (0)
# define OS_ISR_ASCLIN1ERR_ISR_LEVEL     (55)
# define OS_ISR_ASCLIN1RX_ISR_CORE      (0)
# define OS_ISR_ASCLIN1RX_ISR_LEVEL     (54)
# define OS_ISR_ASCLIN1TX_ISR_CORE      (0)
# define OS_ISR_ASCLIN1TX_ISR_LEVEL     (53)
# define OS_ISR_ASCLIN2ERR_ISR_CORE      (0)
# define OS_ISR_ASCLIN2ERR_ISR_LEVEL     (52)
# define OS_ISR_ASCLIN2RX_ISR_CORE      (0)
# define OS_ISR_ASCLIN2RX_ISR_LEVEL     (51)
# define OS_ISR_ASCLIN2TX_ISR_CORE      (0)
# define OS_ISR_ASCLIN2TX_ISR_LEVEL     (50)
# define OS_ISR_CANISR_0_CORE      (0)
# define OS_ISR_CANISR_0_LEVEL     (30)
# define OS_ISR_CANISR_1_CORE      (0)
# define OS_ISR_CANISR_1_LEVEL     (31)
# define OS_ISR_CANISR_3_CORE      (0)
# define OS_ISR_CANISR_3_LEVEL     (33)
# define OS_ISR_CANISR_4_CORE      (0)
# define OS_ISR_CANISR_4_LEVEL     (32)
# define OS_ISR_COUNTERISR_SYSTEMTIMER0_CORE      (0)
# define OS_ISR_COUNTERISR_SYSTEMTIMER0_LEVEL     (1)
# define OS_ISR_COUNTERISR_SYSTEMTIMER1_CORE      (1)
# define OS_ISR_COUNTERISR_SYSTEMTIMER1_LEVEL     (1)
# define OS_ISR_COUNTERISR_SYSTEMTIMER2_CORE      (2)
# define OS_ISR_COUNTERISR_SYSTEMTIMER2_LEVEL     (1)
# define OS_ISR_DMACH10SR_ISR_CORE      (0)
# define OS_ISR_DMACH10SR_ISR_LEVEL     (114)
# define OS_ISR_DMACH11SR_ISR_CORE      (0)
# define OS_ISR_DMACH11SR_ISR_LEVEL     (115)
# define OS_ISR_ETHISR_ETHCTRLCONFIG_ETHSR2_ISR_CORE      (0)
# define OS_ISR_ETHISR_ETHCTRLCONFIG_ETHSR2_ISR_LEVEL     (60)
# define OS_ISR_ETHISR_ETHCTRLCONFIG_ETHSR6_ISR_CORE      (0)
# define OS_ISR_ETHISR_ETHCTRLCONFIG_ETHSR6_ISR_LEVEL     (61)
# define OS_ISR_GTMTOM1SR3_ISR_CORE      (0)
# define OS_ISR_GTMTOM1SR3_ISR_LEVEL     (121)
# define OS_ISR_GTMTOM1SR4_ISR_CORE      (0)
# define OS_ISR_GTMTOM1SR4_ISR_LEVEL     (122)
# define OS_ISR_QSPI3ERR_ISR_CORE      (0)
# define OS_ISR_QSPI3ERR_ISR_LEVEL     (102)
# define OS_ISR_QSPI3PT_ISR_CORE      (0)
# define OS_ISR_QSPI3PT_ISR_LEVEL     (103)
# define OS_ISR_XSIGNALISR_OSCORE0_CORE      (0)
# define OS_ISR_XSIGNALISR_OSCORE0_LEVEL     (2)
# define OS_ISR_XSIGNALISR_OSCORE1_CORE      (1)
# define OS_ISR_XSIGNALISR_OSCORE1_LEVEL     (2)
# define OS_ISR_XSIGNALISR_OSCORE2_CORE      (2)
# define OS_ISR_XSIGNALISR_OSCORE2_LEVEL     (2)

/* Hardware counter timing macros */

/* Counter timing macros and constants: SystemTimer_Core0 */
# define OSMAXALLOWEDVALUE_SystemTimer_Core0     (2147483647uL) /* 0x7FFFFFFFuL */
# define OSMINCYCLE_SystemTimer_Core0            (1uL)
# define OSTICKSPERBASE_SystemTimer_Core0        (100000uL)
# define OSTICKDURATION_SystemTimer_Core0        (1000000uL)

/* OSEK compatibility for the system timer. */
# define OSMAXALLOWEDVALUE     (OSMAXALLOWEDVALUE_SystemTimer_Core0)
# define OSMINCYCLE            (OSMINCYCLE_SystemTimer_Core0)
# define OSTICKSPERBASE        (OSTICKSPERBASE_SystemTimer_Core0)
# define OSTICKDURATION        (OSTICKDURATION_SystemTimer_Core0)

/*! Macro OS_NS2TICKS_SystemTimer_Core0 was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_SystemTimer_Core0(x)     ( (TickType) (((((uint32)(x)) * 1) + 500000) / 1000000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2NS_SystemTimer_Core0 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2NS_SystemTimer_Core0(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_US2TICKS_SystemTimer_Core0 was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_SystemTimer_Core0(x)     ( (TickType) (((((uint32)(x)) * 1) + 500) / 1000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2US_SystemTimer_Core0 was approximated with a deviation of 1.1102230246251565E-10ppm. */
# define OS_TICKS2US_SystemTimer_Core0(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_MS2TICKS_SystemTimer_Core0 was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_SystemTimer_Core0(x)     ( (TickType) (((((uint32)(x)) * 1) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2MS_SystemTimer_Core0 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2MS_SystemTimer_Core0(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_SEC2TICKS_SystemTimer_Core0 was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_SystemTimer_Core0(x)     ( (TickType) (((((uint32)(x)) * 1000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2SEC_SystemTimer_Core0 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_SystemTimer_Core0(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 500) / 1000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */


/* Counter timing macros and constants: SystemTimer_Core1 */
# define OSMAXALLOWEDVALUE_SystemTimer_Core1     (2147483647uL) /* 0x7FFFFFFFuL */
# define OSMINCYCLE_SystemTimer_Core1            (1uL)
# define OSTICKSPERBASE_SystemTimer_Core1        (100000uL)
# define OSTICKDURATION_SystemTimer_Core1        (1000000uL)

/*! Macro OS_NS2TICKS_SystemTimer_Core1 was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_SystemTimer_Core1(x)     ( (TickType) (((((uint32)(x)) * 1) + 500000) / 1000000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2NS_SystemTimer_Core1 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2NS_SystemTimer_Core1(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_US2TICKS_SystemTimer_Core1 was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_SystemTimer_Core1(x)     ( (TickType) (((((uint32)(x)) * 1) + 500) / 1000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2US_SystemTimer_Core1 was approximated with a deviation of 1.1102230246251565E-10ppm. */
# define OS_TICKS2US_SystemTimer_Core1(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_MS2TICKS_SystemTimer_Core1 was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_SystemTimer_Core1(x)     ( (TickType) (((((uint32)(x)) * 1) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2MS_SystemTimer_Core1 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2MS_SystemTimer_Core1(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_SEC2TICKS_SystemTimer_Core1 was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_SystemTimer_Core1(x)     ( (TickType) (((((uint32)(x)) * 1000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2SEC_SystemTimer_Core1 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_SystemTimer_Core1(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 500) / 1000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */


/* Counter timing macros and constants: SystemTimer_Core2 */
# define OSMAXALLOWEDVALUE_SystemTimer_Core2     (2147483647uL) /* 0x7FFFFFFFuL */
# define OSMINCYCLE_SystemTimer_Core2            (1uL)
# define OSTICKSPERBASE_SystemTimer_Core2        (100000uL)
# define OSTICKDURATION_SystemTimer_Core2        (1000000uL)

/*! Macro OS_NS2TICKS_SystemTimer_Core2 was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_SystemTimer_Core2(x)     ( (TickType) (((((uint32)(x)) * 1) + 500000) / 1000000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2NS_SystemTimer_Core2 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2NS_SystemTimer_Core2(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_US2TICKS_SystemTimer_Core2 was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_SystemTimer_Core2(x)     ( (TickType) (((((uint32)(x)) * 1) + 500) / 1000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2US_SystemTimer_Core2 was approximated with a deviation of 1.1102230246251565E-10ppm. */
# define OS_TICKS2US_SystemTimer_Core2(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_MS2TICKS_SystemTimer_Core2 was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_SystemTimer_Core2(x)     ( (TickType) (((((uint32)(x)) * 1) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2MS_SystemTimer_Core2 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2MS_SystemTimer_Core2(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_SEC2TICKS_SystemTimer_Core2 was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_SystemTimer_Core2(x)     ( (TickType) (((((uint32)(x)) * 1000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2SEC_SystemTimer_Core2 was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_SystemTimer_Core2(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 500) / 1000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */




/* CAT0 and CAT1 ISR core and level definitions */



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_HAL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Cfg.h
 *********************************************************************************************************************/
