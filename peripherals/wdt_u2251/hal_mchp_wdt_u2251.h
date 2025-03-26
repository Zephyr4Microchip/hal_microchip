/**
 * Copyright (c) 2025 Microchip Technology Inc.
 *
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

#include <hal_interface/hal_mchp_wdt.h>

/**< Enable this for getting the debug prints from
                                the HAL APIs */
/*#define HAL_WDT_DBG_MODE*/
#ifdef HAL_WDT_DBG_MODE
#define DBG_WDT(format, ...) printf(format, ##__VA_ARGS__)
#else
#define DBG_WDT(format, ...)
#endif

/**
 * @brief Macro to calculate the period value.
 *
 * This macro takes an integer input `n` and calculates the period value by
 * left-shifting the number 8 by `n` positions.
 *
 * @param n The number of positions to left-shift the number 8.
 * @return The calculated period value.
 *
 * @note The result of this macro is 8 * 2^n.
 */
#define PERIOD_VALUE(n) (8 << n)

/**< Either of these bits will be set in case watchdog is turned on */
#define WDT_ENABLED_BITS_POS (WDT_CTRLA_ENABLE(1) | WDT_CTRLA_ALWAYSON(1))

/**
 * Function to check if the watchdog timer is enabled.
 *
 * This function checks the control register of the watchdog timer to see if
 * either the enable bit or the always-on bit is set. If either bit is set,
 * the function returns true, indicating that the watchdog timer is enabled.
 */
static inline bool hal_mchp_wdt_is_enabled(const hal_mchp_wdt_t *hal) {
  /* the significance of 0x82 is that it
   * denotes the always on bit and the enable bit
   */
  return (hal->regs->WDT_CTRLA & WDT_ENABLED_BITS_POS) ? true : false;
}

/**
 * Function to check if window mode is supported.
 *
 * This function always returns success, indicating that window mode is
 * supported.
 */
static inline int hal_mchp_wdt_win_mode_supported(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_SUCCESS;
}
/**
 * Function to indicate that resetnone is not supported.
 *
 * This function always returns failure, indicating that reset none flag is not
 * supported.
 */
static inline int hal_mchp_wdt_reset_none(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_FAIL;
}

/**
 * Function to indicate that CPU core reset is supported.
 *
 * This function always returns success, indicating that CPU core reset is
 * supported.
 */
static inline int hal_mchp_wdt_reset_cpu_core(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_SUCCESS;
}

/**
 * Function to indicate that SoC reset is supported.
 *
 * This function always returns success, indicating that SoC reset is supported.
 */
static inline int hal_mchp_wdt_reset_soc(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_SUCCESS;
}

/**
 * Function to indicate that pausing in sleep mode is not supported.
 *
 * This function always returns failure, indicating that pausing in sleep mode
 * is not supported.
 */
static inline int hal_mchp_wdt_pause_in_sleep(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_FAIL;
}

/**
 * Function to indicate that pausing when halted by debug is supported.
 *
 * This function always returns success, indicating that pausing when halted by
 * debug is supported. This is supported by default by the peripheral
 */
static inline int
hal_mchp_wdt_pause_halted_by_debug(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_SUCCESS;
}

/**
 * Function to enable watchdog timer interrupts.
 *
 * This function always returns failure, indicating that enabling watchdog timer
 * interrupts is not supported.
 */
static inline int hal_mchp_wdt_interrupt_enable(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_FAIL;
}

/**
 * Function to clear the watchdog timer interrupt flag.
 *
 * This function always returns failure, indicating that clearing the watchdog
 * timer interrupt flag is not supported.
 */
static inline int hal_mchp_wdt_interrupt_flag_clear(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_FAIL;
}
/**
 * Function to disable watchdog timer interrupts.
 *
 * This function always returns failure, indicating that disabling watchdog
 * timer interrupts is not supported.
 */
static inline int hal_mchp_wdt_interrupt_disable(const hal_mchp_wdt_t *hal) {
  ARG_UNUSED(hal);
  return WDT_MCHP_FAIL;
}

/**
 * Function to wait for the watchdog timer synchronization.
 *
 * This function waits until the synchronization busy bit in the watchdog timer
 * control register is cleared, indicating that the synchronization is complete.
 */
static inline void hal_mchp_wdt_sync_wait(const hal_mchp_wdt_t *hal) {
  while (hal->regs->WDT_SYNCBUSY) {
    DBG_WDT("waiting syncbsy\n\r");
  }
}

/**
 * Function to enable or disable the watchdog timer.
 *
 * This function enables or disables the watchdog timer based on the input
 * parameter.
 *
 * It wont be able to disable if the always on bit is turned on
 */
static inline int hal_mchp_wdt_enable(const hal_mchp_wdt_t *hal, bool enable) {
  int ret = WDT_MCHP_SUCCESS;
  /* enable watchdog peripheral bit in the ctrl register*/
  if (enable != 0) {
    hal->regs->WDT_CTRLA |= WDT_CTRLA_ENABLE(1);
  } else {
    /*check always on bit here*/
    if (0 == (hal->regs->WDT_CTRLA & WDT_CTRLA_ALWAYSON(1))) {
      hal->regs->WDT_CTRLA &= ~WDT_CTRLA_ENABLE(1);
    } else {
      ret = WDT_MCHP_FAIL;
    }
  }
  hal_mchp_wdt_sync_wait(hal);
  DBG_WDT("ctrl reg = 0x%x\n", hal->regs->WDT_CTRLA);
  return ret;
}

