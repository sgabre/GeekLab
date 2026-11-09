/* -----------------------------------------------------------------------------
 * Copyright (c) 2013-2016 ARM Ltd.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * $Date:        1. December 2016
 * $Revision:    V2.4.4
 *
 * Project:      RTE Device Configuration for ST STM32F4xx
 * -------------------------------------------------------------------------- */

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H

/* -------------------------------------------------------------------------- */
// Device dependent constants for USB MSC Config ----> remove when Keil provide new USB Component with weak function usbd_msc
#define HW_PLATFORM     "Audit7          "
#define HW_REVISION     "1.0 "
/* -------------------------------------------------------------------------- */

#define GPIO_PORT0      GPIOA
#define GPIO_PORT1      GPIOB
#define GPIO_PORT2      GPIOC
#define GPIO_PORT3      GPIOD
#define GPIO_PORT4      GPIOE
#define GPIO_PORT5      GPIOF
#define GPIO_PORT6      GPIOG
#define GPIO_PORT7      GPIOH
#define GPIO_PORT8      GPIOI
#define GPIO_PORT9      GPIOJ
#define GPIO_PORT10     GPIOK

#define GPIO_PORT(num)  GPIO_PORT##num

// <h> DEFAULT [AUDIT7 (MICROpay7)]
// <i> default Audit7 configurations

// <e> USART1 (Universal synchronous asynchronous receiver transmitter) [Driver_USART1]
// <i> Configuration settings for Driver_USART1 in component ::CMSIS Driver:USART
#define RTE_USART1                      1

//   <o> USART1_TX Pin <0=>Not Used <1=>PA9 <2=>PA15 <3=>PB6
#define RTE_USART1_TX_ID                3
#if    (RTE_USART1_TX_ID == 0)
#define RTE_USART1_TX                   0
#elif  (RTE_USART1_TX_ID == 1)
#define RTE_USART1_TX                   1
#define RTE_USART1_TX_PORT              GPIOA
#define RTE_USART1_TX_BIT               9
#elif  (RTE_USART1_TX_ID == 2)
#define RTE_USART1_TX                   1
#define RTE_USART1_TX_PORT              GPIOA
#define RTE_USART1_TX_BIT               15
#elif  (RTE_USART1_TX_ID == 3)
#define RTE_USART1_TX                   1
#define RTE_USART1_TX_PORT              GPIOB
#define RTE_USART1_TX_BIT               6
#else
#error "Invalid USART1_TX Pin Configuration!"
#endif

//   <o> USART1_RX Pin <0=>Not Used <1=>PA10 <2=>PB3 <3=>PB7
#define RTE_USART1_RX_ID                3
#if    (RTE_USART1_RX_ID == 0)
#define RTE_USART1_RX                   0
#elif  (RTE_USART1_RX_ID == 1)
#define RTE_USART1_RX                   1
#define RTE_USART1_RX_PORT              GPIOA
#define RTE_USART1_RX_BIT               10
#elif  (RTE_USART1_RX_ID == 2)
#define RTE_USART1_RX                   1
#define RTE_USART1_RX_PORT              GPIOB
#define RTE_USART1_RX_BIT               3
#elif  (RTE_USART1_RX_ID == 3)
#define RTE_USART1_RX                   1
#define RTE_USART1_RX_PORT              GPIOB
#define RTE_USART1_RX_BIT               7
#else
#error "Invalid USART1_RX Pin Configuration!"
#endif

//   <o> USART1_CK Pin <0=>Not Used <1=>PA8
#define RTE_USART1_CK_ID                0
#if    (RTE_USART1_CK_ID == 0)
#define RTE_USART1_CK                   0
#elif  (RTE_USART1_CK_ID == 1)
#define RTE_USART1_CK                   1
#define RTE_USART1_CK_PORT              GPIOA
#define RTE_USART1_CK_BIT               8
#else
#error "Invalid USART1_CK Pin Configuration!"
#endif

//   <o> USART1_CTS Pin <0=>Not Used <1=>PA11
#define RTE_USART1_CTS_ID               0
#if    (RTE_USART1_CTS_ID == 0)
#define RTE_USART1_CTS                  0
#elif  (RTE_USART1_CTS_ID == 1)
#define RTE_USART1_CTS                  1
#define RTE_USART1_CTS_PORT             GPIOA
#define RTE_USART1_CTS_BIT              11
#else
#error "Invalid USART1_CTS Pin Configuration!"
#endif

//   <o> USART1_RTS Pin <0=>Not Used <1=>PA12
#define RTE_USART1_RTS_ID               0
#if    (RTE_USART1_RTS_ID == 0)
#define RTE_USART1_RTS                  0
#elif  (RTE_USART1_RTS_ID == 1)
#define RTE_USART1_RTS                  1
#define RTE_USART1_RTS_PORT             GPIOA
#define RTE_USART1_RTS_BIT              12
#else
#error "Invalid USART1_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <2=>2 <5=>5
//     <i>  Selects DMA Stream (only Stream 2 or 5 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_USART1_RX_DMA               0
#define RTE_USART1_RX_DMA_NUMBER        2
#define RTE_USART1_RX_DMA_STREAM        2
#define RTE_USART1_RX_DMA_CHANNEL       4
#define RTE_USART1_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <7=>7
//     <i>  Selects DMA Stream (only Stream 7 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_USART1_TX_DMA               0
#define RTE_USART1_TX_DMA_NUMBER        2
#define RTE_USART1_TX_DMA_STREAM        7
#define RTE_USART1_TX_DMA_CHANNEL       4
#define RTE_USART1_TX_DMA_PRIORITY      0

// </e>


// <e> USART2 (Universal synchronous asynchronous receiver transmitter) [Driver_USART2]
// <i> Configuration settings for Driver_USART2 in component ::CMSIS Driver:USART
#define RTE_USART2                      0

//   <o> USART2_TX Pin <0=>Not Used <1=>PA2 <2=>PD5
#define RTE_USART2_TX_ID                2
#if    (RTE_USART2_TX_ID == 0)
#define RTE_USART2_TX                   0
#elif  (RTE_USART2_TX_ID == 1)
#define RTE_USART2_TX                   1
#define RTE_USART2_TX_PORT              GPIOA
#define RTE_USART2_TX_BIT               2
#elif  (RTE_USART2_TX_ID == 2)
#define RTE_USART2_TX                   1
#define RTE_USART2_TX_PORT              GPIOD
#define RTE_USART2_TX_BIT               5
#else
#error "Invalid USART2_TX Pin Configuration!"
#endif

//   <o> USART2_RX Pin <0=>Not Used <1=>PA3 <2=>PD6
#define RTE_USART2_RX_ID                2
#if    (RTE_USART2_RX_ID == 0)
#define RTE_USART2_RX                   0
#elif  (RTE_USART2_RX_ID == 1)
#define RTE_USART2_RX                   1
#define RTE_USART2_RX_PORT              GPIOA
#define RTE_USART2_RX_BIT               3
#elif  (RTE_USART2_RX_ID == 2)
#define RTE_USART2_RX                   1
#define RTE_USART2_RX_PORT              GPIOD
#define RTE_USART2_RX_BIT               6
#else
#error "Invalid USART2_RX Pin Configuration!"
#endif

//   <o> USART2_CK Pin <0=>Not Used <1=>PA4 <2=>PD7
#define RTE_USART2_CK_ID                2
#if    (RTE_USART2_CK_ID == 0)
#define RTE_USART2_CK                   0
#elif  (RTE_USART2_CK_ID == 1)
#define RTE_USART2_CK                   1
#define RTE_USART2_CK_PORT              GPIOA
#define RTE_USART2_CK_BIT               4
#elif  (RTE_USART2_CK_ID == 2)
#define RTE_USART2_CK                   1
#define RTE_USART2_CK_PORT              GPIOD
#define RTE_USART2_CK_BIT               7
#else
#error "Invalid USART2_CK Pin Configuration!"
#endif

//   <o> USART2_CTS Pin <0=>Not Used <1=>PA0 <2=>PD3
#define RTE_USART2_CTS_ID               0
#if    (RTE_USART2_CTS_ID == 0)
#define RTE_USART2_CTS                  0
#elif  (RTE_USART2_CTS_ID == 1)
#define RTE_USART2_CTS                  1
#define RTE_USART2_CTS_PORT             GPIOA
#define RTE_USART2_CTS_BIT              0
#elif  (RTE_USART2_CTS_ID == 2)
#define RTE_USART2_CTS                  1
#define RTE_USART2_CTS_PORT             GPIOD
#define RTE_USART2_CTS_BIT              3
#else
#error "Invalid USART2_CTS Pin Configuration!"
#endif

//   <o> USART2_RTS Pin <0=>Not Used <1=>PA1 <2=>PD4
#define RTE_USART2_RTS_ID               0
#if    (RTE_USART2_RTS_ID == 0)
#define RTE_USART2_RTS                  0
#elif  (RTE_USART2_RTS_ID == 1)
#define RTE_USART2_RTS                  1
#define RTE_USART2_RTS_PORT             GPIOA
#define RTE_USART2_RTS_BIT              1
#elif  (RTE_USART2_RTS_ID == 2)
#define RTE_USART2_RTS                  1
#define RTE_USART2_RTS_PORT             GPIOD
#define RTE_USART2_RTS_BIT              4
#else
#error "Invalid USART2_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <5=>5 <7=>7
//     <i>  Selects DMA Stream (only Stream 5 or 7 can be used)
//     <o3> Channel <4=>4 <6=>6
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_USART2_RX_DMA               0
#define RTE_USART2_RX_DMA_NUMBER        1
#define RTE_USART2_RX_DMA_STREAM        5
#define RTE_USART2_RX_DMA_CHANNEL       4
#define RTE_USART2_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <6=>6
//     <i>  Selects DMA Stream (only Stream 6 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_USART2_TX_DMA               0
#define RTE_USART2_TX_DMA_NUMBER        1
#define RTE_USART2_TX_DMA_STREAM        6
#define RTE_USART2_TX_DMA_CHANNEL       4
#define RTE_USART2_TX_DMA_PRIORITY      0

// </e>


// <e> USART3 (Universal synchronous asynchronous receiver transmitter) [Driver_USART3]
// <i> Configuration settings for Driver_USART3 in component ::CMSIS Driver:USART
#define RTE_USART3                      1

//   <o> USART3_TX Pin <0=>Not Used <1=>PB10 <2=>PC10 <3=>PD8
#define RTE_USART3_TX_ID                3
#if    (RTE_USART3_TX_ID == 0)
#define RTE_USART3_TX                   0
#elif  (RTE_USART3_TX_ID == 1)
#define RTE_USART3_TX                   1
#define RTE_USART3_TX_PORT              GPIOB
#define RTE_USART3_TX_BIT               10
#elif  (RTE_USART3_TX_ID == 2)
#define RTE_USART3_TX                   1
#define RTE_USART3_TX_PORT              GPIOC
#define RTE_USART3_TX_BIT               10
#elif  (RTE_USART3_TX_ID == 3)
#define RTE_USART3_TX                   1
#define RTE_USART3_TX_PORT              GPIOD
#define RTE_USART3_TX_BIT               8
#else
#error "Invalid USART3_TX Pin Configuration!"
#endif

//   <o> USART3_RX Pin <0=>Not Used <1=>PB11 <2=>PC11 <3=>PD9 <4=>PC5
#define RTE_USART3_RX_ID                3
#if    (RTE_USART3_RX_ID == 0)
#define RTE_USART3_RX                   0
#elif  (RTE_USART3_RX_ID == 1)
#define RTE_USART3_RX                   1
#define RTE_USART3_RX_PORT              GPIOB
#define RTE_USART3_RX_BIT               11
#elif  (RTE_USART3_RX_ID == 2)
#define RTE_USART3_RX                   1
#define RTE_USART3_RX_PORT              GPIOC
#define RTE_USART3_RX_BIT               11
#elif  (RTE_USART3_RX_ID == 3)
#define RTE_USART3_RX                   1
#define RTE_USART3_RX_PORT              GPIOD
#define RTE_USART3_RX_BIT               9
#elif  (RTE_USART3_RX_ID == 4)
#define RTE_USART3_RX                   1
#define RTE_USART3_RX_PORT              GPIOC
#define RTE_USART3_RX_BIT               5
#else
#error "Invalid USART3_RX Pin Configuration!"
#endif

//   <o> USART3_CK Pin <0=>Not Used <1=>PB12 <2=>PC12 <3=>PD10
#define RTE_USART3_CK_ID                0
#if    (RTE_USART3_CK_ID == 0)
#define RTE_USART3_CK                   0
#elif  (RTE_USART3_CK_ID == 1)
#define RTE_USART3_CK                   1
#define RTE_USART3_CK_PORT              GPIOB
#define RTE_USART3_CK_BIT               12
#elif  (RTE_USART3_CK_ID == 2)
#define RTE_USART3_CK                   1
#define RTE_USART3_CK_PORT              GPIOC
#define RTE_USART3_CK_BIT               12
#elif  (RTE_USART3_CK_ID == 3)
#define RTE_USART3_CK                   1
#define RTE_USART3_CK_PORT              GPIOD
#define RTE_USART3_CK_BIT               10
#else
#error "Invalid USART3_CK Pin Configuration!"
#endif

//   <o> USART3_CTS Pin <0=>Not Used <1=>PB13 <2=>PD11
#define RTE_USART3_CTS_ID               0
#if    (RTE_USART3_CTS_ID == 0)
#define RTE_USART3_CTS                  0
#elif  (RTE_USART3_CTS_ID == 1)
#define RTE_USART3_CTS                  1
#define RTE_USART3_CTS_PORT             GPIOB
#define RTE_USART3_CTS_BIT              13
#elif  (RTE_USART3_CTS_ID == 2)
#define RTE_USART3_CTS                  1
#define RTE_USART3_CTS_PORT             GPIOD
#define RTE_USART3_CTS_BIT              11
#else
#error "Invalid USART3_CTS Pin Configuration!"
#endif

//   <o> USART3_RTS Pin <0=>Not Used <1=>PB14 <2=>PD12
#define RTE_USART3_RTS_ID               0
#if    (RTE_USART3_RTS_ID == 0)
#define RTE_USART3_RTS                  0
#elif  (RTE_USART3_RTS_ID == 1)
#define RTE_USART3_RTS                  1
#define RTE_USART3_RTS_PORT             GPIOB
#define RTE_USART3_RTS_BIT              14
#elif  (RTE_USART3_RTS_ID == 2)
#define RTE_USART3_RTS                  1
#define RTE_USART3_RTS_PORT             GPIOD
#define RTE_USART3_RTS_BIT              12
#else
#error "Invalid USART3_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <1=>1 <4=>4
//     <i>  Selects DMA Stream (only Stream 1 or 4 can be used)
//     <o3> Channel <4=>4 <7=>7
//     <i>  Selects DMA Channel (only Channel 4 or 7 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_USART3_RX_DMA               0
#define RTE_USART3_RX_DMA_NUMBER        1
#define RTE_USART3_RX_DMA_STREAM        1
#define RTE_USART3_RX_DMA_CHANNEL       4
#define RTE_USART3_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <3=>3 <4=>4
//     <i>  Selects DMA Stream (only Stream 3 or 4 can be used)
//     <o3> Channel <4=>4 <7=>7
//     <i>  Selects DMA Channel (only Channel 4 or 7 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_USART3_TX_DMA               0
#define RTE_USART3_TX_DMA_NUMBER        1
#define RTE_USART3_TX_DMA_STREAM        3
#define RTE_USART3_TX_DMA_CHANNEL       4
#define RTE_USART3_TX_DMA_PRIORITY      0

// </e>


// <e> UART4 (Universal asynchronous receiver transmitter) [Driver_USART4]
// <i> Configuration settings for Driver_USART4 in component ::CMSIS Driver:USART
#define RTE_UART4                       0

//   <o> UART4_TX Pin <0=>Not Used <1=>PA0 <2=>PC10 <3=>PD10 <4=>PA12 <5=>PD1
#define RTE_UART4_TX_ID                 0
#if    (RTE_UART4_TX_ID == 0)
#define RTE_UART4_TX                    0
#elif  (RTE_UART4_TX_ID == 1)
#define RTE_UART4_TX                    1
#define RTE_UART4_TX_PORT               GPIOA
#define RTE_UART4_TX_BIT                0
#elif  (RTE_UART4_TX_ID == 2)
#define RTE_UART4_TX                    1
#define RTE_UART4_TX_PORT               GPIOC
#define RTE_UART4_TX_BIT                10
#elif  (RTE_UART4_TX_ID == 3)
#define RTE_UART4_TX                    1
#define RTE_UART4_TX_PORT               GPIOD
#define RTE_UART4_TX_BIT                10
#elif  (RTE_UART4_TX_ID == 4)
#define RTE_UART4_TX                    1
#define RTE_UART4_TX_PORT               GPIOA
#define RTE_UART4_TX_BIT                12
#elif  (RTE_UART4_TX_ID == 5)
#define RTE_UART4_TX                    1
#define RTE_UART4_TX_PORT               GPIOD
#define RTE_UART4_TX_BIT                1
#else
#error "Invalid UART4_TX Pin Configuration!"
#endif

