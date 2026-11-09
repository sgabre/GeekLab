
# Drone


## Common Microcontroller Software Interface Standard

## Core

## Compiler

## View

## RTOS2

## Driver

CMSIS-Driver APIs are defined for the following driver interfaces:

- CAN: Interface to CAN bus peripheral.
- Ethernet: Interface to Ethernet MAC and PHY peripheral.
- I2C: Multi-master Serial Single-Ended Bus interface driver.
- MCI: Memory Card Interface for SD/MMC memory.
- NAND: NAND Flash Memory interface driver.
- Flash: Flash Memory interface driver.
- SAI: Serial audio interface driver (I2s, PCM, AC'97, TDM, MSB/LSB Justified).
- SPI: Serial Peripheral Interface Bus driver.
- Storage: Storage device interface driver.
- USART: Universal Synchronous and Asynchronous Receiver/Transmitter interface driver.
- USB: Interface driver for USB Host and USB Device communication.
- GPIO: General-purpose Input/Output driver.
- VIO: API for virtual I/Os (VIO).
- vStream: API for Virtual streaming interface using fixed-size data blocks.
- WiFi: Interface driver for wireless communication.

## DSP

## NN

# On-Board Chip

## Airspeed Sensor

## Barometer

## Camera

## Distance Sensor

## IMU

## Inertial Sensor Driver

## Magnetometer

## Optical Flow

## Rpm Sensor

## Radio Control

## Transponder

## ADC

## Accelerometer

# Software Component

## Telemetry

## Shell

### Commands List

- help/?
- info
**Command Table**

```c
extern const CLI_Command_Definition_t xStatusCommand;

static const CLI_Command_Definition_t * const pxCommandList[] =
{
    &xHelpCommand,
    &xStatusCommand
};

#define COMMAND_COUNT (sizeof(pxCommandList) / sizeof(pxCommandList[0]))
```
**Command Definition **
```c
static const CLI_Command_Definition_t xDelCommand =
{
    "help",
    "help [command]\r\n"
    "Displays all registered commands or help for a specific command.\r\n",
    HelpCommand,
    -1
};
````


**Command Registeration**

```c
FreeRTOS_CLIRegisterCommand( &xDelCommand );
````

**Command Handler**
```c
static BaseType_t HelpCommand( char *pcWriteBuffer, size_t xWriteBufferLen, const char *pcCommandString )
{
    static const xCommandLineInputListItem* oCommand = NULL;
    signed BaseType_t xReturn;

    if( oCommand == NULL )
    {
        oCommand = &xRegisteredCommands;
    }

    strncpy( pcWriteBuffer, oCommand->pxCommandLineDefinition->pcHelpString, xWriteBufferLen );

    pxCommand = pxCommand->pxNext;

    if( pxCommand == NULL )
    {
        xReturn = pdFALSE;
    }
    else
    {
        xReturn = pdTRUE;
    }

    return xReturn;
}
```

**Shell Task**

```c
#define MAX_INPUT_LENGTH    50
#define MAX_OUTPUT_LENGTH   100

static const int8_t * const pcWelcomeMessage = "FreeRTOS command server.rnType Help to view a list of registered commands.rn";

void Shell_Handler(void *pvParameters )
{
    Peripheral_Descriptor_t xConsole;
    int8_t cRxedChar, cInputIndex = 0;
    BaseType_t xMoreDataToFollow;

    static int8_t pcOutputString[ MAX_OUTPUT_LENGTH]; 
    static int8_t pcInputString[ MAX_INPUT_LENGTH ];

    xConsole = ( Peripheral_Descriptor_t ) pvParameters;

    FreeRTOS_write( xConsole, pcWelcomeMessage, strlen( pcWelcomeMessage ) );

    for( ;; )
    {
        FreeRTOS_read( xConsole, &cRxedChar, sizeof( cRxedChar ) );

        if( cRxedChar == '\n' )
        {
            FreeRTOS_write( xConsole, "\r\n", strlen( "\r\n" );

            do
            {
                xMoreDataToFollow = FreeRTOS_CLIProcessCommand(pcInputString, pcOutputString, MAX_OUTPUT_LENGTH);

                FreeRTOS_write( xConsole, pcOutputString, strlen( pcOutputString ) );

            } while( xMoreDataToFollow != pdFALSE );

            cInputIndex = 0;

            memset( pcInputString, 0x00, MAX_INPUT_LENGTH );
        }
        else
        {
            if( cRxedChar == '\r' )
            {
                /* Ignore carriage returns. */
            }
            else if( cRxedChar == '\b' )
            {
                if( cInputIndex > 0 )
                {
                    cInputIndex--;
                    pcInputString[ cInputIndex ] = '';
                }
            }
            else
            {
                if( cInputIndex < MAX_INPUT_LENGTH )
                {
                    pcInputString[ cInputIndex ] = cRxedChar;
                    cInputIndex++;
                }
            }
        }
    }
}
```