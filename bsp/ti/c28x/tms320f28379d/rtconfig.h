#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

#define SOC_TMS320F28X

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_8
#define RT_THREAD_PRIORITY_MAX 8
#define RT_TICK_PER_SECOND 100
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 1024

/* kservice optimization */

#define RT_DEBUG
#define RT_DEBUG_COLOR

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_SMALL_MEM
#define RT_USING_SMALL_MEM_AS_HEAP
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "scia"
#define RT_VER_NUM 0x50000
#define ARCH_TIDSP
#define ARCH_TIDSP_C28X
#define ARCH_CPU_STACK_GROWS_UPWARD

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 4
#define RT_USING_MSH
#define RT_USING_FINSH
#define FINSH_USING_MSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_THREAD_PRIORITY 4
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_CMD_SIZE 80
#define MSH_USING_BUILT_IN_COMMANDS
#define FINSH_USING_DESCRIPTION
#define FINSH_ARG_MAX 10

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_USING_SERIAL
#define RT_USING_SERIAL_V1
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_PIN
#define RT_USING_ADC
#define RT_USING_PWM

/* Using USB */


/* C/C++ and POSIX layer */

#define RT_LIBC_DEFAULT_TIMEZONE 8

/* POSIX (Portable Operating System Interface) layer */


/* Interprocess Communication (IPC) */


/* Socket is in the 'Network' category */


/* Network */


/* Utilities */


/* RT-Thread Utestcases */


/* RT-Thread online packages */

/* IoT - internet of things */


/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */


/* IoT Cloud */


/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */


/* system packages */


/* peripheral libraries and drivers */


/* miscellaneous packages */


/* samples: kernel and components samples */


/* Hardware Drivers Config */

/* Onboard Peripheral Drivers */

/* On-chip Peripheral Drivers */

#define BSP_USING_GPIO
#define BSP_USING_UART
#define BSP_USING_UART1
#define BSP_USING_ADC
#define BSP_USING_ADC1
#define BSP_ADC_USING_12BIT
#define BSP_USING_ADC2
#define BSP_USING_ADC3

/* Board extended module Drivers */

#include "rtconfig_project.h"

#endif
