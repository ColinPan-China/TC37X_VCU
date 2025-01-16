#if !defined (TJA1145_H)
# define TJA1145_H

#include "Platform_Types.h"
#include "Spi.h"





#define TJA1145FD_MODE_CONTROL_REG             (0x01)
#define TJA1145FD_MAIN_STATUS_REG              (0x03)
#define TJA1145FD_CAN_CONTROL_REG              (0x20)
#define TJA1145FD_TRANSCEIVER_STATUS_REG       (0x22)
#define TJA1145FD_TRANSCEIVER_STATUS_REG       (0x22)
#define TJA1145FD_IDENTIFICATION_REG           (0x7E)


uint8 Tja1145_ReadReg( uint8 regaddr, uint8 *regval );
void Tja1145_WriteReg( uint8 regaddr, uint8 data );
void Tja1145_Init();

#endif /* TJA1145_H */