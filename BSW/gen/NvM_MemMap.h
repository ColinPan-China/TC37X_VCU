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
 *              File: NvM_MemMap.h
 *   Generation Time: 2024-09-14 13:44:01
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

#if defined NVM_START_SEC_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using NVM_START_SEC_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NVM_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NVM_STOP_SEC_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using NVM_STOP_SEC_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NVM_CODE_OPEN
#  error Using NVM_STOP_SEC_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef NVM_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NVM_START_SEC_CONST_16
# ifdef MEMMAP_SECTION_OPEN
#  error Using NVM_START_SEC_CONST_16 is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NVM_CONST_16_OPEN

# pragma section farrom "MSR_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom "MSR_CONST_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_START_SEC_CONST_16 /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NVM_STOP_SEC_CONST_16
# ifndef MEMMAP_SECTION_OPEN
#  error Using NVM_STOP_SEC_CONST_16 is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NVM_CONST_16_OPEN
#  error Using NVM_STOP_SEC_CONST_16 is not possible as the corresponding memory section has not been opened.
# endif
# undef NVM_CONST_16_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_STOP_SEC_CONST_16 /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NVM_START_SEC_CONST_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using NVM_START_SEC_CONST_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NVM_CONST_UNSPECIFIED_OPEN

# pragma section farrom "MSR_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom "MSR_CONST_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NVM_STOP_SEC_CONST_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using NVM_STOP_SEC_CONST_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NVM_CONST_UNSPECIFIED_OPEN
#  error Using NVM_STOP_SEC_CONST_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef NVM_CONST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NVM_START_SEC_VAR_NO_INIT_8
# ifdef MEMMAP_SECTION_OPEN
#  error Using NVM_START_SEC_VAR_NO_INIT_8 is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NVM_VAR_NO_INIT_8_OPEN

# pragma section farnoclear "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "MSR_VAR_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "MSR_VAR_FAST_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_START_SEC_VAR_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NVM_STOP_SEC_VAR_NO_INIT_8
# ifndef MEMMAP_SECTION_OPEN
#  error Using NVM_STOP_SEC_VAR_NO_INIT_8 is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NVM_VAR_NO_INIT_8_OPEN
#  error Using NVM_STOP_SEC_VAR_NO_INIT_8 is not possible as the corresponding memory section has not been opened.
# endif
# undef NVM_VAR_NO_INIT_8_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_STOP_SEC_VAR_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NVM_START_SEC_VAR_NO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using NVM_START_SEC_VAR_NO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NVM_VAR_NO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "MSR_VAR_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "MSR_VAR_FAST_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_START_SEC_VAR_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NVM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using NVM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NVM_VAR_NO_INIT_UNSPECIFIED_OPEN
#  error Using NVM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef NVM_VAR_NO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NVM_START_SEC_VAR_CLEARED_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using NVM_START_SEC_VAR_CLEARED_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NVM_VAR_CLEARED_UNSPECIFIED_OPEN

# pragma section farnoclear "MSR_VAR_CLEARED" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "MSR_VAR_CLEARED" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "MSR_VAR_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "MSR_VAR_FAST_CLEARED" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "MSR_VAR_FAST_CLEARED" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "MSR_VAR_FAST_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_START_SEC_VAR_CLEARED_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NVM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using NVM_STOP_SEC_VAR_CLEARED_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NVM_VAR_CLEARED_UNSPECIFIED_OPEN
#  error Using NVM_STOP_SEC_VAR_CLEARED_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef NVM_VAR_CLEARED_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_STOP_SEC_VAR_CLEARED_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NVM_START_SEC_VAR_FAST_NO_INIT_8
# ifdef MEMMAP_SECTION_OPEN
#  error Using NVM_START_SEC_VAR_FAST_NO_INIT_8 is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NVM_VAR_FAST_NO_INIT_8_OPEN

# pragma section farnoclear "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "MSR_VAR_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "MSR_VAR_FAST_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_START_SEC_VAR_FAST_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NVM_STOP_SEC_VAR_FAST_NO_INIT_8
# ifndef MEMMAP_SECTION_OPEN
#  error Using NVM_STOP_SEC_VAR_FAST_NO_INIT_8 is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NVM_VAR_FAST_NO_INIT_8_OPEN
#  error Using NVM_STOP_SEC_VAR_FAST_NO_INIT_8 is not possible as the corresponding memory section has not been opened.
# endif
# undef NVM_VAR_FAST_NO_INIT_8_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NVM_STOP_SEC_VAR_FAST_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NvM_START_SEC_CODE
# ifdef MEMMAP_SECTION_OPEN
#  error Using NvM_START_SEC_CODE is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NvM_CODE_OPEN

# pragma section code "MSR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NvM_STOP_SEC_CODE
# ifndef MEMMAP_SECTION_OPEN
#  error Using NvM_STOP_SEC_CODE is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NvM_CODE_OPEN
#  error Using NvM_STOP_SEC_CODE is not possible as the corresponding memory section has not been opened.
# endif
# undef NvM_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section code restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NvM_START_SEC_CONST_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using NvM_START_SEC_CONST_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NvM_CONST_UNSPECIFIED_OPEN

