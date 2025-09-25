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
 *              File: Rte_MemMap.h
 *   Generation Time: 2025-09-25 10:42:45
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

#if defined RTE_START_SEC_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CODE_OPEN
#  error Using RTE_STOP_SEC_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_ZERO_INIT_8BIT
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_ZERO_INIT_8BIT is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_ZERO_INIT_8BIT_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_ZERO_INIT_8BIT is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_ZERO_INIT_8BIT_OPEN
#  error Using RTE_STOP_SEC_VAR_ZERO_INIT_8BIT is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CONST_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CONST_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CONST_UNSPECIFIED_OPEN

# pragma section farrom "MSR_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom "MSR_CONST_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CONST_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CONST_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CONST_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_CONST_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CONST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_BSWM_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_BSWM_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_BSWM_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_BSWM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_BSWM_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_BSWM_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_BSWM_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_BSWM_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_BSWM_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_BSWM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_ECUM_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_ECUM_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_ECUM_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_ECUM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_ECUM_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_ECUM_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_ECUM_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_ECUM_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_ECUM_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_ECUM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_OS_OSCORE0_SWC_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_OS_OSCORE0_SWC_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_OS_OSCORE0_SWC_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_OS_OSCORE0_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_OS_OSCORE0_SWC_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_OS_OSCORE0_SWC_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_OS_OSCORE0_SWC_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_OS_OSCORE0_SWC_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_OS_OSCORE0_SWC_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_OS_OSCORE0_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_COMM_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_COMM_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_COMM_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_COMM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_COMM_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_COMM_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_COMM_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_COMM_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_COMM_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_COMM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_DET_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_DET_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_DET_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_DET_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_DET_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_DET_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_DET_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_DET_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_DET_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_DET_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_NVM_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_NVM_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_NVM_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_NVM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_NVM_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_NVM_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_NVM_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_NVM_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_NVM_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_NVM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_DCM_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_DCM_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_DCM_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_DCM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_DCM_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_DCM_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_DCM_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_DCM_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_DCM_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_DCM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_DEMMASTER_0_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_DEMMASTER_0_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_DEMMASTER_0_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_DEMMASTER_0_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_DEMMASTER_0_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_DEMMASTER_0_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_DEMMASTER_0_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_DEMMASTER_0_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_DEMMASTER_0_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_DEMMASTER_0_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_DEMSATELLITE_0_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_DEMSATELLITE_0_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_DEMSATELLITE_0_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_DEMSATELLITE_0_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_DEMSATELLITE_0_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_DEMSATELLITE_0_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_DEMSATELLITE_0_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_DEMSATELLITE_0_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_DEMSATELLITE_0_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_DEMSATELLITE_0_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN
#  error Using RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT_OPEN

# pragma section farnoclear "OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_GLOBALSHARED_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_GLOBALSHARED_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_GLOBALSHARED_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT_OPEN
#  error Using RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_NOCACHE_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_NOCACHE_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_NOCACHE_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_OS_OSCORE1_SWC_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_OS_OSCORE1_SWC_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_OS_OSCORE1_SWC_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_OS_OSCORE1_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_OS_OSCORE1_SWC_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_OS_OSCORE1_SWC_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_OS_OSCORE1_SWC_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_OS_OSCORE1_SWC_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_OS_OSCORE1_SWC_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_OS_OSCORE1_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_OS_OSCORE2_SWC_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_OS_OSCORE2_SWC_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_OS_OSCORE2_SWC_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_OS_OSCORE2_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_OS_OSCORE2_SWC_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_OS_OSCORE2_SWC_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_OS_OSCORE2_SWC_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_OS_OSCORE2_SWC_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_OS_OSCORE2_SWC_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_OS_OSCORE2_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE0_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE0_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE1_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE1_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE1_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE1_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE1_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE1_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE1_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE1_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT_OPEN