/**
 * Function to enable or disable the watchdog timer window mode.
 *
 * This function enables or disables the watchdog timer window mode based on the
 * input parameter.
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
 * Function to validate the watchdog timer window configuration.
 *
 * This function checks the validity of the minimum and maximum timeout values
 * for the watchdog timer window mode. It performs various checks to ensure that
 * the timeout values are within the allowed range and that the window
 * configuration is valid. If any of the checks fail, the function returns
 * failure.
 */
static inline int hal_mchp_wdt_validate_window(uint32_t timeout_min,
                                               uint32_t timeout_max) {
  int ret = WDT_MCHP_SUCCESS;
  switch (0) {
  case 0:
    /*Check whether the timeout max is greater
     *than the maximum possible value in window mode
     */
    if ((timeout_max >= MAX_TIMEOUT_WINDOW_MODE) && (timeout_min != 0)) {
      ret = WDT_MCHP_FAIL;
      break;
    }
  case 1:
    /*check whether the timeout max given is zero*/
    if (timeout_max == 0) {
      ret = WDT_MCHP_FAIL;
      break;
    }
  case 2:
    /*Check whether the timeout min is not
     * less than the minimum possible window
     */
    if ((timeout_min < PERIOD_VALUE(0)) && (timeout_min != 0)) {
      ret = WDT_MCHP_FAIL;
      break;
    }
  case 3:
    /*Ensure that a window is available)*/
    if (timeout_min > (timeout_max >> 1)) {
      ret = WDT_MCHP_FAIL;
      break;
    }
  case 4:
    /*this will ensure that the timeout range is within
     * the limit for both normal mode and window mode
     */
    if ((timeout_max - timeout_min) > MAX_TIMEOUT_WINDOW) {
      ret = WDT_MCHP_FAIL;
      break;
    }
  }

  return ret;
}

/**
 * Function to reset the watchdog timer.
 *
 * This function resets the watchdog timer by writing the clear key value to the
 * clear register.
 */
static inline void hal_mchp_wdt_reset_timer(const hal_mchp_wdt_t *hal,
                                            int channel_id) {
  ARG_UNUSED(channel_id);
  hal->regs->WDT_CLEAR = WDT_CLEAR_CLEAR_KEY_Val;
}

/**
 * Function to get the period index for a given timeout value.
 *
 * This function calculates the number of clock cycles required for the given
 * timeout value in milliseconds. It then determines the appropriate period
 * index based on the number of clock cycles. The function returns the period
 * index.
 */
static inline uint32_t hal_mchp_wdt_get_period_idx(uint32_t timeout_ms) {
  uint32_t next_period;
  uint32_t cycles;

  /* Calculate number of clock cycles @ 1.024 kHz input clock */
  cycles = (timeout_ms * 1024U) / 1000;

  /* Minimum wdt period is 8 clock cycles (register value 0) */
  if (cycles <= MIN_WINDOW_LIMIT) {
    return 0;
  }

  /* Round up to next period and calculate the register value */
  next_period = (1ULL << 32) >> __builtin_clz(cycles - 1);
  return find_msb_set(next_period >> 4);
}

/**
 * Function to set the watchdog timer timeout values.
 *
 * This function sets the minimum and maximum timeout values for the watchdog
 * timer based on the input parameters. It calculates the appropriate period
 * indices for the window closed time and the maximum timeout value. The
 * function then sets the window and period values in the watchdog timer
 * configuration register.
 */
static inline hal_wdt_mchp_channel_data_t
hal_mchp_wdt_set_timeout(const hal_mchp_wdt_t *hal, uint32_t window_closed_time,
                         uint32_t timeout_max) {

  hal_wdt_mchp_channel_data_t set_timeout = {0};
  uint8_t window = hal_mchp_wdt_get_period_idx(window_closed_time);
  /* The difference is taken as the total time of WDT
   * defined by the CONFIG.window + CONFIG.per register value
   */
  uint8_t per = hal_mchp_wdt_get_period_idx(timeout_max - window_closed_time);

  DBG_WDT("window = %d : 0x%x per = %d : 0x%x\n\r", window,
          WDT_CONFIG_WINDOW(window), per, WDT_CONFIG_PER(per));

  set_timeout.min = window_closed_time ? PERIOD_VALUE(window) : 0;
  /*Based on the mode the window mode or normal mode, timeout max is returned
   */
  set_timeout.max =
      (window_closed_time ? (PERIOD_VALUE(per) + PERIOD_VALUE(window))
                          : PERIOD_VALUE(per));
  hal->regs->WDT_CONFIG = WDT_CONFIG_WINDOW(window) | WDT_CONFIG_PER(per);
  hal_mchp_wdt_sync_wait(hal);
  DBG_WDT("wdt_config = 0x%x\n\r", hal->regs->WDT_CONFIG);
  return set_timeout;
}

/**
 * Function to get the watchdog timer timeout values.
 *
 * This function calculates the minimum and maximum timeout values for the
 * watchdog timer based on the input parameters. It calculates the appropriate
 * period indices for the window closed time and the maximum timeout value. The
 * function returns the calculated timeout values.
 *
 */
static inline hal_wdt_mchp_channel_data_t
hal_mchp_wdt_get_timeout_val(uint32_t window_closed_time,
                             uint32_t timeout_max) {
  hal_wdt_mchp_channel_data_t new_timeout = {0};
  uint8_t window_index = hal_mchp_wdt_get_period_idx(window_closed_time);
  uint8_t per_index =
      hal_mchp_wdt_get_period_idx(timeout_max - window_closed_time);

  new_timeout.min = (window_closed_time ? PERIOD_VALUE(window_index) : 0);
  new_timeout.max =
      (window_closed_time
           ? (PERIOD_VALUE(per_index) + PERIOD_VALUE(window_index))
           : PERIOD_VALUE(per_index));
  return new_timeout;
}

#endif /* MICROCHIP_HAL_WDT_U2251_H_ */
