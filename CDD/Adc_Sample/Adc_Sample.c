#include "Adc_Sample.h"

typedef enum
{
  EXT_A_IN1 = 0, 
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


typedef struct TempAdConvert
{
  sint16 Temp;
  uint32 Rmax;
  uint32 Rnormal;
  uint32 Rmin;
}TempAdConvertType;

typedef struct ExtVoltageInput
{
  ExtAdcInputType ExtAdcInCh;
  uint8 AdcChannel;
  uint16 ExtVoltageVal;
  uint16 *pAdcChannelResult;

  uint16 PullUpVoltage;
  uint16 Resistance1;
  uint16 Resistance2;
  uint16 ResistanceIn;
  sint16 Temp;
  boolean TempValidFlg;
  boolean SampleEnable;
}ExtVoltageInputType;

AdcValSampleType AdcValSampleInfo_Table[6];

uint16 ADC_SW_GRP0_RES[8]  = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP1_RES[8]  = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP2_RES[8]  = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP3_RES[8]  = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP11_RES[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint16 ADC_SW_GRP8_RES[16]  = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

ExtVoltageInputType ExtVoltageInput_Table[] =
{                                                                                                     /*Vcc     Up    Down  R    Temp   valid   En    */
	{ EXT_A_IN1,  AdcConf_AdcChannel_AdcChannel_G3CH1,  0, &AdcValSampleInfo_Table[3].AdcChannelResult,   4096,   100,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*65*/
	{ EXT_A_IN2,  AdcConf_AdcChannel_AdcChannel_G2CH5,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*52*/
	{ EXT_A_IN3,  AdcConf_AdcChannel_AdcChannel_G2CH3,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*39*/
	{ EXT_A_IN4,  AdcConf_AdcChannel_AdcChannel_G2CH4,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*26*/
	{ EXT_A_IN5,  AdcConf_AdcChannel_AdcChannel_G2CH2,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*13*/
	{ EXT_A_IN6,  AdcConf_AdcChannel_AdcChannel_G2CH1,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,      0,     0,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*119*/
	{ EXT_A_IN7,  AdcConf_AdcChannel_AdcChannel_G2CH6,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*105*/
	{ EXT_A_IN8,  AdcConf_AdcChannel_AdcChannel_G2CH7,  0, &AdcValSampleInfo_Table[2].AdcChannelResult,   4096,   100,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*79*/
	{ EXT_A_IN9,  AdcConf_AdcChannel_AdcChannel_G11CH5, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,    10,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*118*/
	{ EXT_A_IN10, AdcConf_AdcChannel_AdcChannel_G11CH2, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,     1,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*106*/
	{ EXT_A_IN11, AdcConf_AdcChannel_AdcChannel_G11CH7, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,     1,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*80*/
	{ EXT_A_IN12, AdcConf_AdcChannel_AdcChannel_G11CH6, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,   100,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*92*/
	{ EXT_A_IN13, AdcConf_AdcChannel_AdcChannel_G11CH4, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,   4096,    10,  20,  0,  INVALID_TEMP,  FALSE, TRUE },/*93*/
	{ EXT_A_IN14, AdcConf_AdcChannel_AdcChannel_G11CH1, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,      0,    20,  10,  0,  INVALID_TEMP,  FALSE, TRUE },/*67*/
	{ EXT_A_IN15, AdcConf_AdcChannel_AdcChannel_G11CH3, 0, &AdcValSampleInfo_Table[4].AdcChannelResult,      0,     0,  510, 0,  INVALID_TEMP,  FALSE, TRUE },/*66*/
};

#define EXT_ADC_INPUT_NUM ((sizeof(ExtVoltageInput_Table))/(sizeof(ExtVoltageInput_Table[0])))


TempAdConvertType TempAdConvert_Table[] =
{
  {	-40.0,		1799320,		1716100,		1636570,	},
  {	-39.0,		1680910,		1604340,		1531110,	},
  {	-38.0,		1571110,		1500630,		1433180,	},
  {	-37.0,		1469230,		1404340,		1342180,	},
  {	-36.0,		1374660,		1314880,		1257580,	},
  {	-35.0,		1286810,		1231730,		1178880,	},
  {	-34.0,		1205180,		1154400,		1105650,	},
  {	-33.0,		1129270,		1082440,		1037450,	},
  {	-32.0,		1058660,		1015460,		973920,		},
  {	-31.0,		992930,			953060,			914710,		},
  {	-30.0,		931720,			894920,			859480,		},
  {	-29.0,		874680,			840700,			807960,		},
  {	-28.0,		821520,			790130,			759870,		},
  {	-27.0,		771930,			742930,			714950,		},
  {	-26.0,		725670,			698860,			672980,		},
  {	-25.0,		682470,			657690,			633750,		},
  {	-24.0,		642130,			619220,			597060,		},
  {	-23.0,		604430,			583240,			562730,		},
  {	-22.0,		569190,			549580,			530600,		},
  {	-21.0,		536230,			518080,			500500,		},
  {	-20.0,		505390,			488590,			472310,		},
  {	-19.0,		476540,			460990,			445900,		},
  {	-18.0,		449520,			435120,			421140,		},
  {	-17.0,		424210,			410870,			397910,		},
  {	-16.0,		400470,			388120,			376100,		},
  {	-15.0,		378210,			366760,			355630,		},
  {	-14.0,		357330,			346720,			336390,		},
  {	-13.0,		337730,			327890,			318310,		},
  {	-12.0,		319320,			310200,			301320,		},
  {	-11.0,		302030,			293580,			285330,		},
  {	-10.0,		285770,			277940,			270300,		},
  {	-9.0,		  270500,			263230,			256140,		},
  {	-8.0,		  256130,			249390,			242810,		},
  {	-7.0,		  242610,			236360,			230250,		},
  {	-6.0,		  229880,			224090,			218420,		},
  {	-5.0,		  217900,			212530,			207270,		},
  {	-4.0,		  206610,			201630,			196750,		},
  {	-3.0,		  195970,			191350,			186820,		},
  {	-2.0,		  185950,			181660,			177460,		},
  {	-1.0,		  176490,			172520,			168620,		},
  {	0.0,		  167570,			163890,			160270,		},
  {	1.0,		  159130,			155720,			152360,		},
  {	2.0,		  151170,			148000,			144890,		},
  {	3.0,		  143650,			140710,			137830,		},
  {	4.0,		  136550,			133830,			131150,		},
  {	5.0,		  129840,			127320,			124840,		},
  {	6.0,		  123500,			121170,			118870,		},
  {	7.0,		  117510,			115350,			113220,		},
  {	8.0,		  111850,			109840,			107870,		},
  {	9.0,		  106490,			104630,			102800,		},
  {	10.0,		  101410,			99700,			98000,		},
  {	11.0,		  96610,			95030,			93460,		},
  {	12.0,		  92070,			90600,			89150,		},
  {	13.0,		  87760,			86410,			85060,		},
  {	14.0,		  83680,			82430,			81190,		},
  {	15.0,		  79820,			78660,			77510,		},
  {	16.0,		  76150,			75080,			74020,		},
  {	17.0,		  72670,			71690,			70710,		},
  {	18.0,		  69380,			68470,			67560,		},
  {	19.0,		  66250,			65410,			64580,		},
  {	20.0,		  63270,			62500,			61740,		},
  {	21.0,		  60450,			59740,			59040,		},
  {	22.0,		  57770,			57120,			56470,		},
  {	23.0,		  55230,			54630,			54030,		},
  {	24.0,		  52810,			52260,			51710,		},
  {	25.0,		  50500,			50000,			49500,		},
  {	26.0,		  48360,			47860,			47360,		},
  {	27.0,		  46320,			45820,			45320,		},
  {	28.0,		  44370,			43880,			43380,		},
  {	29.0,		  42520,			42030,			41530,		},
  {	30.0,		  40760,			40260,			39770,		},
  {	31.0,		  39070,			38580,			38100,		},
  {	32.0,		  37470,			36980,			36500,		},
  {	33.0,		  35940,			35460,			34980,		},
  {	34.0,		  34480,			34010,			33530,		},
  {	35.0,		  33090,			32620,			32150,		},
  {	36.0,		  31760,			31300,			30840,		},
  {	37.0,		  30490,			30030,			29580,		},
  {	38.0,		  29280,			28830,			28380,		},
  {	39.0,		  28120,			27680,			27240,		},
  {	40.0,		  27020,			26580,			26150,		},
  {	41.0,		  25960,			25530,			25100,		},
  {	42.0,		  24950,			24530,			24110,		},
  {	43.0,		  23990,			23570,			23160,		},
  {	44.0,		  23070,			22660,			22250,		},
  {	45.0,		  22180,			21780,			21380,		},
  {	46.0,		  21340,			20940,			20550,		},
  {	47.0,		  20530,			20140,			19760,		},
  {	48.0,		  19760,			19380,			19000,		},
  {	49.0,		  19020,			18640,			18270,		},
  {	50.0,		  18310,			17940,			17580,		},
  {	51.0,		  17640,			17280,			16920,		},
  {	52.0,		  16990,			16640,			16290,		},
  {	53.0,		  16370,			16020,			15680,		},
  {	54.0,		  15780,			15440,			15100,		},
  {	55.0,		  15210,			14880,			14550,		},
  {	56.0,		  14670,			14340,			14020,		},
  {	57.0,		  14150,			13820,			13510,		},
  {	58.0,		  13640,			13330,			13020,		},
  {	59.0,		  13160,			12860,			12550,		},
  {	60.0,		  12700,			12400,			12110,		},
  {	61.0,		  12260,			11960,			11670,		},
  {	62.0,		  11830,			11540,			11260,		},
  {	63.0,		  11420,			11140,			10860,		},
  {	64.0,		  11030,			10750,			10480,		},
  {	65.0,		  10650,			10380,			10116,		},
  {	66.0,		  10290,			10020,			9765,		  },
  {	67.0,		  9940,			  9682,			  9428,		  },
  {	68.0,		  9610,			  9353,			  9104,		  },
  {	69.0,		  9285,			  9036,			  8793,		  },
  {	70.0,		  8975,			  8732,			  8494,		  },
  {	71.0,		  8678,			  8439,			  8206,		  },
  {	72.0,		  8391,			  8158,			  7930,		  },
  {	73.0,		  8116,			  7887,			  7664,		  },
  {	74.0,		  7850,			  7627,			  7409,		  },
  {	75.0,		  7595,			  7377,			  7163,		  },
  {	76.0,		  7350,			  7136,			  6927,		  },
  {	77.0,		  7113,			  6904,			  6700,		  },
  {	78.0,		  6885,			  6680,			  6481,		  },
  {	79.0,		  6666,			  6465,			  6270,		  },
  {	80.0,		  6454,			  6258,			  6068,		  },
  {	81.0,		  6251,			  6059,			  5872,		  },
  {	82.0,		  6054,			  5867,			  5684,		  },
  {	83.0,		  5865,			  5682,			  5503,		  },
  {	84.0,		  5683,			  5503,			  5329,		  },
  {	85.0,		  5507,			  5331,			  5161,		  },
  {	86.0,		  5338,			  5166,			  4999,		  },
  {	87.0,		  5174,			  5006,			  4843,		  },
  {	88.0,		  5016,			  4852,			  4692,		  },
  {	89.0,		  4864,			  4703,			  4547,		  },
  {	90.0,		  4717,			  4560,			  4407,		  },
  {	91.0,		  4575,			  4421,			  4272,		  },
  {	92.0,		  4438,			  4288,			  4142,		  },
  {	93.0,		  4306,			  4159,			  4016,		  },
  {	94.0,		  4179,			  4034,			  3895,		  },
  {	95.0,		  4056,			  3914,			  3777,		  },
  {	96.0,		  3936,			  3798,			  3664,		  },
  {	97.0,		  3821,			  3686,			  3555,		  },
  {	98.0,		  3710,			  3578,			  3450,		  },
  {	99.0,		  3603,			  3473,			  3348,		  },
  {	100.0,		3499,			  3372,			  3250,		  },
  {	101.0,		3400,			  3276,			  3156,		  },
  {	102.0,		3305,			  3183,			  3066,		  },
  {	103.0,		3212,			  3093,			  2978,		  },
  {	104.0,		3123,			  3007,			  2894,		  },
  {	105.0,		3037,			  2923,			  2812,		  },
  {	106.0,		2953,			  2841,			  2733,		  },
  {	107.0,		2872,			  2763,			  2657,		  },
  {	108.0,		2794,			  2687,			  2583,		  },
  {	109.0,		2718,			  2613,			  2512,		  },
  {	110.0,		2645,			  2542,			  2443,		  },
  {	111.0,		2574,			  2473,			  2376,		  },
  {	112.0,		2505,			  2406,			  2311,		  },
  {	113.0,		2438,			  2341,			  2248,		  },
  {	114.0,		2374,			  2279,			  2187,		  },
  {	115.0,		2311,			  2218,			  2129,		  },
  {	116.0,		2251,			  2159,			  2072,		  },
  {	117.0,		2192,			  2103,			  2017,		  },
  {	118.0,		2135,			  2047,			  1963,		  },
  {	119.0,		2080,			  1994,			  1912,		  },
  {	120.0,		2026,			  1942,			  1861,		  },
  {	121.0,		1974,			  1892,			  1813,		  },
  {	122.0,		1924,			  1843,			  1766,		  },
  {	123.0,		1875,			  1796,			  1720,		  },
  {	124.0,		1828,			  1750,			  1676,		  },
  {	125.0,		1782,			  1706,			  1633,		  },
  {	126.0,		1737,			  1663,			  1591,		  },
  {	127.0,		1694,			  1621,			  1551,		  },
  {	128.0,		1652,			  1580,			  1512,		  },
  {	129.0,		1612,			  1541,			  1474,		  },
  {	130.0,		1572,			  1503,			  1437,		  },

};

#define TEMP_CONVERT_NUM ((sizeof(TempAdConvert_Table))/(sizeof(TempAdConvert_Table[0])))

void ExtInputUpdate();
void Adc_SampleInit();
void Adc_SampleMain();
uint8 TempAdcConvert( uint32 Resistance, sint16 *pTemp );
void IoHwAb_AdcNotification0();
void IoHwAb_AdcNotification32();
void IoHwAb_AdcNotification64();
void IoHwAb_AdcNotification96();
void IoHwAb_AdcNotification352();



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

void IoHwAb_AdcNotification256()
{
	AdcValSampleInfo_Table[5].AdcCompleteFlag = TRUE;
}

void Adc_SampleInit()
{
 	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_0);
	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_1);
	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_2);
  Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_3);
	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_11);
	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_8);

  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_0,ADC_SW_GRP0_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_1,ADC_SW_GRP1_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_2,ADC_SW_GRP2_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_3,ADC_SW_GRP3_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_11,ADC_SW_GRP11_RES);
  Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_8,ADC_SW_GRP8_RES);

	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_0);
	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_1);
	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_2);
  Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_3);
	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_11);
	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_8);

  VStdMemSet(AdcValSampleInfo_Table,0x00U,sizeof(AdcValSampleInfo_Table));
  AdcValSampleInfo_Table[0].Group = AdcConf_AdcGroup_AdcGroup_0;
  AdcValSampleInfo_Table[1].Group = AdcConf_AdcGroup_AdcGroup_1;
  AdcValSampleInfo_Table[2].Group = AdcConf_AdcGroup_AdcGroup_2;
  AdcValSampleInfo_Table[3].Group = AdcConf_AdcGroup_AdcGroup_3;
  AdcValSampleInfo_Table[4].Group = AdcConf_AdcGroup_AdcGroup_11;
  AdcValSampleInfo_Table[5].Group = AdcConf_AdcGroup_AdcGroup_8;
}