# pragma section farnoclear "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE1_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE1_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE1_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE1_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE1_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE1_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE1_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE1_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE2_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE2_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE2_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE2_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE2_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE2_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE2_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE2_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT_OPEN

# pragma section farnoclear "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE2_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE2_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE2_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE2_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "OS_CORE2_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "OS_CORE2_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "OS_CORE2_VAR_FAST_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "OS_CORE2_VAR_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED_OPEN
#  error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CORE1APP_SWC_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CORE1APP_SWC_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CORE1APP_SWC_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CORE1APP_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CORE1APP_SWC_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CORE1APP_SWC_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CORE1APP_SWC_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CORE1APP_SWC_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CORE1APP_SWC_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CORE1APP_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CORE2APP_SWC_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CORE2APP_SWC_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CORE2APP_SWC_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CORE2APP_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CORE2APP_SWC_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CORE2APP_SWC_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CORE2APP_SWC_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CORE2APP_SWC_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CORE2APP_SWC_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CORE2APP_SWC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_IOHWAB_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_IOHWAB_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_IOHWAB_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_IOHWAB_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_IOHWAB_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_IOHWAB_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_IOHWAB_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_IOHWAB_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_IOHWAB_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_IOHWAB_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_ACCCAL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_ACCCAL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_ACCCAL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_ACCCAL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_ACCCAL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_ACCCAL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_ACCCAL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_ACCCAL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_ACCCAL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_ACCCAL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_ACCRPEDLDRV_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_ACCRPEDLDRV_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_ACCRPEDLDRV_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_ACCRPEDLDRV_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_ACCRPEDLDRV_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_ACCRPEDLDRV_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_ACCRPEDLDRV_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_ACCRPEDLDRV_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_ACCRPEDLDRV_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_ACCRPEDLDRV_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_ACPARMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_ACPARMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_ACPARMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_ACPARMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_ACPARMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_ACPARMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_ACPARMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_ACPARMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_ACPARMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_ACPARMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_BMSMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_BMSMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_BMSMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_BMSMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_BMSMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_BMSMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_BMSMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_BMSMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_BMSMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_BMSMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_BRKMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_BRKMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_BRKMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_BRKMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_BRKMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_BRKMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_BRKMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_BRKMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_BRKMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_BRKMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CANHANDLER_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CANHANDLER_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CANHANDLER_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CANHANDLER_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CANHANDLER_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CANHANDLER_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CANHANDLER_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CANHANDLER_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CANHANDLER_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CANHANDLER_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CHRGCOMM_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CHRGCOMM_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CHRGCOMM_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CHRGCOMM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CHRGCOMM_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGCOMM_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CHRGCOMM_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGCOMM_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CHRGCOMM_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CHRGCOMM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CHRGEGYCAL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CHRGEGYCAL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CHRGEGYCAL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CHRGEGYCAL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CHRGEGYCAL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGEGYCAL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CHRGEGYCAL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGEGYCAL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CHRGEGYCAL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CHRGEGYCAL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CHRGMOD_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CHRGMOD_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CHRGMOD_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CHRGMOD_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CHRGMOD_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGMOD_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CHRGMOD_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGMOD_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CHRGMOD_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CHRGMOD_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CHRGPREHEAT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CHRGPREHEAT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CHRGPREHEAT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CHRGPREHEAT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CHRGPREHEAT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGPREHEAT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CHRGPREHEAT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGPREHEAT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CHRGPREHEAT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CHRGPREHEAT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CHRGSDL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CHRGSDL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CHRGSDL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CHRGSDL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CHRGSDL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGSDL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CHRGSDL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGSDL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CHRGSDL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CHRGSDL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CHRGSEQCTRL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CHRGSEQCTRL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CHRGSEQCTRL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CHRGSEQCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CHRGSEQCTRL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGSEQCTRL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CHRGSEQCTRL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGSEQCTRL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CHRGSEQCTRL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CHRGSEQCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CHRGSTAT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CHRGSTAT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CHRGSTAT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CHRGSTAT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CHRGSTAT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGSTAT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CHRGSTAT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CHRGSTAT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CHRGSTAT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CHRGSTAT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CNSCALCN_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CNSCALCN_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CNSCALCN_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CNSCALCN_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CNSCALCN_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CNSCALCN_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CNSCALCN_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CNSCALCN_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CNSCALCN_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CNSCALCN_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_COASTCTRL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_COASTCTRL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_COASTCTRL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_COASTCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_COASTCTRL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_COASTCTRL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_COASTCTRL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_COASTCTRL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_COASTCTRL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_COASTCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_COMMERR_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_COMMERR_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_COMMERR_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_COMMERR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_COMMERR_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_COMMERR_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_COMMERR_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_COMMERR_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_COMMERR_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_COMMERR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_CRPCTRL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_CRPCTRL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_CRPCTRL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_CRPCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_CRPCTRL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_CRPCTRL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_CRPCTRL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_CRPCTRL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_CRPCTRL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_CRPCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_DCCOMM_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_DCCOMM_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_DCCOMM_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_DCCOMM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_DCCOMM_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_DCCOMM_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_DCCOMM_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_DCCOMM_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_DCCOMM_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_DCCOMM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_DCDCMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_DCDCMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_DCDCMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_DCDCMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_DCDCMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_DCDCMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_DCDCMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_DCDCMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_DCDCMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_DCDCMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_DCFCMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_DCFCMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_DCFCMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_DCFCMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_DCFCMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_DCFCMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_DCFCMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_DCFCMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_DCFCMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_DCFCMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_DCPARMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_DCPARMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_DCPARMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_DCPARMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_DCPARMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_DCPARMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_DCPARMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_DCPARMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_DCPARMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_DCPARMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_DRVASSCCTRL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_DRVASSCCTRL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_DRVASSCCTRL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_DRVASSCCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_DRVASSCCTRL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_DRVASSCCTRL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_DRVASSCCTRL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_DRVASSCCTRL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_DRVASSCCTRL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_DRVASSCCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_DRVMOD_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_DRVMOD_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_DRVMOD_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_DRVMOD_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_DRVMOD_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_DRVMOD_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_DRVMOD_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_DRVMOD_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_DRVMOD_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_DRVMOD_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_DRVTORQCOOR_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_DRVTORQCOOR_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_DRVTORQCOOR_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_DRVTORQCOOR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_DRVTORQCOOR_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_DRVTORQCOOR_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_DRVTORQCOOR_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_DRVTORQCOOR_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_DRVTORQCOOR_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_DRVTORQCOOR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_ELSSDIAG_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_ELSSDIAG_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_ELSSDIAG_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_ELSSDIAG_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_ELSSDIAG_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_ELSSDIAG_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_ELSSDIAG_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_ELSSDIAG_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_ELSSDIAG_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_ELSSDIAG_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_EMMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_EMMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_EMMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_EMMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_EMMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_EMMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_EMMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_EMMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_EMMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_EMMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_FCTSFTYGEAR_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_FCTSFTYGEAR_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_FCTSFTYGEAR_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_FCTSFTYGEAR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_FCTSFTYGEAR_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_FCTSFTYGEAR_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_FCTSFTYGEAR_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_FCTSFTYGEAR_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_FCTSFTYGEAR_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_FCTSFTYGEAR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_FCTSFTYTORQ_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_FCTSFTYTORQ_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_FCTSFTYTORQ_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_FCTSFTYTORQ_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_FCTSFTYTORQ_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_FCTSFTYTORQ_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_FCTSFTYTORQ_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_FCTSFTYTORQ_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_FCTSFTYTORQ_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_FCTSFTYTORQ_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_FLTREACTN_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_FLTREACTN_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_FLTREACTN_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_FLTREACTN_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_FLTREACTN_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_FLTREACTN_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_FLTREACTN_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_FLTREACTN_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_FLTREACTN_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_FLTREACTN_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_GEARCAL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_GEARCAL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_GEARCAL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_GEARCAL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_GEARCAL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_GEARCAL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_GEARCAL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_GEARCAL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_GEARCAL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_GEARCAL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_HVSFTY_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_HVSFTY_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_HVSFTY_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_HVSFTY_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_HVSFTY_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_HVSFTY_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_HVSFTY_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_HVSFTY_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_HVSFTY_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_HVSFTY_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_HWHANDLER_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_HWHANDLER_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_HWHANDLER_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_HWHANDLER_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_HWHANDLER_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_HWHANDLER_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_HWHANDLER_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_HWHANDLER_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_HWHANDLER_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_HWHANDLER_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_LINHANDLER_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_LINHANDLER_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_LINHANDLER_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_LINHANDLER_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_LINHANDLER_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_LINHANDLER_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_LINHANDLER_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_LINHANDLER_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_LINHANDLER_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_LINHANDLER_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_LVBATTMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_LVBATTMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_LVBATTMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_LVBATTMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_LVBATTMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_LVBATTMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_LVBATTMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_LVBATTMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_LVBATTMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_LVBATTMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_MCUMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_MCUMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_MCUMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_MCUMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_MCUMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_MCUMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_MCUMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_MCUMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_MCUMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_MCUMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_OBCSTSMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_OBCSTSMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_OBCSTSMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_OBCSTSMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_OBCSTSMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_OBCSTSMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_OBCSTSMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_OBCSTSMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_OBCSTSMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_OBCSTSMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_ONEPEDCTRL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_ONEPEDCTRL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_ONEPEDCTRL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_ONEPEDCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_ONEPEDCTRL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_ONEPEDCTRL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_ONEPEDCTRL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_ONEPEDCTRL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_ONEPEDCTRL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_ONEPEDCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_PDLALYS_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_PDLALYS_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_PDLALYS_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_PDLALYS_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_PDLALYS_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_PDLALYS_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_PDLALYS_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_PDLALYS_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_PDLALYS_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_PDLALYS_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_PWRLIM_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_PWRLIM_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_PWRLIM_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_PWRLIM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_PWRLIM_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_PWRLIM_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_PWRLIM_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_PWRLIM_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_PWRLIM_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_PWRLIM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_RESEST_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_RESEST_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_RESEST_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_RESEST_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_RESEST_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_RESEST_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_RESEST_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_RESEST_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_RESEST_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_RESEST_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_RNGESTIMN_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_RNGESTIMN_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_RNGESTIMN_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_RNGESTIMN_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_RNGESTIMN_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_RNGESTIMN_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_RNGESTIMN_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_RNGESTIMN_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_RNGESTIMN_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_RNGESTIMN_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_S2MGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_S2MGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_S2MGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_S2MGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_S2MGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_S2MGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_S2MGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_S2MGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_S2MGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_S2MGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_SLOPEST_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_SLOPEST_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_SLOPEST_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_SLOPEST_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_SLOPEST_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_SLOPEST_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_SLOPEST_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_SLOPEST_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_SLOPEST_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_SLOPEST_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_SPDLMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_SPDLMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_SPDLMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_SPDLMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_SPDLMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_SPDLMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_SPDLMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_SPDLMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_SPDLMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_SPDLMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_TCUMGMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_TCUMGMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_TCUMGMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_TCUMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_TCUMGMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_TCUMGMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_TCUMGMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_TCUMGMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_TCUMGMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_TCUMGMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_TORQCOOR_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_TORQCOOR_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_TORQCOOR_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_TORQCOOR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_TORQCOOR_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQCOOR_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_TORQCOOR_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQCOOR_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_TORQCOOR_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_TORQCOOR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_TORQCROSSZR_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_TORQCROSSZR_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_TORQCROSSZR_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_TORQCROSSZR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_TORQCROSSZR_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQCROSSZR_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_TORQCROSSZR_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQCROSSZR_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_TORQCROSSZR_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_TORQCROSSZR_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_TORQDAMP_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_TORQDAMP_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_TORQDAMP_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_TORQDAMP_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_TORQDAMP_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQDAMP_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_TORQDAMP_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQDAMP_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_TORQDAMP_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_TORQDAMP_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_TORQFIL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_TORQFIL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_TORQFIL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_TORQFIL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_TORQFIL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQFIL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_TORQFIL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQFIL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_TORQFIL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_TORQFIL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_TORQLMT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_TORQLMT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_TORQLMT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_TORQLMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_TORQLMT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQLMT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_TORQLMT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQLMT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_TORQLMT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_TORQLMT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_TORQMODMAP_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_TORQMODMAP_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_TORQMODMAP_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_TORQMODMAP_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_TORQMODMAP_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQMODMAP_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_TORQMODMAP_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_TORQMODMAP_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_TORQMODMAP_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_TORQMODMAP_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_TRSMPROTD_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_TRSMPROTD_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_TRSMPROTD_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_TRSMPROTD_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_TRSMPROTD_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_TRSMPROTD_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_TRSMPROTD_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_TRSMPROTD_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_TRSMPROTD_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_TRSMPROTD_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_VEHSPD_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_VEHSPD_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_VEHSPD_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_VEHSPD_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_VEHSPD_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_VEHSPD_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_VEHSPD_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_VEHSPD_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_VEHSPD_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_VEHSPD_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_VEHSTABYCTRL_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_VEHSTABYCTRL_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_VEHSTABYCTRL_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_VEHSTABYCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_VEHSTABYCTRL_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_VEHSTABYCTRL_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_VEHSTABYCTRL_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_VEHSTABYCTRL_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_VEHSTABYCTRL_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_VEHSTABYCTRL_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_VEHSTAT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_VEHSTAT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_VEHSTAT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_VEHSTAT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_VEHSTAT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_VEHSTAT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_VEHSTAT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_VEHSTAT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_VEHSTAT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_VEHSTAT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_CTAP_WAKEUPRSN_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_CTAP_WAKEUPRSN_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_CTAP_WAKEUPRSN_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_CTAP_WAKEUPRSN_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_CTAP_WAKEUPRSN_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_CTAP_WAKEUPRSN_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_CTAP_WAKEUPRSN_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_CTAP_WAKEUPRSN_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_CTAP_WAKEUPRSN_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_CTAP_WAKEUPRSN_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined RTE_START_SEC_HOOKCALLOUT_APPL_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using RTE_START_SEC_HOOKCALLOUT_APPL_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define RTE_HOOKCALLOUT_APPL_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_START_SEC_HOOKCALLOUT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined RTE_STOP_SEC_HOOKCALLOUT_APPL_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using RTE_STOP_SEC_HOOKCALLOUT_APPL_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef RTE_HOOKCALLOUT_APPL_CODE_OPEN
#  error Using RTE_STOP_SEC_HOOKCALLOUT_APPL_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef RTE_HOOKCALLOUT_APPL_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef RTE_STOP_SEC_HOOKCALLOUT_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