//   <o> UART4_RX Pin <0=>Not Used <1=>PA1 <2=>PC11 <3=>PA11 <4=>PD0
#define RTE_UART4_RX_ID                 0
#if    (RTE_UART4_RX_ID == 0)
#define RTE_UART4_RX                    0
#elif  (RTE_UART4_RX_ID == 1)
#define RTE_UART4_RX                    1
#define RTE_UART4_RX_PORT               GPIOA
#define RTE_UART4_RX_BIT                1
#elif  (RTE_UART4_RX_ID == 2)
#define RTE_UART4_RX                    1
#define RTE_UART4_RX_PORT               GPIOC
#define RTE_UART4_RX_BIT                11
#elif  (RTE_UART4_RX_ID == 3)
#define RTE_UART4_RX                    1
#define RTE_UART4_RX_PORT               GPIOA
#define RTE_UART4_RX_BIT                11
#elif  (RTE_UART4_RX_ID == 4)
#define RTE_UART4_RX                    1
#define RTE_UART4_RX_PORT               GPIOD
#define RTE_UART4_RX_BIT                0
#else
#error "Invalid UART4_RX Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <2=>2
//     <i>  Selects DMA Stream (only Stream 2 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART4_RX_DMA                0
#define RTE_UART4_RX_DMA_NUMBER         1
#define RTE_UART4_RX_DMA_STREAM         2
#define RTE_UART4_RX_DMA_CHANNEL        4
#define RTE_UART4_RX_DMA_PRIORITY       0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <4=>4
//     <i>  Selects DMA Stream (only Stream 4 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART4_TX_DMA                0
#define RTE_UART4_TX_DMA_NUMBER         1
#define RTE_UART4_TX_DMA_STREAM         4
#define RTE_UART4_TX_DMA_CHANNEL        4
#define RTE_UART4_TX_DMA_PRIORITY       0

// </e>


// <e> UART5 (Universal asynchronous receiver transmitter) [Driver_USART5]
// <i> Configuration settings for Driver_USART5 in component ::CMSIS Driver:USART
#define RTE_UART5                       0

//   <o> UART5_TX Pin <0=>Not Used <1=>PC12 <1=>PB6 <1=>PB9 <1=>PB13
#define RTE_UART5_TX_ID                 0
#if    (RTE_UART5_TX_ID == 0)
#define RTE_UART5_TX                    0
#elif  (RTE_UART5_TX_ID == 1)
#define RTE_UART5_TX                    1
#define RTE_UART5_TX_PORT               GPIOC
#define RTE_UART5_TX_BIT                12
#elif  (RTE_UART5_TX_ID == 2)
#define RTE_UART5_TX                    1
#define RTE_UART5_TX_PORT               GPIOB
#define RTE_UART5_TX_BIT                6
#elif  (RTE_UART5_TX_ID == 3)
#define RTE_UART5_TX                    1
#define RTE_UART5_TX_PORT               GPIOB
#define RTE_UART5_TX_BIT                9
#elif  (RTE_UART5_TX_ID == 4)
#define RTE_UART5_TX                    1
#define RTE_UART5_TX_PORT               GPIOB
#define RTE_UART5_TX_BIT                13
#else
#error "Invalid UART5_TX Pin Configuration!"
#endif

//   <o> UART5_RX Pin <0=>Not Used <1=>PD2 <1=>PB5 <1=>PB8 <1=>PB12
#define RTE_UART5_RX_ID                 0
#if    (RTE_UART5_RX_ID == 0)
#define RTE_UART5_RX                    0
#elif  (RTE_UART5_RX_ID == 1)
#define RTE_UART5_RX                    1
#define RTE_UART5_RX_PORT               GPIOD
#define RTE_UART5_RX_BIT                2
#elif  (RTE_UART5_TX_ID == 2)
#define RTE_UART5_TX                    1
#define RTE_UART5_TX_PORT               GPIOB
#define RTE_UART5_TX_BIT                5
#elif  (RTE_UART5_TX_ID == 3)
#define RTE_UART5_TX                    1
#define RTE_UART5_TX_PORT               GPIOB
#define RTE_UART5_TX_BIT                8
#elif  (RTE_UART5_TX_ID == 4)
#define RTE_UART5_TX                    1
#define RTE_UART5_TX_PORT               GPIOB
#define RTE_UART5_TX_BIT                12
#else
#error "Invalid UART5_RX Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <0=>0
//     <i>  Selects DMA Stream (only Stream 0 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART5_RX_DMA                0
#define RTE_UART5_RX_DMA_NUMBER         1
#define RTE_UART5_RX_DMA_STREAM         0
#define RTE_UART5_RX_DMA_CHANNEL        4
#define RTE_UART5_RX_DMA_PRIORITY       0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <7=>7
//     <i>  Selects DMA Stream (only Stream 7 can be used)
//     <o3> Channel <4=>4 <8=>8
//     <i>  Selects DMA Channel (only Channel 4 or 8 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART5_TX_DMA                0
#define RTE_UART5_TX_DMA_NUMBER         1
#define RTE_UART5_TX_DMA_STREAM         7
#define RTE_UART5_TX_DMA_CHANNEL        4
#define RTE_UART5_TX_DMA_PRIORITY       0

// </e>


// <e> USART6 (Universal synchronous asynchronous receiver transmitter) [Driver_USART6]
// <i> Configuration settings for Driver_USART6 in component ::CMSIS Driver:USART
#define RTE_USART6                      1

//   <o> USART6_TX Pin <0=>Not Used <1=>PA11 <2=>PC6 <3=>PG14
#define RTE_USART6_TX_ID                2
#if    (RTE_USART6_TX_ID == 0)
#define RTE_USART6_TX                   0
#elif  (RTE_USART6_TX_ID == 1)
#define RTE_USART6_TX                   1
#define RTE_USART6_TX_PORT              GPIOA
#define RTE_USART6_TX_BIT               11
#elif  (RTE_USART6_TX_ID == 2)
#define RTE_USART6_TX                   1
#define RTE_USART6_TX_PORT              GPIOC
#define RTE_USART6_TX_BIT               6
#elif  (RTE_USART6_TX_ID == 3)
#define RTE_USART6_TX                   1
#define RTE_USART6_TX_PORT              GPIOG
#define RTE_USART6_TX_BIT               14
#else
#error "Invalid USART6_TX Pin Configuration!"
#endif

//   <o> USART6_RX Pin <0=>Not Used <1=>PA12 <2=>PC7 <3=>PG9
#define RTE_USART6_RX_ID                2
#if    (RTE_USART6_RX_ID == 0)
#define RTE_USART6_RX                   0
#elif  (RTE_USART6_RX_ID == 1)
#define RTE_USART6_RX                   1
#define RTE_USART6_RX_PORT              GPIOA
#define RTE_USART6_RX_BIT               12
#elif  (RTE_USART6_RX_ID == 2)
#define RTE_USART6_RX                   1
#define RTE_USART6_RX_PORT              GPIOC
#define RTE_USART6_RX_BIT               7
#elif  (RTE_USART6_RX_ID == 3)
#define RTE_USART6_RX                   1
#define RTE_USART6_RX_PORT              GPIOG
#define RTE_USART6_RX_BIT               9
#else
#error "Invalid USART6_RX Pin Configuration!"
#endif

//   <o> USART6_CK Pin <0=>Not Used <1=>PC8 <2=>PG7
#define RTE_USART6_CK_ID                0
#if    (RTE_USART6_CK_ID == 0)
#define RTE_USART6_CK                   0
#elif  (RTE_USART6_CK_ID == 1)
#define RTE_USART6_CK                   1
#define RTE_USART6_CK_PORT              GPIOC
#define RTE_USART6_CK_BIT               8
#elif  (RTE_USART6_CK_ID == 2)
#define RTE_USART6_CK                   1
#define RTE_USART6_CK_PORT              GPIOG
#define RTE_USART6_CK_BIT               7
#else
#error "Invalid USART6_CK Pin Configuration!"
#endif

//   <o> USART6_CTS Pin <0=>Not Used <1=>PG13 <2=>PG15
#define RTE_USART6_CTS_ID               0
#if    (RTE_USART6_CTS_ID == 0)
#define RTE_USART6_CTS                  0
#elif  (RTE_USART6_CTS_ID == 1)
#define RTE_USART6_CTS                  1
#define RTE_USART6_CTS_PORT             GPIOG
#define RTE_USART6_CTS_BIT              13
#elif  (RTE_USART6_CTS_ID == 2)
#define RTE_USART6_CTS                  1
#define RTE_USART6_CTS_PORT             GPIOG
#define RTE_USART6_CTS_BIT              15
#else
#error "Invalid USART6_CTS Pin Configuration!"
#endif

//   <o> USART6_RTS Pin <0=>Not Used <1=>PG8 <2=>PG12
#define RTE_USART6_RTS_ID               0
#if    (RTE_USART6_RTS_ID == 0)
#define RTE_USART6_RTS                  0
#elif  (RTE_USART6_RTS_ID == 1)
#define RTE_USART6_RTS                  1
#define RTE_USART6_RTS_PORT             GPIOG
#define RTE_USART6_RTS_BIT              8
#elif  (RTE_USART6_RTS_ID == 2)
#define RTE_USART6_RTS                  1
#define RTE_USART6_RTS_PORT             GPIOG
#define RTE_USART6_RTS_BIT              12
#else
#error "Invalid USART6_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <1=>1 <2=>2
//     <i>  Selects DMA Stream (only Stream 1 or 2 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_USART6_RX_DMA               0
#define RTE_USART6_RX_DMA_NUMBER        2
#define RTE_USART6_RX_DMA_STREAM        1
#define RTE_USART6_RX_DMA_CHANNEL       5
#define RTE_USART6_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <6=>6 <7=>7
//     <i>  Selects DMA Stream (only Stream 6 or 7 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_USART6_TX_DMA               0
#define RTE_USART6_TX_DMA_NUMBER        2
#define RTE_USART6_TX_DMA_STREAM        6
#define RTE_USART6_TX_DMA_CHANNEL       5
#define RTE_USART6_TX_DMA_PRIORITY      0

// </e>

// <e> UART7 (Universal asynchronous receiver transmitter) [Driver_USART7]
// <i> Configuration settings for Driver_USART7 in component ::CMSIS Driver:USART
#define RTE_UART7                       1

//   <o> UART7_TX Pin <0=>Not Used <1=>PF7 <2=>PE8 <3=>PA15 <4=>PB4
#define RTE_UART7_TX_ID                 2
#if    (RTE_UART7_TX_ID == 0)
#define RTE_UART7_TX                    0
#elif  (RTE_UART7_TX_ID == 1)
#define RTE_UART7_TX                    1
#define RTE_UART7_TX_PORT               GPIOF
#define RTE_UART7_TX_BIT                7
#elif  (RTE_UART7_TX_ID == 2)
#define RTE_UART7_TX                    1
#define RTE_UART7_TX_PORT               GPIOE
#define RTE_UART7_TX_BIT                8
#elif  (RTE_UART7_TX_ID == 3)
#define RTE_UART7_TX                    1
#define RTE_UART7_TX_PORT               GPIOA
#define RTE_UART7_TX_BIT                15
#elif  (RTE_UART7_TX_ID == 4)
#define RTE_UART7_TX                    1
#define RTE_UART7_TX_PORT               GPIOB
#define RTE_UART7_TX_BIT                4
#else
#error "Invalid UART7_TX Pin Configuration!"
#endif

//   <o> UART7_RX Pin <0=>Not Used <1=>PF6 <2=>PE7 <3=>PA8 <4=>PB3
#define RTE_UART7_RX_ID                 2
#if    (RTE_UART7_RX_ID == 0)
#define RTE_UART7_RX                    0
#elif  (RTE_UART7_RX_ID == 1)
#define RTE_UART7_RX                    1
#define RTE_UART7_RX_PORT               GPIOF
#define RTE_UART7_RX_BIT                6
#elif  (RTE_UART7_RX_ID == 2)
#define RTE_UART7_RX                    1
#define RTE_UART7_RX_PORT               GPIOE
#define RTE_UART7_RX_BIT                7
#elif  (RTE_UART7_RX_ID == 3)
#define RTE_UART7_RX                    1
#define RTE_UART7_RX_PORT               GPIOA
#define RTE_UART7_RX_BIT                8
#elif  (RTE_UART7_RX_ID == 4)
#define RTE_UART7_RX                    1
#define RTE_UART7_RX_PORT               GPIOB
#define RTE_UART7_RX_BIT                3
#else
#error "Invalid UART7_RX Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <3=>3
//     <i>  Selects DMA Stream (only Stream 3 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART7_RX_DMA                0
#define RTE_UART7_RX_DMA_NUMBER         1
#define RTE_UART7_RX_DMA_STREAM         3
#define RTE_UART7_RX_DMA_CHANNEL        5
#define RTE_UART7_RX_DMA_PRIORITY       0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <1=>1
//     <i>  Selects DMA Stream (only Stream 1 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART7_TX_DMA                0
#define RTE_UART7_TX_DMA_NUMBER         1
#define RTE_UART7_TX_DMA_STREAM         1
#define RTE_UART7_TX_DMA_CHANNEL        5
#define RTE_UART7_TX_DMA_PRIORITY       0

// </e>

// <e> UART8 (Universal asynchronous receiver transmitter) [Driver_USART8]
// <i> Configuration settings for Driver_USART8 in component ::CMSIS Driver:USART
#define RTE_UART8                       1

//   <o> UART8_TX Pin <0=>Not Used <1=>PE1 <2=>PF9
#define RTE_UART8_TX_ID                 1
#if    (RTE_UART8_TX_ID == 0)
#define RTE_UART8_TX                    0
#elif  (RTE_UART8_TX_ID == 1)
#define RTE_UART8_TX                    1
#define RTE_UART8_TX_PORT               GPIOE
#define RTE_UART8_TX_BIT                1
#elif  (RTE_UART8_TX_ID == 2)
#define RTE_UART8_TX                    1
#define RTE_UART8_TX_PORT               GPIOF
#define RTE_UART8_TX_BIT                9
#else
#error "Invalid UART8_TX Pin Configuration!"
#endif

//   <o> UART8_RX Pin <0=>Not Used <1=>PE0 <2=>PF8
#define RTE_UART8_RX_ID                 1
#if    (RTE_UART8_RX_ID == 0)
#define RTE_UART8_RX                    0
#elif  (RTE_UART8_RX_ID == 1)
#define RTE_UART8_RX                    1
#define RTE_UART8_RX_PORT               GPIOE
#define RTE_UART8_RX_BIT                0
#elif  (RTE_UART8_RX_ID == 2)
#define RTE_UART8_RX                    1
#define RTE_UART8_RX_PORT               GPIOF
#define RTE_UART8_RX_BIT                8
#else
#error "Invalid UART8_RX Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <6=>6
//     <i>  Selects DMA Stream (only Stream 6 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART8_RX_DMA                1
#define RTE_UART8_RX_DMA_NUMBER         1
#define RTE_UART8_RX_DMA_STREAM         6
#define RTE_UART8_RX_DMA_CHANNEL        5
#define RTE_UART8_RX_DMA_PRIORITY       0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <0=>0
//     <i>  Selects DMA Stream (only Stream 0 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART8_TX_DMA                1
#define RTE_UART8_TX_DMA_NUMBER         1
#define RTE_UART8_TX_DMA_STREAM         0
#define RTE_UART8_TX_DMA_CHANNEL        5
#define RTE_UART8_TX_DMA_PRIORITY       0

// </e>

// <e> UART9 (Universal asynchronous receiver transmitter) [Driver_USART9]
// <i> Configuration settings for Driver_USART9 in component ::CMSIS Driver:USART
#define RTE_UART9                       0

//   <o> UART9_TX Pin <0=>Not Used <1=>PD15 <2=>PG1
#define RTE_UART9_TX_ID                 0
#if    (RTE_UART9_TX_ID == 0)
#define RTE_UART9_TX                    0
#elif  (RTE_UART9_TX_ID == 1)
#define RTE_UART9_TX                    1
#define RTE_UART9_TX_PORT               GPIOD
#define RTE_UART9_TX_BIT                15
#elif  (RTE_UART9_TX_ID == 2)
#define RTE_UART9_TX                    1
#define RTE_UART9_TX_PORT               GPIOG
#define RTE_UART9_TX_BIT                1
#else
#error "Invalid UART9_TX Pin Configuration!"
#endif

//   <o> UART9_RX Pin <0=>Not Used <1=>PD14 <2=>PG0
#define RTE_UART9_RX_ID                 0
#if    (RTE_UART9_RX_ID == 0)
#define RTE_UART9_RX                    0
#elif  (RTE_UART9_RX_ID == 1)
#define RTE_UART9_RX                    1
#define RTE_UART9_RX_PORT               GPIOD
#define RTE_UART9_RX_BIT                14
#elif  (RTE_UART9_RX_ID == 2)
#define RTE_UART9_RX                    1
#define RTE_UART9_RX_PORT               GPIOG
#define RTE_UART9_RX_BIT                0
#else
#error "Invalid UART9_RX Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <7=>7
//     <i>  Selects DMA Stream (only Stream 7 can be used)
//     <o3> Channel <0=>0
//     <i>  Selects DMA Channel (only Channel 0 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART9_RX_DMA                0
#define RTE_UART9_RX_DMA_NUMBER         1
#define RTE_UART9_RX_DMA_STREAM         6
#define RTE_UART9_RX_DMA_CHANNEL        5
#define RTE_UART9_RX_DMA_PRIORITY       0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <0=>0
//     <i>  Selects DMA Stream (only Stream 0 can be used)
//     <o3> Channel <1=>1
//     <i>  Selects DMA Channel (only Channel 1 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART9_TX_DMA                0
#define RTE_UART9_TX_DMA_NUMBER         1
#define RTE_UART9_TX_DMA_STREAM         0
#define RTE_UART9_TX_DMA_CHANNEL        5
#define RTE_UART9_TX_DMA_PRIORITY       0

