/**********************************************************************************************************************
 *  FILE REQUIRES USER MODIFICATIONS
 *  Template Scope: sections marked with Start and End comments
 *  -------------------------------------------------------------------------------------------------------------------
 *  This file includes template code that must be completed and/or adapted during BSW integration.
 *  The template code is incomplete and only intended for providing a signature and an empty implementation.
 *  It is neither intended nor qualified for use in series production without applying suitable quality measures.
 *  The template code must be completed as described in the instructions given within this file and/or in the.
 *  Technical Reference.
 *  The completed implementation must be tested with diligent care and must comply with all quality requirements which.
 *  are necessary according to the state of the art before its use.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  DIAG_SWC.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  DIAG_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <DIAG_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Dcm_NegativeResponseCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_OpStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_OperationCycleStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_UdsStatusByteType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NvM_RequestResultType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_DIAG_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Dem.h"
#include "Adc_Sample.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType: Integer in interval [0...65535]
 * Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectType: Integer in interval [0...65535]
 * Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType: Integer in interval [0...65535]
 * Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectType: Integer in interval [0...65535]
 * Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType: Integer in interval [0...65535]
 * Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectType: Integer in interval [0...65535]
 * Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType: Integer in interval [0...65535]
 * Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectType: Integer in interval [0...65535]
 * Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType: Integer in interval [0...65535]
 * Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectType: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_AUTHENTICATIONREQUIRED (52U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_CVF_INVALIDTIMEPERIOD (80U)
 *   DCM_E_CVF_INVALIDSIGNATURE (81U)
 *   DCM_E_CVF_INVALIDCHAINOFTRUST (82U)
 *   DCM_E_CVF_INVALIDTYPE (83U)
 *   DCM_E_CVF_INVALIDFORMAT (84U)
 *   DCM_E_CVF_INVALIDCONTENT (85U)
 *   DCM_E_CVF_INVALIDSCOPE (86U)
 *   DCM_E_CVF_INVALIDCERTIFICATEREVOKED (87U)
 *   DCM_E_OWNERSHIPVERIFICATIONFAILED (88U)
 *   DCM_E_CHALLENGECALCULATIONFAILED (89U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 *   DCM_E_VMSCNC_0 (240U)
 *   DCM_E_VMSCNC_1 (241U)
 *   DCM_E_VMSCNC_2 (242U)
 *   DCM_E_VMSCNC_3 (243U)
 *   DCM_E_VMSCNC_4 (244U)
 *   DCM_E_VMSCNC_5 (245U)
 *   DCM_E_VMSCNC_6 (246U)
 *   DCM_E_VMSCNC_7 (247U)
 *   DCM_E_VMSCNC_8 (248U)
 *   DCM_E_VMSCNC_9 (249U)
 *   DCM_E_VMSCNC_A (250U)
 *   DCM_E_VMSCNC_B (251U)
 *   DCM_E_VMSCNC_C (252U)
 *   DCM_E_VMSCNC_D (253U)
 *   DCM_E_VMSCNC_E (254U)
 * Dcm_OpStatusType: Enumeration of integer in interval [0...64] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 *   DCM_FORCE_RCRRP_NOT_OK (64U)
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 *   DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED (5U)
 *   DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED (6U)
 *   DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED (7U)
 *   DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED (8U)
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...1] with enumerators
 *   DEM_CYCLE_STATE_START (0U)
 *   DEM_CYCLE_STATE_END (1U)
 * Dem_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_UDS_STATUS_TF (1U)
 *   DEM_UDS_STATUS_TF_BflMask 1U (0b00000001)
 *   DEM_UDS_STATUS_TF_BflPn 0
 *   DEM_UDS_STATUS_TF_BflLn 1
 *   DEM_UDS_STATUS_TFTOC (2U)
 *   DEM_UDS_STATUS_TFTOC_BflMask 2U (0b00000010)
 *   DEM_UDS_STATUS_TFTOC_BflPn 1
 *   DEM_UDS_STATUS_TFTOC_BflLn 1
 *   DEM_UDS_STATUS_PDTC (4U)
 *   DEM_UDS_STATUS_PDTC_BflMask 4U (0b00000100)
 *   DEM_UDS_STATUS_PDTC_BflPn 2
 *   DEM_UDS_STATUS_PDTC_BflLn 1
 *   DEM_UDS_STATUS_CDTC (8U)
 *   DEM_UDS_STATUS_CDTC_BflMask 8U (0b00001000)
 *   DEM_UDS_STATUS_CDTC_BflPn 3
 *   DEM_UDS_STATUS_CDTC_BflLn 1
 *   DEM_UDS_STATUS_TNCSLC (16U)
 *   DEM_UDS_STATUS_TNCSLC_BflMask 16U (0b00010000)
 *   DEM_UDS_STATUS_TNCSLC_BflPn 4
 *   DEM_UDS_STATUS_TNCSLC_BflLn 1
 *   DEM_UDS_STATUS_TFSLC (32U)
 *   DEM_UDS_STATUS_TFSLC_BflMask 32U (0b00100000)
 *   DEM_UDS_STATUS_TFSLC_BflPn 5
 *   DEM_UDS_STATUS_TFSLC_BflLn 1
 *   DEM_UDS_STATUS_TNCTOC (64U)
 *   DEM_UDS_STATUS_TNCTOC_BflMask 64U (0b01000000)
 *   DEM_UDS_STATUS_TNCTOC_BflPn 6
 *   DEM_UDS_STATUS_TNCTOC_BflLn 1
 *   DEM_UDS_STATUS_WIR (128U)
 *   DEM_UDS_STATUS_WIR_BflMask 128U (0b10000000)
 *   DEM_UDS_STATUS_WIR_BflPn 7
 *   DEM_UDS_STATUS_WIR_BflLn 1
 * NvM_RequestResultType: Enumeration of integer in interval [0...8] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * DataArrayType_uint8_2: Array with 2 element(s) of type uint8
 * Dcm_Data2ByteType: Array with 2 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 * NvM_Arry4Bytes: Array with 4 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock(void)
 *   uint8 *Rte_Pim_NvBlockNeed_DiagDID_00_MirrorBlock(void)
 *     Returnvalue: uint8* is of type NvM_Arry4Bytes
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint8 Rte_CData_NvBlockNeed_AttemptCounter_DefaultValue(void)
 *   uint8 *Rte_CData_NvBlockNeed_DiagDID_00_DefaultValue(void)
 *     Returnvalue: uint8* is of type NvM_Arry4Bytes
 *
 *********************************************************************************************************************/


