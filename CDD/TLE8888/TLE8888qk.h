#if !defined (TLE8888QK_H)
# define TLE8888QK_H

#include "Platform_Types.h"
#include "Spi.h"



#define Cmd0					0x001
#define MSCReadWd0				0x003
#define MSCReadDiag0EOT			0x004
#define MSCReadDiag1			0x005
#define MSCReadCont				0x006
#define MSCReadConfig0			0x007
#define MSCReadConfig1			0x008
#define MSCReadConfig2			0x009
#define MSCReadOEConfig			0x00A
#define MSCReadMain				0x00B
#define MSCReadWd1				0x00C
#define WWDServiceCmd			0x015
#define FWDRespCmd				0x016
#define FWDRespSyncCmd			0x017
#define WDHBTPSyncCmd			0x018
#define CmdSR					0x01A
#define CmdOE					0x01C
#define CmdLOCK					0x01E
#define Diag0					0x020
#define Diag1					0x021
#define VRSDiag0				0x022
#define VRSDiag1				0x023
#define ComDiag					0x024
#define OutDiag0				0x025
#define OutDiag1				0x026
#define OutDiag2				0x027
#define OutDiag3				0x028
#define OutDiag4				0x029
#define PPOVDiag				0x02A
#define BriDiag0				0x02B
#define BriDiag1				0x02C
#define IgnDiag					0x02D
#define WdDiag					0x02E
#define EOTStat0				0x031
#define EOTStat1				0x032
#define EOTStat2				0x033
#define OpStat0					0x034
#define OpStat1					0x035
#define WWDStat					0x036
#define FWDStat0				0x037
#define FWDStat1				0x038
#define TECStat					0x039
#define WdStat0					0x03A
#define WdStat1					0x03B
#define WDHBT0					0x03C
#define WDHBT1					0x03D
#define OutConfig0				0x040
#define OutConfig1				0x041
#define OutConfig2				0x042
#define OutConfig3				0x043
#define OutConfig4				0x044
#define OutConfig5				0x045
#define BriConfig0				0x046
#define BriConfig1				0x047
#define IGNConfig				0x048
#define VRSConfig0				0x049
#define VRSConfig1				0x04A
#define VRSConfig2				0x04B
#define OpConfig0				0x04E
#define ComConfig0				0x04F
#define ComConfig1				0x050
#define EOTConfig0				0x051
#define EOTConfig1				0x052
#define InConfig0				0x053
#define InConfig1				0x054
#define InConfig2				0x055
#define InConfig3				0x056
#define DDConfig0				0x057
#define DDConfig1				0x058
#define DDConfig2				0x059
#define DDConfig3				0x05A
#define OEConfig0				0x05B
#define OEConfig1				0x05C
#define OEConfig2				0x05D
#define OEConfig3				0x05E
#define WWDConfig0				0x05F
#define WWDConfig1				0x060
#define FWDConfig				0x061
#define TECConfig				0x062
#define WDConfig0				0x063
#define WDConfig1				0x064
#define Cont0					0x07B
#define Cont1					0x07C
#define Cont2					0x07D
#define Cont3					0x07E

extern void TLE8888_WriteReg(uint8 Adddr, uint8 Data);

extern void TLE8888_ReadReg(uint8 Adddr);

extern void TLE8888_Main();

extern void TLE8888_Init();

#endif /* TLE8888_H */