// </e>

// <e> UART10 (Universal asynchronous receiver transmitter) [Driver_USART10]
// <i> Configuration settings for Driver_USART10 in component ::CMSIS Driver:USART
#define RTE_UART10                      0

//   <o> UART10_TX Pin <0=>Not Used <1=>PE3 <2=>PG12
#define RTE_UART10_TX_ID                0
#if    (RTE_UART10_TX_ID == 0)
#define RTE_UART10_TX                   0
#elif  (RTE_UART10_TX_ID == 1)
#define RTE_UART10_TX                   1
#define RTE_UART10_TX_PORT              GPIOE
#define RTE_UART10_TX_BIT               3
#elif  (RTE_UART10_TX_ID == 2)
#define RTE_UART10_TX                   1
#define RTE_UART10_TX_PORT              GPIOG
#define RTE_UART10_TX_BIT               12
#else
#error "Invalid UART10_TX Pin Configuration!"
#endif

//   <o> UART10_RX Pin <0=>Not Used <1=>PE2 <2=>PG11
#define RTE_UART10_RX_ID                0
#if    (RTE_UART10_RX_ID == 0)
#define RTE_UART10_RX                   0
#elif  (RTE_UART10_RX_ID == 1)
#define RTE_UART10_RX                   1
#define RTE_UART10_RX_PORT              GPIOE
#define RTE_UART10_RX_BIT               2
#elif  (RTE_UART10_RX_ID == 2)
#define RTE_UART10_RX                   1
#define RTE_UART10_RX_PORT              GPIOG
#define RTE_UART10_RX_BIT               11
#else
#error "Invalid UART10_RX Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <0=>0 <3=>3
//     <i>  Selects DMA Stream (only Stream 0 or 3 can be used)
//     <o3> Channel <5=>5 <9=>9
//     <i>  Selects DMA Channel (only Channel 5 or 9 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART10_RX_DMA               0
#define RTE_UART10_RX_DMA_NUMBER        1
#define RTE_UART10_RX_DMA_STREAM        6
#define RTE_UART10_RX_DMA_CHANNEL       5
#define RTE_UART10_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <7=>7 <3=>5
//     <i>  Selects DMA Stream (only Stream 7 or 5 can be used)
//     <o3> Channel <6=>6 <9=>9
//     <i>  Selects DMA Channel (only Channel 6 or 9 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_UART10_TX_DMA               0
#define RTE_UART10_TX_DMA_NUMBER        1
#define RTE_UART10_TX_DMA_STREAM        0
#define RTE_UART10_TX_DMA_CHANNEL       5
#define RTE_UART10_TX_DMA_PRIORITY      0

// </e>


// <e> I2C1 (Inter-integrated Circuit Interface 1) [Driver_I2C1]
// <i> Configuration settings for Driver_I2C1 in component ::CMSIS Driver:I2C
#define RTE_I2C1                        1

//   <o> I2C1_SCL Pin <0=>PB6 <1=>PB8
#define RTE_I2C1_SCL_PORT_ID            1
#if    (RTE_I2C1_SCL_PORT_ID == 0)
#define RTE_I2C1_SCL_PORT               GPIOB
#define RTE_I2C1_SCL_BIT                6
#elif  (RTE_I2C1_SCL_PORT_ID == 1)
#define RTE_I2C1_SCL_PORT               GPIOB
#define RTE_I2C1_SCL_BIT                8
#else
#error "Invalid I2C1_SCL Pin Configuration!"
#endif

//   <o> I2C1_SDA Pin <0=>PB7 <1=>PB9
#define RTE_I2C1_SDA_PORT_ID            1
#if    (RTE_I2C1_SDA_PORT_ID == 0)
#define RTE_I2C1_SDA_PORT               GPIOB
#define RTE_I2C1_SDA_BIT                7
#elif  (RTE_I2C1_SDA_PORT_ID == 1)
#define RTE_I2C1_SDA_PORT               GPIOB
#define RTE_I2C1_SDA_BIT                9
#else
#error "Invalid I2C1_SDA Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <0=>0 <5=>5
//     <i>  Selects DMA Stream (only Stream 0 or 5 can be used)
//     <o3> Channel <1=>1
//     <i>  Selects DMA Channel (only Channel 1 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_I2C1_RX_DMA                 0
#define RTE_I2C1_RX_DMA_NUMBER          1
#define RTE_I2C1_RX_DMA_STREAM          0
#define RTE_I2C1_RX_DMA_CHANNEL         1
#define RTE_I2C1_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <1=>1 <6=>6 <7=>7
//     <i>  Selects DMA Stream (only Stream 1 or 6 or 7 can be used)
//     <o3> Channel <0=>0 <1=>1
//     <i>  Selects DMA Channel (only Channel 0 or 1 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_I2C1_TX_DMA                 0
#define RTE_I2C1_TX_DMA_NUMBER          1
#define RTE_I2C1_TX_DMA_STREAM          6
#define RTE_I2C1_TX_DMA_CHANNEL         1
#define RTE_I2C1_TX_DMA_PRIORITY        0

// </e>


// <e> I2C2 (Inter-integrated Circuit Interface 2) [Driver_I2C2]
// <i> Configuration settings for Driver_I2C2 in component ::CMSIS Driver:I2C
#define RTE_I2C2                        1

//   <o> I2C2_SCL Pin <0=>PF1 <1=>PH4 <2=>PB10
#define RTE_I2C2_SCL_PORT_ID            0
#if    (RTE_I2C2_SCL_PORT_ID == 0)
#define RTE_I2C2_SCL_PORT               GPIOF
#define RTE_I2C2_SCL_BIT                1
#elif  (RTE_I2C2_SCL_PORT_ID == 1)
#define RTE_I2C2_SCL_PORT               GPIOH
#define RTE_I2C2_SCL_BIT                4
#elif  (RTE_I2C2_SCL_PORT_ID == 2)
#define RTE_I2C2_SCL_PORT               GPIOB
#define RTE_I2C2_SCL_BIT                10
#else
#error "Invalid I2C2_SCL Pin Configuration!"
#endif

//   <o> I2C2_SDA Pin <0=>PF0 <1=>PH5 <2=>PB11 <3=>PB3 <4=>PB9
#define RTE_I2C2_SDA_PORT_ID            0
#if    (RTE_I2C2_SDA_PORT_ID == 0)
#define RTE_I2C2_SDA_PORT               GPIOF
#define RTE_I2C2_SDA_BIT                0
#elif  (RTE_I2C2_SDA_PORT_ID == 1)
#define RTE_I2C2_SDA_PORT               GPIOH
#define RTE_I2C2_SDA_BIT                5
#elif  (RTE_I2C2_SDA_PORT_ID == 2)
#define RTE_I2C2_SDA_PORT               GPIOB
#define RTE_I2C2_SDA_BIT                11
#elif  (RTE_I2C2_SDA_PORT_ID == 3)
#define RTE_I2C2_SDA_PORT               GPIOB
#define RTE_I2C2_SDA_BIT                3
#elif  (RTE_I2C2_SDA_PORT_ID == 4)
#define RTE_I2C2_SDA_PORT               GPIOB
#define RTE_I2C2_SDA_BIT                9
#else
#error "Invalid I2C2_SDA Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <2=>2 <3=>3
//     <i>  Selects DMA Stream (only Stream 2 or 3 can be used)
//     <o3> Channel <7=>7
//     <i>  Selects DMA Channel (only Channel 7 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_I2C2_RX_DMA                 0
#define RTE_I2C2_RX_DMA_NUMBER          1
#define RTE_I2C2_RX_DMA_STREAM          2
#define RTE_I2C2_RX_DMA_CHANNEL         7
#define RTE_I2C2_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <7=>7
//     <i>  Selects DMA Stream (only Stream 7 can be used)
//     <o3> Channel <7=>7
//     <i>  Selects DMA Channel (only Channel 1 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_I2C2_TX_DMA                 0
#define RTE_I2C2_TX_DMA_NUMBER          1
#define RTE_I2C2_TX_DMA_STREAM          7
#define RTE_I2C2_TX_DMA_CHANNEL         7
#define RTE_I2C2_TX_DMA_PRIORITY        0

// </e>


// <e> I2C3 (Inter-integrated Circuit Interface 3) [Driver_I2C3]
// <i> Configuration settings for Driver_I2C3 in component ::CMSIS Driver:I2C
#define RTE_I2C3                        0

//   <o> I2C3_SCL Pin <0=>PH7 <1=>PA8
#define RTE_I2C3_SCL_PORT_ID            0
#if    (RTE_I2C3_SCL_PORT_ID == 0)
#define RTE_I2C3_SCL_PORT               GPIOH
#define RTE_I2C3_SCL_BIT                7
#elif  (RTE_I2C3_SCL_PORT_ID == 1)
#define RTE_I2C3_SCL_PORT               GPIOA
#define RTE_I2C3_SCL_BIT                8
#else
#error "Invalid I2C3_SCL Pin Configuration!"
#endif

//   <o> I2C3_SDA Pin <0=>PH8 <1=>PC9 <2=>PB4 <3=>PB8
#define RTE_I2C3_SDA_PORT_ID            0
#if    (RTE_I2C3_SDA_PORT_ID == 0)
#define RTE_I2C3_SDA_PORT               GPIOH
#define RTE_I2C3_SDA_BIT                8
#elif  (RTE_I2C3_SDA_PORT_ID == 1)
#define RTE_I2C3_SDA_PORT               GPIOC
#define RTE_I2C3_SDA_BIT                9
#elif  (RTE_I2C3_SDA_PORT_ID == 2)
#define RTE_I2C3_SDA_PORT               GPIOB
#define RTE_I2C3_SDA_BIT                4
#elif  (RTE_I2C3_SDA_PORT_ID == 3)
#define RTE_I2C3_SDA_PORT               GPIOB
#define RTE_I2C3_SDA_BIT                8
#else
#error "Invalid I2C3_SDA Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <1=>1 <2=>2
//     <i>  Selects DMA Stream (only Stream 1 or 2 can be used)
//     <o3> Channel <1=>1 <3=>3
//     <i>  Selects DMA Channel (only Channel 1 or 3 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_I2C3_RX_DMA                 0
#define RTE_I2C3_RX_DMA_NUMBER          1
#define RTE_I2C3_RX_DMA_STREAM          2
#define RTE_I2C3_RX_DMA_CHANNEL         3
#define RTE_I2C3_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <4=>4 <5=>5
//     <i>  Selects DMA Stream (only Stream 4 or 5 can be used)
//     <o3> Channel <3=>3 <6=>6
//     <i>  Selects DMA Channel (only Channel 3 or 6 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_I2C3_TX_DMA                 0
#define RTE_I2C3_TX_DMA_NUMBER          1
#define RTE_I2C3_TX_DMA_STREAM          4
#define RTE_I2C3_TX_DMA_CHANNEL         3
#define RTE_I2C3_TX_DMA_PRIORITY        0

// </e>


// <e> SPI1 (Serial Peripheral Interface 1) [Driver_SPI1]
// <i> Configuration settings for Driver_SPI1 in component ::CMSIS Driver:SPI
#define RTE_SPI1                        0

//   <o> SPI1_MISO Pin <0=>Not Used <1=>PA6 <2=>PB4
#define RTE_SPI1_MISO_PORT_ID           0
#if    (RTE_SPI1_MISO_PORT_ID == 0)
#define RTE_SPI1_MISO                   0
#elif  (RTE_SPI1_MISO_PORT_ID == 1)
#define RTE_SPI1_MISO                   1
#define RTE_SPI1_MISO_PORT              GPIOA
#define RTE_SPI1_MISO_BIT               6
#elif  (RTE_SPI1_MISO_PORT_ID == 2)
#define RTE_SPI1_MISO                   1
#define RTE_SPI1_MISO_PORT              GPIOB
#define RTE_SPI1_MISO_BIT               4
#else
#error "Invalid SPI1_MISO Pin Configuration!"
#endif

//   <o> SPI1_MOSI Pin <0=>Not Used <1=>PA7 <2=>PB5
#define RTE_SPI1_MOSI_PORT_ID           0
#if    (RTE_SPI1_MOSI_PORT_ID == 0)
#define RTE_SPI1_MOSI                   0
#elif  (RTE_SPI1_MOSI_PORT_ID == 1)
#define RTE_SPI1_MOSI                   1
#define RTE_SPI1_MOSI_PORT              GPIOA
#define RTE_SPI1_MOSI_BIT               7
#elif  (RTE_SPI1_MOSI_PORT_ID == 2)
#define RTE_SPI1_MOSI                   1
#define RTE_SPI1_MOSI_PORT              GPIOB
#define RTE_SPI1_MOSI_BIT               5
#else
#error "Invalid SPI1_MOSI Pin Configuration!"
#endif

//   <o> SPI1_SCK Pin <0=>PA5 <1=>PB3
#define RTE_SPI1_SCL_PORT_ID            0
#if    (RTE_SPI1_SCL_PORT_ID == 0)
#define RTE_SPI1_SCL_PORT               GPIOA
#define RTE_SPI1_SCL_BIT                5
#elif  (RTE_SPI1_SCL_PORT_ID == 1)
#define RTE_SPI1_SCL_PORT               GPIOB
#define RTE_SPI1_SCL_BIT                3
#else
#error "Invalid SPI1_SCK Pin Configuration!"
#endif

//   <o> SPI1_NSS Pin <0=>Not Used <1=>PA4 <2=>PA15
#define RTE_SPI1_NSS_PORT_ID            0
#if    (RTE_SPI1_NSS_PORT_ID == 0)
#define RTE_SPI1_NSS_PIN                0
#elif  (RTE_SPI1_NSS_PORT_ID == 1)
#define RTE_SPI1_NSS_PIN                1
#define RTE_SPI1_NSS_PORT               GPIOA
#define RTE_SPI1_NSS_BIT                4
#elif  (RTE_SPI1_NSS_PORT_ID == 2)
#define RTE_SPI1_NSS_PIN                1
#define RTE_SPI1_NSS_PORT               GPIOA
#define RTE_SPI1_NSS_BIT                15
#else
#error "Invalid SPI1_NSS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <0=>0 <2=>2
//     <i>  Selects DMA Stream (only Stream 0 or 2 can be used)
//     <o3> Channel <3=>3
//     <i>  Selects DMA Channel (only Channel 3 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI1_RX_DMA                 0
#define RTE_SPI1_RX_DMA_NUMBER          2
#define RTE_SPI1_RX_DMA_STREAM          0
#define RTE_SPI1_RX_DMA_CHANNEL         3
#define RTE_SPI1_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <2=>2 <3=>3 <5=>5
//     <i>  Selects DMA Stream (only Stream 2 or 3 or 5 can be used)
//     <o3> Channel <2=>2 <3=>3
//     <i>  Selects DMA Channel (only Channel 2 or 3 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI1_TX_DMA                 0
#define RTE_SPI1_TX_DMA_NUMBER          2
#define RTE_SPI1_TX_DMA_STREAM          5
#define RTE_SPI1_TX_DMA_CHANNEL         3
#define RTE_SPI1_TX_DMA_PRIORITY        0

// </e>


// <e> SPI2 (Serial Peripheral Interface 2) [Driver_SPI2]
// <i> Configuration settings for Driver_SPI2 in component ::CMSIS Driver:SPI
#define RTE_SPI2                        1

//   <o> SPI2_MISO Pin <0=>Not Used <1=>PB14 <2=>PC2 <3=>PI2 <4=>PA12
#define RTE_SPI2_MISO_PORT_ID           3
#if    (RTE_SPI2_MISO_PORT_ID == 0)
#define RTE_SPI2_MISO                   0
#elif  (RTE_SPI2_MISO_PORT_ID == 1)
#define RTE_SPI2_MISO                   1
#define RTE_SPI2_MISO_PORT              GPIOB
#define RTE_SPI2_MISO_BIT               14
#elif  (RTE_SPI2_MISO_PORT_ID == 2)
#define RTE_SPI2_MISO                   1
#define RTE_SPI2_MISO_PORT              GPIOC
#define RTE_SPI2_MISO_BIT               2
#elif  (RTE_SPI2_MISO_PORT_ID == 3)
#define RTE_SPI2_MISO                   1
#define RTE_SPI2_MISO_PORT              GPIOI
#define RTE_SPI2_MISO_BIT               2
#elif  (RTE_SPI2_MISO_PORT_ID == 4)
#define RTE_SPI2_MISO                   1
#define RTE_SPI2_MISO_PORT              GPIOA
#define RTE_SPI2_MISO_BIT               12
#else
#error "Invalid SPI2_MISO Pin Configuration!"
#endif

//   <o> SPI2_MOSI Pin <0=>Not Used <1=>PB15 <2=>PC3 <3=>PI3 <4=>PA10
#define RTE_SPI2_MOSI_PORT_ID           3
#if    (RTE_SPI2_MOSI_PORT_ID == 0)
#define RTE_SPI2_MOSI                   0
#elif  (RTE_SPI2_MOSI_PORT_ID == 1)
#define RTE_SPI2_MOSI                   1
#define RTE_SPI2_MOSI_PORT              GPIOB
#define RTE_SPI2_MOSI_BIT               15
#elif  (RTE_SPI2_MOSI_PORT_ID == 2)
#define RTE_SPI2_MOSI                   1
#define RTE_SPI2_MOSI_PORT              GPIOC
#define RTE_SPI2_MOSI_BIT               3
#elif  (RTE_SPI2_MOSI_PORT_ID == 3)
#define RTE_SPI2_MOSI                   1
#define RTE_SPI2_MOSI_PORT              GPIOI
#define RTE_SPI2_MOSI_BIT               3
#elif  (RTE_SPI2_MOSI_PORT_ID == 4)
#define RTE_SPI2_MOSI                   1
#define RTE_SPI2_MOSI_PORT              GPIOA
#define RTE_SPI2_MOSI_BIT               10
#else
#error "Invalid SPI2_MOSI Pin Configuration!"
#endif

