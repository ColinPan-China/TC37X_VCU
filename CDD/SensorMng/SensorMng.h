#if !defined (SENSORMNG_H)
# define SENSORMNG_H
#include "vstdlib.h"
#include "Platform_Types.h"


typedef struct
{
    uint8 Tle888qk_Out21_En;     /*IO*/
    uint8 Tle888qk_Out22_En;     /*IO*/
    uint8 Tle888qk_Out23_En;     /*IO*/
    uint8 Tle888qk_Out24_En;     /*IO*/

    uint8 Tle888qk_Lout01_En;   /*IO*/

    uint8 Tle888qk_Lout08_En;   /*SPI*/
    uint8 Tle888qk_Lout14_En;   /*SPI*/
    uint8 Tle888qk_Lout16_En;   /*SPI*/

    uint8 Bts7xx_HS1_En;        /*IO*/
    uint8 Bts7xx_HS2_En;        /*IO*/
    uint8 Bts7xx_HS3_En;        /*IO*/
    uint8 Bts7xx_HS4_En;        /*IO*/

    uint8 Tle9201_Dir;          /*IO*/
    uint8 Tle9201_Pwm;          /*IO*/    
    uint8 Tle9201_Dis;          /*IO*/

    uint8 Tle4252d_en;          /*IO*/

    uint8 Tle888qk_Out21BriCfg;          /*SPI*/
    uint8 Tle888qk_Out22BriCfg;          /*SPI*/
    uint8 Tle888qk_Out23BriCfg;          /*SPI*/
    uint8 Tle888qk_Out24BriCfg;          /*SPI*/

}SensorMngCtrlType;

extern void SensorMngMain();
#endif /* SENSORMNG_H */
