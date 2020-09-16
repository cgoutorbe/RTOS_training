/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f10x.h"
#include "FreeRTOS.h"
#include "task.h"


TaskHandle_t xTaskHandle1 = NULL;
TaskHandle_t xTaskHandle2 = NULL;
void vTask1_handler(void *params); //task functions prototype
void vTask2_handler(void *params); //task functions prototype

int main(void)
{
	//disables the pll and brings the clock speed to the HSI
	RCC_DeInit();
	SystemCoreClockUpdate(); // updates the clock speed to that of the HSI

	//Task creation
	xTaskCreate(vTask1_handler,"Task-1",configMINIMAL_STACK_SIZE,NULL,2,&xTaskHandle1);
	xTaskCreate(vTask2_handler,"Task-2",configMINIMAL_STACK_SIZE,NULL,2,&xTaskHandle2);

	//start the scheduler
	vTaskStartScheduler();


	for(;;);
}

void vTask1_handler(void *params)
{
	while(1); //a task handler should never return (FreeRTOS rule)
}

void vTask2_handler(void *params)
{
	while(1);
}