uint16 AverageCal(uint16* Arry, uint8 len)
{
  uint16 i,max,min,sum;

  uint16 average;

  sum=0;

  max = Arry[0];

  min=Arry[0];

  for( i = 0; i <len; i++ )
  {
    if( max < Arry[i])
    {
      max=Arry[i];
    }

    if(min>Arry[i])
    {
      min=Arry[i];
    }
    sum=sum+Arry[i];
  }
  average = (sum-max-min)/(len-2);

  return average;
}

uint16 AdcResultAve[8];
void Adc_SampleMain()
{
  uint8 index = 0;
  uint32 tmpX = 0;
  uint32 tmpY = 0;
  uint32 tmpZ = 0;
  uint16 CurAdVal = 0x00u;
  uint8 index_Filt;
  /*Get ADC result from ADC Driver  */
  for(index = 0; index < (sizeof(AdcValSampleInfo_Table)/sizeof(AdcValSampleInfo_Table[0]));index++ )
  {
    if( AdcValSampleInfo_Table[index].AdcCompleteFlag == TRUE )
    {
      AdcValSampleInfo_Table[index].AdcCompleteFlag = FALSE;
      Adc_ReadGroup(AdcValSampleInfo_Table[index].Group, AdcValSampleInfo_Table[index].AdcChannelResult);
      
      VStdMemCpy( AdcValSampleInfo_Table[index].AdcChannelResultPoll[AdcValSampleInfo_Table[index].AdcSampleCnt],AdcValSampleInfo_Table[index].AdcChannelResult, 32 );
      if( AdcValSampleInfo_Table[index].AdcSampleCnt == 7 )
      {
        AdcValSampleInfo_Table[index].AdcSampleCnt = 0;
        for( index_Filt = 0; index_Filt < 16; index_Filt++ )
        {
          AdcResultAve[0] = AdcValSampleInfo_Table[index].AdcChannelResultPoll[0][index_Filt];
          AdcResultAve[1] = AdcValSampleInfo_Table[index].AdcChannelResultPoll[1][index_Filt];
          AdcResultAve[2] = AdcValSampleInfo_Table[index].AdcChannelResultPoll[2][index_Filt];
          AdcResultAve[3] = AdcValSampleInfo_Table[index].AdcChannelResultPoll[3][index_Filt];
          AdcResultAve[4] = AdcValSampleInfo_Table[index].AdcChannelResultPoll[4][index_Filt];
          AdcResultAve[5] = AdcValSampleInfo_Table[index].AdcChannelResultPoll[5][index_Filt];
          AdcResultAve[6] = AdcValSampleInfo_Table[index].AdcChannelResultPoll[6][index_Filt];
          AdcResultAve[7] = AdcValSampleInfo_Table[index].AdcChannelResultPoll[7][index_Filt];

          AdcValSampleInfo_Table[index].AdcChAveResult[index_Filt] = AverageCal(AdcResultAve,8);
        }
      }
      else
      {
        AdcValSampleInfo_Table[index].AdcSampleCnt++;
      }

      Adc_StartGroupConversion(AdcValSampleInfo_Table[index].Group);
    }
  }

  for( index = 0; index < EXT_ADC_INPUT_NUM; index++  )
  { 
    CurAdVal = ExtVoltageInput_Table[index].pAdcChannelResult[ExtVoltageInput_Table[index].AdcChannel];

    /*  ADC voltage conversion and temperature caculation*/
    if( ExtVoltageInput_Table[index].PullUpVoltage > 0 )
    {
      tmpX = ExtVoltageInput_Table[index].PullUpVoltage - CurAdVal;
      if( tmpX > 40 )
      {
        tmpY = ExtVoltageInput_Table[index].Resistance1 * CurAdVal;
        ExtVoltageInput_Table[index].ResistanceIn = tmpY/tmpX;

        /* Get temp from input resistance */
        if( TempAdcConvert( ExtVoltageInput_Table[index].ResistanceIn, &ExtVoltageInput_Table[index].Temp ) == 0 )
        {
          ExtVoltageInput_Table[index].TempValidFlg = TRUE;
        }
        else
        {
          ExtVoltageInput_Table[index].TempValidFlg = FALSE;
        }
      }
      else
      {
        ExtVoltageInput_Table[index].ResistanceIn = 0xFFFF;
        ExtVoltageInput_Table[index].TempValidFlg = FALSE;
        ExtVoltageInput_Table[index].Temp = INVALID_TEMP;
      }

      ExtVoltageInput_Table[index].ExtVoltageVal = CurAdVal*500/4096;
    }
    /* Only perform ADC voltage conversion */
    else if( (ExtVoltageInput_Table[index].Resistance1 > 0) && (ExtVoltageInput_Table[0].Resistance2 > 0) )
    {
      tmpX = ExtVoltageInput_Table[index].Resistance1 + ExtVoltageInput_Table[index].Resistance2;
      tmpY = CurAdVal*500/4096;
      ExtVoltageInput_Table[index].ExtVoltageVal = tmpY*tmpX/ExtVoltageInput_Table[index].Resistance2;

    }
    /* Only perform ADC voltage conversion */
    else if( (ExtVoltageInput_Table[index].Resistance1 > 0) && (ExtVoltageInput_Table[0].Resistance2 > 0) )
    {
      ExtVoltageInput_Table[index].ExtVoltageVal = CurAdVal*500/4096;
    }
  }
}


