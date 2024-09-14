#if (!defined NVM_APP_H_)
#define NVM_APP_H_

#include "Platform_Types.h"

typedef struct __attribute__((packed))
{
  uint8 NvM_UserData0[16];
}RamBlock_NvM_UserData0;


extern uint8 RamBlock_Nvm_UserData0[16];
extern const uint8 RomBlock_Nvm_UserData0[16];




































#endif /* NVM_APP_H_ */
