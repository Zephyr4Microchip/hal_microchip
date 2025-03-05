/**
 * Copyright (c) 2025 Microchip Technology Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_wdt_u2251.h
 * @brief HAL WDT driver for Microchip devices.
 *
 * This file provides low-level Watchdog Timer (WDT) functionalities for
 * Microchip devices.
 */
#ifndef MICROCHIP_HAL_WDT_U2251_H_
#define MICROCHIP_HAL_WDT_U2251_H_

#include <errno.h>
#include <stdint.h>

/*#define HAL_WDT_DBG_MODE*/ /**< Enable this for getting the debug prints from
                                the HAL APIs */
#ifdef HAL_WDT_DBG_MODE
#define DBG_WDT(format, ...) printf(format, ##__VA_ARGS__)
#else
#define DBG_WDT(format, ...)
#endif

#define MCHP_SUCCESS 0
#define MAX_INSTALLABLE_TIMEOUT_COUNT 1
#define MAX_TIMEOUT_WINDOW 0x4000      /**< 16384 milliseconds */
#define MAX_TIMEOUT_WINDOW_MODE 0X8000 /**< 32768 milliseconds */

/**
 * @brief Enable this flag if only one timeout value is supported
 * for all the available watchdog timeouts in the system.
 *
 * When this flag is set to 1, it indicates that the system
 * supports a single, uniform timeout value for all watchdog
 * timeouts, rather than allowing individual timeout values
 * for each watchdog timeout.
 */
#define WDT_FLAG_ONLY_ONE_TIMEOUT_VALUE_SUPPORTED 1

/**< Either of these bits will be set in case watchdog is turned on */
#define WDT_ENABLED_BITS_POS (WDT_CTRLA_ENABLE(1) | WDT_CTRLA_ALWAYSON(1))

/**
 * @brief Enumeration for WDT modes.
 */
typedef enum {
  NORMAL_MODE = 0, /**< Normal mode for WDT */
  WINDOW_MODE = 1, /**< Window mode for WDT */
} hal_mchp_wdt_mode_t;

/**
 * @brief Structure for HAL WDT.
 *
 * This structure holds the register pointer to the WDT and is used to
 * configure and control the WDT.
 */
typedef struct hal_mchp_wdt {
  wdt_registers_t *regs; /**< Pointer to WDT registers */
} hal_mchp_wdt_t;

/**
 * @brief Structure for WDT channel data.
 *
 * This structure holds the minimum and maximum timeout values for a given WDT
 * channel.
 */
typedef struct hal_wdt_mchp_channel_data {
  uint16_t min; /**< Minimum timeout value */
  uint16_t max; /**< Maximum timeout value */
} hal_wdt_mchp_channel_data_t;

/**
 * @brief Array of period values in milliseconds.
 *
 * These values are used to configure the WDT timeout periods.
 */
static const uint32_t period_values[] = {8,   16,   32,   64,   128,  256,
                                         512, 1024, 2048, 4096, 8192, 16384};

/**
 * @brief Check if the WDT is enabled.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @return non-zero value if enabled, 0 otherwise.
 */
static inline uint8_t hal_mchp_wdt_is_enabled(const hal_mchp_wdt_t *hal) {
  /* the significance of 0x82 is that it
   * denotes the always on bit and the enable bit
   */
  return (hal->regs->WDT_CTRLA & WDT_ENABLED_BITS_POS);
}

/**
 * @brief Set the behavior flag for the WDT.
 *
 * @param flag The behavior flag to set.
 * @return MCHP_SUCCESS on success, error code otherwise.
 * @note only one flag is supposed to be sent to the api
 */

static inline int hal_mchp_wdt_reset_type_set(uint8_t flag) {
  int ret = MCHP_SUCCESS;

  switch (flag) {
  case WDT_FLAG_RESET_NONE:
    ret = -ENOTSUP;
    break;
  case WDT_FLAG_RESET_CPU_CORE:
  case WDT_FLAG_RESET_SOC:
    break;
  default:
    ret = -EINVAL;
    break;
  }
  return ret;
}
/**
 * @brief Apply options to the WDT.
 *
 * @param options The options to apply.
 * @return 0 on success, error code otherwise.
 */
