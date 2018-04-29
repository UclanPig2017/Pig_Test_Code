/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 29/04/2018 16:13:07
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            25000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLCLKFreq_Value                     84000000
#define MX_SYSCLKFreq_VALUE                     84000000
#define MX_HCLKFreq_Value                       84000000
#define MX_FCLKCortexFreq_Value                 84000000
#define MX_CortexFreq_Value                     84000000
#define MX_AHBFreq_Value                        84000000
#define MX_APB1Freq_Value                       42000000
#define MX_APB2Freq_Value                       84000000
#define MX_APB1TimFreq_Value                    84000000
#define MX_APB2TimFreq_Value                    84000000
#define MX_48MHZClocksFreq_Value                42000000
#define MX_EthernetFreq_Value                   16000000
#define MX_I2SClocksFreq_Value                  192000000
#define MX_RTCFreq_Value                        32000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    84000000

/*-------------------------------- ADC1       --------------------------------*/

#define MX_ADC1                                 1

/* GPIO Configuration */

/* Pin PA5 */
#define MX_ADCx_IN5_Pin                         PA5
#define MX_ADCx_IN5_GPIOx                       GPIOA
#define MX_ADCx_IN5_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN5_GPIO_Pin                    GPIO_PIN_5
#define MX_ADCx_IN5_GPIO_Mode                   GPIO_MODE_ANALOG

/* Pin PA6 */
#define MX_ADCx_IN6_Pin                         PA6
#define MX_ADCx_IN6_GPIOx                       GPIOA
#define MX_ADCx_IN6_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN6_GPIO_Pin                    GPIO_PIN_6
#define MX_ADCx_IN6_GPIO_Mode                   GPIO_MODE_ANALOG

/* Pin PA7 */
#define MX_ADCx_IN7_Pin                         PA7
#define MX_ADCx_IN7_GPIOx                       GPIOA
#define MX_ADCx_IN7_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN7_GPIO_Pin                    GPIO_PIN_7
#define MX_ADCx_IN7_GPIO_Mode                   GPIO_MODE_ANALOG

/* DMA Configuration */

/* DMA ADC1 */
#define MX_ADC1_DMA_DMA_Handle                  
#define MX_ADC1_DMA_Instance                    DMA2_Stream0
#define MX_ADC1_DMA_FIFOMode                    DMA_FIFOMODE_DISABLE
#define MX_ADC1_DMA_Priority                    DMA_PRIORITY_LOW
#define MX_ADC1_DMA_Channel                     DMA_CHANNEL_0
#define MX_ADC1_DMA_PeriphDataAlignment         DMA_PDATAALIGN_WORD
#define MX_ADC1_DMA_MemDataAlignment            DMA_MDATAALIGN_WORD
#define MX_ADC1_DMA_Mode                        DMA_CIRCULAR
#define MX_ADC1_DMA_Direction                   DMA_PERIPH_TO_MEMORY
#define MX_ADC1_DMA_PeriphInc                   DMA_PINC_DISABLE
#define MX_ADC1_DMA_MemInc                      DMA_MINC_ENABLE
#define MX_ADC1_DMA_IpInstance                  

/*-------------------------------- DMA        --------------------------------*/

#define MX_DMA                                  1

/* NVIC Configuration */

/* NVIC DMA2_Stream0_IRQn */
#define MX_DMA2_Stream0_IRQn_interruptPremptionPriority 0
#define MX_DMA2_Stream0_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA2_Stream0_IRQn_Subriority         0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/* Pin PA13 */
#define MX_SYS_JTMS-SWDIO_Pin                   PA13
#define MX_TMS                                  SYS_JTMS-SWDIO

/* Pin PA14 */
#define MX_SYS_JTCK-SWCLK_Pin                   PA14
#define MX_TCK                                  SYS_JTCK-SWCLK

/*-------------------------------- USART1     --------------------------------*/

#define MX_USART1                               1

#define MX_USART1_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PA9 */
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_Pin                        PA9
#define MX_USART1_TX_GPIOx                      GPIOA
#define MX_USART1_TX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PB7 */
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_Pin                        PB7
#define MX_USART1_RX_GPIOx                      GPIOB
#define MX_USART1_RX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_7
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC USART1_IRQn */
#define MX_USART1_IRQn_interruptPremptionPriority 1
#define MX_USART1_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_USART1_IRQn_Subriority               0

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PA2 */
#define MX_PA2_Pin                              PA2
#define MX_PA2_GPIOx                            GPIOA
#define MX_PA2_GPIO_PuPd                        GPIO_NOPULL
#define MX_PA2_GPIO_Pin                         GPIO_PIN_2
#define MX_PA2_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PC4 */
#define MX_PC4_Pin                              PC4
#define MX_PC4_GPIOx                            GPIOC
#define MX_PC4_GPIO_PuPd                        GPIO_NOPULL
#define MX_PC4_GPIO_Pin                         GPIO_PIN_4
#define MX_PC4_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING_FALLING

/* Pin PB3 */
#define MX_PB3_Pin                              PB3
#define MX_PB3_GPIOx                            GPIOB
#define MX_PB3_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB3_GPIO_Pin                         GPIO_PIN_3
#define MX_PB3_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PA1 */
#define MX_PA1_Pin                              PA1
#define MX_PA1_GPIOx                            GPIOA
#define MX_PA1_GPIO_PuPd                        GPIO_NOPULL
#define MX_PA1_GPIO_Pin                         GPIO_PIN_1
#define MX_PA1_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB2 */
#define MX_PB2_Pin                              PB2
#define MX_PB2_GPIOx                            GPIOB
#define MX_PB2_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB2_GPIO_Pin                         GPIO_PIN_2
#define MX_PB2_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING_FALLING

