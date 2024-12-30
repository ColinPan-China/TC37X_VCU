#include "Adc_Sample.h"
#include "Adc.h"
#include "vstdlib.h"

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
{                                                                                                     /*Vcc     Up    Down   En     */
	{ EXT_A_IN1,  AdcConf_AdcChannel_AdcChannel_G3CH1,  0, &AdcValSampleInfo_Table[3].AdcChannelResult,   4096,   100,  20,   TRUE },/*65*/
	{ EXT_A_IN2,  AdcConf_AdcChannel_AdcChannel_G2CH5,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,   TRUE },/*52*/
	{ EXT_A_IN3,  AdcConf_AdcChannel_AdcChannel_G2CH3,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,   TRUE },/*39*/
	{ EXT_A_IN4,  AdcConf_AdcChannel_AdcChannel_G2CH4,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,   TRUE },/*26*/
	{ EXT_A_IN5,  AdcConf_AdcChannel_AdcChannel_G2CH2,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,   TRUE },/*13*/
	{ EXT_A_IN6,  AdcConf_AdcChannel_AdcChannel_G2CH1,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,      0,     0,  20,   TRUE },/*119*/
	{ EXT_A_IN7,  AdcConf_AdcChannel_AdcChannel_G2CH6,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,   TRUE },/*105*/
	{ EXT_A_IN8,  AdcConf_AdcChannel_AdcChannel_G2CH7,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,   TRUE },/*79*/
	{ EXT_A_IN9,  AdcConf_AdcChannel_AdcChannel_G11CH5, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,    10,  20,   TRUE },/*118*/
	{ EXT_A_IN10, AdcConf_AdcChannel_AdcChannel_G11CH2, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,     1,  20,   TRUE },/*106*/
	{ EXT_A_IN11, AdcConf_AdcChannel_AdcChannel_G11CH7, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,     1,  20,   TRUE },/*80*/
	{ EXT_A_IN12, AdcConf_AdcChannel_AdcChannel_G11CH6, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,   100,  20,   TRUE },/*92*/
	{ EXT_A_IN13, AdcConf_AdcChannel_AdcChannel_G11CH4, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,    10,  20,   TRUE },/*93*/
	{ EXT_A_IN14, AdcConf_AdcChannel_AdcChannel_G11CH1, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,      0,    20,  10,   TRUE },/*67*/
	{ EXT_A_IN15, AdcConf_AdcChannel_AdcChannel_G11CH3, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,      0,     0,  510,  TRUE },/*66*/
};

#define EXT_ADC_INPUT_NUM ((sizeof(ExtVoltageInput_Table))/(sizeof(ExtVoltageInput_Table[0])))

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

void Adc_SampleInit()
{
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
}

void Adc_SampleMain()
{
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
}
