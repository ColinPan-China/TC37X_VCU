#include "Pwm_17_GtmCcu6.h"
#include "PwmIf.h"

#define PWM_DEFAULT_PERIOD1  (8000U)
#define PWM_DEFAULT_PERIOD2  (12000U)

uint32 DutyTick[2] = { 0x4000, 0x4000 };

const volatile uint32 PwmOutPeriod_Set_Flash1[8] = { PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1,
                                                     PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1, PWM_DEFAULT_PERIOD1};

volatile uint32 PwmOutPeriod_Set_Ram1[8] = { PWM_DEFAULT_PERIOD1+1, PWM_DEFAULT_PERIOD1+2, PWM_DEFAULT_PERIOD1+3, PWM_DEFAULT_PERIOD1+4,
                                             PWM_DEFAULT_PERIOD1+5, PWM_DEFAULT_PERIOD1+6, PWM_DEFAULT_PERIOD1+7, PWM_DEFAULT_PERIOD1+8};

const volatile uint32 PwmOutPeriod_Set_Flash2[8] = { PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2,
                                                     PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2, PWM_DEFAULT_PERIOD2};

volatile uint32 PwmOutPeriod_Set_Ram2[8] = { PWM_DEFAULT_PERIOD2+1, PWM_DEFAULT_PERIOD2+2, PWM_DEFAULT_PERIOD2+3, PWM_DEFAULT_PERIOD2+4,
                                             PWM_DEFAULT_PERIOD2+5, PWM_DEFAULT_PERIOD2+6, PWM_DEFAULT_PERIOD2+7, PWM_DEFAULT_PERIOD2+8};
                                       
uint32 PwmOut1Period_Cur = 8000;
uint32 PwmOut2Period_Cur = 8000;

void PwnIf_Start()
{
    Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_OUT1,8000,0x4000);//Period:1s/100Mhz*256*8000
    Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_OUT2,8000,0x4000);  
}

void PwnIf_SetDuty(uint8 PwmCh,uint8 Duty)
{
    DutyTick[PwmCh] = (Duty*0x80000)/100;
    Pwm_17_GtmCcu6_SetDutyCycle(PwmCh, DutyTick[PwmCh]);//Period:1s/100Mhz*256*8000
}

void PwnIf_Main()
{
    if( PwmOutPeriod_Set_Flash1[0]!= PwmOut1Period_Cur )
    {
        Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_OUT1,PwmOutPeriod_Set_Flash1[0],DutyTick[0]);//Period:1s/100Mhz*256*8000
        PwmOut1Period_Cur = PwmOutPeriod_Set_Flash1[0];
    }

    if( PwmOutPeriod_Set_Flash2[0] != PwmOut2Period_Cur )
    {
        Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_OUT2,PwmOutPeriod_Set_Flash2[0],DutyTick[1]);  
        PwmOut2Period_Cur = PwmOutPeriod_Set_Flash2[0];
    }   
}