/**
 * Copyright (c) 2025 Microchip Technology Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_wdt.h
 * @brief Header file for Microchip Watchdog Timer (WDT) HAL.
 *
 * This file contains the common structures, macros, and enumerations for all
 * Microchip watchdog peripherals.
 */

#ifndef MICROCHIP_HAL_WDT_H_
#define MICROCHIP_HAL_WDT_H_

/**
 * @def WDT_MCHP_SUCCESS
 * @brief Macro indicating successful operation.
 */
#define WDT_MCHP_SUCCESS 0

/**
 * @def WDT_MCHP_FAIL
 * @brief Macro indicating failed operation.
 */
#define WDT_MCHP_FAIL -1

/**
 * @def MAX_INSTALLABLE_TIMEOUT_COUNT
 * @brief Macro to get the maximum installable timeout count from the device
 * tree.
 */
#define MAX_INSTALLABLE_TIMEOUT_COUNT                                          \
  (DT_PROP(DT_NODELABEL(wdog), max_installable_timeout_count))

/**
 * @def MAX_TIMEOUT_WINDOW
 * @brief Macro to get the maximum timeout window from the device tree.
 */
#define MAX_TIMEOUT_WINDOW (DT_PROP(DT_NODELABEL(wdog), max_timeout_window))

/**
 * @def MAX_TIMEOUT_WINDOW_MODE
 * @brief Macro to get the maximum timeout window mode from the device tree.
 */
#define MAX_TIMEOUT_WINDOW_MODE                                                \
  (DT_PROP(DT_NODELABEL(wdog), max_timeout_window_mode))

/**
 * @def MIN_WINDOW_LIMIT
 * @brief Macro to get the min window limit from the device tree.
 */
#define MIN_WINDOW_LIMIT (DT_PROP(DT_NODELABEL(wdog), min_window_limit))

/**
 * @enum hal_mchp_wdt_mode_t
 * @brief Enumeration for WDT modes.
 */
typedef enum {
  NORMAL_MODE = 0, /**< Normal mode for WDT */
  WINDOW_MODE = 1, /**< Window mode for WDT */
} hal_mchp_wdt_mode_t;

/**
 * @struct hal_wdt_mchp_channel_data
 * @brief Structure for WDT channel data.
 *
 * This structure holds the minimum and maximum timeout values for a given WDT
 * channel.
 */
typedef struct hal_wdt_mchp_channel_data {
  uint32_t min; /**< Minimum timeout value */
  uint32_t max; /**< Maximum timeout value */
} hal_wdt_mchp_channel_data_t;

#endif /* MICROCHIP_HAL_WDT_H_ */