//   <o> SPI2_SCK Pin <0=>PB10 <1=>PB13 <2=>PC7 <3=>PD3 <4=>PI1 <5=>PA9
#define RTE_SPI2_SCL_PORT_ID            4
#if    (RTE_SPI2_SCL_PORT_ID == 0)
#define RTE_SPI2_SCL_PORT               GPIOB
#define RTE_SPI2_SCL_BIT                10
#elif  (RTE_SPI2_SCL_PORT_ID == 1)
#define RTE_SPI2_SCL_PORT               GPIOB
#define RTE_SPI2_SCL_BIT                13
#elif  (RTE_SPI2_SCL_PORT_ID == 2)
#define RTE_SPI2_SCL_PORT               GPIOC
#define RTE_SPI2_SCL_BIT                7
#elif  (RTE_SPI2_SCL_PORT_ID == 3)
#define RTE_SPI2_SCL_PORT               GPIOD
#define RTE_SPI2_SCL_BIT                3
#elif  (RTE_SPI2_SCL_PORT_ID == 4)
#define RTE_SPI2_SCL_PORT               GPIOI
#define RTE_SPI2_SCL_BIT                1
#elif  (RTE_SPI2_SCL_PORT_ID == 5)
#define RTE_SPI2_SCL_PORT               GPIOA
#define RTE_SPI2_SCL_BIT                9
#else
#error "Invalid SPI2_SCK Pin Configuration!"
#endif

//   <o> SPI2_NSS Pin <0=>Not Used <1=>PB9 <2=>PB12 <3=>PI0 <4=>PA11
#define RTE_SPI2_NSS_PORT_ID            3
#if    (RTE_SPI2_NSS_PORT_ID == 0)
#define RTE_SPI2_NSS_PIN                0
#elif  (RTE_SPI2_NSS_PORT_ID == 1)
#define RTE_SPI2_NSS_PIN                1
#define RTE_SPI2_NSS_PORT               GPIOB
#define RTE_SPI2_NSS_BIT                9
#elif  (RTE_SPI2_NSS_PORT_ID == 2)
#define RTE_SPI2_NSS_PIN                1
#define RTE_SPI2_NSS_PORT               GPIOB
#define RTE_SPI2_NSS_BIT                12
#elif  (RTE_SPI2_NSS_PORT_ID == 3)
#define RTE_SPI2_NSS_PIN                1
#define RTE_SPI2_NSS_PORT               GPIOI
#define RTE_SPI2_NSS_BIT                0
#elif  (RTE_SPI2_NSS_PORT_ID == 4)
#define RTE_SPI2_NSS_PIN                1
#define RTE_SPI2_NSS_PORT               GPIOA
#define RTE_SPI2_NSS_BIT                11
#else
#error "Invalid SPI2_NSS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <3=>3
//     <i>  Selects DMA Stream (only Stream 3 can be used)
//     <o3> Channel <0=>0
//     <i>  Selects DMA Channel (only Channel 0 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI2_RX_DMA                 1
#define RTE_SPI2_RX_DMA_NUMBER          1
#define RTE_SPI2_RX_DMA_STREAM          3
#define RTE_SPI2_RX_DMA_CHANNEL         0
#define RTE_SPI2_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <4=>4
//     <i>  Selects DMA Stream (only Stream 4 can be used)
//     <o3> Channel <0=>0
//     <i>  Selects DMA Channel (only Channel 0 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI2_TX_DMA                 1
#define RTE_SPI2_TX_DMA_NUMBER          1
#define RTE_SPI2_TX_DMA_STREAM          4
#define RTE_SPI2_TX_DMA_CHANNEL         0
#define RTE_SPI2_TX_DMA_PRIORITY        0

// </e>


// <e> SPI3 (Serial Peripheral Interface 3) [Driver_SPI3]
// <i> Configuration settings for Driver_SPI3 in component ::CMSIS Driver:SPI
#define RTE_SPI3                        0

//   <o> SPI3_MISO Pin <0=>Not Used <1=>PB4 <2=>PC11
#define RTE_SPI3_MISO_PORT_ID           0
#if    (RTE_SPI3_MISO_PORT_ID == 0)
#define RTE_SPI3_MISO                   0
#elif  (RTE_SPI3_MISO_PORT_ID == 1)
#define RTE_SPI3_MISO                   1
#define RTE_SPI3_MISO_PORT              GPIOB
#define RTE_SPI3_MISO_BIT               4
#elif  (RTE_SPI3_MISO_PORT_ID == 2)
#define RTE_SPI3_MISO                   1
#define RTE_SPI3_MISO_PORT              GPIOC
#define RTE_SPI3_MISO_BIT               11
#else
#error "Invalid SPI3_MISO Pin Configuration!"
#endif

//   <o> SPI3_MOSI Pin <0=>Not Used <1=>PB5 <2=>PC12 <3=>PD6
#define RTE_SPI3_MOSI_PORT_ID           0
#if    (RTE_SPI3_MOSI_PORT_ID == 0)
#define RTE_SPI3_MOSI                   0
#elif  (RTE_SPI3_MOSI_PORT_ID == 1)
#define RTE_SPI3_MOSI                   1
#define RTE_SPI3_MOSI_PORT              GPIOB
#define RTE_SPI3_MOSI_BIT               5
#elif  (RTE_SPI3_MOSI_PORT_ID == 2)
#define RTE_SPI3_MOSI                   1
#define RTE_SPI3_MOSI_PORT              GPIOC
#define RTE_SPI3_MOSI_BIT               12
#elif  (RTE_SPI3_MOSI_PORT_ID == 3)
#define RTE_SPI3_MOSI                   1
#define RTE_SPI3_MOSI_PORT              GPIOD
#define RTE_SPI3_MOSI_BIT               6
#else
#error "Invalid SPI3_MOSI Pin Configuration!"
#endif

//   <o> SPI3_SCK Pin <0=>PB3 <1=>PB12 <2=>PC10
#define RTE_SPI3_SCL_PORT_ID            0
#if    (RTE_SPI3_SCL_PORT_ID == 0)
#define RTE_SPI3_SCL_PORT               GPIOB
#define RTE_SPI3_SCL_BIT                3
#elif  (RTE_SPI3_SCL_PORT_ID == 1)
#define RTE_SPI3_SCL_PORT               GPIOB
#define RTE_SPI3_SCL_BIT                12
#elif  (RTE_SPI3_SCL_PORT_ID == 2)
#define RTE_SPI3_SCL_PORT               GPIOC
#define RTE_SPI3_SCL_BIT                10
#else
#error "Invalid SPI3_SCK Pin Configuration!"
#endif

//   <o> SPI3_NSS Pin <0=>Not Used <1=>PA4 <2=>PA15
#define RTE_SPI3_NSS_PORT_ID            0
#if    (RTE_SPI3_NSS_PORT_ID == 0)
#define RTE_SPI3_NSS_PIN                0
#elif  (RTE_SPI3_NSS_PORT_ID == 1)
#define RTE_SPI3_NSS_PIN                1
#define RTE_SPI3_NSS_PORT               GPIOA
#define RTE_SPI3_NSS_BIT                4
#elif  (RTE_SPI3_NSS_PORT_ID == 2)
#define RTE_SPI3_NSS_PIN                1
#define RTE_SPI3_NSS_PORT               GPIOA
#define RTE_SPI3_NSS_BIT                15
#else
#error "Invalid SPI3_NSS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <0=>0 <2=>2
//     <i>  Selects DMA Stream (only Stream 0 or 2 can be used)
//     <o3> Channel <0=>0
//     <i>  Selects DMA Channel (only Channel 0 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI3_RX_DMA                 0
#define RTE_SPI3_RX_DMA_NUMBER          1
#define RTE_SPI3_RX_DMA_STREAM          0
#define RTE_SPI3_RX_DMA_CHANNEL         0
#define RTE_SPI3_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <5=>5 <7=>7
//     <i>  Selects DMA Stream (only Stream 5 or 7 can be used)
//     <o3> Channel <0=>0
//     <i>  Selects DMA Channel (only Channel 0 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI3_TX_DMA                 0
#define RTE_SPI3_TX_DMA_NUMBER          1
#define RTE_SPI3_TX_DMA_STREAM          5
#define RTE_SPI3_TX_DMA_CHANNEL         0
#define RTE_SPI3_TX_DMA_PRIORITY        0

// </e>


// <e> SPI4 (Serial Peripheral Interface 4) [Driver_SPI4]
// <i> Configuration settings for Driver_SPI4 in component ::CMSIS Driver:SPI
#define RTE_SPI4                        1

//   <o> SPI4_MISO Pin <0=>Not Used <1=>PA11 <2=>PE5 <3=>PE13
#define RTE_SPI4_MISO_PORT_ID           3
#if    (RTE_SPI4_MISO_PORT_ID == 0)
#define RTE_SPI4_MISO                   0
#elif  (RTE_SPI4_MISO_PORT_ID == 1)
#define RTE_SPI4_MISO                   1
#define RTE_SPI4_MISO_PORT              GPIOA
#define RTE_SPI4_MISO_BIT               11
#elif  (RTE_SPI4_MISO_PORT_ID == 2)
#define RTE_SPI4_MISO                   1
#define RTE_SPI4_MISO_PORT              GPIOE
#define RTE_SPI4_MISO_BIT               5
#elif  (RTE_SPI4_MISO_PORT_ID == 3)
#define RTE_SPI4_MISO                   1
#define RTE_SPI4_MISO_PORT              GPIOE
#define RTE_SPI4_MISO_BIT               13
#else
#error "Invalid SPI4_MISO Pin Configuration!"
#endif

//   <o> SPI4_MOSI Pin <0=>Not Used <1=>PA1 <2=>PE6 <3=>PE14
#define RTE_SPI4_MOSI_PORT_ID           3
#if    (RTE_SPI4_MOSI_PORT_ID == 0)
#define RTE_SPI4_MOSI                   0
#elif  (RTE_SPI4_MOSI_PORT_ID == 1)
#define RTE_SPI4_MOSI                   1
#define RTE_SPI4_MOSI_PORT              GPIOA
#define RTE_SPI4_MOSI_BIT               1
#elif  (RTE_SPI4_MOSI_PORT_ID == 2)
#define RTE_SPI4_MOSI                   1
#define RTE_SPI4_MOSI_PORT              GPIOE
#define RTE_SPI4_MOSI_BIT               6
#elif  (RTE_SPI4_MOSI_PORT_ID == 3)
#define RTE_SPI4_MOSI                   1
#define RTE_SPI4_MOSI_PORT              GPIOE
#define RTE_SPI4_MOSI_BIT               14
#else
#error "Invalid SPI4_MOSI Pin Configuration!"
#endif

//   <o> SPI4_SCK Pin <0=>PB13 <1=>PE2 <2=>PE12
#define RTE_SPI4_SCL_PORT_ID            2
#if    (RTE_SPI4_SCL_PORT_ID == 0)
#define RTE_SPI4_SCL_PORT               GPIOB
#define RTE_SPI4_SCL_BIT                13
#elif  (RTE_SPI4_SCL_PORT_ID == 1)
#define RTE_SPI4_SCL_PORT               GPIOE
#define RTE_SPI4_SCL_BIT                2
#elif  (RTE_SPI4_SCL_PORT_ID == 2)
#define RTE_SPI4_SCL_PORT               GPIOE
#define RTE_SPI4_SCL_BIT                12
#else
#error "Invalid SPI4_SCK Pin Configuration!"
#endif

//   <o> SPI4_NSS Pin <0=>Not Used <1=>PB12 <2=>PE4 <3=>PE11
#define RTE_SPI4_NSS_PORT_ID            3
#if    (RTE_SPI4_NSS_PORT_ID == 0)
#define RTE_SPI4_NSS_PIN                0
#elif  (RTE_SPI4_NSS_PORT_ID == 1)
#define RTE_SPI4_NSS_PIN                1
#define RTE_SPI4_NSS_PORT               GPIOB
#define RTE_SPI4_NSS_BIT                12
#elif  (RTE_SPI4_NSS_PORT_ID == 2)
#define RTE_SPI4_NSS_PIN                1
#define RTE_SPI4_NSS_PORT               GPIOE
#define RTE_SPI4_NSS_BIT                4
#elif  (RTE_SPI4_NSS_PORT_ID == 3)
#define RTE_SPI4_NSS_PIN                1
#define RTE_SPI4_NSS_PORT               GPIOE
#define RTE_SPI4_NSS_BIT                11
#else
#error "Invalid SPI4_NSS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <0=>0 <3=>3 <4=>4
//     <i>  Selects DMA Stream (only Stream 0 or 3 can be used)
//     <o3> Channel <4=>4 <5=>5
//     <i>  Selects DMA Channel (only Channel 4 or 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI4_RX_DMA                 1
#define RTE_SPI4_RX_DMA_NUMBER          2
#define RTE_SPI4_RX_DMA_STREAM          0
#define RTE_SPI4_RX_DMA_CHANNEL         4
#define RTE_SPI4_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <1=>1 <4=>4
//     <i>  Selects DMA Stream (only Stream 1 or 4 can be used)
//     <o3> Channel <4=>4 <5=>5
//     <i>  Selects DMA Channel (only Channel 4 or 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI4_TX_DMA                 1
#define RTE_SPI4_TX_DMA_NUMBER          2
#define RTE_SPI4_TX_DMA_STREAM          1
#define RTE_SPI4_TX_DMA_CHANNEL         4
#define RTE_SPI4_TX_DMA_PRIORITY        0

// </e>


// <e> SPI5 (Serial Peripheral Interface 5) [Driver_SPI5]
// <i> Configuration settings for Driver_SPI5 in component ::CMSIS Driver:SPI
// <i> (SPI5 = ON) (Coin Acceptor = OFF)
#define RTE_SPI5                        1

//   <o> SPI5_MISO Pin <0=>Not Used <1=>PA12 <2=>PE5 <3=>PE13 <4=>PF8 <5=>PH7
#define RTE_SPI5_MISO_PORT_ID           4
#if    (RTE_SPI5_MISO_PORT_ID == 0)
#define RTE_SPI5_MISO                   0
#elif  (RTE_SPI5_MISO_PORT_ID == 1)
#define RTE_SPI5_MISO                   1
#define RTE_SPI5_MISO_PORT              GPIOA
#define RTE_SPI5_MISO_BIT               12
#elif  (RTE_SPI5_MISO_PORT_ID == 2)
#define RTE_SPI5_MISO                   1
#define RTE_SPI5_MISO_PORT              GPIOE
#define RTE_SPI5_MISO_BIT               5
#elif  (RTE_SPI5_MISO_PORT_ID == 3)
#define RTE_SPI5_MISO                   1
#define RTE_SPI5_MISO_PORT              GPIOE
#define RTE_SPI5_MISO_BIT               13
#elif  (RTE_SPI5_MISO_PORT_ID == 4)
#define RTE_SPI5_MISO                   1
#define RTE_SPI5_MISO_PORT              GPIOF
#define RTE_SPI5_MISO_BIT               8
#elif  (RTE_SPI5_MISO_PORT_ID == 5)
#define RTE_SPI5_MISO                   1
#define RTE_SPI5_MISO_PORT              GPIOH
#define RTE_SPI5_MISO_BIT               7
#else
#error "Invalid SPI5_MISO Pin Configuration!"
#endif

//   <o> SPI5_MOSI Pin <0=>Not Used <1=>PA10 <2=>PB8 <3=>PE6 <4=>PE14 <5=>PF9 <6=>PF11
#define RTE_SPI5_MOSI_PORT_ID           5
#if    (RTE_SPI5_MOSI_PORT_ID == 0)
#define RTE_SPI5_MOSI                   0
#elif  (RTE_SPI5_MOSI_PORT_ID == 1)
#define RTE_SPI5_MOSI                   1
#define RTE_SPI5_MOSI_PORT              GPIOA
#define RTE_SPI5_MOSI_BIT               10
#elif  (RTE_SPI5_MOSI_PORT_ID == 2)
#define RTE_SPI5_MOSI                   1
#define RTE_SPI5_MOSI_PORT              GPIOB
#define RTE_SPI5_MOSI_BIT               8
#elif  (RTE_SPI5_MOSI_PORT_ID == 3)
#define RTE_SPI5_MOSI                   1
#define RTE_SPI5_MOSI_PORT              GPIOE
#define RTE_SPI5_MOSI_BIT               6
#elif  (RTE_SPI5_MOSI_PORT_ID == 4)
#define RTE_SPI5_MOSI                   1
#define RTE_SPI5_MOSI_PORT              GPIOE
#define RTE_SPI5_MOSI_BIT               14
#elif  (RTE_SPI5_MOSI_PORT_ID == 5)
#define RTE_SPI5_MOSI                   1
#define RTE_SPI5_MOSI_PORT              GPIOF
#define RTE_SPI5_MOSI_BIT               9
#elif  (RTE_SPI5_MOSI_PORT_ID == 6)
#define RTE_SPI5_MOSI                   1
#define RTE_SPI5_MOSI_PORT              GPIOF
#define RTE_SPI5_MOSI_BIT               11
#else
#error "Invalid SPI5_MOSI Pin Configuration!"
#endif

