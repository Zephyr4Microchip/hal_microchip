/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_clock_gclk_u2122.h
 * @brief HAL functions for GCLK clock control on Microchip devices.
 *
 * This header file provides the HAL functions for the GCLK clock
 * controllers. These functions enable clock management and configuration
 * for Microchip-based systems.
 */

#ifndef MICROCHIP_HAL_MCHP_CLOCK_GCLK_U2122_H_
#define MICROCHIP_HAL_MCHP_CLOCK_GCLK_U2122_H_

/**
 * @brief Mapping of clock generators to their sync status.
 *
 * This array maps each clock generator control to its corresponding
 * sync status register, enabling synchronization monitoring for
 * each generator in the system.
 */
static const struct clock_control_mchp_sync_map hal_mchp_sync_map_gclk_gen[] = {
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN0, GCLK_SYNCBUSY_GENCTRL_GCLK0},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN1, GCLK_SYNCBUSY_GENCTRL_GCLK1},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN2, GCLK_SYNCBUSY_GENCTRL_GCLK2},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN3, GCLK_SYNCBUSY_GENCTRL_GCLK3},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN4, GCLK_SYNCBUSY_GENCTRL_GCLK4},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN5, GCLK_SYNCBUSY_GENCTRL_GCLK5},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN6, GCLK_SYNCBUSY_GENCTRL_GCLK6},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN7, GCLK_SYNCBUSY_GENCTRL_GCLK7},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN8, GCLK_SYNCBUSY_GENCTRL_GCLK8},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN9, GCLK_SYNCBUSY_GENCTRL_GCLK9},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN10, GCLK_SYNCBUSY_GENCTRL_GCLK10},
	{CLOCK_CONTROL_MCHP_V1_GCLK_GEN11, GCLK_SYNCBUSY_GENCTRL_GCLK11},
};

/**
 * @brief Size of the generic clock generator sync map array.
 */
#define HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE (ARRAY_SIZE(hal_mchp_sync_map_gclk_gen))

/**
 * @brief Mapping of generic clock generators to peripheral IDs.
 *
 * This array maps each generic clock generator to a unique peripheral ID.
 */
static const struct clock_control_mchp_id_map hal_mchp_id_map_gclk_periph[] = {
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_DFLL48, OSCCTRL_GCLK_ID_DFLL48},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_FDPLL0, OSCCTRL_GCLK_ID_FDPLL0},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_FDPLL1, OSCCTRL_GCLK_ID_FDPLL1},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_FDPLL032K, OSCCTRL_GCLK_ID_FDPLL032K},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_FDPLL132K, OSCCTRL_GCLK_ID_FDPLL132K},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SDHC0_SLOW, SDHC0_GCLK_ID_SLOW},
#if defined(MCHP_CLOCK_SAM_D5X_E5X_SDHC_1_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SDHC1_SLOW, SDHC1_GCLK_ID_SLOW},
#endif
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SERCOM0_SLOW, SERCOM0_GCLK_ID_SLOW},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SERCOM1_SLOW, SERCOM1_GCLK_ID_SLOW},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SERCOM2_SLOW, SERCOM2_GCLK_ID_SLOW},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SERCOM3_SLOW, SERCOM3_GCLK_ID_SLOW},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SERCOM4_SLOW, SERCOM4_GCLK_ID_SLOW},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SERCOM5_SLOW, SERCOM5_GCLK_ID_SLOW},
#if defined(MCHP_CLOCK_SAM_D5X_E5X_SERCOM_7_6_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SERCOM6_SLOW, SERCOM6_GCLK_ID_SLOW},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SERCOM7_SLOW, SERCOM7_GCLK_ID_SLOW},
#endif

	{CLOCK_CONTROL_MCHP_V1_GCLK_EIC, EIC_GCLK_ID},

	{CLOCK_CONTROL_MCHP_V1_GCLK_FREQM_MSR, FREQM_GCLK_ID_MSR},
	{CLOCK_CONTROL_MCHP_V1_GCLK_FREQM_REF, FREQM_GCLK_ID_REF},

	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM0_CORE, SERCOM0_GCLK_ID_CORE},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM1_CORE, SERCOM1_GCLK_ID_CORE},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM2_CORE, SERCOM2_GCLK_ID_CORE},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM3_CORE, SERCOM3_GCLK_ID_CORE},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM4_CORE, SERCOM4_GCLK_ID_CORE},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM5_CORE, SERCOM5_GCLK_ID_CORE},
