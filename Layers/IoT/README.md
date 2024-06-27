Board: STMicroelectronics [STM32F746G-DISCO](https://www.st.com/en/evaluation-tools/32f746gdiscovery.html)
------------------------------------------

Device: **STM32F746NGHx**
System Core Clock: **200 MHz**

This setup is configured using **STM32CubeMX**, an interactive tool provided by STMicroelectronics for device configuration.
Refer to ["Configure STM32 Devices with CubeMX"](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/CubeMX.md) for additional information.

### System Configuration

| System resource   | Setting
|:------------------|:--------------------------------------
| Heap              | 1 kB (configured in the STM32CubeMX)
| Stack (MSP)       | 1 kB (configured in the STM32CubeMX)

### STDIO mapping

**STDIO** is routed to Virtual COM port on the ST-Link (using **USART1** peripheral)

### CMSIS-Driver mapping

| CMSIS-Driver      | Peripheral
|:------------------|:--------------------------------------
| Driver_ETH_MAC0   | ETH
| Driver_ETH_PHY0   | LAN8742A (external)
| Driver_GPIO0      | GPIO0
| Driver_I2C1       | I2C1
| Driver_MCI1       | SDMMC1
| Driver_USART6     | USART6
| Driver_USBD0      | USB_OTG_FS
| Driver_USBD1      | USB_OTG_HS

### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO  | Physical resource
|:------------------|:--------------------------------------
| vioBUTTON0        | Button USER (PI11)
| vioLED0           | LD1 GREEN   (PI1)

## Arduino UNO mapping

| Arduino resource  | Driver
|:------------------|:--------------------------------------
| UART (D0,D1)      | USART6 Driver (ARDUINO_UNO_UART)
| I2C  (D20,D21)    | I2C1   Driver (ARDUINO_UNO_I2C)
| Digital I/O: D2   | GPIO0  Driver (ARDUINO_UNO_D2)
| Digital I/O: D3   | GPIO0  Driver (ARDUINO_UNO_D3)
| Digital I/O: D4   | GPIO0  Driver (ARDUINO_UNO_D4)
| Digital I/O: D5   | GPIO0  Driver (ARDUINO_UNO_D5)
| Digital I/O: D6   | GPIO0  Driver (ARDUINO_UNO_D6)
| Digital I/O: D7   | GPIO0  Driver (ARDUINO_UNO_D7)
| Digital I/O: D8   | GPIO0  Driver (ARDUINO_UNO_D8)
| Digital I/O: D9   | GPIO0  Driver (ARDUINO_UNO_D9)
| Digital I/O: D10  | GPIO0  Driver (ARDUINO_UNO_D10)
| Digital I/O: D11  | GPIO0  Driver (ARDUINO_UNO_D11)
| Digital I/O: D12  | GPIO0  Driver (ARDUINO_UNO_D12)
| Digital I/O: D13  | GPIO0  Driver (ARDUINO_UNO_D13)
| Digital I/O: D14  | GPIO0  Driver (ARDUINO_UNO_D14)
| Digital I/O: D15  | GPIO0  Driver (ARDUINO_UNO_D15)
| Digital I/O: D16  | GPIO0  Driver (ARDUINO_UNO_D16)
| Digital I/O: D17  | GPIO0  Driver (ARDUINO_UNO_D17)
| Digital I/O: D18  | GPIO0  Driver (ARDUINO_UNO_D18)
| Digital I/O: D19  | GPIO0  Driver (ARDUINO_UNO_D19)

> **Note:** The [![Arduino connector](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/ReferenceApplications.md#arduino-shield) description.

## Board configuration

**Board setup**
  - Insure that the **JP1** jumper is bridged in the **5V_ST_LINK** position
  - Connect a **USB mini-B cable** between the **STLK** connector and your **Personal Computer**