//   <o> SPI5_SCK Pin <0=>PB0 <1=>PE2 <2=>PE12 <3=>PF7 <4=>PH6
#define RTE_SPI5_SCL_PORT_ID            3
#if    (RTE_SPI5_SCL_PORT_ID == 0)
#define RTE_SPI5_SCL_PORT               GPIOB
#define RTE_SPI5_SCL_BIT                0
#elif  (RTE_SPI5_SCL_PORT_ID == 1)
#define RTE_SPI5_SCL_PORT               GPIOE
#define RTE_SPI5_SCL_BIT                2
#elif  (RTE_SPI5_SCL_PORT_ID == 2)
#define RTE_SPI5_SCL_PORT               GPIOE
#define RTE_SPI5_SCL_BIT                12
#elif  (RTE_SPI5_SCL_PORT_ID == 3)
#define RTE_SPI5_SCL_PORT               GPIOF
#define RTE_SPI5_SCL_BIT                7
#elif  (RTE_SPI5_SCL_PORT_ID == 4)
#define RTE_SPI5_SCL_PORT               GPIOH
#define RTE_SPI5_SCL_BIT                6
#else
#error "Invalid SPI5_SCK Pin Configuration!"
#endif

//   <o> SPI5_NSS Pin <0=>Not Used <1=>PB1 <2=>PE4 <3=>PE11 <4=>PF6 <5=>PH5
#define RTE_SPI5_NSS_PORT_ID            4
#if    (RTE_SPI5_NSS_PORT_ID == 0)
#define RTE_SPI5_NSS_PIN                0
#elif  (RTE_SPI5_NSS_PORT_ID == 1)
#define RTE_SPI5_NSS_PIN                1
#define RTE_SPI5_NSS_PORT               GPIOB
#define RTE_SPI5_NSS_BIT                1
#elif  (RTE_SPI5_NSS_PORT_ID == 2)
#define RTE_SPI5_NSS_PIN                1
#define RTE_SPI5_NSS_PORT               GPIOE
#define RTE_SPI5_NSS_BIT                4
#elif  (RTE_SPI5_NSS_PORT_ID == 3)
#define RTE_SPI5_NSS_PIN                1
#define RTE_SPI5_NSS_PORT               GPIOE
#define RTE_SPI5_NSS_BIT                11
#elif  (RTE_SPI5_NSS_PORT_ID == 4)
#define RTE_SPI5_NSS_PIN                1
#define RTE_SPI5_NSS_PORT               GPIOF
#define RTE_SPI5_NSS_BIT                6
#elif  (RTE_SPI5_NSS_PORT_ID == 5)
#define RTE_SPI5_NSS_PIN                1
#define RTE_SPI5_NSS_PORT               GPIOH
#define RTE_SPI5_NSS_BIT                5
#else
#error "Invalid SPI5_NSS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <3=>3 <5=>5
//     <i>  Selects DMA Stream (only Stream 3 or 5 can be used)
//     <o3> Channel <2=>2 <7=>7
//     <i>  Selects DMA Channel (only Channel 2 or 7 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI5_RX_DMA                 0
#define RTE_SPI5_RX_DMA_NUMBER          2
#define RTE_SPI5_RX_DMA_STREAM          5
#define RTE_SPI5_RX_DMA_CHANNEL         7
#define RTE_SPI5_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <4=>4 <5=>5 <6=>6
//     <i>  Selects DMA Stream (only Stream 4 or 6 can be used)
//     <o3> Channel <2=>2 <5=>5 <7=>7
//     <i>  Selects DMA Channel (only Channel 2 or 7 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI5_TX_DMA                 0
#define RTE_SPI5_TX_DMA_NUMBER          2
#define RTE_SPI5_TX_DMA_STREAM          4
#define RTE_SPI5_TX_DMA_CHANNEL         2
#define RTE_SPI5_TX_DMA_PRIORITY        0

// </e>


// <e> SPI6 (Serial Peripheral Interface 6) [Driver_SPI6]
// <i> Configuration settings for Driver_SPI6 in component ::CMSIS Driver:SPI
#define RTE_SPI6                        0

//   <o> SPI6_MISO Pin <0=>Not Used <1=>PG12
#define RTE_SPI6_MISO_PORT_ID           0
#if    (RTE_SPI6_MISO_PORT_ID == 0)
#define RTE_SPI6_MISO                   0
#elif  (RTE_SPI6_MISO_PORT_ID == 1)
#define RTE_SPI6_MISO                   1
#define RTE_SPI6_MISO_PORT              GPIOG
#define RTE_SPI6_MISO_BIT               12
#else
#error "Invalid SPI6_MISO Pin Configuration!"
#endif

//   <o> SPI6_MOSI Pin <0=>Not Used <1=>PG14
#define RTE_SPI6_MOSI_PORT_ID           0
#if    (RTE_SPI6_MOSI_PORT_ID == 0)
#define RTE_SPI6_MOSI                   0
#elif  (RTE_SPI6_MOSI_PORT_ID == 1)
#define RTE_SPI6_MOSI                   1
#define RTE_SPI6_MOSI_PORT              GPIOG
#define RTE_SPI6_MOSI_BIT               14
#else
#error "Invalid SPI6_MOSI Pin Configuration!"
#endif

//   <o> SPI6_SCK Pin <0=>PG13
#define RTE_SPI6_SCL_PORT_ID            0
#if    (RTE_SPI6_SCL_PORT_ID == 0)
#define RTE_SPI6_SCL_PORT               GPIOG
#define RTE_SPI6_SCL_BIT                13
#else
#error "Invalid SPI6_SCK Pin Configuration!"
#endif

//   <o> SPI6_NSS Pin <0=>Not Used <1=>PG8
#define RTE_SPI6_NSS_PORT_ID            0
#if    (RTE_SPI6_NSS_PORT_ID == 0)
#define RTE_SPI6_NSS_PIN                0
#elif  (RTE_SPI6_NSS_PORT_ID == 1)
#define RTE_SPI6_NSS_PIN                1
#define RTE_SPI6_NSS_PORT               GPIOG
#define RTE_SPI6_NSS_BIT                8
#else
#error "Invalid SPI6_NSS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <6=>6
//     <i>  Selects DMA Stream (only Stream 6 can be used)
//     <o3> Channel <1=>1
//     <i>  Selects DMA Channel (only Channel 1 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI6_RX_DMA                 0
#define RTE_SPI6_RX_DMA_NUMBER          2
#define RTE_SPI6_RX_DMA_STREAM          6
#define RTE_SPI6_RX_DMA_CHANNEL         1
#define RTE_SPI6_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <5=>5
//     <i>  Selects DMA Stream (only Stream 5 can be used)
//     <o3> Channel <1=>1
//     <i>  Selects DMA Channel (only Channel 1 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SPI6_TX_DMA                 0
#define RTE_SPI6_TX_DMA_NUMBER          2
#define RTE_SPI6_TX_DMA_STREAM          5
#define RTE_SPI6_TX_DMA_CHANNEL         1
#define RTE_SPI6_TX_DMA_PRIORITY        0

// </e>


// <e> SDIO (Secure Digital Input/Output) [Driver_MCI0]
// <i> Configuration settings for Driver_MCI0 in component ::CMSIS Driver:MCI
#define RTE_SDIO                        1

//   <h> SDIO Peripheral Bus
//     <o> SDIO_CK Pin <0=>PC12 <1=>PB15
#define   RTE_SDIO_CK_PORT_ID           0
#if      (RTE_SDIO_CK_PORT_ID == 0)
  #define RTE_SDIO_CK_PORT              GPIOC
  #define RTE_SDIO_CK_PIN               GPIO_PIN_12
#elif    (RTE_SDIO_CK_PORT_ID == 1)
  #define RTE_SDIO_CK_PORT              GPIOB
  #define RTE_SDIO_CK_PIN               GPIO_PIN_15
#else
  #error "Invalid SD_CLK Pin Configuration!"
#endif
//     <o> SDIO_CMD Pin <0=>PD2 <1=>PA6
#define   RTE_SDIO_CMD_PORT_ID          0
#if      (RTE_SDIO_CMD_PORT_ID == 0)
  #define RTE_SDIO_CMD_PORT             GPIOD
  #define RTE_SDIO_CMD_PIN              GPIO_PIN_2
#elif    (RTE_SDIO_CMD_PORT_ID == 1)
  #define RTE_SDIO_CMD_PORT             GPIOA
  #define RTE_SDIO_CMD_PIN              GPIO_PIN_6
#else
  #error "Invalid SD_CMD Pin Configuration!"
#endif
//     <o> SDIO_D0 Pin <0=>PC8 <1=>PB4 <2=>PB6
#define   RTE_SDIO_D0_PORT_ID           0
#if      (RTE_SDIO_D0_PORT_ID == 0)
  #define RTE_SDIO_D0_PORT              GPIOC
  #define RTE_SDIO_D0_PIN               GPIO_PIN_8
#elif    (RTE_SDIO_D0_PORT_ID == 1)
  #define RTE_SDIO_D0_PORT              GPIOB
  #define RTE_SDIO_D0_PIN               GPIO_PIN_4
#elif    (RTE_SDIO_D0_PORT_ID == 2)
  #define RTE_SDIO_D0_PORT              GPIOB
  #define RTE_SDIO_D0_PIN               GPIO_PIN_6
#else
  #error "Invalid SD_DAT0 Pin Configuration!"
#endif
//     <e> SDIO_D[1 .. 3]
#define   RTE_SDIO_BUS_WIDTH_4          1
//       <o> SDIO_D1 Pin <0=>PC9 <1=>PA8
#define   RTE_SDIO_D1_PORT_ID           0
#if      (RTE_SDIO_D1_PORT_ID == 0)
  #define RTE_SDIO_D1_PORT              GPIOC
  #define RTE_SDIO_D1_PIN               GPIO_PIN_9
#elif    (RTE_SDIO_D1_PORT_ID == 1)
  #define RTE_SDIO_D1_PORT              GPIOA
  #define RTE_SDIO_D1_PIN               GPIO_PIN_8
#else
  #error "Invalid SD_DAT1 Pin Configuration!"
#endif
//       <o> SDIO_D2 Pin <0=>PC10 <1=>PA9
#define   RTE_SDIO_D2_PORT_ID           0
#if      (RTE_SDIO_D2_PORT_ID == 0)
  #define RTE_SDIO_D2_PORT              GPIOC
  #define RTE_SDIO_D2_PIN               GPIO_PIN_10
#elif    (RTE_SDIO_D2_PORT_ID == 1)
  #define RTE_SDIO_D2_PORT              GPIOA
  #define RTE_SDIO_D2_PIN               GPIO_PIN_9
#else
  #error "Invalid SD_DAT2 Pin Configuration!"
#endif
//       <o> SDIO_D3 Pin <0=>PC11 <1=>PB5
#define   RTE_SDIO_D3_PORT_ID           0
#if      (RTE_SDIO_D3_PORT_ID == 0)
  #define RTE_SDIO_D3_PORT              GPIOC
  #define RTE_SDIO_D3_PIN               GPIO_PIN_11
#elif    (RTE_SDIO_D3_PORT_ID == 1)
  #define RTE_SDIO_D3_PORT              GPIOB
  #define RTE_SDIO_D3_PIN               GPIO_PIN_5
#else
  #error "Invalid SD_DAT3 Pin Configuration!"
#endif
//     </e> SDIO_D[1 .. 3]
//     <e> SDIO_D[4 .. 7]
#define   RTE_SDIO_BUS_WIDTH_8          0
//       <o> SDIO_D4 Pin <0=>PB8
#define   RTE_SDIO_D4_PORT_ID           0
#if      (RTE_SDIO_D4_PORT_ID == 0)
  #define RTE_SDIO_D4_PORT              GPIOB
  #define RTE_SDIO_D4_PIN               GPIO_PIN_8
#else
  #error "Invalid SD_DAT4 Pin Configuration!"
#endif
//       <o> SDIO_D5 Pin <0=>PB9
#define   RTE_SDIO_D5_PORT_ID           0
#if      (RTE_SDIO_D5_PORT_ID == 0)
  #define RTE_SDIO_D5_PORT              GPIOB
  #define RTE_SDIO_D5_PIN               GPIO_PIN_9
#else
  #error "Invalid SD_DAT5 Pin Configuration!"
#endif
//       <o> SDIO_D6 Pin <0=>PC6 <1=>PB14
#define   RTE_SDIO_D6_PORT_ID           0
#if      (RTE_SDIO_D6_PORT_ID == 0)
  #define RTE_SDIO_D6_PORT              GPIOC
  #define RTE_SDIO_D6_PIN               GPIO_PIN_6
#elif    (RTE_SDIO_D6_PORT_ID == 1)
  #define RTE_SDIO_D6_PORT              GPIOB
  #define RTE_SDIO_D6_PIN               GPIO_PIN_14
#else
  #error "Invalid SD_DAT6 Pin Configuration!"
#endif
//       <o> SDIO_D7 Pin <0=>PC7 <1=>PB10
#define   RTE_SDIO_D7_PORT_ID           0
#if      (RTE_SDIO_D7_PORT_ID == 0)
  #define RTE_SDIO_D7_PORT              GPIOC
  #define RTE_SDIO_D7_PIN               GPIO_PIN_7
#elif    (RTE_SDIO_D7_PORT_ID == 1)
  #define RTE_SDIO_D7_PORT              GPIOB
  #define RTE_SDIO_D7_PIN               GPIO_PIN_10
#else
  #error "Invalid SD_DAT7 Pin Configuration!"
#endif
//     </e> SDIO_D[4 .. 7]
//   </h> SDIO Peripheral Bus

//   <e> Card Detect Pin
//   <i> Configure Pin if exists
//   <i> GPIO Pxy (x = A..H, y = 0..15) or (x = I, y = 0..11)
//     <o1> Active State <0=>Low <1=>High
//     <i>  Selects Active State Logical Level
//     <o2> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
//     <o3> Bit <0-15>
//     <i>  Selects Port Bit
//   </e>
#define RTE_SDIO_CD_PIN_EN              0
#define RTE_SDIO_CD_ACTIVE              0
#define RTE_SDIO_CD_PORT                GPIO_PORT(2)
#define RTE_SDIO_CD_PIN                 13

//   <e> Write Protect Pin
//   <i> Configure Pin if exists
//   <i> GPIO Pxy (x = A..H, y = 0..15) or (x = I, y = 0..11)
//     <o1> Active State <0=>Low <1=>High
//     <i>  Selects Active State Logical Level
//     <o2> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
//     <o3> Bit <0-15>
//     <i>  Selects Port Bit
//   </e>
#define RTE_SDIO_WP_EN                  0
#define RTE_SDIO_WP_ACTIVE              1
#define RTE_SDIO_WP_PORT                GPIO_PORT(7)
#define RTE_SDIO_WP_PIN                 10

//   <e> Reset Pin
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_SDIO_RESET_PORT                 GPIO_PORT(2)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_SDIO_RESET_PIN                  0x2000
//   </e>

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <3=>3 <6=>6
//     <i>  Selects DMA Stream (only Stream 3 or 6 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SDIO_RX_DMA                 1
#define RTE_SDIO_RX_DMA_NUMBER          2
#define RTE_SDIO_RX_DMA_STREAM          3
#define RTE_SDIO_RX_DMA_CHANNEL         4
#define RTE_SDIO_RX_DMA_PRIORITY        0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <3=>3 <6=>6
//     <i>  Selects DMA Stream (only Stream 3 or 6 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 1 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define RTE_SDIO_TX_DMA                 1
#define RTE_SDIO_TX_DMA_NUMBER          2
#define RTE_SDIO_TX_DMA_STREAM          6
#define RTE_SDIO_TX_DMA_CHANNEL         4
#define RTE_SDIO_TX_DMA_PRIORITY        0

// </e>


// <e> CAN1 (Controller Area Network 1) [Driver_CAN1]
// <i> Configuration settings for Driver_CAN1 in component ::CMSIS Driver:CAN
#define RTE_CAN1                        1

//   <o> CAN1_RX Pin <0=>PA11 <1=>PB8 <2=>PD0 <3=>PI9 <4=>PG0
#define RTE_CAN1_RX_PORT_ID             2
#if    (RTE_CAN1_RX_PORT_ID == 0)
#define RTE_CAN1_RX_PORT                GPIOA
#define RTE_CAN1_RX_BIT                 GPIO_PIN_11
#elif  (RTE_CAN1_RX_PORT_ID == 1)
#define RTE_CAN1_RX_PORT                GPIOB
#define RTE_CAN1_RX_BIT                 GPIO_PIN_8
#elif  (RTE_CAN1_RX_PORT_ID == 2)
#define RTE_CAN1_RX_PORT                GPIOD
#define RTE_CAN1_RX_BIT                 GPIO_PIN_0
#elif  (RTE_CAN1_RX_PORT_ID == 3)
#define RTE_CAN1_RX_PORT                GPIOI
#define RTE_CAN1_RX_BIT                 GPIO_PIN_9
#elif  (RTE_CAN1_RX_PORT_ID == 4)
#define RTE_CAN1_RX_PORT                GPIOG
#define RTE_CAN1_RX_BIT                 GPIO_PIN_0
#else
#error "Invalid CAN1_RX Pin Configuration!"
#endif

