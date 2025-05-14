/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_dac_u2502.h
 * @brief HAL DAC driver for Microchip devices.
 *
 * This file provides low-level DAC functionalities for Microchip devices
 */

#ifndef MICROCHIP_HAL_MCHP_DAC_DAC_U2502_H_
#define MICROCHIP_HAL_MCHP_DAC_DAC_U2502_H_

/**
 * @name MCHP DAC IP Specific Values
 * @{
 */

/* Conversion Speed of 100kSPS */
#define HAL_MCHP_DAC_CC100K 100

/* Conversion Speed of 500kSPS */
#define HAL_MCHP_DAC_CC1M 500

/* Conversion Speed of 1MSPS */
#define HAL_MCHP_DAC_CC12M 1000

/* Refresh Period */
#define HAL_MCHP_DAC_REFRESH_PERIOD 30

/* DAC Resolution */
#define HAL_MCHP_DAC_RESOLUTION 12

/* (DAC DATA) Mask DATA[15:12] Bit */
#define DAC_DATA_MSB_MASK (0x0FFFU)

/* (DAC DATA) Mask DATA[3:0] Bit */
#define DAC_DATA_LSB_MASK (0xFFF0U)
/**@} */

/**
 * @brief Waits for the DAC synchronization process to complete.
 *
 * This function continuously checks the DAC synchronization status
 * until the specified sync flag is cleared, ensuring the DAC operation
 * is properly synchronized.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param sync_flag The synchronization flag to monitor.
 */
static inline void hal_mchp_dac_wait_sync(const hal_mchp_dac_t *hal, uint32_t sync_flag)
{
	/* Wait for synchronization */
	while ((hal->regs->DAC_SYNCBUSY & sync_flag) != 0U) {
		/* Do nothing */
	}
}

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
static inline void hal_mchp_dac_wait_ready(const hal_mchp_dac_t *hal, uint8_t channel_id)
{
	uint8_t mask = DAC_STATUS_READY0_Msk;

	if ((hal->regs->DAC_CTRLA & DAC_CTRLA_ENABLE_Msk) == DAC_CTRLA_ENABLE_Msk) {
		if (channel_id == 0xff) {
			/* Wait for synchronization channel 0*/
			while ((hal->regs->DAC_STATUS & DAC_STATUS_READY0_Msk) !=
			       DAC_STATUS_READY0_Msk) {
				/* Do nothing */
			}
			/* Wait for synchronization channel 1*/
			while ((hal->regs->DAC_STATUS & DAC_STATUS_READY1_Msk) !=
			       DAC_STATUS_READY1_Msk) {
				/* Do nothing */
			}
		} else {
			if (channel_id == 0) {
				mask = DAC_STATUS_READY0_Msk;
			} else {
				mask = DAC_STATUS_READY1_Msk;
			}
			/* Wait for synchronization */
			while ((hal->regs->DAC_STATUS & mask) != mask) {
				/* Do nothing */
			}
		}
	}
}

/**
 * @brief Enables the DAC controller.
 *
 * This function activates the DAC controller by setting the appropriate
 * control register bits, allowing DAC operations to proceed.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 */
static inline void hal_mchp_dac_enable_controller(const hal_mchp_dac_t *hal)
{
	hal->regs->DAC_CTRLA |= DAC_CTRLA_ENABLE_Msk;
	hal_mchp_dac_wait_sync(hal, DAC_SYNCBUSY_ENABLE_Msk);
}

/**
 * @brief Disables the DAC controller.
 *
 * This function deactivates the DAC controller by clearing the appropriate
 * control register bits, stopping DAC operations.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 */
static inline void hal_mchp_dac_disable_controller(const hal_mchp_dac_t *hal)
{
	hal->regs->DAC_CTRLA &= ~DAC_CTRLA_ENABLE_Msk;
	hal_mchp_dac_wait_sync(hal, DAC_SYNCBUSY_ENABLE_Msk);
}

