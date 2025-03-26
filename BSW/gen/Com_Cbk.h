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
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cbk.h
 *   Generation Time: 2025-03-26 14:33:00
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#if !defined (COM_CBK_H)
# define COM_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Cot.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/



/**
 * \defgroup ComHandleIdsComRxPdu Handle IDs of handle space ComRxPdu.
 * \brief Rx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_EXV2_Status_oLIN00_d5e93929_Rx                0u
#define ComConf_ComIPdu_EXV_1_VCU_oLIN00_69d4ef5f_Rx                  1u
#define ComConf_ComIPdu_EXV_2_VCU_oLIN00_1e4a3daf_Rx                  2u
#define ComConf_ComIPdu_HVCH_Rsp01_oLIN00_a6e33eef_Rx                 3u
#define ComConf_ComIPdu_HVCH_Rsp02_oLIN00_286c390c_Rx                 4u
#define ComConf_ComIPdu_PMP2_Sts_oLIN00_cab90b6b_Rx                   5u
#define ComConf_ComIPdu_PMP3_Sts_oLIN00_511c4704_Rx                   6u
#define ComConf_ComIPdu_PNC_ComIPdu_CanNm2Com_Rx                      7u
#define ComConf_ComIPdu_SVA_VCU_STD_oLIN00_4526aa1c_Rx                8u
#define ComConf_ComIPdu_VCU_Minor_03_oKAMA_FP_EPT_0303_4d74a41f_Rx    9u
#define ComConf_ComIPdu_VcuCan03RxMsg1_oTC37X_VCU_CAN03_77e3a75f_Rx   10u
#define ComConf_ComIPdu_VcuCan03RxMsg2_oTC37X_VCU_CAN03_9d657a3d_Rx   11u
#define ComConf_ComIPdu_VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx        12u
#define ComConf_ComIPdu_VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx        13u
#define ComConf_ComIPdu_VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx        14u
#define ComConf_ComIPdu_VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx        15u
/**\} */

/**
 * \defgroup ComHandleIdsComTxPdu Handle IDs of handle space ComTxPdu.
 * \brief Tx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_EDCU_EXV2_oLIN00_1f8750a5_Tx                  0u
#define ComConf_ComIPdu_PMP_Cmd_oLIN00_3912b28b_Tx                    1u
#define ComConf_ComIPdu_TCU_HVCH_Cmd_oLIN00_385d5651_Tx               2u
#define ComConf_ComIPdu_VCU_EXV_1_oLIN00_50eec975_Tx                  3u
#define ComConf_ComIPdu_VCU_EXV_2_oLIN00_de61ce96_Tx                  4u
#define ComConf_ComIPdu_VCU_Minor_01_oKAMA_FP_EPT_0303_39c0a2ee_Tx    5u
#define ComConf_ComIPdu_VCU_Minor_02_oKAMA_FP_EPT_0303_9a962447_Tx    6u
#define ComConf_ComIPdu_VCU_SVA_CMD_oLIN00_756d14f6_Tx                7u
#define ComConf_ComIPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN00_c6a20a7f_Tx   8u
#define ComConf_ComIPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN01_b1a53ae9_Tx   9u
#define ComConf_ComIPdu_VCU_Tx_51Ch_NM_oTC37X_VCU_CAN03_5fab5bc5_Tx   10u
#define ComConf_ComIPdu_VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx     11u
#define ComConf_ComIPdu_VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx     12u
#define ComConf_ComIPdu_VcuCan03TxMsg1_oTC37X_VCU_CAN03_9a29d525_Tx   13u
#define ComConf_ComIPdu_VcuCan03TxMsg2_oTC37X_VCU_CAN03_70af0847_Tx   14u
#define ComConf_ComIPdu_VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx      15u
#define ComConf_ComIPdu_VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx      16u
#define ComConf_ComIPdu_VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx      17u
#define ComConf_ComIPdu_VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx      18u
#define ComConf_ComIPdu_VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx      19u
#define ComConf_ComIPdu_VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx      20u
#define ComConf_ComIPdu_VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx      21u
#define ComConf_ComIPdu_VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx      22u
#define ComConf_ComIPdu_VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx        23u
#define ComConf_ComIPdu_VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx        24u
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /*MD_MSR_MemMap */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/** \brief        This function is called by the lower layer after an I-PDU has been received.
    \param[in]    RxPduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                               Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param[in]    PduInfoPtr   Payload information of the received I-PDU (pointer to data and data length).
    \return       none
    \context      The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used.
    \synchronous  TRUE
    \reentrant    TRUE, for different Handles
    \trace        SPEC-2737026
    \note         The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);


/**********************************************************************************************************************
  Com_TriggerTransmit
**********************************************************************************************************************/
/** \brief          This function is called by the lower layer when an AUTOSAR COM I-PDU shall be transmitted.
                    Within this function, AUTOSAR COM shall copy the contents of its I-PDU transmit buffer
                    to the L-PDU buffer given by SduPtr.
                    Use case:
                    This function is used e.g. by the LIN Master for sending out a LIN frame. In this case, the trigger transmit
                    can be initiated by the Master schedule table itself or a received LIN header.
                    This function is also used by the FlexRay Interface for requesting PDUs to be sent in static part
                    (synchronous to the FlexRay global time). Once the I-PDU has been successfully sent by the lower layer
                    (PDU-Router), the lower layer must call Com_TxConfirmation().
    \param[in]      TxPduId       ID of AUTOSAR COM I-PDU that is requested to be transmitted by AUTOSAR COM.
    \param[in,out]  PduInfoPtr    Contains a pointer to a buffer (SduDataPtr) where the SDU
                                  data shall be copied to, and the available buffer size in SduLengh.
                                  On return, the service will indicate the length of the copied SDU
                                  data in SduLength.
    \return         E_OK          SDU has been copied and SduLength indicates the number of copied bytes.
    \return         E_NOT_OK      No data has been copied, because
                                  Com is not initialized
                                  or TxPduId is not valid
                                  or PduInfoPtr is NULL_PTR
                                  or SduDataPtr is NULL_PTR
                                  or SduLength is too small.
    \context        TASK|ISR2
    \synchronous    TRUE
    \reentrant      TRUE, for different Handles
    \trace          SPEC-2737022, SPEC-2737023, SPEC-2737024
    \note           The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr);


#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_MemMap */

#endif  /* COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cbk.h
**********************************************************************************************************************/

