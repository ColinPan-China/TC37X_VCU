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
 *             File:  CtAp_DCComM.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_DCComM
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_DCComM>
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
 * BCL_ChargeMode
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BCL_CurrentRequire
 *   float32 corresponds to the IEEE single-precision 32-bit floating point type
 *      [IEEE 754-1985]. The basic value space of float32 consists of the values 
 *      m * 2^e, where m is an integer whose absolute value is less than 2^24, 
 *      and e is an integer between -149 and 104, inclusive. In addition to the basic
 *      value space described above, the value space of float32 also contains the 
 *      following special values: positive and negative zero, positive and negative 
 *      infinity and not-a-number. The order-relation on float32 is: 
 *      x < y if y - x is positive. Positive zero is greater than negative zero.
 *      Not-a-number equals itself and is greater than all float values including positive infinity. 
 *      
 *      float32 values have a lexical representation consisting of a mantissa followed, 
 *      optionally, by the character "E" or "e", followed by an exponent. The exponent
 *      must be an integer. The mantissa must be a decimal number. The representations
 *      for exponent and mantissa must follow the lexical rules for integer and decimal.
 *      If the "E" or "e" and the following exponent are omitted, an exponent value 
 *      of 0 is assumed. 
 *      
 *      The special values positive and negative zero, positive and negative infinity
 *      and not-a-number have lexical representations 0, -0, INF, -INF and NaN, 
 *      respectively. 
 *      
 *      For example, -1E4, 1267.43233E12, 12.78e-2, 12 and INF are all legal literals
 *      for float32.
 *
 * BCL_VolltageRequire
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCP_AllowChargeVoltageMax
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCP_AllowTempMax
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BCP_BatteryChargeVoltageMax
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCP_BatteryNominalEnergy
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCP_BatteryTotalVoltage
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCP_ChargeCurrentMax
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCP_SOC
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCS_BatteryVoltMax
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCS_BatteryVoltMaxGroup
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BCS_ChargeCurrentMeasure
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCS_ChargeVoltageMeasure
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCS_EstimatedTimeRemaining
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BCS_SOC
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BEM_ChargeAbortTimeout
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BEM_ChargeFinishTimeout
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BEM_ChargeStateTimeout
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BEM_ChargeStatisticsTimeout
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BEM_ChargerIdTimeout0
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BEM_ChargerIdTimeout1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BEM_TimesyncOrPowerTimeout
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BHM_AllowChargeVoltageMax
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BRM_BatteryChargeTimes
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * BRM_BatteryProductDay
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BRM_BatteryProductMonth
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BRM_BatteryProductYear
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BRM_BatteryProperty
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BRM_BatterySN
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * BRM_BatterySystemRatedCapacity
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BRM_BatterySystemRatedVoltage
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BRM_BatteryType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BRM_Manufacturer
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * BRM_ProtocolVersion
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * BRM_VehicleIdByte17
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BRO_BMSChargeReady
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSD_AbortSOC
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSD_BatteryTempMax
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSD_BatteryTempMin
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSD_BatteryVoltageMax
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BSD_BatteryVoltageMin
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * BSM_BatteryCurrentState
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_BatteryOutpuConnectorState
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_BatteryTempMax
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_BatteryTempMaxNo
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_BatteryTempMin
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_BatteryTempMinNo
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_BatteryTempState
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_BatteryVoltageMaxNo
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_BatteryVoltageState
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_ChargeEnable
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_InsulationState
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BSM_SOC
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortAchiveSOC
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortAchiveSingleVolt
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortAchiveTotalVolt
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortErrorCurrent
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortErrorVoltage
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortFaultBMSTemp
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortFaultBatteryTemp
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortFaultConnector
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortFaultConnectorTemp
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortFaultInsulation
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortFaultOther
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_AbortHVrelayfault
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_Abortdet2Voltexception
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BST_Abortmanoperate
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * CCS_OutputCurrent
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CCS_OutputVoltage
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CEM_BatteryChargeRequireTimeout
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * CHM_ProtocolVersion
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * CRM_RecognitionResult
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * CRO_ChargerReady
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * CSD_ChargerNo
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * CST_AbortAchiveCondition
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * CTS_Year
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Rte_DT_SG_BMS_BatInfor_02_SigGroup_0
 *   uint64 represents integers with a minimum value of 0 and a maximum value 
 *      of 18446744073709551615. The order-relation on uint64 is: x < y if y - x is positive.
 *      uint64 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 *********************************************************************************************************************/