# pragma section farrom "MSR_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom "MSR_CONST_FAST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NvM_STOP_SEC_CONST_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using NvM_STOP_SEC_CONST_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NvM_CONST_UNSPECIFIED_OPEN
#  error Using NvM_STOP_SEC_CONST_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef NvM_CONST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearrom restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NvM_START_SEC_VAR_NOINIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using NvM_START_SEC_VAR_NOINIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NvM_VAR_NOINIT_UNSPECIFIED_OPEN

# pragma section farnoclear "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "MSR_VAR_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "MSR_VAR_FAST_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NvM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using NvM_STOP_SEC_VAR_NOINIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NvM_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Using NvM_STOP_SEC_VAR_NOINIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef NvM_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NvM_START_SEC_VAR_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using NvM_START_SEC_VAR_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NvM_VAR_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "MSR_VAR_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "MSR_VAR_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "MSR_VAR_FAST_NO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "MSR_VAR_FAST_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NvM_STOP_SEC_VAR_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using NvM_STOP_SEC_VAR_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NvM_VAR_INIT_UNSPECIFIED_OPEN
#  error Using NvM_STOP_SEC_VAR_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef NvM_VAR_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

/* -------------------------------------------------------------------------------- */

#elif defined NvM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# ifdef MEMMAP_SECTION_OPEN
#  error Using NvM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as a memory section has already been opened. Nesting is not supported.
# endif
# define MEMMAP_SECTION_OPEN
# define NvM_VAR_ZERO_INIT_UNSPECIFIED_OPEN

# pragma section farnoclear "MSR_VAR_CLEARED" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss "MSR_VAR_CLEARED" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata "MSR_VAR_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear "MSR_VAR_FAST_CLEARED" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss "MSR_VAR_FAST_CLEARED" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata "MSR_VAR_FAST_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */

#elif defined NvM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# ifndef MEMMAP_SECTION_OPEN
#  error Using NvM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as no memory section has been opened.
# endif
# undef MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef NvM_VAR_ZERO_INIT_UNSPECIFIED_OPEN
#  error Using NvM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as the corresponding memory section has not been opened.
# endif
# undef NvM_VAR_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */

# pragma section farnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section farbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section fardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearnoclear restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section nearbss restore /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma section neardata restore /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef NvM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

/* -------------------------------------------------------------------------------- */


/**********************************************************************************************************************
 *  MEMMAP ERROR CHECKS
 *********************************************************************************************************************/

#ifdef NVM_START_SEC_CODE
# error Using NVM_START_SEC_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_STOP_SEC_CODE
# error Using NVM_STOP_SEC_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_START_SEC_CONST_16
# error Using NVM_START_SEC_CONST_16 is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_STOP_SEC_CONST_16
# error Using NVM_STOP_SEC_CONST_16 is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_START_SEC_CONST_UNSPECIFIED
# error Using NVM_START_SEC_CONST_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_STOP_SEC_CONST_UNSPECIFIED
# error Using NVM_STOP_SEC_CONST_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_START_SEC_VAR_NO_INIT_8
# error Using NVM_START_SEC_VAR_NO_INIT_8 is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_STOP_SEC_VAR_NO_INIT_8
# error Using NVM_STOP_SEC_VAR_NO_INIT_8 is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_START_SEC_VAR_NO_INIT_UNSPECIFIED
# error Using NVM_START_SEC_VAR_NO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# error Using NVM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_START_SEC_VAR_CLEARED_UNSPECIFIED
# error Using NVM_START_SEC_VAR_CLEARED_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
# error Using NVM_STOP_SEC_VAR_CLEARED_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_START_SEC_VAR_FAST_NO_INIT_8
# error Using NVM_START_SEC_VAR_FAST_NO_INIT_8 is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NVM_STOP_SEC_VAR_FAST_NO_INIT_8
# error Using NVM_STOP_SEC_VAR_FAST_NO_INIT_8 is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_START_SEC_CODE
# error Using NvM_START_SEC_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_STOP_SEC_CODE
# error Using NvM_STOP_SEC_CODE is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_START_SEC_CONST_UNSPECIFIED
# error Using NvM_START_SEC_CONST_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_STOP_SEC_CONST_UNSPECIFIED
# error Using NvM_STOP_SEC_CONST_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_START_SEC_VAR_NOINIT_UNSPECIFIED
# error Using NvM_START_SEC_VAR_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# error Using NvM_STOP_SEC_VAR_NOINIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_START_SEC_VAR_INIT_UNSPECIFIED
# error Using NvM_START_SEC_VAR_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_STOP_SEC_VAR_INIT_UNSPECIFIED
# error Using NvM_STOP_SEC_VAR_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# error Using NvM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif
#ifdef NvM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# error Using NvM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED is not possible as multiple memory allocation keywords are defined. Include the MemMap separately for each one.
#endif

#ifdef MEMMAP_ERROR
# error No MemMap section found in NvM_MemMap.h. Check your section define for validity.
#endif


/**********************************************************************************************************************
 *  POST USER CONFIG FILE
 *********************************************************************************************************************/

/* User Config File Start */

/* User Config File End */

#endif
/**********************************************************************************************************************
 *  END OF FILE: NvM_MemMap.h
 *********************************************************************************************************************/

