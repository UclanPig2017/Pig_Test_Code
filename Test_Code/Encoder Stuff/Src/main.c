/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx_hal.h"

/* USER CODE BEGIN Includes */
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"
#include <stdbool.h>
/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
GPIO_InitTypeDef GPIO_InitStructure;
bool read[24];
//all variables that end in 1 are driven wheels, all that end in 2 are undriven wheels. I.e 
float pod1_calc1, pod1_calc2, pod2_calc1, pod2_calc2, pod3_calc1, pod3_calc2,									 										//conversion calculation for input to binary
		pod1_dist1, pod1_dist2, pod2_dist1, pod2_dist2, pod3_dist1, pod3_dist2,									 										//measured distance from all encoder wheels
		pod1_CompDist1, pod1_CompDist2, pod2_CompDist1, pod2_CompDist2, pod3_CompDist1, pod3_CompDist2,						  //comparitor distances, NOT THE UNDRIVEN WHEELS
		pod1_TotalDist1, pod1_TotalDist2, pod2_TotalDist1, pod2_TotalDist2, pod3_TotalDist1,pod3_TotalDist2; 				// total distance for each encoder
double ave_driven, ave_undriven; //average
float output1, output2, output3;
float circ =345.6, x=0; // need to be changed to actual values

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */
	// set up pins and read from pins 
	
	//Enable GPIOA,B RCC Clocks
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	//Set up all pins on GPIO A, Input
	GPIO_InitStructure.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | 
	GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15; 
	
	GPIO_InitStructure.Mode = GPIO_MODE_INPUT;
	GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH; 
	GPIO_InitStructure.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOC, &GPIO_InitStructure);

	//Set up pins 0-8 on GPIOB, Input
  GPIO_InitStructure.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8;
	GPIO_InitStructure.Mode = GPIO_MODE_INPUT;
	GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_HIGH; 
	GPIO_InitStructure.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStructure);
  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();

  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
		/**Read Encoders**/
		//encoder 1
		read[0] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_10);  
		read[1] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_12);
		read[2] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_11);
		read[3] = HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_2); 
		
		//encoder 2
		read[4] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);	
		read[5] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_14);
		read[6] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_2);
		read[7] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_3);
		
		
		//encoder 3
		read[8] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_2);
		read[9] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1);	
		read[10] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_15);
		read[11] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_14);
		
		//encoder 4
		read[12] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0);	
		read[13] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1);	
		read[14] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_4);
		read[15] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0);
		
		//encoder 5
		read[16] = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_3);
		read[17] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_10);
		read[18] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2);
		read[19] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3);
		
		//encoder 6
		read[20] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_6);
		read[21] = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_5);
		read[22] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_12);
		read[23] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_11);
		

		/*****************************************************************/
		/*											Calculations 													 	*/
		/*****************************************************************/
		//take readings, convert to binary and then to Degrees
		
		//encoder 1
		pod1_calc1 =((!read[0]) + ((!read[1])*2) + (!read[2] *4) + (!read[3]*8))*22.5; 
		
		//encoder 2
		pod1_calc2 =((!read[4]) + (!read[5]*2) + (!read[6] *4) + (!read[7]*8))*22.5; 
			
		//encoder 3
		pod2_calc1 =((!read[8]) + (!read[9]*2) + (!read[10] *4) + (!read[11]*8))*22.5;
			
		//encoder 4
		pod2_calc2 =((!read[12]) + (!read[13]*2) + (!read[14] *4) + (!read[15]*8))*22.5; 

		//encoder 5
		pod3_calc1 =((!read[16]) + (!read[17]*2) + (!read[18] *4) + (!read[19]*8))*22.5; 
			
		//encoder 6
		pod3_calc2 =((!read[20]) + (!read[21]*2) + (!read[22] *4) + (!read[23]*8))*22.5; 
		
		//Degress to distance traveled, set variable, depends on circumference 
		x=circ*(22.5/360);
		


		
		//distance of driven wheels
		pod1_CompDist1= pod1_dist1;
		pod1_dist1 = circ*(pod1_calc1/360);
		
		pod1_CompDist2= pod1_dist2;
		pod1_dist2 = circ*(pod1_calc2/360);
		
		pod2_CompDist1=pod1_dist1;
		pod2_dist1 = circ*(pod2_calc1/360);
		
		//distance of undriven
		pod2_CompDist2= pod2_dist2;
		pod2_dist2 = circ*(pod2_calc2/360);
		pod3_CompDist1=pod3_dist1;
		pod3_dist1 = circ*(pod3_calc1/360);
		pod3_CompDist2=pod3_dist2;
		pod3_dist2 = circ*(pod3_calc2/360);
		
		//calculate average and total distance
		
		//Determine if change in distance, and add change to total distance if so
		if(pod1_dist1 != pod1_CompDist1)
		 {
			pod1_TotalDist1=pod1_TotalDist1+x;
			pod1_CompDist1=pod1_dist1;
		 }

		if(pod1_dist2 != pod1_CompDist2)
		 {
			pod1_TotalDist2=pod1_TotalDist2+x;
			pod1_CompDist2=pod1_dist2;
		 }
		 
		if(pod2_dist1 != pod2_CompDist1)
		 {
			pod2_TotalDist1=pod2_TotalDist1+x;
			pod2_CompDist1=pod2_dist1;
		 }

		if(pod2_dist2 != pod2_CompDist2)
		 {
			pod2_TotalDist2=pod2_TotalDist2+x;
			pod2_CompDist2=pod2_dist2;
		 }
		if(pod3_dist1 != pod3_CompDist1)
		 {
			pod3_TotalDist1=pod3_TotalDist1+x;
			pod3_CompDist1=pod3_dist1;
		 }
		if(pod3_dist2 != pod3_CompDist2)
		 {
			pod3_TotalDist2=pod3_TotalDist2+x;
			pod3_CompDist2=pod3_dist2;
		 }
		 
		 /***********************error handling***********************/
		 if(pod1_TotalDist1 != pod1_TotalDist2)
		 {
				if(pod1_TotalDist1 != pod2_TotalDist2 && pod3_TotalDist2)
				{
						if(pod1_TotalDist2 == pod2_TotalDist2 == pod3_TotalDist2)
						{
								pod1_TotalDist1=pod1_TotalDist2;
						}
				}
		 }
		
		 if(pod2_TotalDist1 != pod2_TotalDist2)
		 {
				if(pod2_TotalDist1 != pod1_TotalDist2 && pod3_TotalDist2)
				{
						if(pod2_TotalDist2 == pod1_TotalDist2 == pod3_TotalDist2)
						{
								pod2_TotalDist1=pod2_TotalDist2;
						}
				}
		 }
		 
		 if(pod3_TotalDist1 != pod3_TotalDist2)
		 {
				if(pod3_TotalDist1 != pod1_TotalDist2 && pod2_TotalDist2)
				{
						if(pod3_TotalDist2 == pod1_TotalDist2 == pod2_TotalDist2)
						{
								pod3_TotalDist1=pod3_TotalDist2;
						}
				}
		 }
		 
		 //Calculate output
	output1 = pod1_TotalDist1;
	output2 = pod2_TotalDist1;
	output3 = pod3_TotalDist1;
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */

  }
  /* USER CODE END 3 */

}

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

    /**Configure the main internal regulator output voltage 
    */
  __HAL_RCC_PWR_CLK_ENABLE();

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time 
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick 
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
*/
static void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pins : PC13 PC14 PC2 PC3 
                           PC10 PC11 PC12 */
  GPIO_InitStruct.Pin = GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_2|GPIO_PIN_3 
                          |GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PB1 PB2 PB14 PB15 */
  GPIO_InitStruct.Pin = GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PD2 */
  GPIO_InitStruct.Pin = GPIO_PIN_2;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void _Error_Handler(char * file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1) 
  {
  }
  /* USER CODE END Error_Handler_Debug */ 
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
