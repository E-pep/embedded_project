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

#define  y_offset 100
#define  x_offset1 100
#define  x_offset2 200
#define  x_offset3 300
#define  img_size  70



void initLCD( void );

void background( void );


err_t getImageCallback(void *arg, struct tcp_pcb *tpcb, err_t err);

err_t imageOntvangen(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, err_t err);

err_t questionOntvangen(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, err_t err);

uint8_t questionrequest(struct tcp_pcb *connectie,char vraag[2]);

uint8_t kies(uint16_t xpos,uint16_t ypos);


#endif /* FUNCTIES_H_ */