#include "Rte_CtAp_DCComM.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
 * BCL_CurrentRequire: Real in interval [0...4000] with single precision
 * BCL_VolltageRequire: Integer in interval [0...7500]
 *   Unit: [A], Factor: 0.1, Offset: 0
 * BCP_AllowChargeVoltageMax: Integer in interval [0...7500]
 * BCP_AllowTempMax: Integer in interval [0...255]
 * BCP_BatteryChargeVoltageMax: Integer in interval [0...2400]
 * BCP_BatteryNominalEnergy: Integer in interval [0...10000]
 * BCP_BatteryTotalVoltage: Integer in interval [0...7500]
 * BCP_ChargeCurrentMax: Integer in interval [0...4000]
 * BCP_SOC: Integer in interval [0...1000]
 * BCS_BatteryVoltMax: Integer in interval [0...2400]
 * BCS_BatteryVoltMaxGroup: Integer in interval [0...15]
 * BCS_ChargeCurrentMeasure: Integer in interval [0...11500]
 * BCS_ChargeVoltageMeasure: Integer in interval [0...8000]
 * BCS_EstimatedTimeRemaining: Integer in interval [0...600]
 * BCS_SOC: Integer in interval [0...100]
 * BHM_AllowChargeVoltageMax: Integer in interval [0...7500]
 * BMS_AllowCellTemperature_1: Integer in interval [0...255]
 * BMS_AllowChagCurrent_1: Integer in interval [0...65535]
 * BMS_AverageCellTemp_2: Integer in interval [0...255]
 * BMS_BatChagSum_2: Integer in interval [0...65535]
 * BMS_BatProDatDay_1: Integer in interval [0...255]
 * BMS_BatProDatMonth_1: Integer in interval [0...255]
 * BMS_BatProDatYear_1: Integer in interval [0...255]
 * BMS_BatProRights_1: Boolean
 * BMS_CellNumbers: Integer in interval [0...255]
 * BMS_ComVersion: Integer in interval [0...65535]
 * BMS_DisplaySOC_1: Integer in interval [0...65535]
 * BMS_KeepWarmRequest_1: Boolean
 * BMS_LinkVoltage_1: Integer in interval [0...65535]
 * BMS_MaxCellTempNO_3: Integer in interval [0...255]
 * BMS_MaxCellTemp_3: Integer in interval [0...255]
 * BMS_MaxCellVoltageModuleNO_3: Integer in interval [0...255]
 * BMS_MaxCellVoltageNO_3: Integer in interval [0...255]
 * BMS_MaxCellVoltage_3: Integer in interval [0...65535]
 * BMS_MaxChagVoltage_1: Integer in interval [0...65535]
 * BMS_MinCellTempModuleNO: Integer in interval [0...255]
 * BMS_MinCellTempNO_3: Integer in interval [0...255]
 * BMS_MinCellTemp_3: Integer in interval [0...255]
 * BMS_MinCellVoltage_1: Integer in interval [0...65535]
 * BMS_PackVoltage_1: Integer in interval [0...65535]
 * BMS_RTC_Request_1: Boolean
 * BMS_RatBatVoltage_1: Integer in interval [0...65535]
 * BMS_RatCapacity_1: Integer in interval [0...65535]
 * BMS_RatEnergy_1: Integer in interval [0...65535]
 * BMS_RemChagTime_1: Integer in interval [0...65535]
 * BMS_SingChgkwh_1: Integer in interval [0...255]
 * BMS_SumChgkwh_1: Integer in interval [0...4294967295]
 * BRM_BatteryChargeTimes: Integer in interval [-8388608...8388607]
 * BRM_BatteryProductDay: Integer in interval [0...31]
 * BRM_BatteryProductMonth: Integer in interval [0...12]
 * BRM_BatteryProductYear: Integer in interval [0...255]
 * BRM_BatteryProperty: Integer in interval [0...255]
 * BRM_BatterySN: Integer in interval [0...4294967295]
 * BRM_BatterySystemRatedCapacity: Integer in interval [0...10000]
 * BRM_BatterySystemRatedVoltage: Integer in interval [0...7500]
 * BRM_BatteryType: Integer in interval [-1...8]
 * BRM_Manufacturer: Integer in interval [0...4294967295]
 * BRM_ProtocolVersion: Integer in interval [-8388608...8388607]
 * BRM_VehicleIdByte17: Integer in interval [0...255]
 * BSD_AbortSOC: Integer in interval [0...100]
 * BSD_BatteryTempMax: Integer in interval [0...250]
 * BSD_BatteryTempMin: Integer in interval [0...250]
 * BSD_BatteryVoltageMax: Integer in interval [0...2400]
 * BSD_BatteryVoltageMin: Integer in interval [0...2400]
 * BSM_BatteryTempMax: Integer in interval [0...255]
 * BSM_BatteryTempMaxNo: Integer in interval [0...128]
 * BSM_BatteryTempMin: Integer in interval [0...255]
 * BSM_BatteryTempMinNo: Integer in interval [0...128]
 * BSM_BatteryVoltageMaxNo: Integer in interval [0...128]
 * CCS_OutputCurrent: Integer in interval [0...4000]
 * CCS_OutputVoltage: Integer in interval [0...7500]
 * CHM_ProtocolVersion: Integer in interval [0...16777215]
 * CSD_ChargerNo: Integer in interval [0...4294967295]
 * CTS_Year: Integer in interval [0...65535]
 * POD_DCFCVoltage_1: Integer in interval [0...65535]
 * POD_DCInletTempA_1: Integer in interval [0...255]
 * POD_DCInletTempB_1: Integer in interval [0...255]
 * Rte_DT_SG_BMS_BatInfor_02_SigGroup_0: Integer in interval [0...18446744073709551615]
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint64: Integer in interval [0...18446744073709551615] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * BCL_ChargeMode: Enumeration of integer in interval [0...2] with enumerators
 *   Cx01_ae_ (1U)
 *   Cx02_ae_ (2U)
 * BEM_ChargeAbortTimeout: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BEM_ChargeFinishTimeout: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BEM_ChargeStateTimeout: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BEM_ChargeStatisticsTimeout: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BEM_ChargerIdTimeout0: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BEM_ChargerIdTimeout1: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BEM_TimesyncOrPowerTimeout: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BMS_BatType_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx01_lead_acid_battery (1U)
 *   Cx02_Ni_MH_battery (2U)
 *   Cx03_Lithium_iron_phosphate_battery (3U)
 *   Cx04_Lithium_manganate_battery (4U)
 *   Cx05_Lithium_cobalt_oxide_battery (5U)
 *   Cx06_Ternary_material_battery (6U)
 *   Cx07_Polymer_lithium_ion_battery (7U)
 *   Cx08_Lithium_titanate_battery (8U)
 *   Cx09_Reserved (9U)
 *   Cx0A_Reserved (10U)
 *   Cx0B_Reserved (11U)
 *   Cx0C_Reserved (12U)
 *   Cx0D_Reserved (13U)
 *   Cx0E_Reserved (14U)
 *   Cx0F_Reserved (15U)
 *   Cx10_Reserved (16U)
 *   Cx11_Reserved (17U)
 *   Cx12_Reserved (18U)
 *   Cx13_Reserved (19U)
 *   Cx14_Reserved (20U)
 *   Cx15_Reserved (21U)
 *   Cx16_Reserved (22U)
 *   Cx17_Reserved (23U)
 *   Cx18_Reserved (24U)
 *   Cx19_Reserved (25U)
 *   Cx1A_Reserved (26U)
 *   Cx1B_Reserved (27U)
 *   Cx1C_Reserved (28U)
 *   Cx1D_Reserved (29U)
 *   Cx1E_Reserved (30U)
 *   Cx1F_Reserved (31U)
 *   Cx20_Reserved (32U)
 *   Cx21_Reserved (33U)
 *   Cx22_Reserved (34U)
 *   Cx23_Reserved (35U)
 *   Cx24_Reserved (36U)
 *   Cx25_Reserved (37U)
 *   Cx26_Reserved (38U)
 *   Cx27_Reserved (39U)
 *   Cx28_Reserved (40U)
 *   Cx29_Reserved (41U)
 *   Cx2A_Reserved (42U)
 *   Cx2B_Reserved (43U)
 *   Cx2C_Reserved (44U)
 *   Cx2D_Reserved (45U)
 *   Cx2E_Reserved (46U)
 *   Cx2F_Reserved (47U)
 *   Cx30_Reserved (48U)
 *   Cx31_Reserved (49U)
 *   Cx32_Reserved (50U)
 *   Cx33_Reserved (51U)
 *   Cx34_Reserved (52U)
 *   Cx35_Reserved (53U)
 *   Cx36_Reserved (54U)
 *   Cx37_Reserved (55U)
 *   Cx38_Reserved (56U)
 *   Cx39_Reserved (57U)
 *   Cx3A_Reserved (58U)
 *   Cx3B_Reserved (59U)
 *   Cx3C_Reserved (60U)
 *   Cx3D_Reserved (61U)
 *   Cx3E_Reserved (62U)
 *   Cx3F_Reserved (63U)
 *   Cx40_Reserved (64U)
 *   Cx41_Reserved (65U)
 *   Cx42_Reserved (66U)
 *   Cx43_Reserved (67U)
 *   Cx44_Reserved (68U)
 *   Cx45_Reserved (69U)
 *   Cx46_Reserved (70U)
 *   Cx47_Reserved (71U)
 *   Cx48_Reserved (72U)
 *   Cx49_Reserved (73U)
 *   Cx4A_Reserved (74U)
 *   Cx4B_Reserved (75U)
 *   Cx4C_Reserved (76U)
 *   Cx4D_Reserved (77U)
 *   Cx4E_Reserved (78U)
 *   Cx4F_Reserved (79U)
 *   Cx50_Reserved (80U)
 *   Cx51_Reserved (81U)
 *   Cx52_Reserved (82U)
 *   Cx53_Reserved (83U)
 *   Cx54_Reserved (84U)
 *   Cx55_Reserved (85U)
 *   Cx56_Reserved (86U)
 *   Cx57_Reserved (87U)
 *   Cx58_Reserved (88U)
 *   Cx59_Reserved (89U)
 *   Cx5A_Reserved (90U)
 *   Cx5B_Reserved (91U)
 *   Cx5C_Reserved (92U)
 *   Cx5D_Reserved (93U)
 *   Cx5E_Reserved (94U)
 *   Cx5F_Reserved (95U)
 *   Cx60_Reserved (96U)
 *   Cx61_Reserved (97U)
 *   Cx62_Reserved (98U)
 *   Cx63_Reserved (99U)
 *   Cx64_Reserved (100U)
 *   Cx65_Reserved (101U)
 *   Cx66_Reserved (102U)
 *   Cx67_Reserved (103U)
 *   Cx68_Reserved (104U)
 *   Cx69_Reserved (105U)
 *   Cx6A_Reserved (106U)
 *   Cx6B_Reserved (107U)
 *   Cx6C_Reserved (108U)
 *   Cx6D_Reserved (109U)
 *   Cx6E_Reserved (110U)
 *   Cx6F_Reserved (111U)
 *   Cx70_Reserved (112U)
 *   Cx71_Reserved (113U)
 *   Cx72_Reserved (114U)
 *   Cx73_Reserved (115U)
 *   Cx74_Reserved (116U)
 *   Cx75_Reserved (117U)
 *   Cx76_Reserved (118U)
 *   Cx77_Reserved (119U)
 *   Cx78_Reserved (120U)
 *   Cx79_Reserved (121U)
 *   Cx7A_Reserved (122U)
 *   Cx7B_Reserved (123U)
 *   Cx7C_Reserved (124U)
 *   Cx7D_Reserved (125U)
 *   Cx7E_Reserved (126U)
 *   Cx7F_Reserved (127U)
 *   Cx80_Reserved (128U)
 *   Cx81_Reserved (129U)
 *   Cx82_Reserved (130U)
 *   Cx83_Reserved (131U)
 *   Cx84_Reserved (132U)
 *   Cx85_Reserved (133U)
 *   Cx86_Reserved (134U)
 *   Cx87_Reserved (135U)
 *   Cx88_Reserved (136U)
 *   Cx89_Reserved (137U)
 *   Cx8A_Reserved (138U)
 *   Cx8B_Reserved (139U)
 *   Cx8C_Reserved (140U)
 *   Cx8D_Reserved (141U)
 *   Cx8E_Reserved (142U)
 *   Cx8F_Reserved (143U)
 *   Cx90_Reserved (144U)
 *   Cx91_Reserved (145U)
 *   Cx92_Reserved (146U)
 *   Cx93_Reserved (147U)
 *   Cx94_Reserved (148U)
 *   Cx95_Reserved (149U)
 *   Cx96_Reserved (150U)
 *   Cx97_Reserved (151U)
 *   Cx98_Reserved (152U)
 *   Cx99_Reserved (153U)
 *   Cx9A_Reserved (154U)
 *   Cx9B_Reserved (155U)
 *   Cx9C_Reserved (156U)
 *   Cx9D_Reserved (157U)
 *   Cx9E_Reserved (158U)
 *   Cx9F_Reserved (159U)
 *   CxA0_Reserved (160U)
 *   CxA1_Reserved (161U)
 *   CxA2_Reserved (162U)
 *   CxA3_Reserved (163U)
 *   CxA4_Reserved (164U)
 *   CxA5_Reserved (165U)
 *   CxA6_Reserved (166U)
 *   CxA7_Reserved (167U)
 *   CxA8_Reserved (168U)
 *   CxA9_Reserved (169U)
 *   CxAA_Reserved (170U)
 *   CxAB_Reserved (171U)
 *   CxAC_Reserved (172U)
 *   CxAD_Reserved (173U)
 *   CxAE_Reserved (174U)
 *   CxAF_Reserved (175U)
 *   CxB0_Reserved (176U)
 *   CxB1_Reserved (177U)
 *   CxB2_Reserved (178U)
 *   CxB3_Reserved (179U)
 *   CxB4_Reserved (180U)
 *   CxB5_Reserved (181U)
 *   CxB6_Reserved (182U)
 *   CxB7_Reserved (183U)
 *   CxB8_Reserved (184U)
 *   CxB9_Reserved (185U)
 *   CxBA_Reserved (186U)
 *   CxBB_Reserved (187U)
 *   CxBC_Reserved (188U)
 *   CxBD_Reserved (189U)
 *   CxBE_Reserved (190U)
 *   CxBF_Reserved (191U)
 *   CxC0_Reserved (192U)
 *   CxC1_Reserved (193U)
 *   CxC2_Reserved (194U)
 *   CxC3_Reserved (195U)
 *   CxC4_Reserved (196U)
 *   CxC5_Reserved (197U)
 *   CxC6_Reserved (198U)
 *   CxC7_Reserved (199U)
 *   CxC8_Reserved (200U)
 *   CxC9_Reserved (201U)
 *   CxCA_Reserved (202U)
 *   CxCB_Reserved (203U)
 *   CxCC_Reserved (204U)
 *   CxCD_Reserved (205U)
 *   CxCE_Reserved (206U)
 *   CxCF_Reserved (207U)
 *   CxD0_Reserved (208U)
 *   CxD1_Reserved (209U)
 *   CxD2_Reserved (210U)
 *   CxD3_Reserved (211U)
 *   CxD4_Reserved (212U)
 *   CxD5_Reserved (213U)
 *   CxD6_Reserved (214U)
 *   CxD7_Reserved (215U)
 *   CxD8_Reserved (216U)
 *   CxD9_Reserved (217U)
 *   CxDA_Reserved (218U)
 *   CxDB_Reserved (219U)
 *   CxDC_Reserved (220U)
 *   CxDD_Reserved (221U)
 *   CxDE_Reserved (222U)
 *   CxDF_Reserved (223U)
 *   CxE0_Reserved (224U)
 *   CxE1_Reserved (225U)
 *   CxE2_Reserved (226U)
 *   CxE3_Reserved (227U)
 *   CxE4_Reserved (228U)
 *   CxE5_Reserved (229U)
 *   CxE6_Reserved (230U)
 *   CxE7_Reserved (231U)
 *   CxE8_Reserved (232U)
 *   CxE9_Reserved (233U)
 *   CxEA_Reserved (234U)
 *   CxEB_Reserved (235U)
 *   CxEC_Reserved (236U)
 *   CxED_Reserved (237U)
 *   CxEE_Reserved (238U)
 *   CxEF_Reserved (239U)
 *   CxF0_Reserved (240U)
 *   CxF1_Reserved (241U)
 *   CxF2_Reserved (242U)
 *   CxF3_Reserved (243U)
 *   CxF4_Reserved (244U)
 *   CxF5_Reserved (245U)
 *   CxF6_Reserved (246U)
 *   CxF7_Reserved (247U)
 *   CxF8_Reserved (248U)
 *   CxF9_Reserved (249U)
 *   CxFA_Reserved (250U)
 *   CxFB_Reserved (251U)
 *   CxFC_Reserved (252U)
 *   CxFD_Reserved (253U)
 *   CxFE_Reserved (254U)
 *   CxFF_Reserved (255U)
 * BMS_KeepWarmStatus_1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Init (0U)
 *   Cx1_OFF (1U)
 *   Cx2_ON (2U)
 * BRO_BMSChargeReady: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_BMS_oe_ae_ (0U)
 *   CxAA_BMS_ae_ (170U)
 *   CxFF_ (255U)
 * BSM_BatteryCurrentState: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BSM_BatteryOutpuConnectorState: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BSM_BatteryTempState: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ss (1U)
 *   Cx2_ (2U)
 * BSM_BatteryVoltageState: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ss (1U)
 *   Cx2_ (2U)
 * BSM_ChargeEnable: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Oe_ (0U)
 *   Cx1_ (1U)
 * BSM_InsulationState: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BSM_SOC: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ss (1U)
 *   Cx2_ (2U)
 * BST_AbortAchiveSOC: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BST_AbortAchiveSingleVolt: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BST_AbortAchiveTotalVolt: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BST_AbortChargparameter: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ae (0U)
 *   Cx1_ae (1U)
 *   Cx2_ (2U)
 * BST_AbortErrorCurrent: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_Oe_ (1U)
 *   Cx2_ (2U)
 * BST_AbortErrorVoltage: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BST_AbortFaultBMSTemp: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ss (1U)
 *   Cx2_ (2U)
 * BST_AbortFaultBatteryTemp: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ss (1U)
 *   Cx2_ (2U)
 * BST_AbortFaultConnector: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BST_AbortFaultConnectorTemp: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BST_AbortFaultInsulation: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BST_AbortFaultOther: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * BST_AbortHVrelayfault: Enumeration of integer in interval [0...2] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Fault (1U)
 *   Cx2_Untrustable (2U)
 * BST_Abortdet2Voltexception: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Nolmal (0U)
 *   Cx1_Fault (1U)
 *   Cx2_Untrustable (2U)
 * BST_Abortmanoperate: Enumeration of integer in interval [0...2] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Abort_by_charger (1U)
 *   Cx2_untrustable (2U)
 * CEM_BatteryChargeRequireTimeout: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 * CRM_RecognitionResult: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_BMS_AeUe_ (0U)
 *   CxAA_BMSAeUe_ (170U)
 *   Factor: 1, Offset: 1
 * CRO_ChargerReady: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_ae_oe_ae_ (0U)
 *   CxAA_ae_ae_ (170U)
 *   CxFF_ (255U)
 * CST_AbortAchiveCondition: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_ (0U)
 *   Cx1_ (1U)
 *   Cx2_ (2U)
 *
 * Array Types:
 * ============
 * BRM_VehicleIdByte1_8: Array with 8 element(s) of type uint8
 * BRM_VehicleIdByte9_16: Array with 8 element(s) of type uint8
 *
 * Record Types:
 * =============
 * SG_BMS_BatInfor_01_SigGroup: Record with elements
 *   BMS_BatType of type BMS_BatType_1
 *   BMS_CellNumbers of type BMS_CellNumbers
 *   BMS_RatBatVoltage of type BMS_RatBatVoltage_1
 *   BMS_RatCapacity of type BMS_RatCapacity_1
 *   BMS_RatEnergy of type BMS_RatEnergy_1
 * SG_BMS_BatInfor_02_SigGroup: Record with elements
 *   BMS_BatSupName of type Rte_DT_SG_BMS_BatInfor_02_SigGroup_0
 * SG_BMS_CellTemp_SigGroup: Record with elements
 *   BMS_AverageCellTemp of type BMS_AverageCellTemp_2
 *   BMS_MaxCellTemp of type BMS_MaxCellTemp_3
 *   BMS_MaxCellTempNO of type BMS_MaxCellTempNO_3
 *   BMS_MinCellTemp of type BMS_MinCellTemp_3
 *   BMS_MinCellTempNO of type BMS_MinCellTempNO_3
 *   BMS_MinCellTempModuleNO of type BMS_MinCellTempModuleNO
 * SG_BMS_CellVoltage_SigGroup: Record with elements
 *   BMS_MaxCellVoltage of type BMS_MaxCellVoltage_3
 *   BMS_MaxCellVoltageModuleNO of type BMS_MaxCellVoltageModuleNO_3
 *   BMS_MaxCellVoltageNO of type BMS_MaxCellVoltageNO_3
 *   BMS_MinCellVoltage of type BMS_MinCellVoltage_1
 * SG_BMS_Charge_01_SigGroup: Record with elements
 *   BMS_AllowChagCurrent of type BMS_AllowChagCurrent_1
 *   BMS_MaxChagVoltage of type BMS_MaxChagVoltage_1
 *   BMS_RemChagTime of type BMS_RemChagTime_1
 * SG_BMS_Charge_03_SigGroup: Record with elements
 *   BMS_BatChagSum of type BMS_BatChagSum_2
 *   BMS_SingChgkwh of type BMS_SingChgkwh_1
 *   BMS_SumChgkwh of type BMS_SumChgkwh_1
 * SG_BMS_PRO_SigGroup: Record with elements
 *   BMS_BatProDatDay of type BMS_BatProDatDay_1
 *   BMS_BatProDatMonth of type BMS_BatProDatMonth_1
 *   BMS_BatProDatYear of type BMS_BatProDatYear_1
 * SG_BMS_TCU_SigGroup: Record with elements
 *   BMS_AllowCellTemperature of type BMS_AllowCellTemperature_1
 *   BMS_KeepWarmRequest of type BMS_KeepWarmRequest_1
 *   BMS_KeepWarmStatus of type BMS_KeepWarmStatus_1
 *   BMS_RTC_Request of type BMS_RTC_Request_1
 * SG_BMS_VersionInfor_SigGroup: Record with elements
 *   BMS_BatProRights of type BMS_BatProRights_1
 *   BMS_ComVersion of type BMS_ComVersion
 * SG_BMS_status_03_SigGroup: Record with elements
 *   BMS_DisplaySOC of type BMS_DisplaySOC_1
 *   BMS_LinkVoltage of type BMS_LinkVoltage_1
 *   BMS_PackVoltage of type BMS_PackVoltage_1
 * SG_POD_Status_01_SigGroup: Record with elements
 *   POD_DCFCVoltage of type POD_DCFCVoltage_1
 *   POD_DCInletTempA of type POD_DCInletTempA_1
 *   POD_DCInletTempB of type POD_DCInletTempB_1
 * dt_DCChrMgmt_BEMRxCCSTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCCSTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_0
 *   DCChrMgmt_MonResBEMRxCCSTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_1
 *   DCChrMgmt_ErrStatBEMRxCCSTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_2
 *   DCChrMgmt_ErrResBEMRxCCSTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_3
 * dt_DCChrMgmt_BEMRxCMLTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCMLTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_0
 *   DCChrMgmt_MonResBEMRxCMLTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_1
 *   DCChrMgmt_ErrStatBEMRxCMLTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_2
 *   DCChrMgmt_ErrResBEMRxCMLTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_3
 * dt_DCChrMgmt_BEMRxCRMPrepdTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCRMPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0
 *   DCChrMgmt_MonResBEMRxCRMPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_1
 *   DCChrMgmt_ErrStatBEMRxCRMPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_2
 *   DCChrMgmt_ErrResBEMRxCRMPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_3
 * dt_DCChrMgmt_BEMRxCRMTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCRMTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_0
 *   DCChrMgmt_MonResBEMRxCRMTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_1
 *   DCChrMgmt_ErrStatBEMRxCRMTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_2
 *   DCChrMgmt_ErrResBEMRxCRMTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_3
 * dt_DCChrMgmt_BEMRxCROPrepdTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCROPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_0
 *   DCChrMgmt_MonResBEMRxCROPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_1
 *   DCChrMgmt_ErrStatBEMRxCROPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_2
 *   DCChrMgmt_ErrResBEMRxCROPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_3
 * dt_DCChrMgmt_BEMRxCROTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCROTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_0
 *   DCChrMgmt_MonResBEMRxCROTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_1
 *   DCChrMgmt_ErrStatBEMRxCROTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_2
 *   DCChrMgmt_ErrResBEMRxCROTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_3
 * dt_DCChrMgmt_BEMRxCSDTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCSDTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_0
 *   DCChrMgmt_MonResBEMRxCSDTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_1
 *   DCChrMgmt_ErrStatBEMRxCSDTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_2
 *   DCChrMgmt_ErrResBEMRxCSDTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_3
 * dt_DCChrMgmt_BEMRxCSTTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCSTTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_0
 *   DCChrMgmt_MonResBEMRxCSTTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_1
 *   DCChrMgmt_ErrStatBEMRxCSTTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_2
 *   DCChrMgmt_ErrResBEMRxCSTTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_3
 *
 *********************************************************************************************************************/


