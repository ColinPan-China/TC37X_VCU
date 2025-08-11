#if !defined (ADC_SAMPLE_H)
# define ADC_SAMPLE_H

#include "Platform_Types.h"
#include "Adc.h"
#include "vstdlib.h"


#define INVALID_TEMP (-273)

#define KL15_HIGH_VOLTAGE (750)//7.5v
#define KL15_LOW_VOLTAGE  (500)//5v

#define KL15_HIGH_LEVEL (1)
#define KL15_LOW_LEVEL  (0)

typedef struct AdcValSample
{
  uint16 AdcCompleteFlag;
  uint16 AdcChannelResult[16];
  uint16 AdcChAveResult[16];
  uint16 AdcSampleCnt;
  uint16 AdcChannelResultPoll[8][16];
  Adc_GroupType Group;
}AdcValSampleType;

extern void Adc_SampleInit();

extern void Adc_SampleMain();

extern void IoHwGetExtTemp( uint8 ch, sint16 *temp, boolean *ValidFlg );
#endif /* ADC_SAMPLE_H */