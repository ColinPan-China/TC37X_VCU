#include "TLE94108ES.h"
#include "vstdlib.h"
#include "Dio.h"

static uint8 TxBuf9410[2];
static uint8 RxBuf9410[2];


#define   HB_ACT_1_CTRL       (0x03u)
#define   HB_ACT_2_CTRL       (0x43u)
#define   HB_MODE_1_CTRL      (0x63u)
#define   HB_MODE_2_CTRL      (0x13u)
#define   PWM_CH_FREQ_CTRL    (0x33u)
#define   PWM1_DC_CTRL        (0x73u)
#define   PWM2_DC_CTRL        (0x0Bu)
#define   PWM3_DC_CTRL        (0x4Bu)
#define   FW_OL_CTRL          (0x2Bu)
#define   FW_CTRL             (0x6bu)
#define   CONFIG_CTRL         (0x67u)


void SpiSequence_TLE9410_SPI1_Notify()
{
}

void Tle94108es_SpiTransmit(uint8 *tx_ptr, uint8 *rx_ptr)
{
  Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_TLE9410_SPI1,(uint8*)&tx_ptr,rx_ptr,2);
  Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_TLE9410_SPI1);
}

void Tle94108es_WriteReg( uint8 addr, uint8 val )
{
  TxBuf9410[0] = addr;
  TxBuf9410[0] |= 0x80u;
  TxBuf9410[1] |= val;

  Tle94108es_SpiTransmit( TxBuf9410, RxBuf9410 );
}

void Tle94108es_ReadReg( uint8 addr, uint8* val )
{
  TxBuf9410[0] = addr;
  TxBuf9410[0] &= 0x7Fu;
  Tle94108es_SpiTransmit( TxBuf9410, RxBuf9410 );
  *val = RxBuf9410[1];
}
uint8 RD;
void Tle94108es_Init()
{
  /*Select  PWM Channel 1 */
	Tle94108es_WriteReg(HB_MODE_1_CTRL,0x55u);
  Tle94108es_WriteReg(HB_MODE_2_CTRL,0x55u);

  /*Set  PWM Channel 1 50%  duty cycle*/
  Tle94108es_WriteReg(PWM1_DC_CTRL,0x7Fu);

  /*Set  PWM Channel 1 100HZ */
  Tle94108es_WriteReg(PWM_CH_FREQ_CTRL,0x02u);

  /*Set  PWM Channel 1 100HZ */
  Tle94108es_WriteReg(PWM_CH_FREQ_CTRL,0x02u);

  /*Enable Output */
  Tle94108es_WriteReg(HB_ACT_1_CTRL,0xAAu);
  Tle94108es_WriteReg(HB_ACT_2_CTRL,0xAAu);

  Tle94108es_ReadReg(CONFIG_CTRL,&RD);
}

void Tle94108es_Main()
{
  Tle94108es_WriteReg(HB_ACT_1_CTRL,0xAAu);
//  Tle94108es_WriteReg(HB_ACT_2_CTRL,0xAAu);
}