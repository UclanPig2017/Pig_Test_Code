/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 30/04/2018 19:02:33
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
#define MX_PLLCLKFreq_Value                     96000000
#define MX_SYSCLKFreq_VALUE                     16000000
#define MX_HCLKFreq_Value                       16000000
#define MX_FCLKCortexFreq_Value                 16000000
#define MX_CortexFreq_Value                     16000000
#define MX_AHBFreq_Value                        16000000
#define MX_APB1Freq_Value                       16000000
#define MX_APB2Freq_Value                       16000000
#define MX_APB1TimFreq_Value                    16000000
#define MX_APB2TimFreq_Value                    16000000
#define MX_48MHZClocksFreq_Value                48000000
#define MX_EthernetFreq_Value                   16000000
#define MX_I2SClocksFreq_Value                  96000000
#define MX_RTCFreq_Value                        32000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    16000000

/*-------------------------------- ADC1       --------------------------------*/

#define MX_ADC1                                 1

/* GPIO Configuration */

/* Pin PA0-WKUP */
#define MX_ADCx_IN0_Pin                         PA0_WKUP
#define MX_ADCx_IN0_GPIOx                       GPIOA
#define MX_ADCx_IN0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN0_GPIO_Pin                    GPIO_PIN_0
#define MX_ADCx_IN0_GPIO_Mode                   GPIO_MODE_ANALOG

/* Pin PA1 */
#define MX_ADCx_IN1_Pin                         PA1
#define MX_ADCx_IN1_GPIOx                       GPIOA
#define MX_ADCx_IN1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN1_GPIO_Pin                    GPIO_PIN_1
#define MX_ADCx_IN1_GPIO_Mode                   GPIO_MODE_ANALOG

/* Pin PC1 */
#define MX_ADCx_IN11_Pin                        PC1
#define MX_ADCx_IN11_GPIOx                      GPIOC
#define MX_ADCx_IN11_GPIO_PuPd                  GPIO_NOPULL
#define MX_ADCx_IN11_GPIO_Pin                   GPIO_PIN_1
#define MX_ADCx_IN11_GPIO_Mode                  GPIO_MODE_ANALOG

/* Pin PA4 */
#define MX_ADCx_IN4_Pin                         PA4
#define MX_ADCx_IN4_GPIOx                       GPIOA
#define MX_ADCx_IN4_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN4_GPIO_Pin                    GPIO_PIN_4
#define MX_ADCx_IN4_GPIO_Mode                   GPIO_MODE_ANALOG

/* Pin PB0 */
#define MX_ADCx_IN8_Pin                         PB0
#define MX_ADCx_IN8_GPIOx                       GPIOB
#define MX_ADCx_IN8_GPIO_PuPd                   GPIO_NOPULL
#define MX_ADCx_IN8_GPIO_Pin                    GPIO_PIN_0
#define MX_ADCx_IN8_GPIO_Mode                   GPIO_MODE_ANALOG

/* Pin PC0 */
#define MX_ADCx_IN10_Pin                        PC0
#define MX_ADCx_IN10_GPIOx                      GPIOC
#define MX_ADCx_IN10_GPIO_PuPd                  GPIO_NOPULL
#define MX_ADCx_IN10_GPIO_Pin                   GPIO_PIN_0
#define MX_ADCx_IN10_GPIO_Mode                  GPIO_MODE_ANALOG

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

/*-------------------------------- I2C2       --------------------------------*/

#define MX_I2C2                                 1

/* GPIO Configuration */

/* Pin PB3 */
#define MX_I2C2_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C2_SDA_Pin                         PB3
#define MX_I2C2_SDA_GPIOx                       GPIOB
#define MX_I2C2_SDA_GPIO_PuPdOD                 GPIO_PULLUP
#define MX_I2C2_SDA_GPIO_Pin                    GPIO_PIN_3
#define MX_I2C2_SDA_GPIO_AF                     GPIO_AF9_I2C2
#define MX_I2C2_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PB10 */
#define MX_I2C2_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C2_SCL_Pin                         PB10
#define MX_I2C2_SCL_GPIOx                       GPIOB
#define MX_I2C2_SCL_GPIO_PuPdOD                 GPIO_PULLUP
#define MX_I2C2_SCL_GPIO_Pin                    GPIO_PIN_10
#define MX_I2C2_SCL_GPIO_AF                     GPIO_AF4_I2C2
#define MX_I2C2_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/*-------------------------------- SPI1       --------------------------------*/

