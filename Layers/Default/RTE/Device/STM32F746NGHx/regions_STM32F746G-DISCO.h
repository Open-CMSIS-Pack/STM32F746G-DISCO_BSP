#ifndef REGIONS_STM32F746G_DISCO_H
#define REGIONS_STM32F746G_DISCO_H


//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

// <n>Board pack:    Keil::STM32F746G-DISCO_BSP@1.0.0-dev
// <i>Board pack used to generate this file

// <n>Device pack:   Keil::STM32F7xx_DFP@3.0.0-dev
// <i>Device pack used to generate this file

// <h>ROM Configuration
// =======================
// <h> Flash=<__ROM0>
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x08000000
#define __ROM0_BASE 0x08000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00100000
#define __ROM0_SIZE 0x00100000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __ROM0_DEFAULT 1
//   <q>Startup
//   <i> Selects region to be used for startup code.
#define __ROM0_STARTUP 1
// </h>

// <h> ITCM_Flash=<__ROM1>
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x00200000
#define __ROM1_BASE 0x00200000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00100000
#define __ROM1_SIZE 0x00100000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __ROM1_DEFAULT 0
//   <q>Startup
//   <i> Selects region to be used for startup code.
#define __ROM1_STARTUP 0
// </h>

// </h>

// <h>RAM Configuration
// =======================
// <h> SRAM1=<__RAM0>
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x20010000
#define __RAM0_BASE 0x20010000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x0003C000
#define __RAM0_SIZE 0x0003C000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __RAM0_DEFAULT 1
//   <q>No zero initialize
//   <i> Excludes region from zero initialization.
#define __RAM0_NOINIT 0
// </h>

// <h> SRAM2=<__RAM1>
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x2004C000
#define __RAM1_BASE 0x2004C000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00004000
#define __RAM1_SIZE 0x00004000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __RAM1_DEFAULT 1
//   <q>No zero initialize
//   <i> Excludes region from zero initialization.
#define __RAM1_NOINIT 0
// </h>

// <h> DTCM=<__RAM2>
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x20000000
#define __RAM2_BASE 0x20000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00010000
#define __RAM2_SIZE 0x00010000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __RAM2_DEFAULT 1
//   <q>No zero initialize
//   <i> Excludes region from zero initialization.
#define __RAM2_NOINIT 0
// </h>

// <h> BKP_SRAM=<__RAM3>
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x40024000
#define __RAM3_BASE 0x40024000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00001000
#define __RAM3_SIZE 0x00001000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __RAM3_DEFAULT 0
//   <q>No zero initialize
//   <i> Excludes region from zero initialization.
#define __RAM3_NOINIT 0
// </h>

// <h> ITCM=<__RAM4>
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x00000000
#define __RAM4_BASE 0x00000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00004000
#define __RAM4_SIZE 0x00004000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __RAM4_DEFAULT 0
//   <q>No zero initialize
//   <i> Excludes region from zero initialization.
#define __RAM4_NOINIT 0
// </h>

// </h>


#endif /* REGIONS_STM32F746G_DISCO_H */
