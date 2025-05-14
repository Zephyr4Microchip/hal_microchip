/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_dac.h
 * @brief HAL MCHP DAC driver definitions and error codes.
 *
 * This file contains definitions, structures, and error codes used in
 * the Microchip DAC driver HAL.
 *
 */

#ifndef MICROCHIP_HAL_MCHP_DAC_H_
#define MICROCHIP_HAL_MCHP_DAC_H_

/**
 * @brief Waits until the DAC channel is ready for conversion.
 *
 * This function checks whether the DAC controller is enabled, then waits
 * for the specified channel (0 or 1) to become ready. It blocks execution
 * until the DAC hardware indicates it is ready to perform a conversion.
 *
 * @param hal Pointer to the DAC HAL configuration structure.
 * @param channel_id DAC channel ID to wait on (0 or 1).
 *
 * @note The function performs a busy-wait loop. It should be used carefully
 *       in time-sensitive contexts.
 */
static inline void hal_mchp_dac_wait_ready(const hal_mchp_dac_t *hal, uint8_t channel_id);

/**
 * @brief Enables the DAC controller.
 *
 * This function activates the DAC controller by setting the appropriate
 * control register bits, allowing DAC operations to proceed.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 */
static inline void hal_mchp_dac_enable_controller(const hal_mchp_dac_t *hal);

/**
 * @brief Disables the DAC controller.
 *
 * This function deactivates the DAC controller by clearing the appropriate
 * control register bits, stopping DAC operations.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 */
static inline void hal_mchp_dac_disable_controller(const hal_mchp_dac_t *hal);

/**
 * @brief Resets the DAC controller.
 *
 * This function performs a reset of the DAC controller by setting the
 * appropriate reset control bits, ensuring the DAC is restored to its
 * default state.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 */
static inline void hal_mchp_dac_reset(const hal_mchp_dac_t *hal);

/**
 * @brief Configures the DAC for differential output mode.
 *
 * This function enables differential output mode in the DAC, allowing
 * it to generate differential signals instead of single-ended outputs.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 */
static inline void hal_mchp_dac_set_diff_output(const hal_mchp_dac_t *hal);

/**
 * @brief Sets the reference voltage selection for the DAC.
 *
 * This function configures the DAC to use the specified reference voltage,
 * which affects the output voltage range of the DAC.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param refsel Reference voltage selection value.
 */
static inline void hal_mchp_dac_ref_selection(const hal_mchp_dac_t *hal, uint8_t refsel);

/**
 * @brief Writes a digital value to the specified DAC channel.
 *
 * This function sends a digital value to the DAC for conversion into
 * an analog output on the specified channel.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param channel_id The ID of the DAC channel to write data to.
 * @param value The digital value to be converted to an analog signal.
 */
static inline void hal_mchp_dac_write_data(const hal_mchp_dac_t *hal, uint8_t channel_id,
					   uint32_t value);

/**
 * @brief Configures a specific DAC channel with predefined settings.
 *
 * This function initializes and configures the specified DAC channel(s)
 * based on the parameters provided in the `hal_mchp_dac_t` structure.
 * If `channel_id` is 0xFF, all available DAC channels are configured.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param channel_id DAC channel index to configure (0, 1, ...), or 0xFF to configure all channels.
 * @return 0 on successful configuration.
 */
static inline int hal_mchp_dac_configure(const hal_mchp_dac_t *hal, uint8_t channel_id);

/**
 * @brief Sets the resolution of the DAC.
 *
 * This function configures the resolution of the DAC, determining
 * the number of bits used for digital-to-analog conversion.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param resolution The resolution value to set (e.g., 8-bit, 10-bit, 12-bit).
 * @return 0 on success, or a negative error code on failure.
 */
static inline int hal_mchp_dac_set_resolution(const hal_mchp_dac_t *hal, uint8_t resolution);

/**
 * @brief Configures the internal settings of the DAC.
 *
 * This function sets an internal configuration parameter of the DAC,
 * which may control aspects such as reference voltage, operating mode,
 * or other internal features depending on the hardware design.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param internal Internal configuration value to set.
 * @return 0 on success, or a negative error code on failure.
 */
static inline int hal_mchp_dac_set_internal(const hal_mchp_dac_t *hal, uint8_t internal);

/**
 * @brief Enables or disables buffered mode for the DAC.
 *
 * This function configures whether the DAC operates in buffered mode,
 * which can help improve stability and performance depending on the
 * application requirements.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param buffered Set to 1 to enable buffering, or 0 to disable it.
 * @return 0 on success, or a negative error code on failure.
 */
static inline int hal_mchp_dac_set_buffered(const hal_mchp_dac_t *hal, uint8_t buffered);

#endif /* MICROCHIP_HAL_MCHP_DAC_H_ */
