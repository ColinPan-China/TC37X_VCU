#include "SensorMng.h"

#include "vstdlib.h"
#include "Spi.h"
#include "TLE8888qk.h"
#include "Adc_Sample.h"
#include "TJA1145.h"
#include "Dio.h"
#include "PwmIf.h"
#include "TLE94108ES.h"
#include "Icu_17_TimerIp.h"


typedef struct
{
    uint8 Tle888qk_Out21_En;     /*IO*/
    uint8 Tle888qk_Out22_En;     /*IO*/
    uint8 Tle888qk_Out23_En;     /*IO*/
    uint8 Tle888qk_Out24_En;     /*IO*/

    uint8 Tle888qk_Lout01_En;   /*IO*/

    uint8 Tle888qk_Lout08_En;   /*SPI*/
    uint8 Tle888qk_Lout14_En;   /*SPI*/
    uint8 Tle888qk_Lout16_En;   /*SPI*/

    uint8 Bts7xx_HS1_En;        /*IO*/
    uint8 Bts7xx_HS2_En;        /*IO*/
    uint8 Bts7xx_HS3_En;        /*IO*/
    uint8 Bts7xx_HS4_En;        /*IO*/

    uint8 Tle9201_Dir;          /*IO*/
    uint8 Tle9201_Pwm;          /*IO*/    
    uint8 Tle9201_Dis;          /*IO*/

    uint8 Tle4252d_en;          /*IO*/

    uint8 Tle888qk_Out21BriCfg;          /*SPI*/
    uint8 Tle888qk_Out22BriCfg;          /*SPI*/
    uint8 Tle888qk_Out23BriCfg;          /*SPI*/
    uint8 Tle888qk_Out24BriCfg;          /*SPI*/

}SensorMngCtrlType;

typedef struct
{
    Dio_ChannelType DioChannel;
    uint8*          DioVal;
}SensorMngIoType;

volatile SensorMngCtrlType SensorMngCtrlVal;

volatile SensorMngIoType SensorMngIoTbl[] =
{
    { DioConf_DioChannel_DioChannel_P2_3_IN9,           &SensorMngCtrlVal.Tle888qk_Out21_En  },
    { DioConf_DioChannel_DioChannel_P2_2_IN10,          &SensorMngCtrlVal.Tle888qk_Out22_En  },
    { DioConf_DioChannel_DioChannel_P2_1_IN11,          &SensorMngCtrlVal.Tle888qk_Out23_En  },
    { DioConf_DioChannel_DioChannel_P2_0_IN12,          &SensorMngCtrlVal.Tle888qk_Out24_En  },
 
    { DioConf_DioChannel_DioChannel_P2_11_IN1,          &SensorMngCtrlVal.Tle888qk_Lout01_En } ,
 
    { DioConf_DioChannel_DioChannel_P00_7_IN0,          &SensorMngCtrlVal.Bts7xx_HS1_En      },
    { DioConf_DioChannel_DioChannel_P00_8_IN1,          &SensorMngCtrlVal.Bts7xx_HS2_En      },
    { DioConf_DioChannel_DioChannel_P00_9_IN2,          &SensorMngCtrlVal.Bts7xx_HS3_En      },
    { DioConf_DioChannel_DioChannel_P00_10_IN3,         &SensorMngCtrlVal.Bts7xx_HS4_En      },
 
    { DioConf_DioChannel_DioChannel_P20_11_TLE_DIR,     &SensorMngCtrlVal.Tle9201_Dir        },
    { DioConf_DioChannel_DioChannel_P20_12_TLE_PWM,     &SensorMngCtrlVal.Tle9201_Pwm        },
    { DioConf_DioChannel_DioChannel_P20_13_TLE_DIS,     &SensorMngCtrlVal.Tle9201_Dis        },
    { DioConf_DioChannel_DioChannel_P10_7_TLE4252_EN,   &SensorMngCtrlVal.Tle4252d_en        },
}; 






#define SensorMngIoTbl_Len (sizeof(SensorMngIoTbl))/(sizeof(SensorMngIoType))
uint8 bridgeCfg     = 0;
uint8 bridgeCfg_old = 0;

uint8 Ext_D_In2;

void SensorMngMain()
{
    uint8 tbl_index = 0;

    for( tbl_index = 0; tbl_index < SensorMngIoTbl_Len; tbl_index++ )
    {
        Dio_WriteChannel(SensorMngIoTbl[tbl_index].DioChannel, *SensorMngIoTbl[tbl_index].DioVal);
    }
    
    bridgeCfg = (SensorMngCtrlVal.Tle888qk_Out21BriCfg & 0x03) 
                + ((SensorMngCtrlVal.Tle888qk_Out22BriCfg & 0x03)<<2)
                + ((SensorMngCtrlVal.Tle888qk_Out23BriCfg & 0x03)<<4)
                + ((SensorMngCtrlVal.Tle888qk_Out24BriCfg & 0x03)<<6);

    if( bridgeCfg_old != bridgeCfg )
    {
        TLE8888qk_SpiTransmit(CMD_BRICONFIG(0,bridgeCfg), NULL_PTR);
        bridgeCfg_old = bridgeCfg;
    }

    Ext_D_In2 =  Dio_ReadChannel(DioConf_DioChannel_DioChannel_P33_0_EXT_D_IN2);
    if( Ext_D_In2 == 0 )
    {
        NOP();
    }
}
