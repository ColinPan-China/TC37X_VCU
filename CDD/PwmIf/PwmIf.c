#include "Pwm_17_GtmCcu6.h"
#include "PwmIf.h"

#define PWM_DEFAULT_PERIOD1  (10U)//unit:MS
#define PWM_DEFAULT_PERIOD2  (20U)//unit:MS


#define PWM_CLOCK_FRE        (20U)//unit:MS



uint32 DutyTick[2] = { 0x4000, 0x4000 };//8000是100%


#pragma align 32
volatile const uint32 PwmOutPeriod_Set_Flash1[8] = { PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1,
                                                     PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1};


volatile uint32 PwmOutPeriod_Set_Ram1[8] = { PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1,
                                             PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1};
#pragma align restore

#if 0
#pragma align 32
volatile const uint32 PwmOutPeriod_Set_Flash2[8] = { PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2,
                                                     PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2};

volatile uint32 PwmOutPeriod_Set_Ram2[8] = { PWM_DEFAULT_PERIOD2+1, PWM_DEFAULT_PERIOD2+2, PWM_DEFAULT_PERIOD2+3, PWM_DEFAULT_PERIOD2+4,
                                             PWM_DEFAULT_PERIOD2+5, PWM_DEFAULT_PERIOD2+6, PWM_DEFAULT_PERIOD2+7, PWM_DEFAULT_PERIOD2+8};
#pragma align restore
#endif

uint32 PwmOut1Period_Cur = 0;
uint32 PwmOut2Period_Cur = 0;

void PwnIf_Start()
{
//    Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_OUT1,8000,0x4000);//Period:1s/100Mhz*256*8000
//    Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_OUT2,16000,0x4000); 
    Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_P00_5,3906,0x4000);
    Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_P00_4,3906,0x4000);
    Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_P00_0,3906,0x4000);
    Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_P00_1,3906,0x4000);
}
void PwnIf_SetDuty(uint8 PwmCh,uint8 Duty)
{
    DutyTick[PwmCh] = (Duty*0x80000)/100;
    Pwm_17_GtmCcu6_SetDutyCycle(PwmCh, DutyTick[PwmCh]);//Period:1s/100Mhz*256*8000
}

void PwnIf_Main()
{
    PwnIf_Start();

    #if 0
    uint32 periodtick = 0;
    if( PwmOutPeriod_Set_Flash1[0]!= PwmOut1Period_Cur )
    {
        periodtick = PwmOutPeriod_Set_Flash1[0]*390625/1000;
        Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_OUT1,periodtick,DutyTick[0]);//Period:1s/100Mhz*256*8000   [100Mhz = 100000000Hz]
        PwmOut1Period_Cur = PwmOutPeriod_Set_Flash1[0];
    }

    if( PwmOutPeriod_Set_Flash1[1] != PwmOut2Period_Cur )
    {
        periodtick = PwmOutPeriod_Set_Flash1[1]*390625/1000;
        Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_OUT2,periodtick,DutyTick[1]);  
        PwmOut2Period_Cur = PwmOutPeriod_Set_Flash1[1];
    }
    #endif   
}