#define MX_SPI1                                 1

/* GPIO Configuration */

/* Pin PA6 */
#define MX_SPI1_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MISO_Pin                        PA6
#define MX_SPI1_MISO_GPIOx                      GPIOA
#define MX_SPI1_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI1_MISO_GPIO_AF                    GPIO_AF5_SPI1
#define MX_SPI1_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA7 */
#define MX_SPI1_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MOSI_Pin                        PA7
#define MX_SPI1_MOSI_GPIOx                      GPIOA
#define MX_SPI1_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Pin                   GPIO_PIN_7
#define MX_SPI1_MOSI_GPIO_AF                    GPIO_AF5_SPI1
#define MX_SPI1_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA5 */
#define MX_SPI1_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_SCK_Pin                         PA5
#define MX_SPI1_SCK_GPIOx                       GPIOA
#define MX_SPI1_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Pin                    GPIO_PIN_5
#define MX_SPI1_SCK_GPIO_AF                     GPIO_AF5_SPI1
#define MX_SPI1_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC SPI1_IRQn */
#define MX_SPI1_IRQn_interruptPremptionPriority 1
#define MX_SPI1_IRQn_PriorityGroup              NVIC_PRIORITYGROUP_4
#define MX_SPI1_IRQn_Subriority                 0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- USART2     --------------------------------*/

#define MX_USART2                               1

#define MX_USART2_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PA2 */
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_TX_Pin                        PA2
#define MX_USART2_TX_GPIOx                      GPIOA
#define MX_USART2_TX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_2
#define MX_USART2_TX_GPIO_AF                    GPIO_AF7_USART2
#define MX_USART2_TX_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA3 */
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RX_Pin                        PA3
#define MX_USART2_RX_GPIOx                      GPIOA
#define MX_USART2_RX_GPIO_PuPd                  GPIO_PULLUP
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_3
#define MX_USART2_RX_GPIO_AF                    GPIO_AF7_USART2
#define MX_USART2_RX_GPIO_Mode                  GPIO_MODE_AF_PP

/* NVIC Configuration */