//   <o> CAN1_TX Pin <0=>PA12 <1=>PB9 <2=>PD1 <3=>PH13 <4=>PG1
#define RTE_CAN1_TX_PORT_ID             2
#if    (RTE_CAN1_TX_PORT_ID == 0)
#define RTE_CAN1_TX_PORT                GPIOA
#define RTE_CAN1_TX_BIT                 GPIO_PIN_12
#elif  (RTE_CAN1_TX_PORT_ID == 1)
#define RTE_CAN1_TX_PORT                GPIOB
#define RTE_CAN1_TX_BIT                 GPIO_PIN_9
#elif  (RTE_CAN1_TX_PORT_ID == 2)
#define RTE_CAN1_TX_PORT                GPIOD
#define RTE_CAN1_TX_BIT                 GPIO_PIN_1
#elif  (RTE_CAN1_TX_PORT_ID == 3)
#define RTE_CAN1_TX_PORT                GPIOH
#define RTE_CAN1_TX_BIT                 GPIO_PIN_13
#elif  (RTE_CAN1_TX_PORT_ID == 4)
#define RTE_CAN1_TX_PORT                GPIOG
#define RTE_CAN1_TX_BIT                 GPIO_PIN_1
#else
#error "Invalid CAN1_TX Pin Configuration!"
#endif

// </e>


// <e> CAN2 (Controller Area Network 2) [Driver_CAN2]
// <i> Configuration settings for Driver_CAN2 in component ::CMSIS Driver:CAN
#define RTE_CAN2                        0

//   <o> CAN2_RX Pin <0=>PB5 <1=>PB12 <2=>PG11
#define RTE_CAN2_RX_PORT_ID             0
#if    (RTE_CAN2_RX_PORT_ID == 0)
#define RTE_CAN2_RX_PORT                GPIOB
#define RTE_CAN2_RX_BIT                 GPIO_PIN_5
#elif  (RTE_CAN2_RX_PORT_ID == 1)
#define RTE_CAN2_RX_PORT                GPIOB
#define RTE_CAN2_RX_BIT                 GPIO_PIN_12
#elif  (RTE_CAN2_RX_PORT_ID == 2)
#define RTE_CAN2_RX_PORT                GPIOG
#define RTE_CAN2_RX_BIT                 GPIO_PIN_11
#else
#error "Invalid CAN2_RX Pin Configuration!"
#endif

//   <o> CAN2_TX Pin <0=>PB6 <1=>PB13 <2=>PG12
#define RTE_CAN2_TX_PORT_ID             0
#if    (RTE_CAN2_TX_PORT_ID == 0)
#define RTE_CAN2_TX_PORT                GPIOB
#define RTE_CAN2_TX_BIT                 GPIO_PIN_6
#elif  (RTE_CAN2_TX_PORT_ID == 1)
#define RTE_CAN2_TX_PORT                GPIOB
#define RTE_CAN2_TX_BIT                 GPIO_PIN_13
#elif  (RTE_CAN2_TX_PORT_ID == 2)
#define RTE_CAN2_TX_PORT                GPIOG
#define RTE_CAN2_TX_BIT                 GPIO_PIN_12
#else
#error "Invalid CAN2_TX Pin Configuration!"
#endif

// </e>


// <e> CAN3 (Controller Area Network 3) [Driver_CAN3]
// <i> Configuration settings for Driver_CAN3 in component ::CMSIS Driver:CAN
// <i> Available only on STM32F413xx and STM32F423xx device series
#define RTE_CAN3                        0

//   <o> CAN3_RX Pin <0=>PA8 <1=>PB3
#define RTE_CAN3_RX_PORT_ID             0
#if    (RTE_CAN3_RX_PORT_ID == 0)
#define RTE_CAN3_RX_PORT                GPIOA
#define RTE_CAN3_RX_BIT                 GPIO_PIN_8
#elif  (RTE_CAN3_RX_PORT_ID == 1)
#define RTE_CAN3_RX_PORT                GPIOB
#define RTE_CAN3_RX_BIT                 GPIO_PIN_3
#else
#error "Invalid CAN3_RX Pin Configuration!"
#endif

//   <o> CAN3_TX Pin <0=>PA15 <1=>PB4
#define RTE_CAN3_TX_PORT_ID             0
#if    (RTE_CAN3_TX_PORT_ID == 0)
#define RTE_CAN3_TX_PORT                GPIOA
#define RTE_CAN3_TX_BIT                 GPIO_PIN_15
#elif  (RTE_CAN3_TX_PORT_ID == 1)
#define RTE_CAN3_TX_PORT                GPIOB
#define RTE_CAN3_TX_BIT                 GPIO_PIN_4
#else
#error "Invalid CAN3_TX Pin Configuration!"
#endif

// </e>


// <e> ETH (Ethernet Interface) [Driver_ETH_MAC0]
// <i> Configuration settings for Driver_ETH_MAC0 in component ::CMSIS Driver:Ethernet MAC
#define RTE_ETH                         0

//   <e> MII (Media Independent Interface)
#define RTE_ETH_MII                     1

//     <o> ETH_MII_TX_CLK Pin <0=>PC3
#define RTE_ETH_MII_TX_CLK_PORT_ID      0
#if    (RTE_ETH_MII_TX_CLK_PORT_ID == 0)
#define RTE_ETH_MII_TX_CLK_PORT         GPIOC
#define RTE_ETH_MII_TX_CLK_PIN          3
#else
#error "Invalid ETH_MII_TX_CLK Pin Configuration!"
#endif
//     <o> ETH_MII_TXD0 Pin <0=>PB12 <1=>PG13
#define RTE_ETH_MII_TXD0_PORT_ID        1
#if    (RTE_ETH_MII_TXD0_PORT_ID == 0)
#define RTE_ETH_MII_TXD0_PORT           GPIOB
#define RTE_ETH_MII_TXD0_PIN            12
#elif  (RTE_ETH_MII_TXD0_PORT_ID == 1)
#define RTE_ETH_MII_TXD0_PORT           GPIOG
#define RTE_ETH_MII_TXD0_PIN            13
#else
#error "Invalid ETH_MII_TXD0 Pin Configuration!"
#endif
//     <o> ETH_MII_TXD1 Pin <0=>PB13 <1=>PG14
#define RTE_ETH_MII_TXD1_PORT_ID        1
#if    (RTE_ETH_MII_TXD1_PORT_ID == 0)
#define RTE_ETH_MII_TXD1_PORT           GPIOB
#define RTE_ETH_MII_TXD1_PIN            13
#elif  (RTE_ETH_MII_TXD1_PORT_ID == 1)
#define RTE_ETH_MII_TXD1_PORT           GPIOG
#define RTE_ETH_MII_TXD1_PIN            14
#else
#error "Invalid ETH_MII_TXD1 Pin Configuration!"
#endif
//     <o> ETH_MII_TXD2 Pin <0=>PC2
#define RTE_ETH_MII_TXD2_PORT_ID        0
#if    (RTE_ETH_MII_TXD2_PORT_ID == 0)
#define RTE_ETH_MII_TXD2_PORT           GPIOC
#define RTE_ETH_MII_TXD2_PIN            2
#else
#error "Invalid ETH_MII_TXD2 Pin Configuration!"
#endif
//     <o> ETH_MII_TXD3 Pin <0=>PB8 <1=>PE2
#define RTE_ETH_MII_TXD3_PORT_ID        1
#if    (RTE_ETH_MII_TXD3_PORT_ID == 0)
#define RTE_ETH_MII_TXD3_PORT           GPIOB
#define RTE_ETH_MII_TXD3_PIN            8
#elif  (RTE_ETH_MII_TXD3_PORT_ID == 1)
#define RTE_ETH_MII_TXD3_PORT           GPIOE
#define RTE_ETH_MII_TXD3_PIN            2
#else
#error "Invalid ETH_MII_TXD3 Pin Configuration!"
#endif
//     <o> ETH_MII_TX_EN Pin <0=>PB11 <1=>PG11
#define RTE_ETH_MII_TX_EN_PORT_ID       1
#if    (RTE_ETH_MII_TX_EN_PORT_ID == 0)
#define RTE_ETH_MII_TX_EN_PORT          GPIOB
#define RTE_ETH_MII_TX_EN_PIN           11
#elif  (RTE_ETH_MII_TX_EN_PORT_ID == 1)
#define RTE_ETH_MII_TX_EN_PORT          GPIOG
#define RTE_ETH_MII_TX_EN_PIN           11
#else
#error "Invalid ETH_MII_TX_EN Pin Configuration!"
#endif
//     <o> ETH_MII_RX_CLK Pin <0=>PA1
#define RTE_ETH_MII_RX_CLK_PORT_ID        0
#if    (RTE_ETH_MII_RX_CLK_PORT_ID == 0)
#define RTE_ETH_MII_RX_CLK_PORT         GPIOA
#define RTE_ETH_MII_RX_CLK_PIN          1
#else
#error "Invalid ETH_MII_RX_CLK Pin Configuration!"
#endif
//     <o> ETH_MII_RXD0 Pin <0=>PC4
#define RTE_ETH_MII_RXD0_PORT_ID        0
#if    (RTE_ETH_MII_RXD0_PORT_ID == 0)
#define RTE_ETH_MII_RXD0_PORT           GPIOC
#define RTE_ETH_MII_RXD0_PIN            4
#else
#error "Invalid ETH_MII_RXD0 Pin Configuration!"
#endif
//     <o> ETH_MII_RXD1 Pin <0=>PC5
#define RTE_ETH_MII_RXD1_PORT_ID        0
#if    (RTE_ETH_MII_RXD1_PORT_ID == 0)
#define RTE_ETH_MII_RXD1_PORT           GPIOC
#define RTE_ETH_MII_RXD1_PIN            5
#else
#error "Invalid ETH_MII_RXD1 Pin Configuration!"
#endif
//     <o> ETH_MII_RXD2 Pin <0=>PB0 <1=>PH6
#define RTE_ETH_MII_RXD2_PORT_ID        1
#if    (RTE_ETH_MII_RXD2_PORT_ID == 0)
#define RTE_ETH_MII_RXD2_PORT           GPIOB
#define RTE_ETH_MII_RXD2_PIN            0
#elif  (RTE_ETH_MII_RXD2_PORT_ID == 1)
#define RTE_ETH_MII_RXD2_PORT           GPIOH
#define RTE_ETH_MII_RXD2_PIN            6
#else
#error "Invalid ETH_MII_RXD2 Pin Configuration!"
#endif
//     <o> ETH_MII_RXD3 Pin <0=>PB1 <1=>PH7
#define RTE_ETH_MII_RXD3_PORT_ID        1
#if    (RTE_ETH_MII_RXD3_PORT_ID == 0)
#define RTE_ETH_MII_RXD3_PORT           GPIOB
#define RTE_ETH_MII_RXD3_PIN            1
#elif  (RTE_ETH_MII_RXD3_PORT_ID == 1)
#define RTE_ETH_MII_RXD3_PORT           GPIOH
#define RTE_ETH_MII_RXD3_PIN            7
#else
#error "Invalid ETH_MII_RXD3 Pin Configuration!"
#endif
//     <o> ETH_MII_RX_DV Pin <0=>PA7
#define RTE_ETH_MII_RX_DV_PORT_ID       0
#if    (RTE_ETH_MII_RX_DV_PORT_ID == 0)
#define RTE_ETH_MII_RX_DV_PORT          GPIOA
#define RTE_ETH_MII_RX_DV_PIN           7
#else
#error "Invalid ETH_MII_RX_DV Pin Configuration!"
#endif
//     <o> ETH_MII_RX_ER Pin <0=>PB10 <1=>PI10
#define RTE_ETH_MII_RX_ER_PORT_ID       1
#if    (RTE_ETH_MII_RX_ER_PORT_ID == 0)
#define RTE_ETH_MII_RX_ER_PORT          GPIOB
#define RTE_ETH_MII_RX_ER_PIN           10
#elif  (RTE_ETH_MII_RX_ER_PORT_ID == 1)
#define RTE_ETH_MII_RX_ER_PORT          GPIOI
#define RTE_ETH_MII_RX_ER_PIN           10
#else
#error "Invalid ETH_MII_RX_ER Pin Configuration!"
#endif
//     <o> ETH_MII_CRS Pin <0=>PA0 <1=>PH2
#define RTE_ETH_MII_CRS_PORT_ID       1
#if    (RTE_ETH_MII_CRS_PORT_ID == 0)
#define RTE_ETH_MII_CRS_PORT            GPIOA
#define RTE_ETH_MII_CRS_PIN             0
#elif  (RTE_ETH_MII_CRS_PORT_ID == 1)
#define RTE_ETH_MII_CRS_PORT            GPIOH
#define RTE_ETH_MII_CRS_PIN             2
#else
#error "Invalid ETH_MII_CRS Pin Configuration!"
#endif
//     <o> ETH_MII_COL Pin <0=>PA3 <1=>PH3
#define RTE_ETH_MII_COL_PORT_ID       1
#if    (RTE_ETH_MII_COL_PORT_ID == 0)
#define RTE_ETH_MII_COL_PORT            GPIOA
#define RTE_ETH_MII_COL_PIN             3
#elif  (RTE_ETH_MII_COL_PORT_ID == 1)
#define RTE_ETH_MII_COL_PORT            GPIOH
#define RTE_ETH_MII_COL_PIN             3
#else
#error "Invalid ETH_MII_COL Pin Configuration!"
#endif

//   </e>

//   <e> RMII (Reduced Media Independent Interface)
#define RTE_ETH_RMII                    0

//     <o> ETH_RMII_TXD0 Pin <0=>PB12 <1=>PG13
#define RTE_ETH_RMII_TXD0_PORT_ID       0
#if    (RTE_ETH_RMII_TXD0_PORT_ID == 0)
#define RTE_ETH_RMII_TXD0_PORT          GPIOB
#define RTE_ETH_RMII_TXD0_PIN           12
#elif  (RTE_ETH_RMII_TXD0_PORT_ID == 1)
#define RTE_ETH_RMII_TXD0_PORT          GPIOG
#define RTE_ETH_RMII_TXD0_PIN           13
#else
#error "Invalid ETH_RMII_TXD0 Pin Configuration!"
#endif
//     <o> ETH_RMII_TXD1 Pin <0=>PB13 <1=>PG14
#define RTE_ETH_RMII_TXD1_PORT_ID       0
#if    (RTE_ETH_RMII_TXD1_PORT_ID == 0)
#define RTE_ETH_RMII_TXD1_PORT          GPIOB
#define RTE_ETH_RMII_TXD1_PIN           13
#elif  (RTE_ETH_RMII_TXD1_PORT_ID == 1)
#define RTE_ETH_RMII_TXD1_PORT          GPIOG
#define RTE_ETH_RMII_TXD1_PIN           14
#else
#error "Invalid ETH_RMII_TXD1 Pin Configuration!"
#endif
//     <o> ETH_RMII_TX_EN Pin <0=>PB11 <1=>PG11
#define RTE_ETH_RMII_TX_EN_PORT_ID      0
#if    (RTE_ETH_RMII_TX_EN_PORT_ID == 0)
#define RTE_ETH_RMII_TX_EN_PORT         GPIOB
#define RTE_ETH_RMII_TX_EN_PIN          11
#elif  (RTE_ETH_RMII_TX_EN_PORT_ID == 1)
#define RTE_ETH_RMII_TX_EN_PORT         GPIOG
#define RTE_ETH_RMII_TX_EN_PIN          11
#else
#error "Invalid ETH_RMII_TX_EN Pin Configuration!"
#endif
//     <o> ETH_RMII_RXD0 Pin <0=>PC4
#define RTE_ETH_RMII_RXD0_PORT_ID       0
#if    (RTE_ETH_RMII_RXD0_PORT_ID == 0)
#define RTE_ETH_RMII_RXD0_PORT          GPIOC
#define RTE_ETH_RMII_RXD0_PIN           4
#else
#error "Invalid ETH_RMII_RXD0 Pin Configuration!"
#endif
//     <o> ETH_RMII_RXD1 Pin <0=>PC5
#define RTE_ETH_RMII_RXD1_PORT_ID       0
#if    (RTE_ETH_RMII_RXD1_PORT_ID == 0)
#define RTE_ETH_RMII_RXD1_PORT          GPIOC
#define RTE_ETH_RMII_RXD1_PIN           5
#else
#error "Invalid ETH_RMII_RXD1 Pin Configuration!"
#endif
//     <o> ETH_RMII_REF_CLK Pin <0=>PA1
#define RTE_ETH_RMII_REF_CLK_PORT_ID    0
#if    (RTE_ETH_RMII_REF_CLK_PORT_ID == 0)
#define RTE_ETH_RMII_REF_CLK_PORT       GPIOA
#define RTE_ETH_RMII_REF_CLK_PIN        1
#else
#error "Invalid ETH_RMII_REF_CLK Pin Configuration!"
#endif
//     <o> ETH_RMII_CRS_DV Pin <0=>PA7
#define RTE_ETH_RMII_CRS_DV_PORT_ID     0
#if    (RTE_ETH_RMII_CRS_DV_PORT_ID == 0)
#define RTE_ETH_RMII_CRS_DV_PORT        GPIOA
#define RTE_ETH_RMII_CRS_DV_PIN         7
#else
#error "Invalid ETH_RMII_CRS_DV Pin Configuration!"
#endif

//   </e>

