#ifndef FUNCTIES_H_
#define FUNCTIES_H_

#include "stm32f7xx_hal.h"
#include "lwip.h"
#include "tcp.h"
#include "usb_device.h"

/* USER CODE BEGIN Includes */


#include "stm32746g_discovery.h"
#include "stm32746g_discovery_lcd.h"
#include "stm32746g_discovery_sdram.h"
#include "stm32746g_discovery_ts.h"

#define  YOffset 100
#define  XOffset1 100
#define  XOffset2 200
#define  XOffset3 300
#define  ImgSize  70



void vFunctiesInitLCD( void );

void vFunctiesBackground( void );


uint8_t ucFunctiesQuestionRequest( struct tcp_pcb *connectie, char vraag[2] );

uint8_t ucFunctiesKies( uint16_t xpos, uint16_t ypos );


#endif /* FUNCTIES_H_ */
