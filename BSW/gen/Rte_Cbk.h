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
 *             File:  Rte_Cbk.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Callback header file
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CBK_H
# define RTE_CBK_H

# include "Com.h"


# include "Rte_Type.h"

# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * COM Callbacks for Rx Indication
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx(void);

/**********************************************************************************************************************
 * COM Callbacks for Rx Timeout Notification
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx(void);

/**********************************************************************************************************************
 * NvM-Callback for synchronous copying of the mirror buffer to and from the NvM
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SetMirror_NvM_SWC_NVBlockDescriptor_UserData1(P2CONST(void, AUTOMATIC, RTE_APPL_DATA) NVMBuffer); /* PRQA S 3112 */ /* MD_Rte_3112 */
FUNC(Std_ReturnType, RTE_CODE) Rte_GetMirror_NvM_SWC_NVBlockDescriptor_UserData1(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) NVMBuffer);

FUNC(Std_ReturnType, RTE_CODE) Rte_SetMirror_NvM_SWC_NVBlockDescriptor_UserData2(P2CONST(void, AUTOMATIC, RTE_APPL_DATA) NVMBuffer); /* PRQA S 3112 */ /* MD_Rte_3112 */
FUNC(Std_ReturnType, RTE_CODE) Rte_GetMirror_NvM_SWC_NVBlockDescriptor_UserData2(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) NVMBuffer);


/**********************************************************************************************************************
 * NvM-Callbacks for forwarding notifications from the NvM to the SW-Cs
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_NvMNotifyJobFinished_NvM_SWC_NVBlockDescriptor_UserData1(uint8 ServiceId, NvM_RequestResultType JobResult);

FUNC(Std_ReturnType, RTE_CODE) Rte_NvMNotifyJobFinished_NvM_SWC_NVBlockDescriptor_UserData2(uint8 ServiceId, NvM_RequestResultType JobResult);


/**********************************************************************************************************************
 * RTE Schedulable entity for COM-Access from different partitions
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_ComSendSignalProxyPeriodic(void);

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#endif /* RTE_CBK_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3112:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

*/