/* -------------------------------------------------------------------------------- */


/**********************************************************************************************************************
 *  MEMMAP ERROR CHECKS
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_CODE
# error Using RTE_START_SEC_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CODE
# error Using RTE_STOP_SEC_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_ZERO_INIT_8BIT
# error Using RTE_START_SEC_VAR_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
# error Using RTE_STOP_SEC_VAR_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CONST_UNSPECIFIED
# error Using RTE_START_SEC_CONST_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CONST_UNSPECIFIED
# error Using RTE_STOP_SEC_CONST_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_APPL_CODE
# error Using RTE_START_SEC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_APPL_CODE
# error Using RTE_STOP_SEC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_BSWM_APPL_CODE
# error Using RTE_START_SEC_BSWM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_BSWM_APPL_CODE
# error Using RTE_STOP_SEC_BSWM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_ECUM_APPL_CODE
# error Using RTE_START_SEC_ECUM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_ECUM_APPL_CODE
# error Using RTE_STOP_SEC_ECUM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_OS_OSCORE0_SWC_APPL_CODE
# error Using RTE_START_SEC_OS_OSCORE0_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_OS_OSCORE0_SWC_APPL_CODE
# error Using RTE_STOP_SEC_OS_OSCORE0_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_COMM_APPL_CODE
# error Using RTE_START_SEC_COMM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_COMM_APPL_CODE
# error Using RTE_STOP_SEC_COMM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_DET_APPL_CODE
# error Using RTE_START_SEC_DET_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_DET_APPL_CODE
# error Using RTE_STOP_SEC_DET_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_NVM_APPL_CODE
# error Using RTE_START_SEC_NVM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_NVM_APPL_CODE
# error Using RTE_STOP_SEC_NVM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_DCM_APPL_CODE
# error Using RTE_START_SEC_DCM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_DCM_APPL_CODE
# error Using RTE_STOP_SEC_DCM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_DEMMASTER_0_APPL_CODE
# error Using RTE_START_SEC_DEMMASTER_0_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_DEMMASTER_0_APPL_CODE
# error Using RTE_STOP_SEC_DEMMASTER_0_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_DEMSATELLITE_0_APPL_CODE
# error Using RTE_START_SEC_DEMSATELLITE_0_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_DEMSATELLITE_0_APPL_CODE
# error Using RTE_STOP_SEC_DEMSATELLITE_0_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_START_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_OS_OSCORE1_SWC_APPL_CODE
# error Using RTE_START_SEC_OS_OSCORE1_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_OS_OSCORE1_SWC_APPL_CODE
# error Using RTE_STOP_SEC_OS_OSCORE1_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_OS_OSCORE2_SWC_APPL_CODE
# error Using RTE_START_SEC_OS_OSCORE2_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_OS_OSCORE2_SWC_APPL_CODE
# error Using RTE_STOP_SEC_OS_OSCORE2_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED
# error Using RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED
# error Using RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CORE1APP_SWC_APPL_CODE
# error Using RTE_START_SEC_CORE1APP_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CORE1APP_SWC_APPL_CODE
# error Using RTE_STOP_SEC_CORE1APP_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CORE2APP_SWC_APPL_CODE
# error Using RTE_START_SEC_CORE2APP_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CORE2APP_SWC_APPL_CODE
# error Using RTE_STOP_SEC_CORE2APP_SWC_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_IOHWAB_APPL_CODE
# error Using RTE_START_SEC_IOHWAB_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_IOHWAB_APPL_CODE
# error Using RTE_STOP_SEC_IOHWAB_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_ACCCAL_APPL_CODE
# error Using RTE_START_SEC_CTAP_ACCCAL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_ACCCAL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_ACCCAL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_ACCRPEDLDRV_APPL_CODE
# error Using RTE_START_SEC_CTAP_ACCRPEDLDRV_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_ACCRPEDLDRV_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_ACCRPEDLDRV_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_ACPARMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_ACPARMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_ACPARMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_ACPARMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_BMSMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_BMSMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_BMSMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_BMSMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_BRKMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_BRKMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_BRKMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_BRKMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CANHANDLER_APPL_CODE
# error Using RTE_START_SEC_CTAP_CANHANDLER_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CANHANDLER_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CANHANDLER_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CHRGCOMM_APPL_CODE
# error Using RTE_START_SEC_CTAP_CHRGCOMM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CHRGCOMM_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CHRGCOMM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CHRGEGYCAL_APPL_CODE
# error Using RTE_START_SEC_CTAP_CHRGEGYCAL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CHRGEGYCAL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CHRGEGYCAL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CHRGMOD_APPL_CODE
# error Using RTE_START_SEC_CTAP_CHRGMOD_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CHRGMOD_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CHRGMOD_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CHRGPREHEAT_APPL_CODE
# error Using RTE_START_SEC_CTAP_CHRGPREHEAT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CHRGPREHEAT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CHRGPREHEAT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CHRGSDL_APPL_CODE
# error Using RTE_START_SEC_CTAP_CHRGSDL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CHRGSDL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CHRGSDL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CHRGSEQCTRL_APPL_CODE
# error Using RTE_START_SEC_CTAP_CHRGSEQCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CHRGSEQCTRL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CHRGSEQCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CHRGSTAT_APPL_CODE
# error Using RTE_START_SEC_CTAP_CHRGSTAT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CHRGSTAT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CHRGSTAT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CNSCALCN_APPL_CODE
# error Using RTE_START_SEC_CTAP_CNSCALCN_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CNSCALCN_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CNSCALCN_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_COASTCTRL_APPL_CODE
# error Using RTE_START_SEC_CTAP_COASTCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_COASTCTRL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_COASTCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_COMMERR_APPL_CODE
# error Using RTE_START_SEC_CTAP_COMMERR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_COMMERR_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_COMMERR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_CRPCTRL_APPL_CODE
# error Using RTE_START_SEC_CTAP_CRPCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_CRPCTRL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_CRPCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_DCCOMM_APPL_CODE
# error Using RTE_START_SEC_CTAP_DCCOMM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_DCCOMM_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_DCCOMM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_DCDCMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_DCDCMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_DCDCMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_DCDCMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_DCFCMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_DCFCMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_DCFCMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_DCFCMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_DCPARMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_DCPARMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_DCPARMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_DCPARMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_DRVASSCCTRL_APPL_CODE
# error Using RTE_START_SEC_CTAP_DRVASSCCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_DRVASSCCTRL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_DRVASSCCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_DRVMOD_APPL_CODE
# error Using RTE_START_SEC_CTAP_DRVMOD_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_DRVMOD_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_DRVMOD_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_DRVTORQCOOR_APPL_CODE
# error Using RTE_START_SEC_CTAP_DRVTORQCOOR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_DRVTORQCOOR_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_DRVTORQCOOR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_ELSSDIAG_APPL_CODE
# error Using RTE_START_SEC_CTAP_ELSSDIAG_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_ELSSDIAG_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_ELSSDIAG_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_EMMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_EMMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_EMMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_EMMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_FCTSFTYGEAR_APPL_CODE
# error Using RTE_START_SEC_CTAP_FCTSFTYGEAR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_FCTSFTYGEAR_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_FCTSFTYGEAR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_FCTSFTYTORQ_APPL_CODE
# error Using RTE_START_SEC_CTAP_FCTSFTYTORQ_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_FCTSFTYTORQ_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_FCTSFTYTORQ_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_FLTREACTN_APPL_CODE
# error Using RTE_START_SEC_CTAP_FLTREACTN_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_FLTREACTN_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_FLTREACTN_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_GEARCAL_APPL_CODE
# error Using RTE_START_SEC_CTAP_GEARCAL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_GEARCAL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_GEARCAL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_HVSFTY_APPL_CODE
# error Using RTE_START_SEC_CTAP_HVSFTY_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_HVSFTY_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_HVSFTY_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_HWHANDLER_APPL_CODE
# error Using RTE_START_SEC_CTAP_HWHANDLER_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_HWHANDLER_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_HWHANDLER_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_LINHANDLER_APPL_CODE
# error Using RTE_START_SEC_CTAP_LINHANDLER_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_LINHANDLER_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_LINHANDLER_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_LVBATTMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_LVBATTMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_LVBATTMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_LVBATTMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_MCUMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_MCUMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_MCUMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_MCUMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_OBCSTSMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_OBCSTSMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_OBCSTSMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_OBCSTSMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_ONEPEDCTRL_APPL_CODE
# error Using RTE_START_SEC_CTAP_ONEPEDCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_ONEPEDCTRL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_ONEPEDCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_PDLALYS_APPL_CODE
# error Using RTE_START_SEC_CTAP_PDLALYS_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_PDLALYS_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_PDLALYS_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_PWRLIM_APPL_CODE
# error Using RTE_START_SEC_CTAP_PWRLIM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_PWRLIM_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_PWRLIM_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_RESEST_APPL_CODE
# error Using RTE_START_SEC_CTAP_RESEST_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_RESEST_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_RESEST_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_RNGESTIMN_APPL_CODE
# error Using RTE_START_SEC_CTAP_RNGESTIMN_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_RNGESTIMN_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_RNGESTIMN_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_S2MGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_S2MGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_S2MGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_S2MGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_SLOPEST_APPL_CODE
# error Using RTE_START_SEC_CTAP_SLOPEST_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_SLOPEST_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_SLOPEST_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_SPDLMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_SPDLMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_SPDLMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_SPDLMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_TCUMGMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_TCUMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_TCUMGMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_TCUMGMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_TORQCOOR_APPL_CODE
# error Using RTE_START_SEC_CTAP_TORQCOOR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_TORQCOOR_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_TORQCOOR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_TORQCROSSZR_APPL_CODE
# error Using RTE_START_SEC_CTAP_TORQCROSSZR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_TORQCROSSZR_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_TORQCROSSZR_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_TORQDAMP_APPL_CODE
# error Using RTE_START_SEC_CTAP_TORQDAMP_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_TORQDAMP_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_TORQDAMP_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_TORQFIL_APPL_CODE
# error Using RTE_START_SEC_CTAP_TORQFIL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_TORQFIL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_TORQFIL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_TORQLMT_APPL_CODE
# error Using RTE_START_SEC_CTAP_TORQLMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_TORQLMT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_TORQLMT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_TORQMODMAP_APPL_CODE
# error Using RTE_START_SEC_CTAP_TORQMODMAP_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_TORQMODMAP_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_TORQMODMAP_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_TRSMPROTD_APPL_CODE
# error Using RTE_START_SEC_CTAP_TRSMPROTD_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_TRSMPROTD_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_TRSMPROTD_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_VEHSPD_APPL_CODE
# error Using RTE_START_SEC_CTAP_VEHSPD_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_VEHSPD_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_VEHSPD_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_VEHSTABYCTRL_APPL_CODE
# error Using RTE_START_SEC_CTAP_VEHSTABYCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_VEHSTABYCTRL_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_VEHSTABYCTRL_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_VEHSTAT_APPL_CODE
# error Using RTE_START_SEC_CTAP_VEHSTAT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_VEHSTAT_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_VEHSTAT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_CTAP_WAKEUPRSN_APPL_CODE
# error Using RTE_START_SEC_CTAP_WAKEUPRSN_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_CTAP_WAKEUPRSN_APPL_CODE
# error Using RTE_STOP_SEC_CTAP_WAKEUPRSN_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_START_SEC_HOOKCALLOUT_APPL_CODE
# error Using RTE_START_SEC_HOOKCALLOUT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef RTE_STOP_SEC_HOOKCALLOUT_APPL_CODE
# error Using RTE_STOP_SEC_HOOKCALLOUT_APPL_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif

#ifdef MEMMAP_ERROR
# error No MemMap section found in Rte_MemMap.h. Check your section define for validity.
#endif


/**********************************************************************************************************************
 *  POST USER CONFIG FILE
 *********************************************************************************************************************/

/* User Config File Start */

/* User Config File End */

#endif
/**********************************************************************************************************************
 *  END OF FILE: Rte_MemMap.h
 *********************************************************************************************************************/

