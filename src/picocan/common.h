/*******************************************************************************
  Porting of official MCP251xFDcanfdspiAPIforSAMV71_v1_1 on Raspberry Pico
  developped by Pierpaolo Scorrano of SG Electronic Systems srls

  www.sg-electronic-systems.com

  Porting of official MCP251xFDcanfdspiAPIforSAMV71_v1_1 on Raspberry Pico
https://ww1.microchip.com/downloads/aemDocuments/documents/APID/ProductDocuments/SoftwareLibraries/Firmware/MCP251xFDcanfdspiAPIforSAMV71_v1_1.zip
 *******************************************************************************/

#ifndef COMMON_H_
#define COMMON_H_

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "led.h"
#include "hardware/gpio.h"
#include "hardware/spi.h"
#include "pico/binary_info.h"
#include "drv_spi.h"
#include "drv_canfdspi_api.h"
#ifndef PICO_DEFAULT_LED_PIN
#include "pico/cyw43_arch.h"
#endif

// GPIO Definitions
#define MOSI_PIN	19  //RPI_PIN19 SPI0_TX
#define MISO_PIN	20  //RPI_PIN21 SPI0_RX
#define SCK_PIN		22  //RPI_PIN23 SPI0_SCK
#define CS_FD1 		21  //RPI_PIN24 SPI0_CS0
#define LED_1 		25	//RPI_PIN13 LED1
#define INT_IN			17
#define INT_TX_IN		26
#define INT_RX_IN		18
#define XCVR_TX_ENABLE 28


#define ENABLE_CAN1

#define CAN1	1
//#define CAN2	2

#define SPI_DEVICE spi0

#define DRV_CANFDSPI_INDEX_0 0 

#define LED_COUNT 1

//#define STATE_MACHINE_DEBUG

#endif //COMMON_H_