uint8 TempAdcConvert( uint32 Resistance, sint16 *pTemp )
{
  uint32 R    = 0;
  uint8 ret   = 0;
  uint8 index = 0;

  R = Resistance*10000;

  /*Resistance parameter check*/
  if( R < TempAdConvert_Table[TEMP_CONVERT_NUM-1].Rmin ||
      R > TempAdConvert_Table[0].Rmax )
  {
    *pTemp = INVALID_TEMP;
    return 1;
  }

  for( index = 0; index < TEMP_CONVERT_NUM; index++ )
  {
    if( R > TempAdConvert_Table[index].Rmin &&
      R < TempAdConvert_Table[index].Rmax )
    {
      *pTemp = TempAdConvert_Table[index].Temp;
      break;
    }
  }

  if( index >= TEMP_CONVERT_NUM )
  {
    *pTemp = INVALID_TEMP;
    ret = 1;
  }
  return ret;
}

void IoHwGetExtTemp( uint8 ch, sint16 *temp, boolean *ValidFlg )
{
  if( ch < EXT_ADC_INPUT_NUM )
  {
    *temp     = ExtVoltageInput_Table[ch].Temp;
    *ValidFlg = ExtVoltageInput_Table[ch].TempValidFlg;
  }
}
  
uint16 kl15voltage = 0;
uint8 IoHwGetKL15Level()
{
  kl15voltage = AdcValSampleInfo_Table[5].AdcChannelResult[2]*5*157*100/4096/47;

  if( kl15voltage > KL15_HIGH_VOLTAGE )
  {
    return KL15_HIGH_LEVEL;
  }
  else
  {
    return KL15_LOW_LEVEL;
  }
}