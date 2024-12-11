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
 *             File:  IoHwAb_SWC.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  IoHwAb_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <IoHwAb_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_IoHwAb_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Adc.h"
#include "vstdlib.h"
#include "Spi.h"
#include "IfxSrc_reg.h"
#include "Irq.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


#define IoHwAb_SWC_START_SEC_CODE
#include "IoHwAb_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Init_doc
 *********************************************************************************************************************/
typedef enum
{
  EXT_A_IN1, 
  EXT_A_IN2,
  EXT_A_IN3,
  EXT_A_IN4,
  EXT_A_IN5,
  EXT_A_IN6,
  EXT_A_IN7,
  EXT_A_IN8,
  EXT_A_IN9,
  EXT_A_IN10,
  EXT_A_IN11,
  EXT_A_IN12,
  EXT_A_IN13,
  EXT_A_IN14,
  EXT_A_IN15,
}ExtAdcInputType;

typedef struct ExtVoltageInput
{
  ExtAdcInputType ExtAdcInCh;
  uint8 AdcChannel;
  uint16 ExtVoltageVal;
  uint16 *pAdcChannelResult;

  uint16 PullUpVoltage;
  uint16 Resistance1;
  uint16 Resistance2;

  boolean SampleEnable;
}ExtVoltageInputType;

typedef struct AdcValSample
{
  uint16 AdcCompleteFlag;
  uint16 AdcChannelResult[8];
  Adc_GroupType Group;
}AdcValSampleType;

AdcValSampleType AdcValSampleInfo_Table[5];

uint16 ADC_SW_GRP0_RES[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP1_RES[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP2_RES[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP3_RES[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP11_RES[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

ExtVoltageInputType ExtVoltageInput_Table[] =
{
	{ EXT_A_IN1,  AdcConf_AdcChannel_AdcChannel_G3CH1,  0, &AdcValSampleInfo_Table[3].AdcChannelResult, 4096, 100, 20, TRUE },
	{ EXT_A_IN2,  AdcConf_AdcChannel_AdcChannel_G2CH5,  0, &AdcValSampleInfo_Table[2].AdcChannelResult, 4096, 100, 20, TRUE },
	{ EXT_A_IN3,  AdcConf_AdcChannel_AdcChannel_G2CH3,  0, &AdcValSampleInfo_Table[2].AdcChannelResult, 4096, 100, 20, TRUE },
	{ EXT_A_IN4,  AdcConf_AdcChannel_AdcChannel_G2CH4,  0, &AdcValSampleInfo_Table[2].AdcChannelResult, 4096, 100, 20, TRUE },
	{ EXT_A_IN5,  AdcConf_AdcChannel_AdcChannel_G2CH2,  0, &AdcValSampleInfo_Table[2].AdcChannelResult, 4096, 100, 20, TRUE },
	{ EXT_A_IN6,  AdcConf_AdcChannel_AdcChannel_G2CH1,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,    0,  20,  0, TRUE },
	{ EXT_A_IN7,  AdcConf_AdcChannel_AdcChannel_G2CH6,  0, &AdcValSampleInfo_Table[2].AdcChannelResult, 4096, 100, 20, TRUE },
	{ EXT_A_IN8,  AdcConf_AdcChannel_AdcChannel_G2CH7,  0, &AdcValSampleInfo_Table[2].AdcChannelResult, 4096, 100, 20, TRUE },
	{ EXT_A_IN9,  AdcConf_AdcChannel_AdcChannel_G11CH5, 0, &AdcValSampleInfo_Table[4].AdcChannelResult, 4096,  10, 20, TRUE },
	{ EXT_A_IN10, AdcConf_AdcChannel_AdcChannel_G11CH2, 0, &AdcValSampleInfo_Table[4].AdcChannelResult, 4096,   1, 20, TRUE },
	{ EXT_A_IN11, AdcConf_AdcChannel_AdcChannel_G11CH7, 0, &AdcValSampleInfo_Table[4].AdcChannelResult, 4096,   1, 20, TRUE },
	{ EXT_A_IN12, AdcConf_AdcChannel_AdcChannel_G11CH6, 0, &AdcValSampleInfo_Table[4].AdcChannelResult, 4096, 100, 20, TRUE },
	{ EXT_A_IN13, AdcConf_AdcChannel_AdcChannel_G11CH4, 0, &AdcValSampleInfo_Table[4].AdcChannelResult, 4096,  10, 20, TRUE },
	{ EXT_A_IN14, AdcConf_AdcChannel_AdcChannel_G11CH1, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,    0,  20, 10, TRUE },
	{ EXT_A_IN15, AdcConf_AdcChannel_AdcChannel_G11CH3, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,    0,  20, 10, TRUE },
};

#define EXT_ADC_INPUT_NUM ((sizeof(ExtVoltageInput_Table))/(sizeof(ExtVoltageInput_Table[0])))
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IoHwAb_SWC_CODE) IoHwAb_SWC_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Init
 *********************************************************************************************************************/
 	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_0);
	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_1);
	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_2);
  Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_3);
	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_11);

  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_0,ADC_SW_GRP0_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_1,ADC_SW_GRP1_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_2,ADC_SW_GRP2_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_3,ADC_SW_GRP3_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_11,ADC_SW_GRP11_RES);


	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_0);
	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_1);
	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_2);
  Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_3);
	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_11);

  VStdMemSet(AdcValSampleInfo_Table,0x00U,sizeof(AdcValSampleInfo_Table));
  AdcValSampleInfo_Table[0].Group = AdcConf_AdcGroup_AdcGroup_0;
  AdcValSampleInfo_Table[1].Group = AdcConf_AdcGroup_AdcGroup_1;
  AdcValSampleInfo_Table[2].Group = AdcConf_AdcGroup_AdcGroup_2;
  AdcValSampleInfo_Table[3].Group = AdcConf_AdcGroup_AdcGroup_3;
  AdcValSampleInfo_Table[4].Group = AdcConf_AdcGroup_AdcGroup_11;
  
  IRQ_SFR_MODIFY32 (SRC_QSPI3TX.U,  IRQ_CLEAR_MASK, \
                    ((uint32)IRQ_QSPI3_TX_TOS | (uint32) IRQ_QSPI3_TX_PRIO));
  IRQ_SFR_MODIFY32 (SRC_QSPI3RX.U,  IRQ_CLEAR_MASK, \
                    ((uint32)IRQ_QSPI3_RX_TOS | (uint32) IRQ_QSPI3_RX_PRIO));

  SRC_QSPI3RX.B.SRE 	= 1;
  SRC_QSPI3TX.B.SRE 	= 1;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_SWC_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Runnable_doc
 *********************************************************************************************************************/