#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_DCComM_Cyclic_10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CCS_OutputCurrent_CCS_OutputCurrent(CCS_OutputCurrent *data)
 *   Std_ReturnType Rte_Read_CCS_OutputVoltage_CCS_OutputVoltage(CCS_OutputVoltage *data)
 *   Std_ReturnType Rte_Read_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout(CEM_BatteryChargeRequireTimeout *data)
 *   Std_ReturnType Rte_Read_CHM_ProtocolVersion_CHM_ProtocolVersion(CHM_ProtocolVersion *data)
 *   Std_ReturnType Rte_Read_CML_OutpuVoltageMax_CML_OutpuVoltageMax(uint16 *data)
 *   Std_ReturnType Rte_Read_CML_OutputCurrentMax_CML_OutputCurrentMax(uint16 *data)
 *   Std_ReturnType Rte_Read_CML_OutputCurrentMin_CML_OutputCurrentMin(uint16 *data)
 *   Std_ReturnType Rte_Read_CML_OutputVoltageMin_CML_OutputVoltageMin(uint16 *data)
 *   Std_ReturnType Rte_Read_CRM_RecognitionResult_CRM_RecognitionResult(CRM_RecognitionResult *data)
 *   Std_ReturnType Rte_Read_CRO_ChargerReady_CRO_ChargerReady(CRO_ChargerReady *data)
 *   Std_ReturnType Rte_Read_CSD_ChargerNo_CSD_ChargerNo(CSD_ChargerNo *data)
 *   Std_ReturnType Rte_Read_CST_AbortAchiveCondition_CST_AbortAchiveCondition(CST_AbortAchiveCondition *data)
 *   Std_ReturnType Rte_Read_CTS_Year_CTS_Year(CTS_Year *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus(dt_DCChrMgmt_BEMRxCCSTmt *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus(dt_DCChrMgmt_BEMRxCMLTmt *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus(dt_DCChrMgmt_BEMRxCRMPrepdTmt *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus(dt_DCChrMgmt_BEMRxCRMTmt *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus(dt_DCChrMgmt_BEMRxCROPrepdTmt *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus(dt_DCChrMgmt_BEMRxCROTmt *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus(dt_DCChrMgmt_BEMRxCSDTmt *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus(dt_DCChrMgmt_BEMRxCSTTmt *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(SG_BMS_BatInfor_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup(SG_BMS_BatInfor_02_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(SG_BMS_CellTemp_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(SG_BMS_CellVoltage_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(SG_BMS_Charge_01_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(SG_BMS_Charge_03_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup(SG_BMS_PRO_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(SG_BMS_TCU_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup(SG_BMS_VersionInfor_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(SG_BMS_status_03_SigGroup *data)
 *   Std_ReturnType Rte_Read_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(SG_POD_Status_01_SigGroup *data)
 *   boolean Rte_IsUpdated_CCS_OutputVoltage_CCS_OutputVoltage(void)
 *   boolean Rte_IsUpdated_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout(void)
 *   boolean Rte_IsUpdated_CHM_ProtocolVersion_CHM_ProtocolVersion(void)
 *   boolean Rte_IsUpdated_CML_OutpuVoltageMax_CML_OutpuVoltageMax(void)
 *   boolean Rte_IsUpdated_CRM_RecognitionResult_CRM_RecognitionResult(void)
 *   boolean Rte_IsUpdated_CRO_ChargerReady_CRO_ChargerReady(void)
 *   boolean Rte_IsUpdated_CSD_ChargerNo_CSD_ChargerNo(void)
 *   boolean Rte_IsUpdated_CST_AbortAchiveCondition_CST_AbortAchiveCondition(void)
 *   boolean Rte_IsUpdated_CTS_Year_CTS_Year(void)
 *   boolean Rte_IsUpdated_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(void)
 *   boolean Rte_IsUpdated_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Send_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax(BCP_AllowChargeVoltageMax data)
 *   Std_ReturnType Rte_Send_BCP_AllowTempMax_BCP_AllowTempMax(BCP_AllowTempMax data)
 *   Std_ReturnType Rte_Send_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax(BCP_BatteryChargeVoltageMax data)
 *   Std_ReturnType Rte_Send_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy(BCP_BatteryNominalEnergy data)
 *   Std_ReturnType Rte_Send_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage(BCP_BatteryTotalVoltage data)
 *   Std_ReturnType Rte_Send_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax(BCP_ChargeCurrentMax data)
 *   Std_ReturnType Rte_Send_BCP_SOC_BCP_SOC(BCP_SOC data)
 *   Std_ReturnType Rte_Send_BCS_BatteryVoltMax_BCS_BatteryVoltMax(BCS_BatteryVoltMax data)
 *   Std_ReturnType Rte_Send_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup(BCS_BatteryVoltMaxGroup data)
 *   Std_ReturnType Rte_Send_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure(BCS_ChargeCurrentMeasure data)
 *   Std_ReturnType Rte_Send_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure(BCS_ChargeVoltageMeasure data)
 *   Std_ReturnType Rte_Send_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining(BCS_EstimatedTimeRemaining data)
 *   Std_ReturnType Rte_Send_BCS_SOC_BCS_SOC(BCS_SOC data)
 *   Std_ReturnType Rte_Send_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes(BRM_BatteryChargeTimes data)
 *   Std_ReturnType Rte_Send_BRM_BatteryProductDay_BRM_BatteryProductDay(BRM_BatteryProductDay data)
 *   Std_ReturnType Rte_Send_BRM_BatteryProductMonth_BRM_BatteryProductMonth(BRM_BatteryProductMonth data)
 *   Std_ReturnType Rte_Send_BRM_BatteryProductYear_BRM_BatteryProductYear(BRM_BatteryProductYear data)
 *   Std_ReturnType Rte_Send_BRM_BatteryProperty_BRM_BatteryProperty(BRM_BatteryProperty data)
 *   Std_ReturnType Rte_Send_BRM_BatterySN_BRM_BatterySN(BRM_BatterySN data)
 *   Std_ReturnType Rte_Send_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity(BRM_BatterySystemRatedCapacity data)
 *   Std_ReturnType Rte_Send_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage(BRM_BatterySystemRatedVoltage data)
 *   Std_ReturnType Rte_Send_BRM_BatteryType_BRM_BatteryType(BRM_BatteryType data)
 *   Std_ReturnType Rte_Send_BRM_Manufacturer_BRM_Manufacturer(BRM_Manufacturer data)
 *   Std_ReturnType Rte_Send_BRM_ProtocolVersion_BRM_ProtocolVersion(BRM_ProtocolVersion data)
 *   Std_ReturnType Rte_Send_BRM_VehicleIdByte17_BRM_VehicleIdByte17(BRM_VehicleIdByte17 data)
 *   Std_ReturnType Rte_Send_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8(const uint8 *data)
 *     Argument data: uint8* is of type BRM_VehicleIdByte1_8
 *   Std_ReturnType Rte_Send_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16(const uint8 *data)
 *     Argument data: uint8* is of type BRM_VehicleIdByte9_16
 *   Std_ReturnType Rte_Write_BCL_ChargeMode_BCL_ChargeMode(BCL_ChargeMode data)
 *   Std_ReturnType Rte_Write_BCL_CurrentRequire_BCL_CurrentRequire(BCL_CurrentRequire data)
 *   Std_ReturnType Rte_Write_BCL_VolltageRequire_BCL_VolltageRequire(BCL_VolltageRequire data)
 *   Std_ReturnType Rte_Write_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout(BEM_ChargeAbortTimeout data)
 *   Std_ReturnType Rte_Write_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout(BEM_ChargeFinishTimeout data)
 *   Std_ReturnType Rte_Write_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout(BEM_ChargeStateTimeout data)
 *   Std_ReturnType Rte_Write_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout(BEM_ChargeStatisticsTimeout data)
 *   Std_ReturnType Rte_Write_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0(BEM_ChargerIdTimeout0 data)
 *   Std_ReturnType Rte_Write_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1(BEM_ChargerIdTimeout1 data)
 *   Std_ReturnType Rte_Write_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout(BEM_TimesyncOrPowerTimeout data)
 *   Std_ReturnType Rte_Write_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax(BHM_AllowChargeVoltageMax data)
 *   Std_ReturnType Rte_Write_BRO_BMSChargeReady_BRO_BMSChargeReady(BRO_BMSChargeReady data)
 *   Std_ReturnType Rte_Write_BSD_AbortSOC_BSD_AbortSOC(BSD_AbortSOC data)
 *   Std_ReturnType Rte_Write_BSD_BatteryTempMax_BSD_BatteryTempMax(BSD_BatteryTempMax data)
 *   Std_ReturnType Rte_Write_BSD_BatteryTempMin_BSD_BatteryTempMin(BSD_BatteryTempMin data)
 *   Std_ReturnType Rte_Write_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax(BSD_BatteryVoltageMax data)
 *   Std_ReturnType Rte_Write_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin(BSD_BatteryVoltageMin data)
 *   Std_ReturnType Rte_Write_BSM_BatteryCurrentState_BSM_BatteryCurrentState(BSM_BatteryCurrentState data)
 *   Std_ReturnType Rte_Write_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState(BSM_BatteryOutpuConnectorState data)
 *   Std_ReturnType Rte_Write_BSM_BatteryTempMax_BSM_BatteryTempMax(BSM_BatteryTempMax data)
 *   Std_ReturnType Rte_Write_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo(BSM_BatteryTempMaxNo data)
 *   Std_ReturnType Rte_Write_BSM_BatteryTempMin_BSM_BatteryTempMin(BSM_BatteryTempMin data)
 *   Std_ReturnType Rte_Write_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo(BSM_BatteryTempMinNo data)
 *   Std_ReturnType Rte_Write_BSM_BatteryTempState_BSM_BatteryTempState(BSM_BatteryTempState data)
 *   Std_ReturnType Rte_Write_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo(BSM_BatteryVoltageMaxNo data)
 *   Std_ReturnType Rte_Write_BSM_BatteryVoltageState_BSM_BatteryVoltageState(BSM_BatteryVoltageState data)
 *   Std_ReturnType Rte_Write_BSM_ChargeEnable_BSM_ChargeEnable(BSM_ChargeEnable data)
 *   Std_ReturnType Rte_Write_BSM_InsulationState_BSM_InsulationState(BSM_InsulationState data)
 *   Std_ReturnType Rte_Write_BSM_SOC_BSM_SOC(BSM_SOC data)
 *   Std_ReturnType Rte_Write_BST_AbortAchiveSOC_BST_AbortAchiveSOC(BST_AbortAchiveSOC data)
 *   Std_ReturnType Rte_Write_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt(BST_AbortAchiveSingleVolt data)
 *   Std_ReturnType Rte_Write_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt(BST_AbortAchiveTotalVolt data)
 *   Std_ReturnType Rte_Write_BST_AbortChargparameter_BST_AbortChargparameter(BST_AbortChargparameter data)
 *   Std_ReturnType Rte_Write_BST_AbortErrorCurrent_BST_AbortErrorCurrent(BST_AbortErrorCurrent data)
 *   Std_ReturnType Rte_Write_BST_AbortErrorVoltage_BST_AbortErrorVoltage(BST_AbortErrorVoltage data)
 *   Std_ReturnType Rte_Write_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp(BST_AbortFaultBMSTemp data)
 *   Std_ReturnType Rte_Write_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp(BST_AbortFaultBatteryTemp data)
 *   Std_ReturnType Rte_Write_BST_AbortFaultConnector_BST_AbortFaultConnector(BST_AbortFaultConnector data)
 *   Std_ReturnType Rte_Write_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp(BST_AbortFaultConnectorTemp data)
 *   Std_ReturnType Rte_Write_BST_AbortFaultInsulation_BST_AbortFaultInsulation(BST_AbortFaultInsulation data)
 *   Std_ReturnType Rte_Write_BST_AbortFaultOther_BST_AbortFaultOther(BST_AbortFaultOther data)
 *   Std_ReturnType Rte_Write_BST_AbortHVrelayfault_BST_AbortHVrelayfault(BST_AbortHVrelayfault data)
 *   Std_ReturnType Rte_Write_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception(BST_Abortdet2Voltexception data)
 *   Std_ReturnType Rte_Write_BST_Abortmanoperate_BST_Abortmanoperate(BST_Abortmanoperate data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DCComM_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_DCComM_CODE) R_DCComM_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DCComM_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_DCComM_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DCComM_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_DCComM_CODE) R_DCComM_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_DCComM_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