static inline int hal_mchp_wdt_apply_options(uint8_t options) {
  if ((options & WDT_OPT_PAUSE_IN_SLEEP) != 0) {
    return -ENOTSUP;
  }
  if ((options & WDT_OPT_PAUSE_HALTED_BY_DBG) != 0) {
    return -ENOTSUP;
  }
  return 0;
}
/**
 * @brief Interrupt triggered when the WDT window opens.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @return Error code.
 */
static inline int hal_mchp_wdt_interrupt_enable(const hal_mchp_wdt_t *hal) {
  return -ENOTSUP;
}
/**
 * @brief Clear the WDT interrupt flag.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @return Error code.
 */
static inline int hal_mchp_wdt_interrupt_flag_clear(const hal_mchp_wdt_t *hal) {
  return -ENOTSUP;
}
/**
 * @brief Disable the WDT interrupt.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @return Error code.
 */
static inline int hal_mchp_wdt_interrupt_disable(const hal_mchp_wdt_t *hal) {
  return -ENOTSUP;
}
/**
 * @brief Wait for WDT synchronization.
 *
 * @param hal Pointer to the HAL WDT structure.
 */
static inline void hal_mchp_wdt_sync_wait(const hal_mchp_wdt_t *hal) {
  while (hal->regs->WDT_SYNCBUSY) {
    DBG_WDT("waiting syncbsy\n\r");
  }
}
/**
 * @brief Enable or disable the WDT.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @param enable Boolean to enable or disable.
 * @return MCHP_SUCCESS on success, error code otherwise.
 */
static inline int hal_mchp_wdt_enable(const hal_mchp_wdt_t *hal, bool enable) {
  int ret = MCHP_SUCCESS;
  /* enable watchdog peripheral bit in the ctrl register*/
  if (enable != 0) {
    hal->regs->WDT_CTRLA |= WDT_CTRLA_ENABLE(1);
  } else {
    /*check always on bit here*/
    if (0 == (hal->regs->WDT_CTRLA & WDT_CTRLA_ALWAYSON(1))) {
      hal->regs->WDT_CTRLA &= ~WDT_CTRLA_ENABLE(1);
    } else {
      ret = -EPERM;
    }
  }
  hal_mchp_wdt_sync_wait(hal);
  DBG_WDT("ctrl reg = 0x%x\n", hal->regs->WDT_CTRLA);
  return ret;
}
/**
 * @brief Enable or disable the WDT window mode.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @param enable Boolean to enable or disable.
 */
static inline void hal_mchp_wdt_window_enable(const hal_mchp_wdt_t *hal,
                                              bool enable) {
  /* enable the window in ctrl register*/
  if (enable != 0) {
    hal->regs->WDT_CTRLA |= WDT_CTRLA_WEN(1);
  } else {
    hal->regs->WDT_CTRLA &= ~WDT_CTRLA_WEN(1);
  }
  hal_mchp_wdt_sync_wait(hal);
  DBG_WDT("ctrl reg = 0x%x\n", hal->regs->WDT_CTRLA);
}

/**
 * @brief Validate the WDT window.
 *
 * @param timeout_min Minimum timeout value in milliseconds.
 * @param timeout_max Maximum timeout value in milliseconds.
 * @return MCHP_SUCCESS on success, error code otherwise.
 */
static inline int hal_mchp_wdt_validate_window(uint32_t timeout_min,
                                               uint32_t timeout_max) {
  /*Check whether the timeout max is greater
   *than the maximum possible value in window mode
   */
  if ((timeout_max >= MAX_TIMEOUT_WINDOW_MODE) && (timeout_min != 0)) {
    return -EINVAL;
  }

  /*check whether the timeout max given is zero*/
  if (timeout_max == 0) {
    return -EINVAL;
  }

  /*Check whether the timeout min is not
   * less than the minimum possible window
   */
  if ((timeout_min < period_values[0]) && (timeout_min != 0)) {
    return -EINVAL;
  }

  /*Ensure that a window is available)*/
  if (timeout_min > (timeout_max >> 1)) {
    return -EINVAL;
  }

  /*this will ensure that the timeout range is within
   * the limit for both normal mode and window mode
   */
  if ((timeout_max - timeout_min) > MAX_TIMEOUT_WINDOW) {
    return -EINVAL;
  }

  return MCHP_SUCCESS;
}