#if defined(MCHP_CLOCK_SAM_D5X_E5X_SERCOM_7_6_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM6_CORE, SERCOM6_GCLK_ID_CORE},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM7_CORE, SERCOM7_GCLK_ID_CORE},
#endif

	{CLOCK_CONTROL_MCHP_V1_GCLK_USB, USB_GCLK_ID},

	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS0, EVSYS_GCLK_ID_0},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS1, EVSYS_GCLK_ID_1},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS2, EVSYS_GCLK_ID_2},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS3, EVSYS_GCLK_ID_3},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS4, EVSYS_GCLK_ID_4},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS5, EVSYS_GCLK_ID_5},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS6, EVSYS_GCLK_ID_6},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS7, EVSYS_GCLK_ID_7},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS8, EVSYS_GCLK_ID_8},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS9, EVSYS_GCLK_ID_9},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS10, EVSYS_GCLK_ID_10},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS11, EVSYS_GCLK_ID_11},

	{CLOCK_CONTROL_MCHP_V1_GCLK_TC0, TC0_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC1, TC1_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC2, TC2_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC3, TC3_GCLK_ID},
#if defined(MCHP_CLOCK_SAM_D5X_E5X_TC_5_4_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC4, TC4_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC5, TC5_GCLK_ID},
#endif
#if defined(MCHP_CLOCK_SAM_D5X_E5X_TC_7_6_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC6, TC6_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC7, TC7_GCLK_ID},
#endif

	{CLOCK_CONTROL_MCHP_V1_GCLK_TCC0, TCC0_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TCC1, TCC1_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TCC2, TCC2_GCLK_ID},
#if defined(MCHP_CLOCK_SAM_D5X_E5X_TCC_4_3_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_TCC3, TCC3_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TCC4, TCC4_GCLK_ID},
#endif

/* CAN Peripheral is available in E54 and E51 series only */
#if defined(MCHP_CLOCK_SAM_D5X_E5X_CAN_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_CAN0, CAN0_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_CAN1, CAN1_GCLK_ID},
#endif

	{CLOCK_CONTROL_MCHP_V1_GCLK_PDEC, PDEC_GCLK_ID},

	{CLOCK_CONTROL_MCHP_V1_GCLK_AC, AC_GCLK_ID},

	{CLOCK_CONTROL_MCHP_V1_GCLK_CCL, CCL_GCLK_ID},

	{CLOCK_CONTROL_MCHP_V1_GCLK_ADC0, ADC0_GCLK_ID},
	{CLOCK_CONTROL_MCHP_V1_GCLK_ADC1, ADC1_GCLK_ID},

	{CLOCK_CONTROL_MCHP_V1_GCLK_DAC, DAC_GCLK_ID},

#if defined(MCHP_CLOCK_SAM_D5X_E5X_I2S_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_I2S0, I2S_GCLK_ID_0},
	{CLOCK_CONTROL_MCHP_V1_GCLK_I2S1, I2S_GCLK_ID_1},
#endif

	{CLOCK_CONTROL_MCHP_V1_GCLK_SDHC0, SDHC0_GCLK_ID},
#if defined(MCHP_CLOCK_SAM_D5X_E5X_SDHC_1_IP)
	{CLOCK_CONTROL_MCHP_V1_GCLK_SDHC1, SDHC1_GCLK_ID},
#endif

	{CLOCK_CONTROL_MCHP_V1_GCLK_CM4_TRACE, GCLK_NUM - 1},
};

/**
 * @brief Size of the generic clock generator to peripheral ID map array.
 */