//   <h> Management Data Interface
//     <o> ETH_MDC Pin <0=>PC1
#define RTE_ETH_MDI_MDC_PORT_ID         0
#if    (RTE_ETH_MDI_MDC_PORT_ID == 0)
#define RTE_ETH_MDI_MDC_PORT            GPIOC
#define RTE_ETH_MDI_MDC_PIN             1
#else
#error "Invalid ETH_MDC Pin Configuration!"
#endif
//     <o> ETH_MDIO Pin <0=>PA2
#define RTE_ETH_MDI_MDIO_PORT_ID        0
#if    (RTE_ETH_MDI_MDIO_PORT_ID == 0)
#define RTE_ETH_MDI_MDIO_PORT           GPIOA
#define RTE_ETH_MDI_MDIO_PIN            2
#else
#error "Invalid ETH_MDIO Pin Configuration!"
#endif
//   </h>

//  <e> Power down interrupt
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ETH_PWR_PORT                GPIO_PORT(1)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ETH_PWR_PIN                 0x1000
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_ETH_PWR_IRQ                 0
//  </e>

// </e>


// <e> USB OTG Full-speed
#define RTE_USB_OTG_FS                  1

//     <e> Power PINs
// <i> Configuration USB Power Inputs
#define RTE_USB_OTG_FS_POWER                1

//  <h> USB POWER INPUT A
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_USB_OTG_FS_POWER_A_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_USB_OTG_FS_POWER_A_PIN          0x0400
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_USB_OTG_FS_POWER_A_IRQ          0
//  </h>

//  <h> USB POWER INPUT B
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_USB_OTG_FS_POWER_B_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_USB_OTG_FS_POWER_B_PIN          0x0200
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_USB_OTG_FS_POWER_B_IRQ          0
//  </h>
// </e>

//   <e> Device [Driver_USBD0]
//   <i> Configuration settings for Driver_USBD0 in component ::CMSIS Driver:USB Device

#define RTE_USB_OTG_FS_DEVICE           1

//     <o0.0> VBUS Sensing Pin
//     <i> Enable or disable VBUS sensing
#define RTE_OTG_FS_VBUS_SENSING_PIN     1
//   </e>

//   <e> Host [Driver_USBH0]
//   <i> Configuration settings for Driver_USBH0 in component ::CMSIS Driver:USB Host

#define RTE_USB_OTG_FS_HOST             1

//     <e> VBUS Power On/Off Pin
//     <i> Configure Pin for driving VBUS
//     <i> GPIO Pxy (x = A..H, y = 0..15) or (x = I, y = 0..11)
//       <o1> Active State <0=>Low <1=>High
//       <i>  Selects Active State Logical Level
//       <o2> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//                 <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//       <i>  Selects Port Name
//       <o3> Bit <0-15>
//       <i>  Selects Port Bit
//     </e>
#define RTE_OTG_FS_VBUS_PIN             1
#define RTE_OTG_FS_VBUS_ACTIVE          1
#define RTE_OTG_FS_VBUS_PORT            GPIO_PORT(0)
#define RTE_OTG_FS_VBUS_BIT             8

//     <e> Overcurrent Detection Pin
//     <i> Configure Pin for overcurrent detection
//     <i> GPIO Pxy (x = A..H, y = 0..15) or (x = I, y = 0..11)
//       <o1> Active State <0=>Low <1=>High
//       <i>  Selects Active State Logical Level
//       <o2> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//                 <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//       <i>  Selects Port Name
//       <o3> Bit <0-15>
//       <i>  Selects Port Bit
//     </e>
#define RTE_OTG_FS_OC_PIN               1
#define RTE_OTG_FS_OC_ACTIVE            0
#define RTE_OTG_FS_OC_PORT              GPIO_PORT(3)
#define RTE_OTG_FS_OC_BIT               13
//   </e>

// </e>


// <e> USB OTG High-speed
// <i> (USB OTG High-speed = ON) (Coin Acceptor = OFF)
#define RTE_USB_OTG_HS                  1

//   <h> PHY (Physical Layer)

//     <o> PHY Interface
//       <0=>On-chip full-speed PHY
//       <1=>External ULPI high-speed PHY
#define RTE_USB_OTG_HS_PHY              0

//     <h> External ULPI Pins (UTMI+ Low Pin Interface)

//       <o> OTG_HS_ULPI_CK Pin <0=>PA5
#define RTE_USB_OTG_HS_ULPI_CK_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_CK_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_CK_PORT     GPIOA
#define RTE_USB_OTG_HS_ULPI_CK_PIN      5
#else
#error "Invalid OTG_HS_ULPI_CK Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_DIR Pin <0=>PI11 <1=>PC2
#define RTE_USB_OTG_HS_ULPI_DIR_PORT_ID 0
#if    (RTE_USB_OTG_HS_ULPI_DIR_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_DIR_PORT    GPIOI
#define RTE_USB_OTG_HS_ULPI_DIR_PIN     11
#elif  (RTE_USB_OTG_HS_ULPI_DIR_PORT_ID == 1)
#define RTE_USB_OTG_HS_ULPI_DIR_PORT    GPIOC
#define RTE_USB_OTG_HS_ULPI_DIR_PIN     2
#else
#error "Invalid OTG_HS_ULPI_DIR Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_STP Pin <0=>PC0
#define RTE_USB_OTG_HS_ULPI_STP_PORT_ID 0
#if    (RTE_USB_OTG_HS_ULPI_STP_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_STP_PORT    GPIOC
#define RTE_USB_OTG_HS_ULPI_STP_PIN     0
#else
#error "Invalid OTG_HS_ULPI_STP Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_NXT Pin <0=>PC3 <1=>PH4
#define RTE_USB_OTG_HS_ULPI_NXT_PORT_ID 1
#if    (RTE_USB_OTG_HS_ULPI_NXT_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_NXT_PORT    GPIOC
#define RTE_USB_OTG_HS_ULPI_NXT_PIN     3
#elif  (RTE_USB_OTG_HS_ULPI_NXT_PORT_ID == 1)
#define RTE_USB_OTG_HS_ULPI_NXT_PORT    GPIOH
#define RTE_USB_OTG_HS_ULPI_NXT_PIN     4
#else
#error "Invalid OTG_HS_ULPI_NXT Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_D0 Pin <0=>PA3
#define RTE_USB_OTG_HS_ULPI_D0_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_D0_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_D0_PORT     GPIOA
#define RTE_USB_OTG_HS_ULPI_D0_PIN      3
#else
#error "Invalid OTG_HS_ULPI_D0 Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_D1 Pin <0=>PB0
#define RTE_USB_OTG_HS_ULPI_D1_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_D1_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_D1_PORT     GPIOB
#define RTE_USB_OTG_HS_ULPI_D1_PIN      0
#else
#error "Invalid OTG_HS_ULPI_D1 Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_D2 Pin <0=>PB1
#define RTE_USB_OTG_HS_ULPI_D2_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_D2_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_D2_PORT     GPIOB
#define RTE_USB_OTG_HS_ULPI_D2_PIN      1
#else
#error "Invalid OTG_HS_ULPI_D2 Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_D3 Pin <0=>PB10
#define RTE_USB_OTG_HS_ULPI_D3_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_D3_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_D3_PORT     GPIOB
#define RTE_USB_OTG_HS_ULPI_D3_PIN      10
#else
#error "Invalid OTG_HS_ULPI_D3 Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_D4 Pin <0=>PB11
#define RTE_USB_OTG_HS_ULPI_D4_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_D4_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_D4_PORT     GPIOB
#define RTE_USB_OTG_HS_ULPI_D4_PIN      11
#else
#error "Invalid OTG_HS_ULPI_D4 Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_D5 Pin <0=>PB12
#define RTE_USB_OTG_HS_ULPI_D5_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_D5_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_D5_PORT     GPIOB
#define RTE_USB_OTG_HS_ULPI_D5_PIN      12
#else
#error "Invalid OTG_HS_ULPI_D5 Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_D6 Pin <0=>PB13
#define RTE_USB_OTG_HS_ULPI_D6_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_D6_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_D6_PORT     GPIOB
#define RTE_USB_OTG_HS_ULPI_D6_PIN      13
#else
#error "Invalid OTG_HS_ULPI_D6 Pin Configuration!"
#endif
//       <o> OTG_HS_ULPI_D7 Pin <0=>PB5
#define RTE_USB_OTG_HS_ULPI_D7_PORT_ID  0
#if    (RTE_USB_OTG_HS_ULPI_D7_PORT_ID == 0)
#define RTE_USB_OTG_HS_ULPI_D7_PORT     GPIOB
#define RTE_USB_OTG_HS_ULPI_D7_PIN      5
#else
#error "Invalid OTG_HS_ULPI_D7 Pin Configuration!"
#endif

//     </h>

//   </h>

//   <e> Device [Driver_USBD1]
//   <i> Configuration settings for Driver_USBD1 in component ::CMSIS Driver:USB Device

#define RTE_USB_OTG_HS_DEVICE           1

//     <o0.0> VBUS Sensing Pin
//     <i> Enable or disable VBUS sensing
//     <i> Relevant only if PHY Interface On-chip full-speed PHY is selected
#define RTE_OTG_HS_VBUS_SENSING_PIN     1
//   </e>

//   <e> Host [Driver_USBH1]
//   <i> Configuration settings for Driver_USBH1 in component ::CMSIS Driver:USB Host
#define RTE_USB_OTG_HS_HOST             1

//     <e> VBUS Power On/Off Pin
//     <i> Configure Pin for driving VBUS
//     <i> GPIO Pxy (x = A..H, y = 0..15) or (x = I, y = 0..11)
//       <o1> Active State <0=>Low <1=>High
//       <i>  Selects Active State Logical Level
//       <o2> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//                 <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//       <i>  Selects Port Name
//       <o3> Bit <0-15>
//       <i>  Selects Port Bit
//     </e>
#define RTE_OTG_HS_VBUS_PIN             1
#define RTE_OTG_HS_VBUS_ACTIVE          1
#define RTE_OTG_HS_VBUS_PORT            GPIO_PORT(1)
#define RTE_OTG_HS_VBUS_BIT             11

//     <e> Overcurrent Detection Pin
//     <i> Configure Pin for overcurrent detection
//     <i> GPIO Pxy (x = A..H, y = 0..15) or (x = I, y = 0..11)
//       <o1> Active State <0=>Low <1=>High
//       <i>  Selects Active State Logical Level
//       <o2> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//                 <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//       <i>  Selects Port Name
//       <o3> Bit <0-15>
//       <i>  Selects Port Bit
//     </e>
#define RTE_OTG_HS_OC_PIN               1
#define RTE_OTG_HS_OC_ACTIVE            0
#define RTE_OTG_HS_OC_PORT              GPIO_PORT(7)
#define RTE_OTG_HS_OC_BIT               13
//   </e>

//   <o.0> DMA
//     <i> Use dedicated DMA for transfers
//     <i> If DMA is used all USB transfer data buffers have to be 4-byte aligned.
#define RTE_OTG_HS_DMA                  0

// </e>


// </h>

// <h> CPI [AUDIT7 (MICROpay7)]
// <i> CPI Audit7 specific configurations




// <e> BUZZER
// <i> Configuration Buzzer-Sound
#define RTE_BUZ                             1

//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_BUZ_PORT                        GPIO_PORT(3)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_BUZ_PIN                         0x8000
// </e>




// <h> LED
// <i> Configuration LEDs

// <e> Blue User Led
#define RTE_LED_US_BLUE                     1
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LED_US_BLUE_PORT                GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LED_US_BLUE_PIN                 0x0800
// </e>
 
// <e> Green User Led
#define RTE_LED_US_GREEN                    1
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LED_US_GREEN_PORT               GPIO_PORT(3)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LED_US_GREEN_PIN                0x0400
// </e>

// <e> Yellow User Led
#define RTE_LED_US_YELLOW                   1
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LED_US_YELLOW_PORT              GPIO_PORT(3)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LED_US_YELLOW_PIN               0x0800
// </e>

// <e> Red User Led
#define RTE_LED_US_RED                      1
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LED_US_RED_PORT                 GPIO_PORT(3)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LED_US_RED_PIN                  0x1000
// </e>

// <e> Green2 EMVCo Led
#define RTE_LED_EMVCO_GREEN2                1
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LED_EMVCO_GREEN2_PORT           GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LED_EMVCO_GREEN2_PIN            0x0100
// </e>

// <e> Green3 EMVCo Led
#define RTE_LED_EMVCO_GREEN3                1
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LED_EMVCO_GREEN3_PORT           GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LED_EMVCO_GREEN3_PIN            0x0200
// </e>

// <e> Green4 EMVCo Led
#define RTE_LED_EMVCO_GREEN4                1
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LED_EMVCO_GREEN4_PORT           GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LED_EMVCO_GREEN4_PIN            0x0400
// </e>
// </h>




// <e> Display / RFID2 
// <i> Configuration Display / RFID2
#define RTE_LCD                             1

//   <h> Display ID 
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LCD_ADR_PORT                    GPIO_PORT(0)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LCD_ADR_PIN                     0x0001
//     <o> ADC <1=>ADC1 <2=>ADC2 <3=>ADC3
//     <i>  Select ADC
#define RTE_LCD_ADR_ADC_NR                  3
//     <o> Channel <0-18>
//     <i>  Selects ADC Channel
#define RTE_LCD_ADR_ADC_CH_NR               0
//   </h>

//  <h> Display Interrupt or RFID2 TXRDY
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LCD_INT_PORT                    GPIO_PORT(3)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LCD_INT_PIN                     0x4000
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_LCD_INT_IRQ                     1
//  </h>

//  <h> Display Reset
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LCD_RESET_PORT                  GPIO_PORT(4)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LCD_RESET_PIN                   0x8000
//  </h>

//  <h> Display CS 
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LCD_SELECT_PORT                 GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LCD_SELECT_PIN                  0x2000
//  </h>

//  <h> TFT Module Command/Data
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LCD_RESET2_PORT                 GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LCD_RESET2_PIN                  0x0100
//  </h>

//  <h> TFT Module CS
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_LCD_SELECT2_PORT                GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_LCD_SELECT2_PIN                 0x8000
//  </h>

//  <h> RFID2 Reset
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_RFID2_RESET_PORT                GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_RFID2_RESET_PIN                 0x4000
//  </h>

//  <h> RFID2 CS
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_RFID2_SELECT_PORT               GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_RFID2_SELECT_PIN                0x8000
//  </h>

//     <o>  SPI <1-6>
//     <i>  Select SPI Driver, set configuration under chapter SPI
#define RTE_LCD_SPI_DRIVER                  GET_SPI_DRIVER(4)
// </e>




// <e> NFC 
// <i> Configuration NFC
#define RTE_NFC                             1

//  <h> NFC Antenna ID
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ANTENNA_ID_A_PORT               GPIO_PORT(8)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ANTENNA_ID_A_PIN                0x0020
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_ANTENNA_ID_A_IRQ                0

//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ANTENNA_ID_B_PORT               GPIO_PORT(8)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ANTENNA_ID_B_PIN                0x0040
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_ANTENNA_ID_B_IRQ                0

//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ANTENNA_ID_C_PORT               GPIO_PORT(8)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ANTENNA_ID_C_PIN                0x0080
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_ANTENNA_ID_C_IRQ                0
//  </h>

//  <h> NFC Interrupt
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_NFC_INT_PORT                    GPIO_PORT(4)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_NFC_INT_PIN                     0x0010
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_NFC_INT_IRQ                     1
//  </h>

//  <h> NFC Reset
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_NFC_RESET_PORT                  GPIO_PORT(4)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_NFC_RESET_PIN                   0x0020
//  </h>

//  <h> NFC Busy
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_NFC_BUSY_PORT                   GPIO_PORT(4)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_NFC_BUSY_PIN                    0x0008
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_NFC_BUSY_IRQ                    0
//  </h>

//  <e> NFC AUX1
#define RTE_NFC_AUX1                        1
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_NFC_AUX1_PORT                   GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_NFC_AUX1_PIN                    0x0400
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_NFC_AUX1_IRQ                    0
//  </e>

//  <e> NFC AUX2
#define RTE_NFC_AUX2                        1
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_NFC_AUX2_PORT                   GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_NFC_AUX2_PIN                    0x1000
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_NFC_AUX2_IRQ                    0
//  </e>

//     <o>  SPI <1-6>
//     <i>  Select SPI Driver, set configuration under chapter SPI
#define RTE_NFC_SPI_NR                      2
//  </e>




// <e> BLE 
// <i> Configuration Bluetooth Low Energy 5.0
#define RTE_BLE                             1

//  <h> Bluetooth Low Energy populated (LOW) or not populated (HIGH)
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_BLE_POPULATED_PORT              GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_BLE_POPULATED_PIN               0x4000
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_BLE_POPULATED_IRQ               0
//  </h>

//  <h> Bluetooth Low Energy Ready
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_BLE_READY_PORT                  GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_BLE_READY_PIN                   0x0008
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_BLE_READY_IRQ                   0
//  </h>

//  <h> Bluetooth Low Energy Reset
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_BLE_RESET_PORT                  GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_BLE_RESET_PIN                   0x0004
//  </h>

//  <h> Bluetooth Low Energy External Interrut
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_BLE_INT_PORT                    GPIO_PORT(8)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_BLE_INT_PIN                     0x0200
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_BLE_INT_IRQ                     1
//  </h>

//     <o>  SPI <1-6>
//     <i>  Select SPI Driver, set configuration under chapter SPI
#define RTE_BLE_SPI_DRIVER                  GET_SPI_DRIVER(5)
// </e>




