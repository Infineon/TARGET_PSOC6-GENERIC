/***************************************************************************//**
* \file PSOC6-GENERIC/cybsp_types.h
*
* Description:
* Template for application-specific pin definitions. All of the pins are
* configured as NC. Change the macros for the pins used by the application
* (e.g. #define CYBSP_DEBUG_UART_TX P5_1).
*
********************************************************************************
* \copyright
* Copyright 2018-2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#pragma once

#if defined(CY_USING_HAL)
#include "cyhal_pin_package.h"
#endif
#if defined(COMPONENT_BSP_DESIGN_MODUS) || defined(COMPONENT_CUSTOM_DESIGN_MODUS)
#include "cycfg.h"
#endif

#if defined(__cplusplus)
extern "C" {
#endif

/**
* \addtogroup group_bsp_pin_state Pin States
* \{
*/

/** Pin state for the LED on. */
#ifndef CYBSP_LED_STATE_ON
#define CYBSP_LED_STATE_ON          (0U)
#endif
/** Pin state for the LED off. */
#ifndef CYBSP_LED_STATE_OFF
#define CYBSP_LED_STATE_OFF         (1U)
#endif

/** Pin state for when a button is pressed. */
#ifndef CYBSP_BTN_PRESSED
#define CYBSP_BTN_PRESSED           (0U)
#endif
/** Pin state for when a button is released. */
#ifndef CYBSP_BTN_OFF
#define CYBSP_BTN_OFF               (1U)
#endif

/** \} group_bsp_pin_state */

#if defined(CY_USING_HAL)

/**
* \addtogroup group_bsp_pins Pin Mappings
* \{
*/

/**
* \addtogroup group_bsp_pins_led LED Pins
* \{
*/

/** LED 1; User LED1 (red) */
#ifndef CYBSP_LED1
#define CYBSP_LED1                  (NC)
#endif

/** LED 1; User LED1 (red) */
#ifndef CYBSP_USER_LED1
#define CYBSP_USER_LED1             (CYBSP_LED1)
#endif
/** LED 1; User LED1 (red) */
#ifndef CYBSP_USER_LED
#define CYBSP_USER_LED              (CYBSP_USER_LED1)
#endif

/** \} group_bsp_pins_led */


/**
* \addtogroup group_bsp_pins_btn Button Pins
* \{
*/

/** Switch 1; User Button 1 */
#ifndef CYBSP_SW1
#define CYBSP_SW1                   (NC)
#endif

/** Switch 1; User Button 1 */
#ifndef CYBSP_USER_BTN1
#define CYBSP_USER_BTN1             (CYBSP_SW1)
#endif
/** Switch 1; User Button 1 */
#ifndef CYBSP_USER_BTN
#define CYBSP_USER_BTN              (CYBSP_USER_BTN1)
#endif

/** \} group_bsp_pins_btn */


/**
* \addtogroup group_bsp_pins_comm Communication Pins
* \{
*/

/** Pin: WIFI SDIO D0 */
#ifndef CYBSP_WIFI_SDIO_D0
#define CYBSP_WIFI_SDIO_D0          (NC)
#endif
/** Pin: WIFI SDIO D1 */
#ifndef CYBSP_WIFI_SDIO_D1
#define CYBSP_WIFI_SDIO_D1          (NC)
#endif
/** Pin: WIFI SDIO D2 */
#ifndef CYBSP_WIFI_SDIO_D2
#define CYBSP_WIFI_SDIO_D2          (NC)
#endif
/** Pin: WIFI SDIO D3 */
#ifndef CYBSP_WIFI_SDIO_D3
#define CYBSP_WIFI_SDIO_D3          (NC)
#endif
/** Pin: WIFI SDIO CMD */
#ifndef CYBSP_WIFI_SDIO_CMD
#define CYBSP_WIFI_SDIO_CMD         (NC)
#endif
/** Pin: WIFI SDIO CLK */
#ifndef CYBSP_WIFI_SDIO_CLK
#define CYBSP_WIFI_SDIO_CLK         (NC)
#endif
/** Pin: WIFI ON */
#ifndef CYBSP_WIFI_WL_REG_ON
#define CYBSP_WIFI_WL_REG_ON        (NC)
#endif
/** Pin: WIFI Host Wakeup */
#ifndef CYBSP_WIFI_HOST_WAKE
#define CYBSP_WIFI_HOST_WAKE        (NC)
#endif