#define HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE (ARRAY_SIZE(hal_mchp_id_map_gclk_periph))

/**
 * @brief Sets or clears the GCLK channel enable for a specified clock.
 *
 * This function modifies the GCLK channel enable bit for the given clock (specified by `clk`) in
 * the GCLK registers. The channel enable is set or cleared based on the value of the `is_set`
 * parameter.
 *
 * @param[in] regs Pointer to the GCLK register structure.
 * @param[in] clk The clock identifier to modify the GCLK channel enable for.
 * @param[in] is_set A boolean flag indicating whether to set (true) or clear (false) the channel
 * enable.
 *
 * @return int Returns 0 on success, or a negative value on failure.
 *
 * @note This function directly manipulates the GCLK register to enable or disable
 *       the specified clock channel.
 */
static int hal_mchp_gclk_chen_set_clear(gclk_registers_t *regs, uint32_t clk, bool is_set)
{
	int error = -1;
	uint32_t index;

	/* Iterate through all GCLK peripherals to find match with clk */
	for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
		if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
			if (is_set == true) {
				regs->GCLK_PCHCTRL[hal_mchp_id_map_gclk_periph[index].id] |=
					GCLK_PCHCTRL_CHEN_Msk;
			} else {
				regs->GCLK_PCHCTRL[hal_mchp_id_map_gclk_periph[index].id] &=
					~GCLK_PCHCTRL_CHEN_Msk;
			}
			error = 0;
			break;
		}
	}
	return error;
}

/**
 * @brief Configures the PCHCTRL (Peripheral Channel Control) for a specified clock.
 *
 * This function configures the PCHCTRL register to enable or disable the channel for the given
 * clock (specified by `clk`), based on the value of `is_chen`, and associates the specified GCLK
 * generator (`gen_sel`).
 *
 * @param[in] regs Pointer to the GCLK register structure.
 * @param[in] clk The clock identifier to configure the PCHCTRL for.
 * @param[in] is_chen A boolean flag indicating whether to enable (true) or disable (false) the
 * channel.
 * @param[in] gen_sel The GCLK generator selection to associate with the specified clock.
 *
 * @return int Returns 0 on success, or a negative value on failure.
 *
 * @note This function modifies the PCHCTRL register to configure the peripheral channel control for
 * the clock. The configuration includes enabling or disabling the channel and associating a GCLK
 * generator.
 */
static int hal_mchp_gclk_configure_pchctrl(gclk_registers_t *regs, uint32_t clk, bool is_chen,
					   uint8_t gen_sel)
{
	uint32_t reg_val;
	uint32_t index;
	int error = -1;

	/* Iterate through all GCLK peripherals to find match with clk */
	for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
		if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
			reg_val = regs->GCLK_PCHCTRL[hal_mchp_id_map_gclk_periph[index].id];
			if (is_chen == true) {
				reg_val |= GCLK_PCHCTRL_CHEN_Msk;
			} else {
				reg_val &= ~GCLK_PCHCTRL_CHEN_Msk;
			}
			reg_val &= ~GCLK_PCHCTRL_GEN_Msk;
			regs->GCLK_PCHCTRL[hal_mchp_id_map_gclk_periph[index].id] =
				reg_val | gen_sel;
			error = 0;
			break;
		}
	}
	return error;
}

/**
 * @brief Configures the GENCTRL (Generator Control) register for a specified clock.
 *
 * This function configures the GENCTRL register for the given clock (specified by `clk`) by setting
 * the GCLK generator value (specified by `gen_val`). It enables the appropriate control settings
 * for the specified clock generator.
 *
 * @param[in] regs Pointer to the GCLK register structure.
 * @param[in] clk The clock identifier to configure the GENCTRL for.
 * @param[in] gen_val The GCLK generator value to associate with the specified clock.
 *
 * @return int Returns 0 on success, or a negative value on failure.
 *
 * @note This function modifies the GENCTRL register to configure the specified GCLK generator for
 * the given clock.
 */
