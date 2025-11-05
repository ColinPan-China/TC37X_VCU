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
 *            Module: MemMap
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: MemMap_Calibration.h
 *   Generation Time: 2025-11-05 13:06:00
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#ifndef MICROSAR_DISABLE_MEMMAP

/**********************************************************************************************************************
 *  PRE USER CONFIG FILE
 *********************************************************************************************************************/

/* User Config File Start */

/* User Config File End */

/**********************************************************************************************************************
 *  MEMMAP SECTIONS
 *********************************************************************************************************************/

#define MEMMAP_ERROR

#if defined CAL_START_SEC_CALIBRATION_CONST_8BIT
# ifdef MEMMAP_SECTION_OPEN
#  error Using CAL_START_SEC_CALIBRATION_CONST_8BIT is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define CAL_CALIBRATION_CONST_8BIT_OPEN

# pragma section farrom "CALIBRATION_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom "CALIBRATION_CONST_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef CAL_START_SEC_CALIBRATION_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined CAL_STOP_SEC_CALIBRATION_CONST_8BIT
# ifndef MEMMAP_SECTION_OPEN
#  error Using CAL_STOP_SEC_CALIBRATION_CONST_8BIT is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef CAL_CALIBRATION_CONST_8BIT_OPEN
#  error Using CAL_STOP_SEC_CALIBRATION_CONST_8BIT is not possible as the corresponding memory section has not been opened.
# endif
# undef CAL_CALIBRATION_CONST_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef CAL_STOP_SEC_CALIBRATION_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

/* -------------------------------------------------------------------------------- */


/**********************************************************************************************************************
 *  MEMMAP ERROR CHECKS
 *********************************************************************************************************************/

#ifdef CAL_START_SEC_CALIBRATION_CONST_8BIT
# error Using CAL_START_SEC_CALIBRATION_CONST_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef CAL_STOP_SEC_CALIBRATION_CONST_8BIT
# error Using CAL_STOP_SEC_CALIBRATION_CONST_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif

#ifdef MEMMAP_ERROR
# error No MemMap section found in MemMap_Calibration.h. Check your section define for validity.
#endif


/**********************************************************************************************************************
 *  POST USER CONFIG FILE
 *********************************************************************************************************************/

/* User Config File Start */

/* User Config File End */

#endif
/**********************************************************************************************************************
 *  END OF FILE: MemMap_Calibration.h
 *********************************************************************************************************************/

