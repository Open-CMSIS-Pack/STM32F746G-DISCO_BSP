# Board: STMicroelectronics [STM32F746G-DISCO](https://www.st.com/en/evaluation-tools/32f746gdiscovery.html)

## Default Board Layer

Device: **STM32F746NGHx**

System Core Clock: **200 MHz**

This setup is configured using **STM32CubeMX**, an interactive tool provided by STMicroelectronics for device configuration.
Refer to ["Configure STM32 Devices with CubeMX"](https://open-cmsis-pack.github.io/cmsis-toolbox/CubeMX/) for additional information.

### System Configuration

| System resource       | Setting
|:----------------------|:--------------------------------------
| Heap                  | 64 kB (configured in the STM32CubeMX)
| Stack (MSP)           |  1 kB (configured in the STM32CubeMX)

### STDIO mapping

**STDIO** is routed to Virtual COM port on the ST-LINK (using **USART1** peripheral)

### CMSIS-Driver mapping

| CMSIS-Driver          | Peripheral            | Board connector/component                     | Connection
|:----------------------|:----------------------|:----------------------------------------------|:------------------------------
| Driver_ETH_MAC0       | ETH                   | Ethernet RJ45 connector (CN9)                 | CMSIS_ETH
| Driver_ETH_PHY0       | LAN8742A (external)   | Ethernet RJ45 connector (CN9)                 | CMSIS_ETH
| Driver_GPIO0          | GPIO                  | Arduino digital I/O pins D2..D12, D14..D19    | ARDUINO_UNO_D2..D12, D14..D19
| Driver_I2C1           | I2C1                  | Arduino I2C pins D20..D21                     | ARDUINO_UNO_I2C
| Driver_MCI1           | SDMMC1                | MicroSD card connector (CN3)                  | CMSIS_MCI
| Driver_USART1         | USART1                | ST-LINK connector (CN14)                      | STDIN, STDOUT, STDERR
| Driver_USART6         | USART6                | Arduino UART pins D0..D1                      | ARDUINO_UNO_UART
| Driver_USBD0          | USB_OTG_FS            | USB OTG FS connector (CN13)                   | CMSIS_USB_Device
| Driver_USBH1          | USB_OTG_HS            | USB OTG HS connector (CN12)                   | CMSIS_USB_Host
| CMSIS-Driver VIO      | GPIO                  | LED (LD1) and USER button (B1)                | CMSIS_VIO

> Note: [Schematics (Rev.B-02)](https://www.st.com/resource/en/schematic_pack/mb1191-f746ngh6-b02_schematic.pdf) error: The Arduino connector pins D10 and D5 are connected incorrectly. D10 should be connected to PA8 and D5 to PI0, as it is described in [User Manual](https://www.st.com/resource/en/user_manual/um1907-discovery-kit-for-stm32f7-series-with-stm32f746ng-mcu-stmicroelectronics.pdf)

Reference to [Arduino UNO connector description](https://open-cmsis-pack.github.io/cmsis-toolbox/ReferenceApplications/#arduino-shield).

### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO      | Board component
|:----------------------|:--------------------------------------
| vioBUTTON0            | USER button (B1)
| vioLED0               | LED Green   (LD1)