/**
 * @brief Resets the DAC controller.
 *
 * This function performs a reset of the DAC controller by setting the
 * appropriate reset control bits, ensuring the DAC is restored to its
 * default state.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 */
static inline void hal_mchp_dac_reset(const hal_mchp_dac_t *hal)
{
	hal->regs->DAC_CTRLA = DAC_CTRLA_SWRST_Msk;
	hal_mchp_dac_wait_sync(hal, DAC_SYNCBUSY_SWRST_Msk);
}

/**
 * @brief Configures the DAC for differential output mode.
 *
 * This function enables differential output mode in the DAC, allowing
 * it to generate differential signals instead of single-ended outputs.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 */
static inline void hal_mchp_dac_set_diff_output(const hal_mchp_dac_t *hal)
{
#if defined(CONFIG_DAC_MCHP_DIFFERENTIAL)
	hal->regs->DAC_CTRLB = DAC_CTRLB_DIFF_Msk;
#endif
}

/**
 * @brief Sets the reference voltage selection for the DAC.
 *
 * This function configures the DAC to use the specified reference voltage,
 * which affects the output voltage range of the DAC.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param refsel Reference voltage selection value.
 */
static inline void hal_mchp_dac_ref_selection(const hal_mchp_dac_t *hal)
{
	hal->regs->DAC_CTRLB =
		(hal->regs->DAC_CTRLB & ~DAC_CTRLB_REFSEL_Msk) | DAC_CTRLB_REFSEL(hal->refsel);
}

/**
 * @brief Enables a specific DAC channel.
 *
 * This function enables the specified DAC channel, allowing it to
 * generate analog output signals.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param channel_id The ID of the DAC channel to enable.
 */
static inline void hal_mchp_dac_channel_enable(const hal_mchp_dac_t *hal, uint8_t channel_id)
{
	hal->regs->DAC_DACCTRL[channel_id] |= DAC_DACCTRL_ENABLE_Msk;
}

/**
 * @brief Sets the conversion speed for a specific DAC channel.
 *
 * This function configures the conversion speed of the specified DAC channel,
 * adjusting the rate at which digital values are converted to analog signals.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param rate The conversion speed setting.
 * @param channel_id The ID of the DAC channel to configure.
 */
static inline void hal_mchp_dac_conversion_speed(const hal_mchp_dac_t *hal, int rate,
						 uint8_t channel_id)
{
	if (rate == HAL_MCHP_DAC_CC100K) {
		hal->regs->DAC_DACCTRL[channel_id] =
			(hal->regs->DAC_DACCTRL[channel_id] & ~DAC_DACCTRL_CCTRL_Msk) |
			DAC_DACCTRL_CCTRL(0x0);
	} else if (rate == HAL_MCHP_DAC_CC1M) {
		hal->regs->DAC_DACCTRL[channel_id] =
			(hal->regs->DAC_DACCTRL[channel_id] & ~DAC_DACCTRL_CCTRL_Msk) |
			DAC_DACCTRL_CCTRL(0x1);
	} else if (rate == HAL_MCHP_DAC_CC12M) {
		hal->regs->DAC_DACCTRL[channel_id] =
			(hal->regs->DAC_DACCTRL[channel_id] & ~DAC_DACCTRL_CCTRL_Msk) |
			DAC_DACCTRL_CCTRL(0x2);
	} else {
		/* Do Nothing */
	}
}

/**
 * @brief Configures the external filter for a specific DAC channel.
 *
 * This function enables or disables the use of an external filter for the
 * specified DAC channel, which can help in smoothing the output signal.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param ext_filter Boolean value to enable (true) or disable (false) the external filter.
 * @param channel_id The ID of the DAC channel to configure.
 */
static inline void hal_mchp_dac_external_filter(const hal_mchp_dac_t *hal, bool ext_filter,
						uint8_t channel_id)
{
	hal->regs->DAC_DACCTRL[channel_id] =
		(hal->regs->DAC_DACCTRL[channel_id] & ~DAC_DACCTRL_FEXT_Msk) |
		DAC_DACCTRL_FEXT(ext_filter);
}

