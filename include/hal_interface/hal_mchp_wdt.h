/**
 * Copyright (c) 2025 Microchip Technology Inc.
 *
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

/**
 * @brief Check if the WDT is enabled.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @return non-zero value if enabled, 0 otherwise.
 */
static inline bool hal_mchp_wdt_is_enabled(const hal_mchp_wdt_t *hal);

/**
 * @brief Check if window mode is supported by the Microchip Watchdog Timer
 * (WDT).
 *
 * This function checks if the window mode is supported by the Microchip
 * Watchdog Timer (WDT).
 *
 * @return Always returns WDT_MCHP_SUCCESS indicating that window mode is
 * supported.
 */
static inline int hal_mchp_wdt_win_mode_supported();

/**
 * @brief Set the Microchip Watchdog Timer (WDT) to not trigger a reset.
 *
 * This function sets the Microchip Watchdog Timer (WDT) to not trigger a reset.
 *
 * @return Always returns WDT_MCHP_FAIL indicating that setting the WDT to not
 * trigger a reset is not supported.
 */
static inline int hal_mchp_wdt_use_flag_reset_none();

/**
 * @brief Set the Microchip Watchdog Timer (WDT) to trigger a CPU core reset.
 *
 * This function sets the Microchip Watchdog Timer (WDT) to trigger a reset of
 * the CPU core.
 *
 * @return Always returns WDT_MCHP_SUCCESS indicating that setting the WDT to
 * trigger a CPU core reset is supported.
 */
static inline int hal_mchp_wdt_use_flag_reset_cpu_core();

/**
 * @brief Set the Microchip Watchdog Timer (WDT) to trigger a system-on-chip
 * (SoC) reset.
 *
 * This function sets the Microchip Watchdog Timer (WDT) to trigger a reset of
 * the entire system-on-chip (SoC).
 *
 * @return Always returns WDT_MCHP_SUCCESS indicating that setting the WDT to
 * trigger an SoC reset is supported.
 */
static inline int hal_mchp_wdt_use_flag_reset_soc();

/**
 * @brief Apply the option to pause the Microchip Watchdog Timer (WDT) during
 * sleep mode.
 *
 * This function attempts to apply the option to pause the Microchip Watchdog
 * Timer (WDT) when the system enters sleep mode.
 *
 * @return Always returns WDT_MCHP_FAIL indicating that pausing the WDT during
 * sleep mode is not supported.
 */
static inline int hal_mchp_wdt_apply_opt_pause_in_sleep();

/**
 * @brief Apply the option to pause the Microchip Watchdog Timer (WDT) when the
 * system is halted by a debugger.
 *
 * This function attempts to apply the option to pause the Microchip Watchdog
 * Timer (WDT) when the system is halted by a debugger.
 *
 * @return Always returns WDT_MCHP_FAIL indicating that pausing the WDT when the
 * system is halted by a debugger is not supported.
 */
static inline int hal_mchp_wdt_apply_opt_pause_halted_by_debug();

/**
 * @brief Interrupt triggered when the WDT window opens.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @return Error code.
 */
static inline int hal_mchp_wdt_interrupt_enable(const hal_mchp_wdt_t *hal);
/**
 * @brief Clear the WDT interrupt flag.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @return Error code.
 */
static inline int hal_mchp_wdt_interrupt_flag_clear(const hal_mchp_wdt_t *hal);
/**
 * @brief Disable the WDT interrupt.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @return Error code.
 */
static inline int hal_mchp_wdt_interrupt_disable(const hal_mchp_wdt_t *hal);
/**
 * @brief Wait for WDT synchronization.
 *
 * @param hal Pointer to the HAL WDT structure.
 */
static inline void hal_mchp_wdt_sync_wait(const hal_mchp_wdt_t *hal);
/**
 * @brief Enable or disable the WDT.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @param enable Boolean to enable or disable.
 * @return WDT_MCHP_SUCCESS on success, error code otherwise.
 */
static inline int hal_mchp_wdt_enable(const hal_mchp_wdt_t *hal, bool enable);
/**
 * @brief Enable or disable the WDT window mode.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @param enable Boolean to enable or disable.
 */
static inline void hal_mchp_wdt_window_enable(const hal_mchp_wdt_t *hal,
                                              bool enable);

/**
 * @brief Validate the WDT window.
 *
 * @param timeout_min Minimum timeout value in milliseconds.
 * @param timeout_max Maximum timeout value in milliseconds.
 * @return WDT_MCHP_SUCCESS on success, error code otherwise.
 */
static inline int hal_mchp_wdt_validate_window(uint32_t timeout_min,
                                               uint32_t timeout_max);

/**
 * @brief Reset timer of WDT.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @param channel_id Channel ID (unused).
 */
static inline void hal_mchp_wdt_reset_timer(const hal_mchp_wdt_t *hal,
                                            int channel_id);
/**
 * @brief Find the nearest period value for the given timeout.
 * This function will round up the given timeout value to the
 * nearest possible timeout value and return i
 *
 * @param timeout_val Timeout value in milliseconds.
 * @return period value msb.
 */
static inline uint32_t hal_mchp_wdt_get_period_idx(uint32_t timeout_ms);
/**
 * @brief Set the WDT timeout.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @param window_closed_time Window closed time in milliseconds.
 * @param timeout_max Maximum timeout value in milliseconds.
 * @return Structure with minimum and maximum timeout values.
 */
static inline hal_wdt_mchp_channel_data_t
hal_mchp_wdt_set_timeout(const hal_mchp_wdt_t *hal, uint32_t window_closed_time,
                         uint32_t timeout_max);

/**
 * @brief Get the available timeout value for the WDT.
 *
 * @param window_closed_time Window closed time in milliseconds.
 * @param timeout_max Maximum timeout value in milliseconds.
 * @return Structure with minimum and maximum timeout values.
 */
static inline hal_wdt_mchp_channel_data_t
hal_mchp_wdt_get_available_timeout_val(uint32_t window_closed_time,
                                       uint32_t timeout_max);

#endif /* MICROCHIP_HAL_WDT_H_ */