static int hal_mchp_gclk_configure_genctrl(gclk_registers_t *regs, uint32_t clk, uint8_t gen_val)
{
	uint32_t index;
	int error = -1;

	/* Iterate through all GCLK generators to find match with clk */
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			regs->GCLK_GENCTRL[index] = GCLK_GENCTRL_Msk & gen_val;
			error = 0;
			break;
		}
	}

	return error;
}

/**
 * @brief Turns off a specific generic clock.
 *
 * This function disables the generic clock specified by the `clk` parameter.
 * It checks for the clock generator or peripheral in the
 * `hal_mchp_sync_map_gclk_gen` and `hal_mchp_id_map_gclk_periph` arrays and
 * turns off the corresponding clock by clearing the relevant control bits in
 * the `regs` structure.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock to be turned off (specified by its ID).
 *
 * @return The status of the operation. Returns `CLOCK_CONTROL_MCHP_STATE_OK`
 *         if successful, `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock
 *         is not supported.
 */
static inline clock_control_mchp_state_t hal_mchp_gclk_off(gclk_registers_t *regs, uint32_t clk)
{
	uint32_t index;
	clock_control_mchp_state_t state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Loop through the GCLK sync map to check for a matching clock generator */
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		/* Check if the clock is GCLK_GEN0, which is not supported for off */
		if (clk == CLOCK_CONTROL_MCHP_V1_GCLK_GEN0) {
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
			break;
		} else if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			/* Turn off the corresponding clock generator by clearing the bit */
			regs->GCLK_GENCTRL[index] &= ~GCLK_GENCTRL_GENEN_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		}
	}

	/* If no match found in GCLK Gen, check the GCLK peripheral map */
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Loop through GCLK peripheral map and clear CHEN, if found */
		if (hal_mchp_gclk_chen_set_clear(regs, clk, false) == 0) {
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		}
	}

	return state;
}

/**
 * @brief Turns on a specific generic clock.
 *
 * This function enables the specified generic clock by setting the corresponding
 * control bit in the GCLK registers. It first checks if the clock is a
 * supported clock generator (excluding GCLK_GEN0, which is always on) and
 * enables it. If the clock is not a generator, it checks the peripheral clock
 * map and enables the corresponding peripheral clock.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock to be turned on (specified by its ID).
 *
 * @return The status of the operation. Returns `CLOCK_CONTROL_MCHP_STATE_OK`
 *         if successful, `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock
 *         is not supported.
 */
static inline clock_control_mchp_state_t hal_mchp_gclk_on(gclk_registers_t *regs, uint32_t clk)
{
	uint32_t index;
	clock_control_mchp_state_t state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Loop through the GCLK sync map to check for a matching clock generator */
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		/* Check if the clock is GCLK_GEN0, which is always on */
		if (clk == CLOCK_CONTROL_MCHP_V1_GCLK_GEN0) {
			/* GCLK GEN0 is always on */
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		} else if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			/* Enable the clock generator by setting the GENEN bit */
			regs->GCLK_GENCTRL[index] |= GCLK_GENCTRL_GENEN_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		}
	}

	/* If no match found in GCLK Gen, check the GCLK peripheral map */
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Loop through GCLK peripheral map and set CHEN if found */
		if (hal_mchp_gclk_chen_set_clear(regs, clk, true) == 0) {
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		}
	}

	return state;
}

/**
 * @brief Retrieves the current status of a specific generic clock.
 *
 * This function checks the status of the specified generic clock and determines
 * if it is on, off, or in the process of starting based on the state of the
 * associated registers. It first checks if the clock is a valid generator or
 * peripheral and then reads the corresponding control registers to determine
 * the clock's status.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock whose status is to be retrieved (specified by its ID).
 *
 * @return The status of the clock.
 *         Returns `CLOCK_CONTROL_MCHP_STATE_ON` if the clock is on,
 *         `CLOCK_CONTROL_MCHP_STATE_OFF` if it is off,
 *         `CLOCK_CONTROL_MCHP_STATE_STARTING` if it is starting,
 *         and `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock is not
 * supported.
 */
