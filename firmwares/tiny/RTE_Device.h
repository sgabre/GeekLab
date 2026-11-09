//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H

#define HW_PLATFORM     "W146"
#define HW_REVISION     "E1"


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
// <h>Exemple




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

// </h>

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
// </h>

// <h> SPI1 (Serial Peripheral Interface 1) [Driver_SPI1]
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
// </h>




// <h> Water Sensor Interface
// </h>

// <h> Cellular Interface
// </h>

// <h> External Memory Interface
// </h>


// <h> Near Field Communication Interface

//   <o>I2C
//                        <0=> To Be Defined
//                        <1=> I2C1
//                        <2=> I2C2
//                        <3=> I2C3
//   <i> Defines I2C for Near Field Communication Interface.
//   <i> Default: To Be Defined
//   <d> 0

#ifndef RTE_NFC_I2C
#define RTE_NFC_I2C 0
#define I2C_DRIVER(num)  Driver_I2C##num
#endif

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



// <h> Radio Interface
// </h>

// <h> Antenna Interface
// </h>

//   <o>USART
//                        <0=> To Be Defined
//                        <1=> UART1
//                        <2=> UART2
//                        <3=> UART3
//                        <4=> UART4
//                        <5=> UART5
//                        <6=> UART6
//   <i> Defines UART for XXX Interface.
//   <i> Default: To Be Defined
//   <d> 0
#ifndef OS_TIMERPRIO
#define OS_TIMERPRIO   5
#endif
// </h>

// <<< end of configuration section >>>