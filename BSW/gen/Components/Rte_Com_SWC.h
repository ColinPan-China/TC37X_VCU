/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_Com_SWC.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <Com_SWC>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_COM_SWC_H
# define RTE_COM_SWC_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Com_SWC_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EXT1_Valid_EXT1_Valid (0U)
#  define Rte_InitValue_EXT2_Valid_EXT2_Valid (0U)
#  define Rte_InitValue_EXT3_Valid_EXT3_Valid (0U)
#  define Rte_InitValue_EXT4_Valid_EXT4_Valid (0U)
#  define Rte_InitValue_EXT_A_IN1_EXT_A_IN1 (0)
#  define Rte_InitValue_EXT_A_IN2_EXT_A_IN2 (0)
#  define Rte_InitValue_EXT_A_IN3_EXT_A_IN3 (0)
#  define Rte_InitValue_EXT_A_IN4_EXT_A_IN4 (0)
#  define Rte_InitValue_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0 (0)
#  define Rte_InitValue_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1 (0)
#  define Rte_InitValue_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2 (0)
#  define Rte_InitValue_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3 (0)
#  define Rte_InitValue_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0 (0)
#  define Rte_InitValue_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1 (0)
#  define Rte_InitValue_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2 (0)
#  define Rte_InitValue_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3 (0)
#  define Rte_InitValue_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0 (0)
#  define Rte_InitValue_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1 (0)
#  define Rte_InitValue_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2 (0)
#  define Rte_InitValue_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3 (0)
#  define Rte_InitValue_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0 (0)
#  define Rte_InitValue_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1 (0)
#  define Rte_InitValue_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2 (0)
#  define Rte_InitValue_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3 (0)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0(P2VAR(VcuRxMsg1_Sig0, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1(P2VAR(VcuRxMsg1_Sig1, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2(P2VAR(VcuRxMsg1_Sig2, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3(P2VAR(VcuRxMsg1_Sig3, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0(P2VAR(VcuRxMsg2_Sig0, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1(P2VAR(VcuRxMsg2_Sig1, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2(P2VAR(VcuRxMsg2_Sig2, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Com_SWC_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3(P2VAR(VcuRxMsg2_Sig3, AUTOMATIC, RTE_COM_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT1_Valid_EXT1_Valid(EXT1_Valid data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT2_Valid_EXT2_Valid(EXT2_Valid data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT3_Valid_EXT3_Valid(EXT3_Valid data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT4_Valid_EXT4_Valid(EXT4_Valid data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_A_IN1_EXT_A_IN1(EXT_A_IN1 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_A_IN2_EXT_A_IN2(EXT_A_IN2 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_A_IN3_EXT_A_IN3(EXT_A_IN3 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_A_IN4_EXT_A_IN4(EXT_A_IN4 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0(VcuTxMsg1_Sig0 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1(VcuTxMsg1_Sig1 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2(VcuTxMsg1_Sig2 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3(VcuTxMsg1_Sig3 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0(VcuTxMsg2_Sig0 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1(VcuTxMsg2_Sig1 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2(VcuTxMsg2_Sig2 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3(VcuTxMsg2_Sig3 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0 Rte_Read_Com_SWC_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0
#  define Rte_Read_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1 Rte_Read_Com_SWC_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1
#  define Rte_Read_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2 Rte_Read_Com_SWC_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2
#  define Rte_Read_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3 Rte_Read_Com_SWC_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3
#  define Rte_Read_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0 Rte_Read_Com_SWC_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0
#  define Rte_Read_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1 Rte_Read_Com_SWC_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1
#  define Rte_Read_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2 Rte_Read_Com_SWC_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2
#  define Rte_Read_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3 Rte_Read_Com_SWC_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_EXT1_Valid_EXT1_Valid Rte_Write_Com_SWC_EXT1_Valid_EXT1_Valid
#  define Rte_Write_EXT2_Valid_EXT2_Valid Rte_Write_Com_SWC_EXT2_Valid_EXT2_Valid
#  define Rte_Write_EXT3_Valid_EXT3_Valid Rte_Write_Com_SWC_EXT3_Valid_EXT3_Valid
#  define Rte_Write_EXT4_Valid_EXT4_Valid Rte_Write_Com_SWC_EXT4_Valid_EXT4_Valid
#  define Rte_Write_EXT_A_IN1_EXT_A_IN1 Rte_Write_Com_SWC_EXT_A_IN1_EXT_A_IN1
#  define Rte_Write_EXT_A_IN2_EXT_A_IN2 Rte_Write_Com_SWC_EXT_A_IN2_EXT_A_IN2
#  define Rte_Write_EXT_A_IN3_EXT_A_IN3 Rte_Write_Com_SWC_EXT_A_IN3_EXT_A_IN3
#  define Rte_Write_EXT_A_IN4_EXT_A_IN4 Rte_Write_Com_SWC_EXT_A_IN4_EXT_A_IN4
#  define Rte_Write_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0 Rte_Write_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0
#  define Rte_Write_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1 Rte_Write_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1
#  define Rte_Write_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2 Rte_Write_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2
#  define Rte_Write_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3 Rte_Write_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3
#  define Rte_Write_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0 Rte_Write_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0
#  define Rte_Write_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1 Rte_Write_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1
#  define Rte_Write_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2 Rte_Write_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2
#  define Rte_Write_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3 Rte_Write_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3


# endif /* !defined(RTE_CORE) */


# define Com_SWC_START_SEC_CODE
# include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Com_Runnable_2ms Com_Runnable_2ms
#  define RTE_RUNNABLE_Rte_Msg200h_Rx_Notification Rte_Msg200h_Rx_Notification
#  define RTE_RUNNABLE_Rte_Msg201h_Rx_Notification Rte_Msg201h_Rx_Notification
# endif

FUNC(void, Com_SWC_CODE) Com_Runnable_2ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, Com_SWC_CODE) Rte_Msg200h_Rx_Notification(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, Com_SWC_CODE) Rte_Msg201h_Rx_Notification(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define Com_SWC_STOP_SEC_CODE
# include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_COM_SWC_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
