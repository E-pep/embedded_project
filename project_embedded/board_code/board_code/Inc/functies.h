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




void initLCD( void );

void background( void );


err_t getImageCallback(void *arg, struct tcp_pcb *tpcb, err_t err);

err_t imageOntvangen(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, err_t err);

err_t questionOntvangen(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, err_t err);


#endif /* FUNCTIES_H_ */