#define DIAG_SWC_START_SEC_CODE
#include "DIAG_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xf1a0_F1A0_Data_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xf1a0_F1A0_Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xf1a0_F1A0_Data_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xf1a0_F1A0_Data_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xf1a0_F1A0_Data_ReadData_doc
 *********************************************************************************************************************/
uint8 FrezeFram = 0;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) CBReadData_DID_0xf1a0_F1A0_Data_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xf1a0_F1A0_Data_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = FrezeFram++;
  Data[1] = FrezeFram++;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xf1a1_F1A1_Data_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xf1a1_F1A1_Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xf1a1_F1A1_Data_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xf1a1_F1A1_Data_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xf1a1_F1A1_Data_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) CBReadData_DID_0xf1a1_F1A1_Data_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xf1a1_F1A1_Data_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = FrezeFram++;
  Data[1] = FrezeFram++;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xf1a2_F1A2_Data_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xf1a2_F1A2_Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xf1a2_F1A2_Data_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xf1a2_F1A2_Data_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xf1a2_F1A2_Data_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) CBReadData_DID_0xf1a2_F1A2_Data_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xf1a2_F1A2_Data_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = FrezeFram++;
  Data[1] = FrezeFram++;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xf1a3_F1A3_Data_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xf1a3_F1A3_Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xf1a3_F1A3_Data_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xf1a3_F1A3_Data_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xf1a3_F1A3_Data_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) CBReadData_DID_0xf1a3_F1A3_Data_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xf1a3_F1A3_Data_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = FrezeFram++;
  Data[1] = FrezeFram++;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DIAG_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_OpCycle_IgnitionCycle_GetOperationCycleState(Dem_OperationCycleStateType *CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_OpCycle_OBDDrivingCycle_GetOperationCycleState(Dem_OperationCycleStateType *CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_OpCycle_OBDDrivingCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_OpCycle_PowerCycle_GetOperationCycleState(Dem_OperationCycleStateType *CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_OpCycle_PowerCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_OpCycle_WarmUpCycle_GetOperationCycleState(Dem_OperationCycleStateType *CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_OpCycle_WarmUpCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DIAG_SWC_Init_doc
 *********************************************************************************************************************/
#define DEM_NVM_BLOCK_CALCULATED    (FALSE)

#if(DEM_NVM_BLOCK_CALCULATED)
uint8 len1 = 0;
uint8 len2 = 0;
uint8 len3 = 0;
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DIAG_SWC_CODE) DIAG_SWC_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DIAG_SWC_Init
 *********************************************************************************************************************/
//  Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
//  Rte_Call_OpCycle_OBDDrivingCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
//  Rte_Call_OpCycle_PowerCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
//  Rte_Call_OpCycle_WarmUpCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);

  #if(DEM_NVM_BLOCK_CALCULATED)
  len1 = sizeof( Dem_Cfg_PrimaryEntry_0 );
  len2 = sizeof( Dem_Cfg_StatusData );
  len3 = sizeof( Dem_Cfg_AdminData );
  #endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DTCMonitorRunnable_10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_Event_DTC_0x000002_GetEventStatus(Dem_UdsStatusByteType *UDSStatusByte)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0x000002_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0x000003_GetEventStatus(Dem_UdsStatusByteType *UDSStatusByte)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0x000003_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DTCMonitorRunnable_10ms_doc
 *********************************************************************************************************************/
uint8 DTC_FailCnt     = 0;
uint8 DTC_PassCnt     = 0;
uint8 DTC_Storage     = 0;
uint8 DTC_Status_0002 = 0;
uint8 DTC_Status_0003 = 0;
uint8 CurOpCycleSts   = 0;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DIAG_SWC_CODE) DTCMonitorRunnable_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DTCMonitorRunnable_10ms
 *********************************************************************************************************************/
  if( IoHwGetKL15Level() == KL15_HIGH_LEVEL )//( Dio_ReadChannel(DioConf_DioChannel_DioChannel_P33_12_KL15) == 0 )  
  {
    Rte_Call_OpCycle_PowerCycle_GetOperationCycleState(&CurOpCycleSts);
    if( CurOpCycleSts != DEM_CYCLE_STATE_START )
    {
      Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
      Rte_Call_OpCycle_OBDDrivingCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
      Rte_Call_OpCycle_PowerCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
      Rte_Call_OpCycle_WarmUpCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
    }
  }
  else
  {
    Rte_Call_OpCycle_PowerCycle_GetOperationCycleState(&CurOpCycleSts);
    if( CurOpCycleSts != DEM_CYCLE_STATE_END )
    {
      Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
      Rte_Call_OpCycle_OBDDrivingCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
      Rte_Call_OpCycle_PowerCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
      Rte_Call_OpCycle_WarmUpCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
    }
  }

 if(  DTC_FailCnt > 0 )
  {
    Rte_Call_Event_DTC_0x000002_SetEventStatus(DEM_EVENT_STATUS_FAILED);
    Rte_Call_Event_DTC_0x000003_SetEventStatus(DEM_EVENT_STATUS_FAILED);
//    DTC_FailCnt--;
  }

  if(  DTC_PassCnt > 0 )
  {
    Rte_Call_Event_DTC_0x000002_SetEventStatus(DEM_EVENT_STATUS_PASSED);
    Rte_Call_Event_DTC_0x000003_SetEventStatus(DEM_EVENT_STATUS_PASSED);
//    DTC_PassCnt--;
  }
  Rte_Call_Event_DTC_0x000002_GetEventStatus(&DTC_Status_0002);
  Rte_Call_Event_DTC_0x000003_GetEventStatus(&DTC_Status_0003);


  if( DTC_Storage > 0 )
  {
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_VCU_DID_00_DataRecord_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_VCU_DID_00_DataRecord>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_VCU_DID_00_DataRecord_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_VCU_DID_00_DataRecord_DCM_E_PENDING
 *   RTE_E_DataServices_VCU_DID_00_DataRecord_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_VCU_DID_00_DataRecord_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) DataServices_VCU_DID_00_DataRecord_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_VCU_DID_00_DataRecord_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_VCU_DID_00_DataRecord_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_VCU_DID_00_DataRecord>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_VCU_DID_00_DataRecord_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_VCU_DID_00_DataRecord_DCM_E_PENDING
 *   RTE_E_DataServices_VCU_DID_00_DataRecord_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_VCU_DID_00_DataRecord_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) DataServices_VCU_DID_00_DataRecord_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_VCU_DID_00_DataRecord_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[0];
  Data[1] = Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[1];
  Data[2] = Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[2];
  Data[3] = Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[3];
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_VCU_DID_00_DataRecord_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_VCU_DID_00_DataRecord>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_VCU_DID_00_DataRecord_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_VCU_DID_00_DataRecord_DCM_E_PENDING
 *   RTE_E_DataServices_VCU_DID_00_DataRecord_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_VCU_DID_00_DataRecord_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) DataServices_VCU_DID_00_DataRecord_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_VCU_DID_00_DataRecord_WriteData (returns application error)
 *********************************************************************************************************************/
  Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[0] = Data[0];
  Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[1] = Data[1];
  Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[2] = Data[2];
  Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[3] = Data[3];
  /* Write immediately*/