uint8 SpiwriteData1[8]={0x00,0x00,0x01,0xAA,0xAA,0xAA,0xAA,0xAA};
uint8 SpiReadData1[8]={0};
uint8 TLE8888_Flg_Rd = 1;
uint8 SpiwriteData[8]={0x8D,0x7F,0x00,0x00,0x00,0x00,0x00,0x00};
uint8 SpiReadData[8]={0};
uint8 Spi_Trans_Ok = 1;
uint8 TLE8888_Spi_Trans_Ok = 1;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IoHwAb_SWC_CODE) IoHwAb_SWC_Runnable(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Runnable
 *********************************************************************************************************************/
  uint8 index = 0;
  uint32 tmpX = 0;
  uint32 tmpY = 0;
  uint32 tmpZ = 0;
  uint16 CurAdVal = 0x00u;

  for(index = 0; index < (sizeof(AdcValSampleInfo_Table)/sizeof(AdcValSampleInfo_Table[0]));index++ )
  {
    if( AdcValSampleInfo_Table[index].AdcCompleteFlag == TRUE )
    {
      AdcValSampleInfo_Table[index].AdcCompleteFlag = FALSE;
      Adc_ReadGroup(AdcValSampleInfo_Table[index].Group, AdcValSampleInfo_Table[index].AdcChannelResult);
      Adc_StartGroupConversion(AdcValSampleInfo_Table[index].Group);
    }
  }

  for( index = 0; index < EXT_ADC_INPUT_NUM; index++  )
  {

    CurAdVal = ExtVoltageInput_Table[index].pAdcChannelResult[ExtVoltageInput_Table[index].AdcChannel];
    if( ExtVoltageInput_Table[index].PullUpVoltage > 0 )
    {
      tmpX = ExtVoltageInput_Table[index].PullUpVoltage - CurAdVal;
      tmpY = ExtVoltageInput_Table[index].Resistance1 + ExtVoltageInput_Table[0].Resistance2;
      tmpZ = tmpX*ExtVoltageInput_Table[0].Resistance2;
      tmpX = tmpZ / tmpY;
      tmpY = tmpX + CurAdVal;
      ExtVoltageInput_Table[index].ExtVoltageVal = tmpY*500/4096;
    }
    else if( (ExtVoltageInput_Table[index].Resistance1 > 0) && (ExtVoltageInput_Table[0].Resistance2 > 0) )
    {
      tmpX = CurAdVal * ExtVoltageInput_Table[0].Resistance2;
      tmpY = ExtVoltageInput_Table[index].Resistance1 + ExtVoltageInput_Table[0].Resistance2;
      tmpZ = tmpX/tmpY;
      ExtVoltageInput_Table[index].ExtVoltageVal = tmpZ*500/4096;
    }
    else
    {
      ExtVoltageInput_Table[index].ExtVoltageVal = CurAdVal*500/4096;
    }

  }
      if( TLE8888_Spi_Trans_Ok )
      {
          TLE8888_Spi_Trans_Ok = 0;
          Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_TLE8888,SpiwriteData,SpiReadData,2);
          Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_TLE8888);
      }

//  ExtVoltageVal_Calculation();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define IoHwAb_SWC_STOP_SEC_CODE
#include "IoHwAb_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
void IoHwAb_AdcNotification0()
{
	AdcValSampleInfo_Table[0].AdcCompleteFlag = TRUE;
}

void IoHwAb_AdcNotification32()
{
	AdcValSampleInfo_Table[1].AdcCompleteFlag = TRUE;
}

void IoHwAb_AdcNotification64()
{
	AdcValSampleInfo_Table[2].AdcCompleteFlag = TRUE;
}

void IoHwAb_AdcNotification96()
{
	AdcValSampleInfo_Table[3].AdcCompleteFlag = TRUE;
}

void IoHwAb_AdcNotification352()
{
	AdcValSampleInfo_Table[4].AdcCompleteFlag = TRUE;
}

void ExtVoltageVal_Calculation()
{

}

void SpiSeq_TLE9201_Notify()
{
  Spi_Trans_Ok = 1;
}


void SpiSeq_TLE8888_Notify()
{
  TLE8888_Spi_Trans_Ok = 1;
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