static inline clock_control_mchp_state_t hal_mchp_gclk_status(gclk_registers_t *regs, uint32_t clk)
{
	uint32_t index;
	clock_control_mchp_state_t state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Loop through the GCLK sync map to check for a matching clock generator */
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		/* Check if the clock matches a supported clock generator */
		if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			/* Check if the generator is enabled */
			if ((regs->GCLK_GENCTRL[index] & GCLK_GENCTRL_GENEN_Msk) ==
			    GCLK_GENCTRL_GENEN_Msk) {
				/* Generator is on, check if it's starting or fully on */
				if ((regs->GCLK_SYNCBUSY &
				     hal_mchp_sync_map_gclk_gen[index].sync) ==
				    hal_mchp_sync_map_gclk_gen[index].sync) {
					state = CLOCK_CONTROL_MCHP_STATE_STARTING;
				} else {
					/* Generator is fully on */
					state = CLOCK_CONTROL_MCHP_STATE_ON;
				}
			} else {
				/* Generator is off */
				state = CLOCK_CONTROL_MCHP_STATE_OFF;
			}
			break;
		}
	}

	/* If no match found in GCLK Gen, check the GCLK peripheral map */
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Loop through peripheral map to check for a peripheral clock */
		for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
			/* Check if the clock matches a supported peripheral */
			if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
				/* Check if the peripheral clock is enabled */
				if ((regs->GCLK_PCHCTRL[hal_mchp_id_map_gclk_periph[index].id] &
				     GCLK_PCHCTRL_CHEN_Msk) == GCLK_PCHCTRL_CHEN_Msk) {
					state = CLOCK_CONTROL_MCHP_STATE_ON;
				} else {
					state = CLOCK_CONTROL_MCHP_STATE_OFF;
				}
				break;
			}
		}
	}

	return state;
}

/**
 * @brief Enables interrupt for a specific generic clock.
 *
 * This function attempts to enable the interrupt for the specified generic
 * clock. However, interrupt support is not available for this clock system, so
 * the function returns `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock for which the interrupt is to be enabled (specified by
 * its ID).
 *
 * @return The status of the operation. Always returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` as interrupt support is not available.
 */
