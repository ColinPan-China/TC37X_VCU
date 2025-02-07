#include "TJA1145.h"




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
  /*Set budrate 500k*/
	Tja1145_WriteReg( TJA1145_REGADDR_DATA_RATE, TJA1145_COMM_RATE);
	//Filter standard frames
	Tja1145_WriteReg( TJA1145_REGADDR_FRAME_CONTROL, TJA1145_FILTER_STANDARD_FRAME);
 
	//wakeup id 0x7A4
	Tja1145_WriteReg( 0x29, 0x90);
	Tja1145_WriteReg( 0x2A, 0x1E);
 
	//set single filter id
	Tja1145_WriteReg( 0x2D, 0);
	Tja1145_WriteReg( 0x2E, 0);
 
	//set mode control : normal
	Tja1145_WriteReg( TJA1145_REGADDR_MODECTRL, TJA1145_MC_NORMAL);
	//set CAN control:为CFDC = 1, PNCOK = 1, CPNC = 1, CMC = 10
	Tja1145_WriteReg( TJA1145_REGADDR_CANCTRL, TJA1145_REGVALUE_CANCTRL);


//  Tja1145_WriteReg(TJA1145FD_MODE_CONTROL_REG, 0x07);
//  Tja1145_WriteReg(TJA1145FD_CAN_CONTROL_REG, 0x02);
}

void Tja1145_GoSleep()
{
  Tja1145_WriteReg(TJA1145_REG_Event_capture_status, 0xff);
  Tja1145_WriteReg(TJA1145_REG_System_event_status, 0xff);
  Tja1145_WriteReg(TJA1145_REG_Transceiver_event_status, 0xff);
  Tja1145_WriteReg(TJA1145_REG_WAKE_pin_event_status, 0xff);
  //enable/disable wake-up event
  Tja1145_WriteReg(TJA1145_REG_System_event_enable, 0x00);
  Tja1145_WriteReg(TJA1145_REG_Transceiver_event_enable, 0x01); //CAN wake-up enable
  Tja1145_WriteReg(TJA1145_REG_WAKE_pin_enable, 0x02);

	//set mode control : sleep
	Tja1145_WriteReg(TJA1145_REGADDR_MODECTRL,TJA1145_MC_SLEEP);
}