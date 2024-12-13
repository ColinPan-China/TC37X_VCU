#include "TLE8888qk.h"


uint8 SpiTxBuf_Tle8888[2]={0};
uint8 SpiRxBuf_Tle8888[2]={0};

//uint8 SpiwriteData[2]={0x8D,0x7F};
//uint8 SpiReadData[2]={0};

uint8 TLE9201_Spi_Trans_Ok = 1;
uint8 TLE8888_Spi_Trans_Ok = 1;
uint8 step_Wr = 0;
uint8 step_rd = 0;
uint8 TLE8888_Read_Start = 0;
uint8 BriDiag0_Val = 0;
uint8 BriDiag1_Val = 0;
uint8 OpStat1_Val = 0;
void SpiSeq_TLE9201_Notify()
{
  TLE9201_Spi_Trans_Ok = 1;
}

void SpiSeq_TLE8888_Notify()
{
  TLE8888_Spi_Trans_Ok = 1;
  if( step_Wr == 4 )
  {
    step_Wr = 5;
    TLE8888_Read_Start = 1;
  }

  if( (SpiRxBuf_Tle8888[0]>>1) == BriDiag0 )
  {
    BriDiag0_Val = SpiRxBuf_Tle8888[1];
  }
  else if( (SpiRxBuf_Tle8888[0]>>1) == BriDiag1 )
  {
    BriDiag1_Val = SpiRxBuf_Tle8888[1];
  }
  else if ((SpiRxBuf_Tle8888[0]>>1) == OpStat1)
  {
    OpStat1_Val = SpiRxBuf_Tle8888[1];
  }
}

void TLE8888_WriteReg(uint8 Adddr, uint8 Data)
{
  SpiTxBuf_Tle8888[0] = (Adddr<< 1) + 1;
  SpiTxBuf_Tle8888[1] = Data;
  TLE8888_Spi_Trans_Ok = 0;

  Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_TLE8888,SpiTxBuf_Tle8888,SpiRxBuf_Tle8888,2);
  Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_TLE8888);

}

void TLE8888_ReadReg(uint8 Adddr)
{
  SpiTxBuf_Tle8888[0] = (Adddr<< 1);
  TLE8888_Spi_Trans_Ok = 0;

  Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_TLE8888,SpiTxBuf_Tle8888,SpiRxBuf_Tle8888,2);
  Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_TLE8888);
}

void TLE8888_Main()
{

  if( TLE8888_Spi_Trans_Ok == 1 )
  {
    switch (step_Wr)
    {
      case 0:
        TLE8888_WriteReg( BriConfig0, 0xAA);
        step_Wr++;
        break;
      case 1:
        TLE8888_WriteReg( CmdOE, 0x02);
        step_Wr++;
        break;
      case 2:
        TLE8888_WriteReg( OEConfig2, 0x7F);
        step_Wr++;
        break;
      case 3:
        TLE8888_WriteReg( Cont2, 0x78);
        step_Wr++;
        break;    
    }
  }

  if( TLE8888_Spi_Trans_Ok == 1 && TLE8888_Read_Start == 1 )
  {
    switch (step_rd)
    {
      case 0:
        TLE8888_ReadReg(  BriDiag0 );
        step_rd++;
        break;
      case 1:
        TLE8888_ReadReg(  BriDiag1 );
        step_rd++;
        break;
      case 2:
        TLE8888_ReadReg( OpStat1 );
        step_rd = 0;
        break;   
    }
  }
}

void TLE8888_Init()
{
  TLE8888_WriteReg( BriConfig0, 0x7F);
  TLE8888_WriteReg( OEConfig2,  0x78);
  TLE8888_WriteReg( Cont2,      0x78); 
}
