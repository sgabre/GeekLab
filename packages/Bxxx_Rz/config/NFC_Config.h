
#ifndef __RTE_NFC_CONFIG_H
#define __RTE_NFC_CONFIG_H

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

// <h> Near Field Communication Interface

// <o> Inter-integrated Circuit Driver (I2C)
// <0=> To Be Defined
// <1=> I2C1
// <2=> I2C2
// <3=> I2C3
// <i> Selects the I2C peripheral used by the NFC device.
// <d> 0
#ifndef RTE_NFC_I2C
#define RTE_NFC_I2C 1
#define I2C_DRIVER(num)  Driver_I2C##num
#define NFC_I2C_DRIVER   I2C_DRIVER(RTE_NFC_I2C)  
#endif

#if (RTE_NFC_I2C != 0)
  // <h> I2C1 Configuration

  // <o> I2C1 SCL Pin
  // <0=> PB6
  // <1=> PB8
  #define RTE_I2C1_SCL_PORT_ID 1

  #if (RTE_I2C1_SCL_PORT_ID == 0)
    #define RTE_I2C1_SCL_PORT GPIOB
    #define RTE_I2C1_SCL_BIT  6
  #elif (RTE_I2C1_SCL_PORT_ID == 1)
    #define RTE_I2C1_SCL_PORT GPIOB
    #define RTE_I2C1_SCL_BIT  8
  #else
    #error "Invalid I2C1 SCL configuration"
  #endif

  // <o> I2C1 SDA Pin
  // <0=> PB7
  // <1=> PB9
  #define RTE_I2C1_SDA_PORT_ID 1

  #if (RTE_I2C1_SDA_PORT_ID == 0)
    #define RTE_I2C1_SDA_PORT GPIOB
    #define RTE_I2C1_SDA_BIT  7
  #elif (RTE_I2C1_SDA_PORT_ID == 1)
    #define RTE_I2C1_SDA_PORT GPIOB
    #define RTE_I2C1_SDA_BIT  9
  #else
    #error "Invalid I2C1 SDA configuration"
  #endif

  // <e> DMA Rx
  #define RTE_I2C1_RX_DMA          0
  // <o> DMA Number <1=>DMA1
  #define RTE_I2C1_RX_DMA_NUMBER   1
  // <o> DMA Stream <0=>0 <5=>5
  #define RTE_I2C1_RX_DMA_STREAM   0
  // <o> DMA Channel <1=>1
  #define RTE_I2C1_RX_DMA_CHANNEL  1
  // <o> DMA Priority <0=>Low <1=>Medium <2=>High <3=>Very High
  #define RTE_I2C1_RX_DMA_PRIORITY 0
  // </e>

  // <e> DMA Tx
  #define RTE_I2C1_TX_DMA          0
  // <o> DMA Number <1=>DMA1
  #define RTE_I2C1_TX_DMA_NUMBER   1
  // <o> DMA Stream <1=>1 <6=>6 <7=>7
  #define RTE_I2C1_TX_DMA_STREAM   6
  // <o> DMA Channel <0=>0 <1=>1
  #define RTE_I2C1_TX_DMA_CHANNEL  1
  // <o> DMA Priority <0=>Low <1=>Medium <2=>High <3=>Very High
  #define RTE_I2C1_TX_DMA_PRIORITY 0
  // </e>

  // </h>

#elif (RTE_NFC_I2C == 0)

  #define RTE_I2C1 0
  #define RTE_I2C2 0
  #define RTE_I2C3 0

#elif (RTE_NFC_I2C == 2)

  #define RTE_I2C2 1

#elif (RTE_NFC_I2C == 3)

  #define RTE_I2C3 1

#else
  #error "Invalid NFC I2C selection"
#endif


// <h> NFC Interrupt (INT)

// <o> GPIO Port
// <0=> GPIOA
// <1=> GPIOB
// <2=> GPIOC
// <3=> GPIOD
// <255=> To Be Defined
#define RTE_NFC_INT_PORT 255

// <o> GPIO Pin <0-15>
// <255=> To Be Defined
#define RTE_NFC_INT_PIN 255

// <o> Interrupt
// <0=> Disabled
// <1=> Enabled
#define RTE_NFC_INT_IRQ 1

// </h>


// <h> NFC Power Control

// <o> GPIO Port
// <0=> GPIOA
// <1=> GPIOB
// <2=> GPIOC
// <3=> GPIOD
// <255=> To Be Defined
#define RTE_NFC_POWER_PORT 255

// <o> GPIO Pin <0-15>
// <255=> To Be Defined
#define RTE_NFC_POWER_PIN 255

// </h>

// </h>

//-------- <<< end of configuration section >>> -------------------------------

#endif /* __RTE_NFC_CONFIG_H */