static inline clock_control_mchp_state_t hal_mchp_gclk_enable_interrupt(gclk_registers_t *regs,
									uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

/**
 * @brief Clears interrupt for a specific generic clock.
 *
 * This function attempts to clear the interrupt for the specified generic clock.
 * However, interrupt support is not available for this clock system, so the
 * function returns `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock for which the interrupt is to be cleared (specified by
 * its ID).
 *
 * @return The status of the operation. Always returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` as interrupt support is not available.
 */
static inline clock_control_mchp_state_t hal_mchp_gclk_clear_interrupt(gclk_registers_t *regs,
								       uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

/**
 * @brief Disables interrupt for a specific generic clock.
 *
 * This function attempts to disable the interrupt for the specified generic
 * clock. However, interrupt support is not available for this clock system, so
 * the function returns `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock for which the interrupt is to be disabled (specified by
 * its ID).
 *
 * @return The status of the operation. Always returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` as interrupt support is not available.
 */
static inline clock_control_mchp_state_t hal_mchp_gclk_disable_interrupt(gclk_registers_t *regs,
									 uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

/**
 * @brief Retrieves the clock rate of a specified generic clock.
 *
 * This function checks the source and divider settings for a specified generic
 * clock and returns the corresponding rate or frequency. If the clock is not
 * supported or the rate cannot be determined, the function returns a state
 * indicating no rate is available.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock for which the rate is to be retrieved (specified by its
 * ID).
 * @param src Pointer to the `clock_control_mchp_source_t` structure where the
 * source and frequency information will be stored.
 *
 * @return The status of the operation, indicating whether the rate was
 * successfully retrieved or if the clock is unsupported or invalid.
 */
static inline clock_control_mchp_state_t
hal_mchp_gclk_get_rate(gclk_registers_t *regs, uint32_t clk, clock_control_mchp_source_t *src)
{
	uint32_t index;
	uint32_t divider;
	uint32_t gen_index;
	clock_control_mchp_state_t state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the generic clock generator mapping */
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		/* Check if the clock matches any known generator */
		if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			/* Extract the divider value */
			divider = (regs->GCLK_GENCTRL[index] & GCLK_GENCTRL_DIV_Msk) >>
				  GCLK_GENCTRL_DIV_Pos;

			/* Apply the appropriate value based on the divider selection */
			if ((regs->GCLK_GENCTRL[index] & GCLK_GENCTRL_DIVSEL_Msk) ==
			    GCLK_GENCTRL_DIVSEL_Msk) {
				divider = 2 ^ (divider + 1);
			} else {
				/* If divider is 0, use 1 */
				if (divider == 0) {
					divider = 1;
				}
			}

			/* Update the source divider */
			src->div = src->div * divider;

			/* Check the source of the generator and set the clock information */
			switch (regs->GCLK_GENCTRL[index] & GCLK_GENCTRL_SRC_Msk) {
			case GCLK_GENCTRL_SRC_XOSC0:
				src->target_clk = CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0;
				src->target_clk_addr = OSCCTRL_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			case GCLK_GENCTRL_SRC_XOSC1:
				src->target_clk = CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1;
				src->target_clk_addr = OSCCTRL_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			case GCLK_GENCTRL_SRC_GCLKIN:
				state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
				/* Assign the user-defined frequency ID based on the clock */
				if (index == 0) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN0;
				} else if (index == 1) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN1;
				} else if (index == 2) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN2;
				} else if (index == 3) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN3;
				} else if (index == 4) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN4;
				} else if (index == 5) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN5;
				} else if (index == 6) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN6;
				} else if (index == 7) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN7;
				} else {
					state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
				}
				break;
			case GCLK_GENCTRL_SRC_GCLKGEN1:
				src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN1;
				src->target_clk_addr = GCLK_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			case GCLK_GENCTRL_SRC_OSCULP32K:
				src->target_clk = CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K;
				src->target_clk_addr = OSC32KCTRL_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			case GCLK_GENCTRL_SRC_XOSC32K:
				src->target_clk = CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K;
				src->target_clk_addr = OSC32KCTRL_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			case GCLK_GENCTRL_SRC_DFLL:
				src->target_clk = CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL;
				src->target_clk_addr = OSCCTRL_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			case GCLK_GENCTRL_SRC_DPLL0:
				src->target_clk = CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL0;
				src->target_clk_addr = OSCCTRL_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			case GCLK_GENCTRL_SRC_DPLL1:
				src->target_clk = CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL1;
				src->target_clk_addr = OSCCTRL_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			default:
				/* Source is invalid, set frequency to 0 */
				src->frequency = 0;
				state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
				break;
			}
			break;
		}
	}

	/* If the clock was not found in clock generators, check peripherals */
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Not a GCLK generator, check peripherals */
		for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
			if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
				/* Extract the generator index for the peripheral clock */
				gen_index = (regs->GCLK_PCHCTRL[index] & GCLK_PCHCTRL_GEN_Msk) >>
					    GCLK_PCHCTRL_GEN_Pos;

				/* If the generator index is valid, set the target clock info */
				if (gen_index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE) {
					src->target_clk = hal_mchp_sync_map_gclk_gen[gen_index].clk;
					src->target_clk_addr = GCLK_BASE_ADDRESS;
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				} else {
					/* Generator index is out of bounds */
					src->frequency = 0;
					state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
				}
				break;
			}
		}
	}

	return state;
}

/**
 * @brief Sets the rate for a specified generic clock.
 *
 * This function modifies the generic clock generator control registers to set
 * the clock rate by applying the appropriate divider settings as specified in
 * the rate structure. The function checks the clock generator and updates the
 * divider selection and division values accordingly.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock for which the rate is to be set (specified by its ID).
 * @param rate Pointer to the clock rate structure containing the desired
 * settings.
 *
 * @return The status of the operation, indicating success or failure.
 */