/* NVIC USART2_IRQn */
#define MX_USART2_IRQn_interruptPremptionPriority 1
#define MX_USART2_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_4
#define MX_USART2_IRQn_Subriority               0

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PC3 */
#define MX_PC3_Pin                              PC3
#define MX_PC3_GPIOx                            GPIOC
#define MX_PC3_GPIO_PuPd                        GPIO_NOPULL
#define MX_PC3_GPIO_Pin                         GPIO_PIN_3
#define MX_PC3_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB2 */
#define MX_PB2_Pin                              PB2
#define MX_PB2_GPIOx                            GPIOB
#define MX_PB2_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB2_GPIO_Pin                         GPIO_PIN_2
#define MX_PB2_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB4 */
#define MX_PB4_Pin                              PB4
#define MX_PB4_GPIOx                            GPIOB
#define MX_PB4_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB4_GPIO_Pin                         GPIO_PIN_4
#define MX_PB4_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PB14 */
#define MX_PB14_Pin                             PB14
#define MX_PB14_GPIOx                           GPIOB
#define MX_PB14_GPIO_PuPd                       GPIO_NOPULL
#define MX_PB14_GPIO_Pin                        GPIO_PIN_14
#define MX_PB14_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PC12 */
#define MX_PC12_Pin                             PC12
#define MX_PC12_GPIOx                           GPIOC
#define MX_PC12_GPIO_PuPd                       GPIO_NOPULL
#define MX_PC12_GPIO_Pin                        GPIO_PIN_12
#define MX_PC12_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PB15 */
#define MX_PB15_Pin                             PB15
#define MX_PB15_GPIOx                           GPIOB
#define MX_PB15_GPIO_PuPd                       GPIO_NOPULL
#define MX_PB15_GPIO_Pin                        GPIO_PIN_15
#define MX_PB15_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PA11 */
#define MX_PA11_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PA11_Pin                             PA11
#define MX_PA11_GPIOx                           GPIOA
#define MX_PA11_PinState                        GPIO_PIN_RESET
#define MX_PA11_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA11_GPIO_Pin                        GPIO_PIN_11
#define MX_PA11_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PA10 */
#define MX_PA10_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PA10_Pin                             PA10
#define MX_PA10_GPIOx                           GPIOA
#define MX_PA10_PinState                        GPIO_PIN_RESET
#define MX_PA10_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA10_GPIO_Pin                        GPIO_PIN_10
#define MX_PA10_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PC11 */
#define MX_PC11_Pin                             PC11
#define MX_PC11_GPIOx                           GPIOC
#define MX_PC11_GPIO_PuPd                       GPIO_NOPULL
#define MX_PC11_GPIO_Pin                        GPIO_PIN_11
#define MX_PC11_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PA12 */
#define MX_PA12_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PA12_Pin                             PA12
#define MX_PA12_GPIOx                           GPIOA
#define MX_PA12_PinState                        GPIO_PIN_RESET
#define MX_PA12_GPIO_PuPd                       GPIO_NOPULL
#define MX_PA12_GPIO_Pin                        GPIO_PIN_12
#define MX_PA12_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PC10 */
#define MX_PC10_Pin                             PC10
#define MX_PC10_GPIOx                           GPIOC
#define MX_PC10_GPIO_PuPd                       GPIO_NOPULL
#define MX_PC10_GPIO_Pin                        GPIO_PIN_10
#define MX_PC10_GPIO_Mode                       GPIO_MODE_INPUT

/* Pin PC13-ANTI_TAMP */
#define MX_PC13_ANTI_TAMP_Pin                   PC13_ANTI_TAMP
#define MX_PC13_ANTI_TAMP_GPIOx                 GPIOC
#define MX_PC13_ANTI_TAMP_GPIO_PuPd             GPIO_NOPULL
#define MX_PC13_ANTI_TAMP_GPIO_Pin              GPIO_PIN_13
#define MX_PC13_ANTI_TAMP_GPIO_Mode             GPIO_MODE_INPUT

/* Pin PC14-OSC32_IN */
#define MX_PC14_OSC32_IN_Pin                    PC14_OSC32_IN
#define MX_PC14_OSC32_IN_GPIOx                  GPIOC
#define MX_PC14_OSC32_IN_GPIO_PuPd              GPIO_NOPULL
#define MX_PC14_OSC32_IN_GPIO_Pin               GPIO_PIN_14
#define MX_PC14_OSC32_IN_GPIO_Mode              GPIO_MODE_INPUT

/* Pin PC2 */
#define MX_PC2_Pin                              PC2
#define MX_PC2_GPIOx                            GPIOC
#define MX_PC2_GPIO_PuPd                        GPIO_NOPULL
#define MX_PC2_GPIO_Pin                         GPIO_PIN_2
#define MX_PC2_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PB1 */
#define MX_PB1_Pin                              PB1
#define MX_PB1_GPIOx                            GPIOB
#define MX_PB1_GPIO_PuPd                        GPIO_NOPULL
#define MX_PB1_GPIO_Pin                         GPIO_PIN_1
#define MX_PB1_GPIO_Mode                        GPIO_MODE_INPUT

/* Pin PD2 */
#define MX_PD2_Pin                              PD2
#define MX_PD2_GPIOx                            GPIOD
#define MX_PD2_GPIO_PuPd                        GPIO_NOPULL
#define MX_PD2_GPIO_Pin                         GPIO_PIN_2
#define MX_PD2_GPIO_Mode                        GPIO_MODE_INPUT

#endif  /* __MX_DEVICE_H */
