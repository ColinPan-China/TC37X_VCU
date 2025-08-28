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


#define CMD_READ			(0 << 0)
#define CMD_WRITE			(1 << 0)
/* C7:1 */
#define CMD_REG_ADDR(a)		(((a) & 0x7f) << 1)
/* CD7:0 */
#define CMD_REG_DATA(d)		(((d) & 0xff) << 8)

#define CMD_W(a, d)			((uint16)((CMD_WRITE | CMD_REG_ADDR(a) | CMD_REG_DATA(d))))
#define CMD_R(a)        ((uint16)((CMD_READ | CMD_REG_ADDR(a))))

#define REG_INVALID			0x00

/* Command registers */
#define CMD_CMD0(d)			CMD_W(0x01, d)
#define REG_CMD0_MRSE		BIT(0)
#define REG_CMD0_MRON		BIT(1)
/* Window watchdog open WWDOWT window time = 12.8 mS - fixed value for TLE8888QK */
#define CMD_WWDSERVICECMD	CMD_W(0x15, 0x03)
#define CMD_FWDRESPCMD(d)	CMD_W(0x16, d)
#define CMD_FWDRESPSYNCCMD(d)	CMD_W(0x17, d)

#define CMD_SR_CODE			0x1a
#define CMD_SR				CMD_W(CMD_SR_CODE, 0x03)
#define CMD_OE_SET			CMD_W(0x1c, 0x02)
#define CMD_OE_CLR			CMD_W(0x1c, 0x01)
#define CMD_CHIP_UNLOCK		CMD_W(0x1e, 0x01)
//#define CMD_CHIP_LOCK		CMD_W(0x1e, 0x02)

/* Diagnostic registers */
#define REG_DIAG(n)			(0x20 + ((n) & 0x01))
#define CMD_DIAG(n)			CMD_R(REG_DIAG(n))
#define CMD_VRSDIAG(n)		CMD_R(0x22 + ((n) & 0x01))
#define CMD_COMDIAG			CMD_R(0x24)
#define CMD_OUTDIAG(n)		CMD_R(0x25 + ((n) & 0x07))
#define CMD_PPOVDIAG		CMD_R(0x2a)
#define CMD_BRIDIAG(n)		CMD_R(0x2b + ((n) & 0x01))
#define CMD_IGNDIAG			CMD_R(0x2d)
#define CMD_WDDIAG			CMD_R(0x2e)

/* Status registers */
#define REG_OPSTAT(n)		(0x34 + ((n) & 0x01))
#define CMD_OPSTAT(n)		CMD_R(REG_OPSTAT(n))
#define REG_OPSTAT_MR		BIT(3)
#define REG_OPSTAT_WAKE		BIT(1)
#define REG_OPSTAT_KEY		BIT(0)
#define REG_WWDSTAT			0x36
#define CMD_WWDSTAT			CMD_R(REG_WWDSTAT)
#define REG_FWDSTAT(n)		(0x37 + ((n) & 0x01))
#define CMD_FWDSTAT(n)		CMD_R(REG_FWDSTAT(n))
#define REG_TECSTAT			0x39
#define CMD_TECSTAT			CMD_R(REG_TECSTAT)

/* Configuration registers */
#define CMD_OUTCONFIG(n, d)	CMD_W(0x40 + (n), d)
#define CMD_BRICONFIG(n, d)	CMD_W(0x46 + ((n) & 0x01), d)
#define CMD_BRICONFIG_READ(n)	CMD_R(0x46 + ((n) & 0x01))
#define CMD_IGNCONFIG(d)	CMD_W(0x48, d)
#define CMD_VRSCONFIG(n, d)	CMD_W(0x49 + ((n) & 0x03), d)
#define CMD_OPCONFIG0(d)	CMD_W(0x4e, d)
#define CMD_INCONFIG(n, d)	CMD_W(0x53 + ((n) & 0x03), d)
#define CMD_DDCONFIG(n, d)	CMD_W(0x57 + ((n) & 0x03), d)
#define CMD_OECONFIG(n, d)	CMD_W(0x5b + ((n) & 0x03), d)
#define CMD_OECONFIG_READ(n)	CMD_R(0x5b + ((n) & 0x03))
#define CMD_WR_WDRENG(d) CMD_W(0x64, d)
#define CMD_RD_WDRENG()   CMD_R(0x64)

/* Control registers */
#define CMD_CONT(n, d)		CMD_W(0x7b + ((n) & 0x03), d)

#define getRegisterFromResponse(x) (((x) >> 1) & 0x7f)
#define getDataFromResponse(x) (((x) >> 8) & 0xff)

#define FWD_PERIOD_MS		      (20)
#define WWD_PERIOD_MS		      (110)
#define WWD_TASK_PERIOD_MS		(10)

extern void TLE8888_WriteReg(uint8 Adddr, uint8 Data);

extern void TLE8888_ReadReg(uint8 Adddr);

extern void TLE8888_Main();

extern void TLE8888_Init();

#endif /* TLE8888_H */