/**
 * @brief Configures the data alignment adjustment for a specific DAC channel.
 *
 * This function sets the data adjustment mode for the specified DAC channel,
 * determining whether the digital input data is left-aligned or right-aligned.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param data_adj Data alignment mode (e.g., left or right adjustment).
 * @param channel_id The ID of the DAC channel to configure.
 */
static inline void hal_mchp_dac_data_adj(const hal_mchp_dac_t *hal, uint8_t data_adj,
					 uint8_t channel_id)
{
	hal->regs->DAC_DACCTRL[channel_id] =
		(hal->regs->DAC_DACCTRL[channel_id] & ~DAC_DACCTRL_LEFTADJ_Msk) |
		DAC_DACCTRL_LEFTADJ(data_adj);
}

/**
 * @brief Configures the dither setting for a specific DAC channel.
 *
 * This function enables or adjusts the dither setting for the specified
 * DAC channel, which can help reduce quantization noise in the output signal.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param dither Dither setting value to configure.
 * @param channel_id The ID of the DAC channel to configure.
 */
static inline void hal_mchp_dac_dither(const hal_mchp_dac_t *hal, uint8_t dither,
				       uint8_t channel_id)
{
	hal->regs->DAC_DACCTRL[channel_id] =
		(hal->regs->DAC_DACCTRL[channel_id] & ~DAC_DACCTRL_DITHER_Msk) |
		DAC_DACCTRL_DITHER(dither);
}

/**
 * @brief Configures the refresh rate for a specific DAC channel.
 *
 * This function sets the refresh rate for the specified DAC channel,
 * determining how frequently the DAC updates its output to maintain accuracy.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param refresh Refresh rate setting value.
 * @param channel_id The ID of the DAC channel to configure.
 */
static inline void hal_mchp_dac_refresh(const hal_mchp_dac_t *hal, uint8_t refresh,
					uint8_t channel_id)
{
	if (refresh != 0) {
		refresh = refresh / HAL_MCHP_DAC_REFRESH_PERIOD;
	}
	hal->regs->DAC_DACCTRL[channel_id] =
		(hal->regs->DAC_DACCTRL[channel_id] & ~DAC_DACCTRL_REFRESH_Msk) |
		DAC_DACCTRL_REFRESH(refresh);
}

/**
 * @brief Sets the sampling ratio for a specific DAC channel.
 *
 * This function configures the sampling ratio of the specified DAC channel,
 * affecting the rate at which the DAC samples and updates its output.
 *
 * @param hal Pointer to the DAC hardware abstraction layer structure.
 * @param sampling_ratio The sampling ratio value to configure.
 * @param channel_id The ID of the DAC channel to configure.
 */
