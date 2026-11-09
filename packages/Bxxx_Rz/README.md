````bash
packchk GSI.Bxxx.pdsc \
  -i ~/packs/ARM/CMSIS/6.4.0/ARM.CMSIS.pdsc \
  -i ~/packs/ARM/Cortex_DFP/1.2.0/ARM.Cortex_DFP.pdsc \
  -v
```

# Board 

vendor	name of the board vendor	xs:string	required
name	name of the development board	xs:string	required
revision	Revision of the board that is suited to be used with the BSP.	xs:string	optional
salesContact	Either an email address or web page to contact the sales department.	xs:string	optional
orderForm	Link to a web page for ordering the development board.

# Board Features

- 1 x Integrated ST-Link on USB Connector J13
- 8 MHz Crystal Oscillator
- 8 V - 12 V Power Supply
- 1 x CR2032 Battery for RTC
- 320 mA (typ), 375 mA (max) Current
- 1 x 512 kB Static RAM
- 1 x 4 MB NAND-Flash
- 128 byte EEPROM
- 1 x My Other Control Feature
- 1 x My Other Sensor Feature
- 1 x My Other Feature

# Debug Interface

<debugInterface adapter="JTAG/SW" connector="20-pin Arm Standard JTAG Connector (0.1 inch connector)"/>
<debugInterface adapter="JTAG/SW" connector="10-pin Cortex Debug Connector (0.05 inch connector)"/>
<debugInterface adapter="JTAG/SW" connector="20-pin Cortex Debug + ETM Connector (0.05 inch connector)"/>
<debugInterface adapter="ST-Link" connector="Mini-USB"/>

# Boad documentations

setup	    Documentation about how to setup the development board.
schematic	Schematics of the development board.
overview	Overview/data sheet of the development board.
manual	    User manual of the development board
layout	    PCB layout file of the board (e.g. in Gerber format)
other	    All other documentation.


# NFC Interface

- GPO Interrupt
- SDA 
- SCL 
- Power Switch