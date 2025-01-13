#include "TJA1145.h"
#include "vstdlib.h"



uint8 TJA1145_Send[2]={0};
uint8 TJA1145_Rcv[2]={0};

void Tja1145_WriteReg( uint8 regaddr, uint8 data  )
{
  TJA1145_Send[0] = (regaddr << 1U) | 0U;
  TJA1145_Send[1] = data;

  Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_TJA1145_0,(uint8*)&TJA1145_Send,TJA1145_Rcv,2);
  Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_TJA1145_Norm);
}


uint8 Tja1145_ReadReg( uint8 regaddr , uint8 *regval)
{
  TJA1145_Send[0] = (regaddr << 1U) | 1U;
  TJA1145_Send[1] = 0;

  Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_TJA1145_0,(uint8*)&TJA1145_Send,TJA1145_Rcv,2);
  Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_TJA1145_Norm);

  if( (TJA1145_Rcv[0]>>1U) == regaddr )
  {
    *regval = TJA1145_Rcv[1];
  }   
}

void Tja1145_Init()
{
    
}
