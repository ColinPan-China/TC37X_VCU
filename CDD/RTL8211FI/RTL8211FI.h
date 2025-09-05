#if !defined (RTL8211FI_H)
# define RTL8211FI_H

#include "Platform_Types.h"
#include "Eth_30_Tc3xx.h"

#define ETH_IP_PROTOCOL                         (0X0800U)
#define ETH_ARP_PROTOCOL                        (0X0806U)

#define PHY_CTRL_REG                            (0x00)
#define PHY_STAT_REG                            (0x01)
#define PHY_PHYCTL1_REG                         (0x13)
#define PHY_PHYCTL2_REG                         (0x14)
#define PHY_MIICTRL_REG                         (0x17)

#define PHY_100MBPS_FULLDPLX_REG_VAL            (0x2100)

#define PHY_PHYCTL1_REG_VAL                     (0x0001)
#define PHY_PHYCTL2_REG_VAL                     (0x8006)
/*PHY Status Reg Link status bit position*/
#define PHY_STAT_REG_LS_SHIFT                   (0x02)
#define PHY_MIICTRL_RMII_REG_VAL                (0xF702)

#define ETH_PHY_REG_COUNT                       (32U)

#define ETH_PHY_INIT_DURATION                   (2000U)
#define PHY_READ_DELAY                          (500U)
#define DELAY_30SEC                             (30000U)

#define ETH_FRAME_TYPE_1                        (0xABCDU)

#define MMC_TX_GB_REG_BASE_OFFSET               (0x124U)
#define MMC_RX_GB_REG_BASE_OFFSET               (0x1ACU)

#define ETH_ESC_CHAR_ASCII_VAL                  (27U)

#define ETH_OFFSET_4_BYTE                       (4U)
#define ETH_OFFSET_8_BYTE                       (8U)
#define ETH_OFFSET_12_BYTE                      (12U)
#define ETH_OFFSET_16_BYTE                      (16U)
#define ETH_OFFSET_20_BYTE                      (20U)

#define ETH_IPADDRESS_LENGTH                    (4U)

#define ETH_ARPFRAME_DEST_IPADD_OFFSET          (24U)

/*PHY Interface Mode Value*/
#define ETH_RGMII_MODE                          (0x00400000U)
#define ETH_RMII_MODE                           (0x01000000U)
#define ETH_MII_MODE                            (0x00000000U)

#define RTL8211F_PHY_STATUS                     0x1a
#define RTL8211F_AUTONEG_ENABLE                 0x1000
#define RTL8211F_PHYSTAT_SPEED                  0x0030
#define RTL8211F_PHYSTAT_GBIT                   0x0020
#define RTL8211F_PHYSTAT_100                    0x0010
#define RTL8211F_PHYSTAT_DUPLEX                 0x0008
#define RTL8211F_PHYSTAT_SPDDONE                0x0800
#define RTL8211F_PHYSTAT_LINK                   0x0004
#define RTL8211F_PAGE_SELECT                    0x1f
#define RTL8211F_TX_DELAY                       0x100

/* PHY Identifier Registers */
#define RTL8211F_PHY_ID1          (0x001cU)      /* PHY_ID1 for RTL8211F */
#define RTL8211F_PHY_ID2          (0xc916U)      /* PHY_ID2 for RTL8211F */

#define MII_BMCR                  0x00  /* Basic mode control register */
#define MII_BMSR                  0x01  /* Basic mode status register  */
#define MII_PHYSID1               0x02  /* PHYS ID 1                   */
#define MII_PHYSID2               0x03  /* PHYS ID 2                   */
#define MII_PHYADDR               0x19  /* PHY address                 */
#define BMCR_RESET                0x8000  /* Reset to default state      */

/* Basic mode control register. */
#define BMCR_SPEED1000            0x0040  /* MSB of Speed (1000)         */
#define BMCR_FULLDPLX             0x0100  /* Full duplex                 */
#define BMCR_ANRESTART            0x0200  /* Auto negotiation restart    */
#define BMCR_SPEED100             0x2000  /* Select 100Mbps              */
#define BMCR_SPEED10              0x0000  /* Select 10Mbps               */

/* Basic mode status register. */
#define BMSR_ANEGCOMPLETE         0x0020  /* Auto-negotiation complete   */

#define ETH_FRAMEHEADER_LENGTH       (14U)
#define ETH_FRAMECHKSUM_LENGTH       (4U)
#define ETH_SHIFT_8BIT               (8U)
#define ETH_SHIFT_16BIT              (16U)
#define ETH_SHIFT_24BIT              (24U)

/* Macro for Numbers. */
#define ETH_17_ZERO                  (0U)
#define ETH_17_ONE                   (1U)
#define ETH_MOD_ENABLE               (0U)




extern void Rtl8211_Main();
extern void EthRegCalculate();


extern void Msn_RxIndication(uint8 a, uint16 b, boolean c, P2VAR(uint8, AUTOMATIC, ETHIF_APPL_VAR) d, P2VAR(uint8, AUTOMATIC, ETHIF_APPL_VAR) e, uint16 f);


extern void Msn_TxConfirmation(uint8 a, uint8 b);

#endif /* RTL8211FI_H */