static inline int hal_mchp_gclk_set_rate(gclk_registers_t *regs, uint32_t clk,
					 clock_control_mchp_rate_t *rate)
{
	uint32_t index;
	clock_control_mchp_state_t state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Pointer to the gclk_rate field in the rate structure. */
	clock_control_mchp_gclk_rate_t *gclk_rate = rate->gclk_rate;

	/* Iterate through the generic clock generator mapping */
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		/* Check if the clock matches any known generator */
		if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			/* Update the divider selection */
			regs->GCLK_GENCTRL[index] =
				(regs->GCLK_GENCTRL[index] & ~GCLK_GENCTRL_DIVSEL_Msk) |
				GCLK_GENCTRL_DIVSEL(gclk_rate->div_sel[index]);

			/* Update the generator division value */
			regs->GCLK_GENCTRL[index] =
				(regs->GCLK_GENCTRL[index] & ~GCLK_GENCTRL_DIV_Msk) |
				GCLK_GENCTRL_DIV(gclk_rate->gen_div[index]);

			/* Operation successful, clock rate set */
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		}
	}

	/* Return the operation status */
	return state;
}

/**
 * @brief Configures the generic clock based on the provided configuration
 * structure.
 *
 * This function configures either the entire clock system or a specific clock
 * generator or peripheral based on the input parameters. It applies settings
 * such as the generator control and peripheral control registers to the generic
 * clock control hardware.
 *
 * @param regs Pointer to the GCLK register structure.
 * @param clk The clock to configure (specified by its ID). If 0, applies
 * settings to all available clocks.
 * @param configuration Pointer to the configuration structure containing the
 *                      desired settings for the clocks.
 *
 * @return The status of the configuration, indicating success or failure.
 */
static inline clock_control_mchp_state_t
hal_mchp_gclk_configure(gclk_registers_t *regs, uint32_t clk,
			clock_control_mchp_configuration_t *configuration)
{
	clock_control_mchp_state_t state;
	uint32_t index;

	/* Pointer to the gclk_configuration in the configuration structure. */
	clock_control_mchp_gclk_configuration_t *gclk_configuration =
		configuration->gclk_configuration;

	if (clk == 0) {
		/* No specific clock given, apply settings to all available clocks. */
		for (index = 0; index < gclk_configuration->genctrl_count; index++) {
			if (gclk_configuration->genctrl != NULL) {
				hal_mchp_gclk_configure_genctrl(
					regs, gclk_configuration->genctrl[index].clk,
					gclk_configuration->genctrl[index].gen_val);
			}
		}
		if (gclk_configuration->pchctrl != NULL) {
			for (index = 0; index < gclk_configuration->pchctrl_count; index++) {
				hal_mchp_gclk_configure_pchctrl(
					regs, gclk_configuration->pchctrl[index].clk,
					gclk_configuration->pchctrl[index].is_on,
					gclk_configuration->pchctrl[index].gen_sel);
			}
		}
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Initialize state as no support. */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

		/* Check if the clock matches a known GCLK generator. */
		if (gclk_configuration->genctrl != NULL) {
			if (hal_mchp_gclk_configure_genctrl(
				    regs, clk, gclk_configuration->genctrl[0].gen_val) == 0) {
				state = CLOCK_CONTROL_MCHP_STATE_OK;
			}
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			if (gclk_configuration->pchctrl != NULL) {
				/* No match in GCLK generators, check for peripherals. */
				if (hal_mchp_gclk_configure_pchctrl(
					    regs, clk, gclk_configuration->pchctrl[0].is_on,
					    gclk_configuration->pchctrl[0].gen_sel) == 0) {
					state = CLOCK_CONTROL_MCHP_STATE_OK;
				}
			}
		}
	}

	/* Return the state of the configuration operation. */
	return state;
}

#endif /* MICROCHIP_HAL_MCHP_CLOCK_GCLK_U2122_H_ */