/**
 * @brief Reset timer of WDT.
 *
 * @param hal Pointer to the HAL WDT structure.
 * @param channel_id Channel ID (unused).
 */
static inline void hal_mchp_wdt_reset_timer(const hal_mchp_wdt_t *hal,
                                            int channel_id) {
  ARG_UNUSED(channel_id);
  hal->regs->WDT_CLEAR = WDT_CLEAR_CLEAR_KEY_Val;
}
/**
 * @brief Find the nearest period value for the given timeout.
 * This function will round up the given timeout value to the
 * nearest possible timeout value and return it
 *
 * @param timeout_val Timeout value in milliseconds.
 * @return Nearest period value index.
 */
static inline uint8_t
hal_mchp_wdt_find_nearest_period_val_index(uint32_t timeout_val) {
  int8_t low = 0;
  int8_t high = ARRAY_SIZE(period_values) - 1;
  int8_t mid = 0;

  if (timeout_val < period_values[0]) {
    return 0;
  }
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (period_values[mid] == timeout_val) {
      return mid;
    } else if (period_values[mid] < timeout_val) {
      low = mid + 1;
      if (low >= ARRAY_SIZE(period_values)) {
        low = ARRAY_SIZE(period_values) - 1;
        break;
      }
    } else {
      high = mid - 1;
    }
  }
  if (timeout_val != period_values[low]) {
    DBG_WDT("watchdog timer value is set to %d: %d instead of %d\n", low,
            period_values[low], timeout_val);
  }
  return (low < 0) ? 0 : low;
}
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
                         uint32_t timeout_max) {

  hal_wdt_mchp_channel_data_t set_timeout = {0};
  uint8_t window =
      hal_mchp_wdt_find_nearest_period_val_index(window_closed_time);
  /* The difference is taken as the total time of WDT
   * defined by the CONFIG.window + CONFIG.per register value
   */
  uint8_t per = hal_mchp_wdt_find_nearest_period_val_index(timeout_max -
                                                           window_closed_time);

  DBG_WDT("window = %d : 0x%x per = %d : 0x%x\n\r", window,
          WDT_CONFIG_WINDOW(window), per, WDT_CONFIG_PER(per));

  set_timeout.min = window_closed_time ? period_values[window] : 0;
  /*Based on the mode the window mode or normal mode, timeout max is returned */
  set_timeout.max =
      (window_closed_time ? (period_values[per] + period_values[window])
                          : period_values[per]);
  hal->regs->WDT_CONFIG = WDT_CONFIG_WINDOW(window) | WDT_CONFIG_PER(per);
  hal_mchp_wdt_sync_wait(hal);
  DBG_WDT("wdt_config = 0x%x\n\r", hal->regs->WDT_CONFIG);
  return set_timeout;
}

/**
 * @brief Get the available timeout value for the WDT.
 *
 * @param window_closed_time Window closed time in milliseconds.
 * @param timeout_max Maximum timeout value in milliseconds.
 * @return Structure with minimum and maximum timeout values.
 */
static inline hal_wdt_mchp_channel_data_t
hal_mchp_wdt_get_available_timeout_val(uint32_t window_closed_time,
                                       uint32_t timeout_max) {
  hal_wdt_mchp_channel_data_t new_timeout = {0};
  uint8_t window_index =
      hal_mchp_wdt_find_nearest_period_val_index(window_closed_time);
  uint8_t per_index = hal_mchp_wdt_find_nearest_period_val_index(
      timeout_max - window_closed_time);

  new_timeout.min = (window_closed_time ? period_values[window_index] : 0);
  new_timeout.max =
      (window_closed_time
           ? (period_values[per_index] + period_values[window_index])
           : period_values[per_index]);
  return new_timeout;
}
#endif /* MICROCHIP_HAL_WDT_U2251_H_ */
