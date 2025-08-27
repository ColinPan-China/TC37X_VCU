#include "TLE9201SG.h"
#include "vstdlib.h"
#include "Dio.h"


static uint8 u9210Tx = 0;
static uint8 u9210Rx = 0;



#define RD_DIA          (0x00u) // (0b000)  Read Diagnosis Register
#define RES_DIA         (0x04u) // (0b100)  Reset Diagnosis Register
#define RD_REV          (0x01u) // (0b001)  Read Device Revision Number
#define RD_CTRL         (0x03u) // (0b011)  Read Control Register
#define WR_CTRL         (0x07u) // (0b111)  Write Control - sets and returns Control Register values
#define WR_CTRL_RD_DIA  (0x06u) // (0b110)  Write Control and Read Diagnosis- sets Control Register values and returns Diagnosis Register values

void Tle9201sg_SpiTransmit()
{
  Spi_SetupEB( SpiConf_SpiChannel_SpiChannel_TLE9201, (uint8*)&u9210Tx, &u9210Rx, 1 );
  Spi_SyncTransmit( SpiConf_SpiSequence_SpiSequence_TLE9201 );
}

void Tle9201sg_WriteReg( uint8 wrcmd, uint8 data )
{
  u9210Tx = 0;
  u9210Rx = 0;

  u9210Tx  = (wrcmd<<5);
  u9210Tx |= (data&0x1F);

  Tle9201sg_SpiTransmit();

}

void Tle9201sg_ReadReg( uint8 rdcmd, uint8* data )
{
  u9210Tx = 0;
  u9210Rx = 0;

  u9210Tx = (rdcmd<<5);

  Tle9201sg_SpiTransmit();
  Tle9201sg_SpiTransmit();

  *data = (u9210Rx & 0x1F);
}

//uint8 RD9210;
void Tle9201sg_Init()
{
//  Tle9201sg_WriteReg(WR_CTRL,0x13);
}

void Tle9201sg_Main()
{
//  Tle9201sg_ReadReg(RD_CTRL,&RD9210);
}
