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
 *            Module: Nm
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Nm_MemMap.h
 *   Generation Time: 2025-08-07 16:37:03
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *       Description: This File is a template for the MemMap.h 
 *                    This file has to be extended with the memory section defines required for your module.
 *
 *********************************************************************************************************************/


/* The following memory section (_TEMP) is created as a workaround due to a library issue.
 * Please don't use the _TEMP section for memory mapping, but use the corresponding section START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8 below. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_8>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_8
  #undef NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8_TEMP
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
 
/* The following memory section (_TEMP) is created as a workaround due to a library issue.
 * Please don't use the _TEMP section for memory mapping, but use the corresponding section START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED below. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_UNSPECIFIED
  #undef NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED_TEMP
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
 
/* The following memory section (_TEMP) is created as a workaround due to a library issue.
 * Please don't use the _TEMP section for memory mapping, but use the corresponding section STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8 below. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_8>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_8
  #undef NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8_TEMP
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
 
/* The following memory section (_TEMP) is created as a workaround due to a library issue.
 * Please don't use the _TEMP section for memory mapping, but use the corresponding section STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED below. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_UNSPECIFIED
  #undef NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED_TEMP
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
 
 

/**********************************************************************************************************************
 *   NM START
 **********************************************************************************************************************/

# define MEMMAP_ERROR

/*****************  CODE sections   **********************************************************************************/  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_CODE>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_CODE
  #undef NM_START_SEC_CODE   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_CODE
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_CODE>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_CODE
  #undef NM_STOP_SEC_CODE   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_CODE
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/*****************  CONST sections   *********************************************************************************/  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_CONST_8>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_CONST_8
  #undef NM_START_SEC_CONST_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_CONST_8
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_CONST_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_CONST_UNSPECIFIED
  #undef NM_START_SEC_CONST_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_CONST_UNSPECIFIED
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_CONST_8>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_CONST_8
  #undef NM_STOP_SEC_CONST_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_CONST
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_CONST_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_CONST_UNSPECIFIED
  #undef NM_STOP_SEC_CONST_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_CONST
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/*****************  VAR sections   ***********************************************************************************/  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_VAR_INIT_8>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_VAR_INIT_8
  #undef NM_START_SEC_VAR_INIT_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_VAR_INIT_8
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_VAR_INIT_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_VAR_INIT_UNSPECIFIED
  #undef NM_START_SEC_VAR_INIT_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_VAR_NO_INIT_32>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_VAR_NO_INIT_32
  #undef NM_START_SEC_VAR_NO_INIT_32   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_VAR_NO_INIT_32
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_VAR_NO_INIT_8>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_VAR_NO_INIT_8
  #undef NM_START_SEC_VAR_NO_INIT_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_VAR_NO_INIT_8
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_VAR_INIT_8>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_VAR_INIT_8
  #undef NM_STOP_SEC_VAR_INIT_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_VAR_INIT_UNSPECIFIED>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef NM_STOP_SEC_VAR_INIT_UNSPECIFIED   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_VAR_NO_INIT_32>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_VAR_NO_INIT_32
  #undef NM_STOP_SEC_VAR_NO_INIT_32   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_VAR_NO_INIT_8>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_VAR_NO_INIT_8
  #undef NM_STOP_SEC_VAR_NO_INIT_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_VAR_NOINIT_8>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_VAR_NOINIT_8
  #undef NM_STOP_SEC_VAR_NOINIT_8   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8_TEMP>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8_TEMP
  #undef NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8_TEMP   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_8
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED_TEMP>
 *********************************************************************************************************************/
#ifdef  NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED_TEMP
  #undef NM_START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED_TEMP   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define START_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NO_INIT_UNSPECIFIED
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8_TEMP>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8_TEMP
  #undef NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_8_TEMP   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED_TEMP>
 *********************************************************************************************************************/
#ifdef  NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED_TEMP
  #undef NM_STOP_SEC_NM_SINGLE_PARTITION_VAR_NOCACHE_NOINIT_UNSPECIFIED_TEMP   /* PRQA S 0841 */  /* MD_MSR_Undef */
  #define STOP_SEC_VAR
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

#include "MemMap_Common.h"
/**********************************************************************************************************************
 *   NM END
 **********************************************************************************************************************/

