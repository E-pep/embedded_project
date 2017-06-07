/*
 * functies.c
 *
 *  Created on: 6-jun.-2017
 *      Author: paull
 */

#include "functies.h"
#include "startscherm.h"



void initLCD( void )
{
  /* LCD Initialization */
  BSP_LCD_Init();
  BSP_LCD_LayerDefaultInit(0, LCD_FB_START_ADDRESS);
  /* Enable the LCD */
  BSP_LCD_DisplayOn();
  /* Select the LCD Background Layer  */
  BSP_LCD_SelectLayer(0);
  /* Clear the Background Layer */
  BSP_LCD_Clear(LCD_COLOR_RED);
  BSP_LCD_SetBackColor(LCD_COLOR_RED);
  BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
  BSP_TS_Init(480,272);
  WDA_LCD_DrawBitmap(SLIMSTEMENS_DATA,0,0,SLIMSTEMENS_DATA_X_PIXEL,SLIMSTEMENS_DATA_Y_PIXEL,SLIMSTEMENS_DATA_FORMAT);

  BSP_LCD_SetFont(&Font20);


}

void background( void )
{
	  WDA_LCD_DrawBitmap(SLIMSTEMENS_DATA,0,0,SLIMSTEMENS_DATA_X_PIXEL,SLIMSTEMENS_DATA_Y_PIXEL,SLIMSTEMENS_DATA_FORMAT);

}


err_t getImageCallback(void *arg, struct tcp_pcb *tpcb, err_t err)
{
	char data[20] = "foto0/0";
	tcp_write(tpcb,&data,sizeof(data),1);		// We sturen een q om een quote terug te krijgen
	tcp_recv(tpcb,imageOntvangen);	// We willen nu wat data ontvangen
	return ERR_OK;
}

err_t imageOntvangen(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, err_t err)
{



		static int flag = 0;
		static unsigned short data[6000];
		static uint16_t receivedLen = 0;
		struct pbuf * buffer = p;
		static int teller = 0;
		static int juist;
		int i;



		//char test2 = ((char*)buffer->payload)[0];
		//char test3 = ((char*)buffer->payload)[1];
		uint16_t lengte = buffer->len;

		for(i = 0; i<lengte-1;i += 2)
		{
			char get1 = ((char*)buffer->payload)[i];
			char get2 = ((char*)buffer->payload)[i+1];

			data[teller] = (get1 << 8)|get2;

			teller++;

		}


		juist = data[teller - 1];





		receivedLen += lengte;
		tcp_recved(tpcb,p->tot_len);





	//imageReceived = 1;

	char toPrint[50];
		sprintf(toPrint,"Len: %d",receivedLen);
		BSP_LCD_SetFont(&Font12);
		BSP_LCD_DisplayStringAtLine(4,toPrint);
		if(p->flags != 0)
		{
		//	tcp_recved(tpcb,receivedLen);
			char toPrint2[50] = "finito";
			BSP_LCD_SetFont(&Font12);
			BSP_LCD_DisplayStringAtLine(5,toPrint2);
			receivedLen = 0;
			teller = 0;
			pbuf_free(p);
			if(flag == 0)
			{
				WDA_LCD_DrawBitmap(data,102,100,70,70,LTDC_PIXEL_FORMAT_RGB565);
				flag +=1;
			}
			else if(flag == 1)
			{
				WDA_LCD_DrawBitmap(data,202,100,70,70,LTDC_PIXEL_FORMAT_RGB565);
				flag +=1;
			}
			else if(flag == 2)
			{
				WDA_LCD_DrawBitmap(data,302,100,70,70,LTDC_PIXEL_FORMAT_RGB565);
				flag = 0;
			}
			return ERR_OK;
		}



		pbuf_free(p);
		return ERR_OK;



}

err_t questionOntvangen(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, err_t err)
{
		char vraag[50] = "";
		strncpy(vraag,p->payload,p->tot_len);
		static int tel = 2;
		BSP_LCD_DisplayStringAtLine(tel,vraag);
		tel++;

		tcp_recved(tpcb,p->tot_len);
//		tcp_close(tpcb);
		pbuf_free(p);
		return ERR_OK;
}


