#if !defined (TJA1145_H)
# define TJA1145_H

#include "Platform_Types.h"
#include "Spi.h"





#define TJA1145FD_MODE_CONTROL_REG             (0x01)
#define TJA1145FD_MAIN_STATUS_REG              (0x03)
#define TJA1145FD_CAN_CONTROL_REG              (0x20)
#define TJA1145FD_TRANSCEIVER_STATUS_REG       (0x22)
#define TJA1145FD_TRCV_EVENT_EN_REG            (0x23)
#define TJA1145FD_IDENTIFICATION_REG           (0x7E)

#define TJA1145_REGADDR_MODECTRL                (0x01U)
#define TJA1145_REGADDR_CANCTRL                 (0x20U)
#define TJA1145_REGADDR_WAKEUP_EN               (0x23U)
#define TJA1145_REGADDR_DATA_RATE               (0x26U)
#define TJA1145_REGADDR_FRAME_CONTROL           (0x2fU)
#define TJA1145_REGADDR_EVENTSTATUS             (0x60U)
#define TJA1145_REGADDR_WAKEUP_EDGE             (0x4CU)
 
#define TJA1145_COMM_RATE                       (0x05)
#define TJA1145_FILTER_STANDARD_FRAME           (0x00)
#define TJA1145_STATUS_VAL_CLEAR                (0x0U)
#define TJA1145_CAN_WAKE_UP                     (0x01U)
#define TJA1145_MC_NORMAL                       (0x7U)
#define TJA1145_MC_SLEEP                        (0x1U)
#define TJA1145_REGVALUE_CANCTRL                (0x72U)//0x41U
#define TJA1145_WAKEUP_RISE                     (0x2U)

typedef enum{
    TJA1145_REG_Mode_control = 0x01,
    TJA1145_REG_Main_status = 0x03,
    TJA1145_REG_System_event_enable = 0x04,
    TJA1145_REG_Memory_0 = 0x06,
    TJA1145_REG_Memory_1 = 0x07,
    TJA1145_REG_Memory_2 = 0x08,
    TJA1145_REG_Memory_3 = 0x09,
    TJA1145_REG_Lock_control = 0x0A,
    TJA1145_REG_CAN_control = 0x20,
    TJA1145_REG_Transceiver_status = 0x22,
    TJA1145_REG_Transceiver_event_enable = 0x23,
    TJA1145_REG_Data_rate = 0x26,
    TJA1145_REG_Identifier_0 = 0x27,
    TJA1145_REG_Identifier_1 = 0x28,
    TJA1145_REG_Identifier_2 = 0x29,
    TJA1145_REG_Identifier_3 = 0x2A,
    TJA1145_REG_Mask_0 = 0x2B,
    TJA1145_REG_Mask_1 = 0x2C,
    TJA1145_REG_Mask_2 = 0x2D,
    TJA1145_REG_Mask_3 = 0x2E,
    TJA1145_REG_Frame_control = 0x2F,
    TJA1145_REG_Data_mask_0 = 0x68,
    TJA1145_REG_Data_mask_1 = 0x69,
    TJA1145_REG_Data_mask_2 = 0x6A,
    TJA1145_REG_Data_mask_3 = 0x6B,
    TJA1145_REG_Data_mask_4 = 0x6C,
    TJA1145_REG_Data_mask_5 = 0x6D,
    TJA1145_REG_Data_mask_6 = 0x6E,
    TJA1145_REG_Data_mask_7 = 0x6F,
    TJA1145_REG_WAKE_pin_status = 0x4B,
    TJA1145_REG_WAKE_pin_enable = 0x4C,
    TJA1145_REG_Event_capture_status = 0x60,
    TJA1145_REG_System_event_status = 0x61,
    TJA1145_REG_Transceiver_event_status = 0x63,
    TJA1145_REG_WAKE_pin_event_status  = 0x64,
    TJA1145_REG_Identification  = 0x7E,
}tja1145_regs;


uint8 Tja1145_ReadReg( uint8 regaddr, uint8 *regval );
void Tja1145_WriteReg( uint8 regaddr, uint8 data );
void Tja1145_Init();
void Tja1145_GoSleep();               

#endif /* TJA1145_H */