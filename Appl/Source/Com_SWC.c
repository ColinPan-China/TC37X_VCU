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
 *             File:  Com_SWC.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  Com_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <Com_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Com_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Adc_Sample.h"
#include "CDD_MyApp.h"
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
 * ECC_PMP2_SpdSet: Integer in interval [0...100]
 * ECC_PMP3_SpdSet: Integer in interval [0...100]
 * EXT10_Valid: Integer in interval [0...1]
 * EXT11_Valid: Integer in interval [0...1]
 * EXT12_Valid: Integer in interval [0...1]
 * EXT13_Valid: Integer in interval [0...1]
 * EXT14_Valid: Integer in interval [0...1]
 * EXT15_Valid: Integer in interval [0...1]
 * EXT16_Valid: Integer in interval [0...1]
 * EXT1_Valid: Integer in interval [0...1]
 * EXT2_Valid: Integer in interval [0...1]
 * EXT3_Valid: Integer in interval [0...1]
 * EXT4_Valid: Integer in interval [0...1]
 * EXT5_Valid: Integer in interval [0...1]
 * EXT6_Valid: Integer in interval [0...1]
 * EXT7_Valid: Integer in interval [0...1]
 * EXT8_Valid: Integer in interval [0...1]
 * EXT9_Valid: Integer in interval [0...1]
 * EXT_A_IN1: Integer in interval [-256...255]
 * EXT_A_IN10: Integer in interval [-32768...32767]
 * EXT_A_IN11: Integer in interval [-256...255]
 * EXT_A_IN12: Integer in interval [-32768...32767]
 * EXT_A_IN13: Integer in interval [-256...255]
 * EXT_A_IN14: Integer in interval [-32768...32767]
 * EXT_A_IN15: Integer in interval [-256...255]
 * EXT_A_IN16: Integer in interval [-32768...32767]
 * EXT_A_IN2: Integer in interval [-32768...32767]
 * EXT_A_IN3: Integer in interval [-256...255]
 * EXT_A_IN4: Integer in interval [-32768...32767]
 * EXT_A_IN5: Integer in interval [-256...255]
 * EXT_A_IN6: Integer in interval [-32768...32767]
 * EXT_A_IN7: Integer in interval [-256...255]
 * EXT_A_IN8: Integer in interval [-32768...32767]
 * EXT_A_IN9: Integer in interval [-256...255]
 * VcuRxMsg1_Sig0: Integer in interval [-32768...32767]
 * VcuRxMsg1_Sig1: Integer in interval [-32768...32767]
 * VcuRxMsg1_Sig2: Integer in interval [-32768...32767]
 * VcuRxMsg1_Sig3: Integer in interval [-32768...32767]
 * VcuRxMsg2_Sig0: Integer in interval [-32768...32767]
 * VcuRxMsg2_Sig1: Integer in interval [-32768...32767]
 * VcuRxMsg2_Sig2: Integer in interval [-32768...32767]
 * VcuRxMsg2_Sig3: Integer in interval [-32768...32767]
 * VcuTxMsg1_Sig0: Integer in interval [-32768...32767]
 * VcuTxMsg1_Sig1: Integer in interval [-32768...32767]
 * VcuTxMsg1_Sig2: Integer in interval [-32768...32767]
 * VcuTxMsg1_Sig3: Integer in interval [-32768...32767]
 * VcuTxMsg2_Sig0: Integer in interval [-32768...32767]
 * VcuTxMsg2_Sig1: Integer in interval [-32768...32767]
 * VcuTxMsg2_Sig2: Integer in interval [-32768...32767]
 * VcuTxMsg2_Sig3: Integer in interval [-32768...32767]
 *
 *********************************************************************************************************************/