// <h> RTCM 
// <i> set default time and date values
//  <o0> Second  <0-59>
//  <i>  Default value
//  <o1> Minute  <0-59>
//  <i>  Default value
//  <o2> Hour    <0-23>
//  <i>  Default value
//  <o3> Day     <1-31>
//  <i>  Default value
//  <o4> Month   <1-12>
//  <i>  Default value
//  <o5> Year    <0-99>
//  <i>  Default value
#define RTE_RTCM_SECOND                     1
#define RTE_RTCM_MINUTE                     0
#define RTE_RTCM_HOUR                       0
#define RTE_RTCM_DAY                        1
#define RTE_RTCM_MONTH                      1
#define RTE_RTCM_YEAR                       14
//  </h>




// <e> BTN
// <i> Configuration Reader Button
#define RTE_BTN                             1

//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_BTN_PORT                        GPIO_PORT(4)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_BTN_PIN                         0x0040
//  </e>




// <h> ADCM
//   <h> Reader Address 0
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ADCM_RD_HW0_PORT                GPIO_PORT(0)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ADCM_RD_HW0_PIN                 0x0010
//     <o> ADC <1=>ADC1 <2=>ADC2 <3=>ADC3
//     <i>  Select ADC
#define RTE_ADCM_RD_HW0_ADC_NR              1
//     <o> Channel <0-18>
//     <i>  Selects ADC Channel
#define RTE_ADCM_RD_HW0_ADC_CH_NR           4
//   </h>

//   <h> Reader Address 1
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ADCM_RD_HW1_PORT                GPIO_PORT(0)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ADCM_RD_HW1_PIN                 0x0040
//     <o> ADC <1=>ADC1 <2=>ADC2 <3=>ADC3
//     <i>  Select ADC
#define RTE_ADCM_RD_HW1_ADC_NR              2
//     <o> Channel <0-18>
//     <i>  Selects ADC Channel
#define RTE_ADCM_RD_HW1_ADC_CH_NR           6
//   </h>

//   <e> Option Address 0
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ADCM_OPT0_PORT                  GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ADCM_OPT0_PIN                   0x1000
//   </e>

//   <e> Option Address 1
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ADCM_OPT1_PORT                  GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ADCM_OPT1_PIN                   0x4000
//   </e>

//   <e> Option Address 2
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ADCM_OPT2_PORT                  GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ADCM_OPT2_PIN                   0x8000
//   </e>

//   <e> Periphal Address 0
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ADCM_PER0_PORT                  GPIO_PORT(8)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ADCM_PER0_PIN                   0x0100
//   </e>
//   <e> Periphal Address 1
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_ADCM_PER1_PORT                  GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_ADCM_PER1_PIN                   0x0020
//   </e>
//  </h>




// <h> CRYPM 
//   <h> DMA IN 
//     <o0> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o1> Stream <6=>6
//     <i>  Selects DMA Stream (only Stream 6 can be used)
//     <o2> Channel <2=>2
//     <i>  Selects DMA Channel (only Channel 2 can be used)
//   </h>
#define RTE_CRYPM_DMA_IN_NUMBER             2
#define RTE_CRYPM_DMA_IN_STREAM             6
#define RTE_CRYPM_DMA_IN_CHANNEL            2

//   <h> DMA OUT 
//     <o0> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o1> Stream <5=>5
//     <i>  Selects DMA Stream (only Stream 6 can be used)
//     <o2> Channel <2=>2
//     <i>  Selects DMA Channel (only Channel 2 can be used)
//   </h>
#define RTE_CRYPM_DMA_OUT_NUMBER            2
#define RTE_CRYPM_DMA_OUT_STREAM            5
#define RTE_CRYPM_DMA_OUT_CHANNEL           2
//  </h>




// <h> HASHM 
//   <h> DMA  
//     <o0> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o1> Stream <7=>7
//     <i>  Selects DMA Stream (only Stream 6 can be used)
//     <o2> Channel <2=>2
//     <i>  Selects DMA Channel (only Channel 2 can be used)
//   </h>
#define RTE_HASHM_DMA_NUMBER                2
#define RTE_HASHM_DMA_STREAM                7
#define RTE_HASHM_DMA_CHANNEL               2
// </h>




// <h> IOT 
//     <o0> Trigger-Timer <1-14>
//     <i>  Selects Timer number for trigger-signal
//     <o1> Seconds-Timer <1-14>
//     <i>  Selects Timer number for seconds-signal
//     <o2> Milliseconds-Timer <1-14>
//     <i>  Selects Timer number for milliseconds-signal
#define RTE_IOT_TIM_TRIGGER_NR              3
#define RTE_IOT_TIM_SEC_NR                  2
#define RTE_IOT_TIM_MILLISEC_NR             5
// </h>




// <e> POWER CONTROL
// <i> Configuration Input Voltage Control
#define RTE_POWER_CONTROL                   1

//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_POWER_CONTROL_PORT              GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_POWER_CONTROL_PIN               0x0800
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_POWER_CONTROL_IRQ               0
// </e>




// <e> MDS IO
// <i> Configuration MDS Inputs / Outputs
#define RTE_MDS_IO                          1

//  <e> MDS IO1
#define RTE_MDS_IO_A                        1
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_MDS_IO_A_PORT                   GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_MDS_IO_A_PIN                    0x0010
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_MDS_IO_A_IRQ                    0
//  </e>

//  <e> MDS IO2
#define RTE_MDS_IO_B                        1
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_MDS_IO_B_PORT                   GPIO_PORT(5)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_MDS_IO_B_PIN                    0x0020
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_MDS_IO_B_IRQ                    0
//  </e>
// </e>




// <e> Event Recorder
// <i> Enable Event Recorder
#define RTE_EVENT_RECORDER                  1

//  <h> Thread Management
//   <o.0>   Created + Destroyed (Op)
//   <o.1>   Switch (Op)
//   <o.2>   Delay (API)
//   <o.3>   Unblock (Op)
//  </h>
#define RTE_EVENT_RECORDER_THREAD           15

//  <h> Timer Management
//   <o.0>   Created + Destroyed (Op)
//   <o.1>   Start + Stop (Op)
//   <o.2>   Callback (Op)
//  </h>
#define RTE_EVENT_RECORDER_TIMER            7

//  <h> Event Flag Management
//   <o.0>   Created + Destroyed (Op)
//   <o.1>   Wait (API)
//   <o.2>   Set + Clear (Op)
//   <o.3>   Wait Complete + Wait Timeout (Op)
//  </h>
#define RTE_EVENT_RECORDER_EVENT_FLAG       15

//  <h> Mutex Management
//   <o.0>   Created + Destroyed (Op)
//   <o.1>   Acquire (API)
//   <o.2>   Acquired OK + Acquired Timeout + Released (Op)
//  </h>
#define RTE_EVENT_RECORDER_MUTEX            7

//  <h> Semaphore Management
//   <o.0>   Created + Destroyed (Op)
//   <o.1>   Acquire (API)
//   <o.2>   Acquired OK + Acquired Timeout + Released (Op)
//  </h>
#define RTE_EVENT_RECORDER_SEMAPHORE        7

//  <h> Message Queue Management
//   <o.0>   Created + Destroyed (Op)
//   <o.1>   Put + Get (API)
//   <o.2>   Put OK + Put Timeout + Get OK + Get Timeout (Op)
//  </h>
#define RTE_EVENT_RECORDER_QUEUE            7
//</e>




// <e> MDS
// <i> Enable MDS
#define RTE_MDS                             1

//     <o> USART Number
//          <1=>USART 1 <2=>USART 2 <3=>USART 3
//          <4=>UART 4  <5=>UART 5  <6=>USART 6
//          <7=>UART 7  <8=>UART 8  <9=>UART 9
//          <10=>UART 10
//     <i>  You need to enable the corresponding USART Driver above
#define RTE_MDS_USART_NBR                   1
#define RTE_MDS_USART_DRIVER                GET_USART_DRIVER(RTE_MDS_USART_NBR)
// </e>




// <e> SAM1
// <i> Configuration Micro SAM Card Slot 1
#define RTE_SAM1_CARD                       1

//  <h> Security Access Memory populated (LOW) or not populated (HIGH)
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_SAM1_POPULATED_PORT             GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_SAM1_POPULATED_PIN              0x1000
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_SAM1_POPULATED_IRQ              0
//  </h>

//  <h> SAM1 VPP
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_SAM1_CARD_VPP_PORT              GPIO_PORT(3)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_SAM1_CARD_VPP_PIN               0x0010
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_SAM1_CARD_VPP_IRQ               0
//  </h>

//  <h> SAM1 POWER
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_SAM1_CARD_POWER_PORT            GPIO_PORT(4)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_SAM1_CARD_POWER_PIN             0x0200
//  </h>

//  <h> SAM1 CMD
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_SAM1_CARD_CMD_PORT              GPIO_PORT(4)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_SAM1_CARD_CMD_PIN               0x0400
//  </h>

//  <h> SAM1 RESET
//     <o0> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_SAM1_CARD_RESET_PORT            GPIO_PORT(3)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_SAM1_CARD_RESET_PIN             0x0040
//  </h>

//     <o>  UART <1-8>
//     <i>  Select UART Driver, set configuration under chapter UART
#define RTE_SAM1_CARD_UART_NR               2
// </e>




// <h> VMC
//
// <e> EXE Master
//     <o> USART Number
//          <1=>USART 1 <2=>USART 2 <3=>USART 3
//          <4=>UART 4  <5=>UART 5  <6=>USART 6
//          <7=>UART 7  <8=>UART 8  <9=>UART 9
//          <10=>UART 10
//     <i>  You need to enable the corresponding USART Driver above
#define RTE_EXE_MASTER_USART_NBR                   3
#define RTE_EXE_MASTER_USART_DRIVER                GET_USART_DRIVER(RTE_EXE_MASTER_USART_NBR)
// </e>
//
// <e> MDB Slave
//     <o> USART Number
//          <1=>USART 1 <2=>USART 2 <3=>USART 3
//          <4=>UART 4  <5=>UART 5  <6=>USART 6
//          <7=>UART 7  <8=>UART 8  <9=>UART 9
//          <10=>UART 10
//     <i>  You need to enable the corresponding USART Driver above
#define RTE_MDB_SLAVE_USART_NBR                   3
#define RTE_MDB_SLAVE_USART_DRIVER                GET_USART_DRIVER(RTE_MDB_SLAVE_USART_NBR)
// </e>
// <e> MDB Slave RS232
//     <o> USART Number
//          <1=>USART 1 <2=>USART 2 <3=>USART 3
//          <4=>UART 4  <5=>UART 5  <6=>USART 6
//          <7=>UART 7  <8=>UART 8  <9=>UART 9
//          <10=>UART 10
//     <i>  You need to enable the corresponding USART Driver above
#define RTE_MDB_SLAVE_RS232_USART_NBR             3
#define RTE_MDB_SLAVE_RS232_USART_DRIVER          GET_USART_DRIVER(RTE_MDB_SLAVE_RS232_USART_NBR)
// </e>
//
// </h>

// <h> Peripherals
//
// <e> MDB Master
//     <o> USART Number
//          <1=>USART 1 <2=>USART 2 <3=>USART 3
//          <4=>UART 4  <5=>UART 5  <6=>USART 6
//          <7=>UART 7  <8=>UART 8  <9=>UART 9
//          <10=>UART 10
//     <i>  You need to enable the corresponding USART Driver above
#define RTE_MDB_MASTER_USART_NBR            6
#define RTE_MDB_MASTER_USART_DRIVER         GET_USART_DRIVER(RTE_MDB_MASTER_USART_NBR)
// </e>
//
// <e> EXE Slave
//     <o> USART Number
//          <1=>USART 1 <2=>USART 2 <3=>USART 3
//          <4=>UART 4  <5=>UART 5  <6=>USART 6
//          <7=>UART 7  <8=>UART 8  <9=>UART 9
//          <10=>UART 10
//     <i>  You need to enable the corresponding USART Driver above
#define RTE_EXE_SLAVE_USART_NBR            6
#define RTE_EXE_SLAVE_USART_DRIVER         GET_USART_DRIVER(RTE_EXE_SLAVE_USART_NBR)
// </e>
//
// </h>




// <e> STDIO
// <i> Enable STDIO
#define RTE_STDIO                           1

//     <o> USART Number
//          <1=>USART 1 <2=>USART 2 <3=>USART 3
//          <4=>UART 4  <5=>UART 5  <6=>USART 6
//          <7=>UART 7  <8=>UART 8  <9=>UART 9
//          <10=>UART 10
//     <i>  You need to enable the corresponding USART Driver above
#define RTE_STDIO_USART_NBR                 7
#define RTE_STDIO_USART_DRIVER              GET_USART_DRIVER(RTE_STDIO_USART_NBR)
// </e>




// <e> IRDA
// <i> Configuration IrDA
#define RTE_IRDA                            1

//  <h> IrDA ID
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_USER_INPUT_PORT                 GPIO_PORT(8)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_USER_INPUT_PIN                  0x0010
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_USER_INPUT_IRQ                  0
//  </h>

//     <o>  UART <1-8>
//     <i>  Select UART Driver, set configuration under chapter UART
#define RTE_IRDA_UART_NR                    8
//  </e>




// <e> STSAFA
// <i> Enable STSAFA
#define RTE_STSAFA                          1

//     <o> I2C Number
//          <1=>I2C 1 <2=>I2C 2 <3=>I2C 3
//     <i>  You need to enable the corresponding I2C Driver above
#define RTE_STSAFA_I2C_NBR                  1
#define RTE_STSAFA_I2C_DRIVER               GET_I2C_DRIVER(RTE_STSAFA_I2C_NBR)

//  <e> STSAFA Reset
// <i> Configuration STSAFA Reset Pin
#define RTE_STSAFA_RESET                    1

//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_STSAFA_RESET_PORT               GPIO_PORT(3)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_STSAFA_RESET_PIN                0x0008
//  </e>
// </e>




// <e> FRAM
// <i> Enable FRAM
#define RTE_FRAM                              1

//     <o> I2C Number
//          <1=>I2C 1 <2=>I2C 2 <3=>I2C 3
//     <i>  You need to enable the corresponding I2C Driver above
#define RTE_FRAM_I2C_NBR                     2
#define RTE_FRAM_I2C_DRIVER                  GET_I2C_DRIVER(RTE_FRAM_I2C_NBR)
// </e>




// <e> SYNC BUS
// <i> CAN PORT
//     <o> CAN Number
//          <1=>CAN 1 <2=>CAN 2 <3=>CAN 3
//     <i>  You need to enable the corresponding CAN Driver above
#define RTE_SYNCBUS_CAN_NBR                   1
#define RTE_SYNCBUS_CAN_DRIVER                GET_SYNCBUS_CAN_DRIVER(RTE_SYNCBUS_CAN_NBR)
#define RTE_SYNCBUS_CAN_CALLBACK              GET_SYNCBUS_CAN_CALLBACK(RTE_SYNCBUS_CAN_NBR)
// </e>




// <e> Parallel Port
// <i> Configuration Parallel Port
#define RTE_PARALLEL_PORT                   1

//  <h> Parallel Port populated (LOW) or not populated (HIGH)
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_POPULATED_PORT         GPIO_PORT(7)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_POPULATED_PIN          0x8000
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_POPULATED_IRQ          0
//  </h>

//  <e> I/O 0
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_PORT_IO_0_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_PORT_IO_0_PIN          0x0001
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_PORT_IO_0_IRQ          0
//  </e>

//  <e> I/O 1
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_PORT_IO_1_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_PORT_IO_1_PIN          0x0002
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_PORT_IO_1_IRQ          0
//  </e>

//  <e> I/O 2
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_PORT_IO_2_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_PORT_IO_2_PIN          0x0004
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_PORT_IO_2_IRQ          0
//  </e>

//  <e> I/O 3
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_PORT_IO_3_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_PORT_IO_3_PIN          0x0008
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_PORT_IO_3_IRQ          0
//  </e>

//  <e> I/O 4
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_PORT_IO_4_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_PORT_IO_4_PIN          0x0010
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_PORT_IO_4_IRQ          0
//  </e>

//  <e> I/O 5
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_PORT_IO_5_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_PORT_IO_5_PIN          0x0020
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_PORT_IO_5_IRQ          0
//  </e>

//  <e> I/O 6
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_PORT_IO_6_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_PORT_IO_6_PIN          0x0040
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_PORT_IO_6_IRQ          0
//  </e>

//  <e> I/O 7
//     <o> Port <0=>GPIOA <1=>GPIOB <2=>GPIOC <3=>GPIOD
//               <4=>GPIOE <5=>GPIOF <6=>GPIOG <7=>GPIOH <8=>GPIOI
//     <i>  Selects Port Name
#define RTE_PARALLEL_PORT_IO_7_PORT         GPIO_PORT(6)
//     <o> Bit
//          <0x0001=>Pin 0 <0x0002=>Pin 1 <0x0004=>Pin 2 <0x0008=>Pin 3
//          <0x0010=>Pin 4 <0x0020=>Pin 5 <0x0040=>Pin 6 <0x0080=>Pin 7
//          <0x0100=>Pin 8 <0x0200=>Pin 9 <0x0400=>Pin 10 <0x0800=>Pin 11
//          <0x1000=>Pin 12 <0x2000=>Pin 13 <0x4000=>Pin 14 <0x8000=>Pin 15
//     <i>  Selects Port Bit
#define RTE_PARALLEL_PORT_IO_7_PIN          0x0080
//     <o> Interrupt <0=>Disable <1=>Enable
//     <i> set configuration under chapter EXTI
#define RTE_PARALLEL_PORT_IO_7_IRQ          0
//  </e>
// </e>

#endif  /* __RTE_DEVICE_H */