/* Pin PA4 */
#define MX_PA4_Pin                              PA4
#define MX_PA4_GPIOx                            GPIOA
#define MX_PA4_GPIO_PuPd                        GPIO_NOPULL
#define MX_PA4_GPIO_Pin                         GPIO_PIN_4
#define MX_PA4_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PC6 */
#define MX_PC6_Pin                              PC6
#define MX_PC6_GPIOx                            GPIOC
#define MX_PC6_GPIO_PuPd                        GPIO_NOPULL
#define MX_PC6_GPIO_Pin                         GPIO_PIN_6
#define MX_PC6_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PA0-WKUP */
#define MX_PA0_WKUP_Pin                         PA0_WKUP
#define MX_PA0_WKUP_GPIOx                       GPIOA
#define MX_PA0_WKUP_GPIO_PuPd                   GPIO_NOPULL
#define MX_PA0_WKUP_GPIO_Pin                    GPIO_PIN_0
#define MX_PA0_WKUP_GPIO_Mode                   GPIO_MODE_INPUT

/* Pin PA3 */
#define MX_PA3_Pin                              PA3
#define MX_PA3_GPIOx                            GPIOA
#define MX_PA3_GPIO_PuPd                        GPIO_NOPULL
#define MX_PA3_GPIO_Pin                         GPIO_PIN_3
#define MX_PA3_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PC5 */
#define MX_PC5_Pin                              PC5
#define MX_PC5_GPIOx                            GPIOC
#define MX_PC5_GPIO_PuPd                        GPIO_NOPULL
#define MX_PC5_GPIO_Pin                         GPIO_PIN_5
#define MX_PC5_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PC8 */
#define MX_PC8_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC8_Pin                              PC8
#define MX_PC8_GPIOx                            GPIOC
#define MX_PC8_PinState                         GPIO_PIN_RESET
#define MX_PC8_GPIO_PuPd                        GPIO_NOPULL
#define MX_PC8_GPIO_Pin                         GPIO_PIN_8
#define MX_PC8_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PC7 */
#define MX_PC7_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC7_Pin                              PC7
#define MX_PC7_GPIOx                            GPIOC
#define MX_PC7_PinState                         GPIO_PIN_RESET
#define MX_PC7_GPIO_PuPd                        GPIO_NOPULL
#define MX_PC7_GPIO_Pin                         GPIO_PIN_7
#define MX_PC7_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PB6 */
#define MX_PB6_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PB6_Pin                              PB6
#define MX_PB6_GPIOx                            GPIOB
#define MX_PB6_PinState                         GPIO_PIN_RESET
#define MX_PB6_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB6_GPIO_Pin                         GPIO_PIN_6
#define MX_PB6_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PC9 */
#define MX_PC9_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC9_Pin                              PC9
#define MX_PC9_GPIOx                            GPIOC
#define MX_PC9_PinState                         GPIO_PIN_RESET
#define MX_PC9_GPIO_PuPd                        GPIO_NOPULL
#define MX_PC9_GPIO_Pin                         GPIO_PIN_9
#define MX_PC9_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PB14 */
#define MX_PB14_Pin                             PB14
#define MX_PB14_GPIOx                           GPIOB
#define MX_PB14_GPIO_PuPd                       GPIO_NOPULL
#define MX_PB14_GPIO_Pin                        GPIO_PIN_14
#define MX_PB14_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_RISING_FALLING

/* Pin PB13 */
#define MX_PB13_Pin                             PB13
#define MX_PB13_GPIOx                           GPIOB
#define MX_PB13_GPIO_PuPd                       GPIO_NOPULL
#define MX_PB13_GPIO_Pin                        GPIO_PIN_13
#define MX_PB13_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_RISING_FALLING

/* Pin PB15 */
#define MX_PB15_Pin                             PB15
#define MX_PB15_GPIOx                           GPIOB
#define MX_PB15_GPIO_PuPd                       GPIO_NOPULL
#define MX_PB15_GPIO_Pin                        GPIO_PIN_15
#define MX_PB15_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_RISING_FALLING

/* Pin PA11 */
#define MX_PA11_Pin                             PA11
#define MX_PA11_GPIOx                           GPIOA
#define MX_PA11_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA11_GPIO_Pin                        GPIO_PIN_11
#define MX_PA11_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PA10 */
#define MX_PA10_Pin                             PA10
#define MX_PA10_GPIOx                           GPIOA
#define MX_PA10_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA10_GPIO_Pin                        GPIO_PIN_10
#define MX_PA10_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PA12 */
#define MX_PA12_Pin                             PA12
#define MX_PA12_GPIOx                           GPIOA
#define MX_PA12_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA12_GPIO_Pin                        GPIO_PIN_12
#define MX_PA12_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PB1 */
#define MX_PB1_Pin                              PB1
#define MX_PB1_GPIOx                            GPIOB
#define MX_PB1_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB1_GPIO_Pin                         GPIO_PIN_1
#define MX_PB1_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING_FALLING

/* Pin PB0 */
#define MX_PB0_Pin                              PB0
#define MX_PB0_GPIOx                            GPIOB
#define MX_PB0_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB0_GPIO_Pin                         GPIO_PIN_0
#define MX_PB0_GPIO_Mode                        GPIO_MODE_INPUT

#endif  /* __MX_DEVICE_H */