#define Com_SWC_START_SEC_CODE
#include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Com_Runnable_2ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0(VcuRxMsg1_Sig0 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1(VcuRxMsg1_Sig1 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2(VcuRxMsg1_Sig2 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3(VcuRxMsg1_Sig3 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0(VcuRxMsg2_Sig0 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1(VcuRxMsg2_Sig1 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2(VcuRxMsg2_Sig2 *data)
 *   Std_ReturnType Rte_Read_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3(VcuRxMsg2_Sig3 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ECC_PMP2_SpdSet_ECC_PMP2_SpdSet(ECC_PMP2_SpdSet data)
 *   Std_ReturnType Rte_Write_ECC_PMP3_SpdSet_ECC_PMP3_SpdSet(ECC_PMP3_SpdSet data)
 *   Std_ReturnType Rte_Write_EXT10_Valid_EXT10_Valid(EXT10_Valid data)
 *   Std_ReturnType Rte_Write_EXT11_Valid_EXT11_Valid(EXT11_Valid data)
 *   Std_ReturnType Rte_Write_EXT12_Valid_EXT12_Valid(EXT12_Valid data)
 *   Std_ReturnType Rte_Write_EXT13_Valid_EXT13_Valid(EXT13_Valid data)
 *   Std_ReturnType Rte_Write_EXT14_Valid_EXT14_Valid(EXT14_Valid data)
 *   Std_ReturnType Rte_Write_EXT15_Valid_EXT15_Valid(EXT15_Valid data)
 *   Std_ReturnType Rte_Write_EXT16_Valid_EXT16_Valid(EXT16_Valid data)
 *   Std_ReturnType Rte_Write_EXT1_Valid_EXT1_Valid(EXT1_Valid data)
 *   Std_ReturnType Rte_Write_EXT2_Valid_EXT2_Valid(EXT2_Valid data)
 *   Std_ReturnType Rte_Write_EXT3_Valid_EXT3_Valid(EXT3_Valid data)
 *   Std_ReturnType Rte_Write_EXT4_Valid_EXT4_Valid(EXT4_Valid data)
 *   Std_ReturnType Rte_Write_EXT5_Valid_EXT5_Valid(EXT5_Valid data)
 *   Std_ReturnType Rte_Write_EXT6_Valid_EXT6_Valid(EXT6_Valid data)
 *   Std_ReturnType Rte_Write_EXT7_Valid_EXT7_Valid(EXT7_Valid data)
 *   Std_ReturnType Rte_Write_EXT8_Valid_EXT8_Valid(EXT8_Valid data)
 *   Std_ReturnType Rte_Write_EXT9_Valid_EXT9_Valid(EXT9_Valid data)
 *   Std_ReturnType Rte_Write_EXT_A_IN1_EXT_A_IN1(EXT_A_IN1 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN10_EXT_A_IN10(EXT_A_IN10 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN11_EXT_A_IN11(EXT_A_IN11 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN12_EXT_A_IN12(EXT_A_IN12 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN13_EXT_A_IN13(EXT_A_IN13 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN14_EXT_A_IN14(EXT_A_IN14 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN15_EXT_A_IN15(EXT_A_IN15 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN16_EXT_A_IN16(EXT_A_IN16 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN2_EXT_A_IN2(EXT_A_IN2 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN3_EXT_A_IN3(EXT_A_IN3 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN4_EXT_A_IN4(EXT_A_IN4 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN5_EXT_A_IN5(EXT_A_IN5 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN6_EXT_A_IN6(EXT_A_IN6 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN7_EXT_A_IN7(EXT_A_IN7 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN8_EXT_A_IN8(EXT_A_IN8 data)
 *   Std_ReturnType Rte_Write_EXT_A_IN9_EXT_A_IN9(EXT_A_IN9 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0(VcuTxMsg1_Sig0 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1(VcuTxMsg1_Sig1 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2(VcuTxMsg1_Sig2 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3(VcuTxMsg1_Sig3 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0(VcuTxMsg2_Sig0 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1(VcuTxMsg2_Sig1 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2(VcuTxMsg2_Sig2 data)
 *   Std_ReturnType Rte_Write_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3(VcuTxMsg2_Sig3 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Com_Runnable_2ms_doc
 *********************************************************************************************************************/
void ExtTempUpdate();
uint8 SpeedSet = 0;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Com_Runnable_2ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Com_Runnable_2ms
 *********************************************************************************************************************/
  ExtTempUpdate();
  Rte_Write_ECC_PMP2_SpdSet_ECC_PMP2_SpdSet(SpeedSet);
  Rte_Write_ECC_PMP3_SpdSet_ECC_PMP3_SpdSet(SpeedSet);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Rte_Msg200h_Rx_Notification
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <VcuRxMsg1_Sig0> of PortPrototype <VcuRxMsg1_Sig0>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg200h_Rx_Notification_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Rte_Msg200h_Rx_Notification(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg200h_Rx_Notification
 *********************************************************************************************************************/
  uint16 data = 0xFF;
  Rte_Read_Com_SWC_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3( data );
  SetMsg200hTimeout(0);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Rte_Msg201h_Rx_Notification
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <VcuRxMsg2_Sig0> of PortPrototype <VcuRxMsg2_Sig0>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg201h_Rx_Notification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Rte_Msg201h_Rx_Notification(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg201h_Rx_Notification
 *********************************************************************************************************************/
  uint16 data = 0xFF;
  Rte_Read_Com_SWC_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3( data );
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Com_SWC_STOP_SEC_CODE
#include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
uint8  cnt  = 0;
void ExtTempUpdate()
{
  sint16 temp = 0;
  uint8  flg  = 0;

  cnt += 2;
  if( cnt > 200 )
  {
    cnt = 0;
    IoHwGetExtTemp(0,&temp,&flg);
    Rte_Write_EXT_A_IN1_EXT_A_IN1(temp);
    Rte_Write_EXT1_Valid_EXT1_Valid(flg);

    IoHwGetExtTemp(1,&temp,&flg);
    Rte_Write_EXT_A_IN2_EXT_A_IN2(temp);
    Rte_Write_EXT2_Valid_EXT2_Valid(flg);

    IoHwGetExtTemp(2,&temp,&flg);
    Rte_Write_EXT_A_IN3_EXT_A_IN3(temp);
    Rte_Write_EXT3_Valid_EXT3_Valid(flg);

    IoHwGetExtTemp(3,&temp,&flg);
    Rte_Write_EXT_A_IN4_EXT_A_IN4(temp);
    Rte_Write_EXT4_Valid_EXT4_Valid(flg);
  
    IoHwGetExtTemp(4,&temp,&flg);
    Rte_Write_EXT_A_IN5_EXT_A_IN5(temp);
    Rte_Write_EXT5_Valid_EXT5_Valid(flg);
  
    IoHwGetExtTemp(5,&temp,&flg);
    Rte_Write_EXT_A_IN6_EXT_A_IN6(temp);
    Rte_Write_EXT6_Valid_EXT6_Valid(flg);
  
    IoHwGetExtTemp(6,&temp,&flg);
    Rte_Write_EXT_A_IN7_EXT_A_IN7(temp);
    Rte_Write_EXT7_Valid_EXT7_Valid(flg);

    IoHwGetExtTemp(7,&temp,&flg);
    Rte_Write_EXT_A_IN8_EXT_A_IN8(temp);
    Rte_Write_EXT8_Valid_EXT8_Valid(flg);

    IoHwGetExtTemp(8,&temp,&flg);
    Rte_Write_EXT_A_IN9_EXT_A_IN9(temp);
    Rte_Write_EXT9_Valid_EXT9_Valid(flg);

    IoHwGetExtTemp(9,&temp,&flg);
    Rte_Write_EXT_A_IN10_EXT_A_IN10(temp);
    Rte_Write_EXT10_Valid_EXT10_Valid(flg);

    IoHwGetExtTemp(10,&temp,&flg);
    Rte_Write_EXT_A_IN11_EXT_A_IN11(temp);
    Rte_Write_EXT11_Valid_EXT11_Valid(flg);

    IoHwGetExtTemp(11,&temp,&flg);
    Rte_Write_EXT_A_IN12_EXT_A_IN12(temp);
    Rte_Write_EXT12_Valid_EXT12_Valid(flg);
  
    IoHwGetExtTemp(12,&temp,&flg);
    Rte_Write_EXT_A_IN13_EXT_A_IN13(temp);
    Rte_Write_EXT13_Valid_EXT13_Valid(flg);

    IoHwGetExtTemp(13,&temp,&flg);
    Rte_Write_EXT_A_IN14_EXT_A_IN14(temp);
    Rte_Write_EXT14_Valid_EXT14_Valid(flg);

    IoHwGetExtTemp(14,&temp,&flg);
    Rte_Write_EXT_A_IN15_EXT_A_IN15(temp);
    Rte_Write_EXT15_Valid_EXT15_Valid(flg);

//    IoHwGetExtTemp(16,&temp,&flg);
    Rte_Write_EXT_A_IN16_EXT_A_IN16(-273);
    Rte_Write_EXT16_Valid_EXT16_Valid(0);
  }

}


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
