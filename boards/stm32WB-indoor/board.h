#ifndef BOARD_H
#define BOARD_H

#include "../../pins.h"

#define OSC_FREQ 32
#define USBDEVICESTRING "SenseKit.indoor"
#define USBMFGSTRING "SenseING"
#define BOARD_FLASH_SECTORS 8
#define BOARD_FLASH_SIZE (1024 * 1024)

#define BOARD_FORCE_BL_PORT GPIOA
#define BOARD_FORCE_BL_PIN 1<<0
#define BOARD_FORCE_BL_STATE 1

#ifdef DEFINE_CONFIGDATA
__attribute__((section(".config"))) __attribute__((used)) //
const uint32_t configData[] = {
    /* CF2 START */
    CFG_MAGIC0, CFG_MAGIC1, // magic
    23, 100,  // used entries, total entries
    CFG_PIN_LED,  0x21,//PC1 DCDC_LED 
    CFG_PIN_LED1, 0x1,//PA_1 RED 
    CFG_PIN_LED2, 0x2, //PA_2 RED
    CFG_PIN_LED3, 0x00,// PA_0 BLUE
    CFG_PIN_BTN_A, 0x73, // PH_03
    //100, 0x4, // PIN_A0 = PA04
    //101, 0x5, // PIN_A1 = PA05
    //102, 0x6, // PIN_A2 = PA06
    //103, 0x7, // PIN_A3 = PA07
    //104, 0x24, // PIN_A4 = PC04
    //105, 0x25, // PIN_A5 = PC05
    //150, 0x1b, // PIN_D0 = PB11
    //151, 0x1a, // PIN_D1 = PB10
    //155, 0x27, // PIN_D5 = PC07
    //156, 0x26, // PIN_D6 = PC06
    //159, 0x18, // PIN_D9 = PB08
    //160, 0x19, // PIN_D10 = PB09
    //161, 0x23, // PIN_D11 = PC03
    //162, 0x22, // PIN_D12 = PC02
    //163, 0x21, // PIN_D13 = PC01
    204, 0x100000, // FLASH_BYTES = 0x100000
    205, 0x30000, // 265k RAM_BYTES =  192k
    208, 0x33991894, // BOOTLOADER_BOARD_ID = 0x33991894
    209, 0x57755a57, // UF2_FAMILY = STM32F401 -> Need to be  STM32WBxx
    210, 0x10, // PINS_PORT_SIZE = PA_16 --> Need to be changed
    211, 0x0, // BOOTLOADER_PROTECTION = 0
    212, 0x78, // POWER_DEEPSLEEP_TIMEOUT = 120
    214, 0x20, // CPU_MHZ = 32 MHz
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* CF2 END */
};
#endif

#endif /* BOARD_H */