/** Pin: BT UART RX */
#ifndef CYBSP_BT_UART_RX
#define CYBSP_BT_UART_RX            (NC)
#endif
/** Pin: BT UART TX */
#ifndef CYBSP_BT_UART_TX
#define CYBSP_BT_UART_TX            (NC)
#endif
/** Pin: BT UART RTS */
#ifndef CYBSP_BT_UART_RTS
#define CYBSP_BT_UART_RTS           (NC)
#endif
/** Pin: BT UART CTS */
#ifndef CYBSP_BT_UART_CTS
#define CYBSP_BT_UART_CTS           (NC)
#endif

/** Pin: BT Power */
#ifndef CYBSP_BT_POWER
#define CYBSP_BT_POWER              (NC)
#endif
/** Pin: BT Host Wakeup */
#ifndef CYBSP_BT_HOST_WAKE
#define CYBSP_BT_HOST_WAKE          (NC)
#endif
/** Pin: BT Device Wakeup */
#ifndef CYBSP_BT_DEVICE_WAKE
#define CYBSP_BT_DEVICE_WAKE        (NC)
#endif

/** Pin: UART RX */
#ifndef CYBSP_DEBUG_UART_RX
#define CYBSP_DEBUG_UART_RX         (NC)
#endif
/** Pin: UART TX */
#ifndef CYBSP_DEBUG_UART_TX
#define CYBSP_DEBUG_UART_TX         (NC)
#endif

/** Pin: I2C SCL */
#ifndef CYBSP_I2C_SCL
#define CYBSP_I2C_SCL               (NC)
#endif
/** Pin: I2C SDA */
#ifndef CYBSP_I2C_SDA
#define CYBSP_I2C_SDA               (NC)
#endif

/** Pin: SWO */
#ifndef CYBSP_SWO
#define CYBSP_SWO                   (NC)
#endif
/** Pin: SWDIO */
#ifndef CYBSP_SWDIO
#define CYBSP_SWDIO                 (NC)
#endif
/** Pin: SWDCK */
#ifndef CYBSP_SWDCK
#define CYBSP_SWDCK                 (NC)
#endif

/** Pin: QUAD SPI SS */
#ifndef CYBSP_QSPI_SS
#define CYBSP_QSPI_SS               (NC)
#endif
/** Pin: QUAD SPI D3 */
#ifndef CYBSP_QSPI_D3
#define CYBSP_QSPI_D3               (NC)
#endif
/** Pin: QUAD SPI D2 */
#ifndef CYBSP_QSPI_D2
#define CYBSP_QSPI_D2               (NC)
#endif
/** Pin: QUAD SPI D1 */
#ifndef CYBSP_QSPI_D1
#define CYBSP_QSPI_D1               (NC)
#endif
/** Pin: QUAD SPI D0 */
#ifndef CYBSP_QSPI_D0
#define CYBSP_QSPI_D0               (NC)
#endif
/** Pin: QUAD SPI SCK */
#ifndef CYBSP_QSPI_SCK
#define CYBSP_QSPI_SCK              (NC)
#endif

/** Host-wake GPIO drive mode */
#define CYBSP_WIFI_HOST_WAKE_GPIO_DM (CYHAL_GPIO_DRIVE_ANALOG)
/** Host-wake IRQ event */
#define CYBSP_WIFI_HOST_WAKE_IRQ_EVENT (CYHAL_GPIO_IRQ_RISE)

/** \} group_bsp_pins_comm */

/** \} group_bsp_pins */

#endif /* defined(CY_USING_HAL) */

#if defined(__cplusplus)
}
#endif
