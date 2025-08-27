#if !defined (TLE9201SG_H)
# define TLE9201SG_H

#include "Platform_Types.h"
#include "Spi.h"


void Tle9201sg_SpiTransmit();
void Tle9201sg_WriteReg( uint8 wrcmd, uint8 data );
void Tle9201sg_ReadReg( uint8 rdcmd, uint8* data );
void Tle9201sg_Init();
void Tle9201sg_Main();

#endif /* TLE9201SG_H */