//  Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_WriteBlock(Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock);

  /* Write While NvM_WriteAll()*/
  Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_SetRamBlockStatus(TRUE);

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_Vcu_Roution_00_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_Vcu_Roution_00>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_Vcu_Roution_00_RequestResults(Dcm_OpStatusType OpStatus, Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectType *Out_New_Data_Object, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Vcu_Roution_00_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_Vcu_Roution_00_DCM_E_PENDING
 *   RTE_E_RoutineServices_Vcu_Roution_00_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Vcu_Roution_00_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) RoutineServices_Vcu_Roution_00_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Out_New_Data_Object, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Vcu_Roution_00_RequestResults (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_Vcu_Roution_00_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_Vcu_Roution_00>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_Vcu_Roution_00_Start(Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectType In_New_Data_Object, Dcm_OpStatusType OpStatus, Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectType *Out_New_Data_Object, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Vcu_Roution_00_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_Vcu_Roution_00_DCM_E_PENDING
 *   RTE_E_RoutineServices_Vcu_Roution_00_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Vcu_Roution_00_Start_doc
 *********************************************************************************************************************/
uint16 LED_In = 0XFF;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) RoutineServices_Vcu_Roution_00_Start(Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectType In_New_Data_Object, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Out_New_Data_Object, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Vcu_Roution_00_Start (returns application error)
 *********************************************************************************************************************/
  LED_In = In_New_Data_Object;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_Vcu_Roution_00_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_Vcu_Roution_00>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_Vcu_Roution_00_Stop(Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectType In_New_Data_Object, Dcm_OpStatusType OpStatus, Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectType *Out_New_Data_Object, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Vcu_Roution_00_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_Vcu_Roution_00_DCM_E_PENDING
 *   RTE_E_RoutineServices_Vcu_Roution_00_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Vcu_Roution_00_Stop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) RoutineServices_Vcu_Roution_00_Stop(Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectType In_New_Data_Object, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Out_New_Data_Object, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Vcu_Roution_00_Stop (returns application error)
 *********************************************************************************************************************/
  LED_In = 0xFF;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_Level_3_CompareKey
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CompareKey> of PortPrototype <SecurityAccess_Level_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SecurityAccess_Level_3_CompareKey(const uint8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Key: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_Level_3_DCM_E_COMPARE_KEY_FAILED
 *   RTE_E_SecurityAccess_Level_3_DCM_E_PENDING
 *   RTE_E_SecurityAccess_Level_3_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level_3_CompareKey_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) SecurityAccess_Level_3_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level_3_CompareKey (returns application error)
 *********************************************************************************************************************/
  uint16 keytmp = 0x00U; 
  keytmp = Key[0] + (Key[1]<<8);
  if( keytmp == 0x2728 )
  {
    return 0;
  }
  else
  {
    return 1;
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_Level_3_GetSecurityAttemptCounter
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetSecurityAttemptCounter> of PortPrototype <SecurityAccess_Level_3>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SecurityAccess_Level_3_GetSecurityAttemptCounter(Dcm_OpStatusType OpStatus, uint8 *AttemptCounter)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_Level_3_DCM_E_PENDING
 *   RTE_E_SecurityAccess_Level_3_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level_3_GetSecurityAttemptCounter_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) SecurityAccess_Level_3_GetSecurityAttemptCounter(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) AttemptCounter) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level_3_GetSecurityAttemptCounter (returns application error)
 *********************************************************************************************************************/
  *AttemptCounter = *Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock();
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_Level_3_GetSeed
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetSeed> of PortPrototype <SecurityAccess_Level_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SecurityAccess_Level_3_GetSeed(const uint8 *SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, uint8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument SecurityAccessDataRecord: uint8* is of type Dcm_Data2ByteType
 *     Argument Seed: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_Level_3_DCM_E_PENDING
 *   RTE_E_SecurityAccess_Level_3_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level_3_GetSeed_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) SecurityAccess_Level_3_GetSeed(P2CONST(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level_3_GetSeed (returns application error)
 *********************************************************************************************************************/
  *Seed = 0x27;

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_Level_3_SetSecurityAttemptCounter
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetSecurityAttemptCounter> of PortPrototype <SecurityAccess_Level_3>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SecurityAccess_Level_3_SetSecurityAttemptCounter(Dcm_OpStatusType OpStatus, uint8 AttemptCounter)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_Level_3_DCM_E_PENDING
 *   RTE_E_SecurityAccess_Level_3_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level_3_SetSecurityAttemptCounter_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DIAG_SWC_CODE) SecurityAccess_Level_3_SetSecurityAttemptCounter(Dcm_OpStatusType OpStatus, uint8 AttemptCounter) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level_3_SetSecurityAttemptCounter (returns application error)
 *********************************************************************************************************************/
  *Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock() = AttemptCounter;
  Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_WriteBlock(Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock());
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DIAG_SWC_STOP_SEC_CODE
#include "DIAG_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