static inline void hal_mchp_dac_sampling_ratio(const hal_mchp_dac_t *hal, uint8_t sampling_ratio,
					       uint8_t channel_id)
{
	uint8_t osr;

	switch (sampling_ratio) {
	case 2:
		osr = 0x1;
	case 4:
		osr = 0x2;
	case 8:
		osr = 0x3;
	case 16:
		osr = 0x4;
	case 32:
		osr = 0x5;
	default:
		osr = 0x0;
	}

	hal->regs->DAC_DACCTRL[channel_id] =
		(hal->regs->DAC_DACCTRL[channel_id] & ~DAC_DACCTRL_OSR_Msk) | DAC_DACCTRL_OSR(osr);
}

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
					   uint32_t value)
{
	if (channel_id == 0xff) {
		if ((hal->channels[0].data_adj) == 1) {
			hal->regs->DAC_DATA[0] = DAC_DATA_LSB_MASK & DAC_DATA_DATA(value);
		} else {
			hal->regs->DAC_DATA[0] = DAC_DATA_MSB_MASK & DAC_DATA_DATA(value);
		}
		/* Wait for synchronization */
		hal_mchp_dac_wait_sync(hal, DAC_SYNCBUSY_DATA0_Msk);
		if ((hal->channels[1].data_adj) == 1) {
			hal->regs->DAC_DATA[1] = DAC_DATA_LSB_MASK & DAC_DATA_DATA(value);
		} else {
			hal->regs->DAC_DATA[1] = DAC_DATA_MSB_MASK & DAC_DATA_DATA(value);
		}
		/* Wait for synchronization */
		hal_mchp_dac_wait_sync(hal, DAC_SYNCBUSY_DATA1_Msk);
	} else {
		if ((hal->channels[channel_id].data_adj) == 1) {
			hal->regs->DAC_DATA[channel_id] = DAC_DATA_LSB_MASK & DAC_DATA_DATA(value);
		} else {
			hal->regs->DAC_DATA[channel_id] = DAC_DATA_MSB_MASK & DAC_DATA_DATA(value);
		}
		/* Wait for synchronization */
		if (channel_id == 0) {
			hal_mchp_dac_wait_sync(hal, DAC_SYNCBUSY_DATA0_Msk);
		} else {
			hal_mchp_dac_wait_sync(hal, DAC_SYNCBUSY_DATA1_Msk);
		}
	}
}

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
static inline int hal_mchp_dac_configure(const hal_mchp_dac_t *hal, uint8_t channel_id)
{
	uint8_t i = 0, start = 0, end = 0;

#if defined(CONFIG_DAC_MCHP_DIFFERENTIAL)
	/* If differential is selected, we can use only channel 0 */
	if (channel_cfg->channel_id != 0) {
		return -EINVAL;
	}
#endif
	/*
	 * Determine the range of channels to configure.
	 * If channel_id is 0xFF, configure all DAC channels by iterating
	 * from channel 0 to DAC_MAX_CHANNELS - 1.
	 * Otherwise, configure only the specified channel.
	 */
	if (channel_id == 0xFF) {
		start = 0;
		end = DAC_MAX_CHANNELS;
	} else {
		start = channel_id;
		end = channel_id + 1;
	}

	for (i = start; i < end; i++) {
		/* Enable the DAC for channels */
		hal_mchp_dac_channel_enable(hal, i);

		/* Set the DATA Adjustment */
		hal_mchp_dac_data_adj(hal, hal->channels[i].data_adj, i);

		/* Set the Dither */
		hal_mchp_dac_dither(hal, hal->channels[i].dither, i);

		/* Set the refresh period */
		if (hal->channels[i].sampling_ratio != 1) {
			hal_mchp_dac_refresh(hal, 0, i);
		} else {
			hal_mchp_dac_refresh(hal, hal->channels[i].refresh, i);
		}
		/* Set the conversion speed */
		hal_mchp_dac_conversion_speed(hal, hal->channels[i].rate, i);

		/* Set the External filter */
		hal_mchp_dac_external_filter(hal, hal->channels[i].ext_filter, i);

		/* Set the Oversampling Ratio */
		hal_mchp_dac_sampling_ratio(hal, hal->channels[i].sampling_ratio, i);
	}

	return 0;
}

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
static inline int hal_mchp_dac_set_resolution(const hal_mchp_dac_t *hal, uint8_t resolution)
{
	int err = 0;

	if (resolution != HAL_MCHP_DAC_RESOLUTION) {
		err = -1;
	}
	return err;
}

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
static inline int hal_mchp_dac_set_internal(const hal_mchp_dac_t *hal, uint8_t internal)
{
	int err = 0;

	/* Not supported */
	if (internal == 1) {
		err = -1;
	}
	return err;
}

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
static inline int hal_mchp_dac_set_buffered(const hal_mchp_dac_t *hal, uint8_t buffered)
{
	int err = 0;

	/* Not supported */
	if (buffered == 1) {
		err = -1;
	}
	return err;
}

#endif /* MICROCHIP_HAL_MCHP_DAC_DAC_U2502_H_ */
