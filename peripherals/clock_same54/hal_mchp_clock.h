/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_clock.h
 * @brief HAL clock control functions for Microchip devices
 *
 * This header file contains the declarations of the clock control functions
 * for Microchip devices. These functions provide access to various clock
 * controllers, including the MCLK, OSCCTRL, OSC32KCTRL and GCLK.
 */

#ifndef PERIPHERALS_CLOCK_SAME54_HAL_MCHP_CLOCK_H_
#define PERIPHERALS_CLOCK_SAME54_HAL_MCHP_CLOCK_H_

/**
 * @brief Defines the resolution for the fractional part of the clock
 * multiplier.
 *
 * This macro sets the number of bits used for the fractional resolution when
 * configuring or calculating clock multipliers. The value of 3 means the
 * fractional part is represented with 3 digits of precision.
 */
#define HAL_MCHP_CLOCK_MULTIPLIER_FRACTION_RESOLUTION 3

/**
 * @brief Base addresses for various clock-related peripherals.
 *
 * This array holds the base addresses of different clock-related modules in the
 * Microchip hardware abstraction layer (HAL). The addresses correspond to the
 * MCLK (Main Clock), OSCCTRL (Oscillator Control), OSC32KCTRL (32kHz Oscillator
 * Control), and GCLK (Generic Clock) peripherals.
 */
static const uint32_t hal_mchp_clock_base_addresses[] = {
	/* MCLK - Main Clock Base Address */
	MCLK_BASE_ADDRESS,
	/* OSCCTRL - Oscillator Control Base Address */
	OSCCTRL_BASE_ADDRESS,
	/* OSC32KCTRL - 32kHz Oscillator Control Base Address */
	OSC32KCTRL_BASE_ADDRESS,
	/* GCLK - Generic Clock Base Address */
	GCLK_BASE_ADDRESS};

/**
 * @brief Size of the HAL MCHP clock base addresses array.
 *
 * This macro calculates the size of the `hal_mchp_clock_base_addresses` array,
 * which holds the base addresses for various clock-related peripherals.
 * The size represents the number of elements in the array.
 */
#define HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE (ARRAY_SIZE(hal_mchp_clock_base_addresses))

/**
 * @brief Function pointer type for clock control functions that modify the
 * clock state.
 *
 * This function pointer type is used for functions that control the state of a
 * clock.
 *
 * @param clk_regs Pointer to the clock registers.
 * @param clk The clock identifier.
 *
 * @return The state of the clock control.
 */
typedef enum clock_control_mchp_state (*hal_mchp_clock_function_t)(void *clk_regs, uint32_t clk);

/**
 * @brief Function pointer type for clock configuration functions.
 *
 * This function pointer type is used for functions that configure a clock.
 *
 * @param clk_addr Pointer to the clock address.
 * @param clk The clock identifier.
 * @param configuration Pointer to the clock configuration structure.
 *
 * @return The state of the clock control after configuration.
 */
typedef enum clock_control_mchp_state (*hal_mchp_clock_configure_function_t)(
	void *clk_addr, uint32_t clk, clock_control_mchp_configuration_t *configuration);

/**
 * @brief Function pointer type for getting the clock rate.
 *
 * This function pointer type is used for functions that retrieve the current
 * clock rate.
 *
 * @param clk_addr Pointer to the clock address.
 * @param clk The clock identifier.
 * @param source Pointer to the clock source structure.
 *
 * @return The state of the clock control after getting the rate.
 */
typedef enum clock_control_mchp_state (*hal_mchp_clock_get_rate_function_t)(
	void *clk_addr, uint32_t clk, struct clock_control_mchp_source *source);

/**
 * @brief Function pointer type for setting the clock rate.
 *
 * This function pointer type is used for functions that set the clock rate.
 *
 * @param clk_addr Pointer to the clock address.
 * @param clk The clock identifier.
 * @param rate Pointer to the clock rate structure.
 *
 * @return The state of the clock control after setting the rate.
 */
typedef enum clock_control_mchp_state (*hal_mchp_clock_set_rate_function_t)(
	void *clk_addr, uint32_t clk, clock_control_mchp_rate_t *rate);

/**
 * @brief Array of function pointers to turn off the clock for different
 * peripherals.
 *
 * This array holds function pointers to functions that are responsible for
 * disabling or turning off clocks for various peripherals, such as MCLK,
 * OSCCTRL, OSC32KCTRL, and GCLK. Each function pointer corresponds to a clock
 * control function for a specific module.
 */
static const hal_mchp_clock_function_t
	hal_mchp_clock_off_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock Off Function */
		(hal_mchp_clock_function_t)hal_mchp_mclk_off,
		/* OSCCTRL - Oscillator Control Off Function */
		(hal_mchp_clock_function_t)hal_mchp_oscctrl_off,
		/* OSC32KCTRL - 32kHz Oscillator Control Off Function */
		(hal_mchp_clock_function_t)hal_mchp_osc32kctrl_off,
		/* GCLK - Generic Clock Off Function */
		(hal_mchp_clock_function_t)hal_mchp_gclk_off,
};

/**
 * @brief Array of function pointers to turn on the clock for different
 * peripherals.
 *
 * This array holds function pointers to functions that enable the clocks for
 * various modules, such as MCLK, OSCCTRL, OSC32KCTRL, and GCLK.
 */
static const hal_mchp_clock_function_t
	hal_mchp_clock_on_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock On Function */
		(hal_mchp_clock_function_t)hal_mchp_mclk_on,
		/* OSCCTRL - Oscillator Control On Function */
		(hal_mchp_clock_function_t)hal_mchp_oscctrl_on,
		/* OSC32KCTRL - 32kHz Oscillator Control On Function */
		(hal_mchp_clock_function_t)hal_mchp_osc32kctrl_on,
		/* GCLK - Generic Clock On Function */
		(hal_mchp_clock_function_t)hal_mchp_gclk_on,
};

/**
 * @brief Array of function pointers to clear interrupts for different
 * peripherals.
 *
 * This array holds function pointers to functions that clear interrupts for
 * various clock modules, including MCLK, OSCCTRL, OSC32KCTRL, and GCLK.
 */
static const hal_mchp_clock_function_t
	hal_mchp_clock_clear_interrupt_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock Clear Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_mclk_clear_interrupt,
		/* OSCCTRL - Oscillator Control Clear Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_oscctrl_clear_interrupt,
		/* OSC32KCTRL - 32kHz Oscillator Control Clear Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_osc32kctrl_clear_interrupt,
		/* GCLK - Generic Clock Clear Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_gclk_clear_interrupt,
};

/**
 * @brief Array of function pointers to enable interrupts for different
 * peripherals.
 *
 * This array holds function pointers to functions that enable interrupts for
 * various clock modules, including MCLK, OSCCTRL, OSC32KCTRL, and GCLK.
 */
static const hal_mchp_clock_function_t
	hal_mchp_clock_enable_interrupt_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock Enable Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_mclk_enable_interrupt,
		/* OSCCTRL - Oscillator Control Enable Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_oscctrl_enable_interrupt,
		/* OSC32KCTRL - 32kHz Oscillator Control Enable Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_osc32kctrl_enable_interrupt,
		/* GCLK - Generic Clock Enable Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_gclk_enable_interrupt,
};

/**
 * @brief Array of function pointers to disable interrupts for different
 * peripherals.
 *
 * This array holds function pointers to functions that disable interrupts for
 * various clock modules, including MCLK, OSCCTRL, OSC32KCTRL, and GCLK.
 */
static const hal_mchp_clock_function_t
	hal_mchp_clock_disable_interrupt_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock Disable Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_mclk_disable_interrupt,
		/* OSCCTRL - Oscillator Control Disable Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_oscctrl_disable_interrupt,
		/* OSC32KCTRL - 32kHz Control Disable Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_osc32kctrl_disable_interrupt,
		/* GCLK - Generic Clock Disable Interrupt Function */
		(hal_mchp_clock_function_t)hal_mchp_gclk_disable_interrupt,
};

/**
 * @brief Array of function pointers to get the status of different clocks.
 *
 * This array holds function pointers to functions that retrieve the status of
 * various clock modules, including MCLK, OSCCTRL, OSC32KCTRL, and GCLK.
 */
static const hal_mchp_clock_function_t
	hal_mchp_clock_status_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock Status Function */
		(hal_mchp_clock_function_t)hal_mchp_mclk_status,
		/* OSCCTRL - Oscillator Control Status Function */
		(hal_mchp_clock_function_t)hal_mchp_oscctrl_status,
		/* OSC32KCTRL - 32kHz Oscillator Control Status Function */
		(hal_mchp_clock_function_t)hal_mchp_osc32kctrl_status,
		/* GCLK - Generic Clock Status Function */
		(hal_mchp_clock_function_t)hal_mchp_gclk_status,
};

/**
 * @brief Array of function pointers to configure different clocks.
 *
 * This array holds function pointers to functions that configure the clocks for
 * various modules, including MCLK, OSCCTRL, OSC32KCTRL, and GCLK.
 */
static const hal_mchp_clock_configure_function_t
	hal_mchp_clock_configure_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock Configure Function */
		(hal_mchp_clock_configure_function_t)hal_mchp_mclk_configure,
		/* OSCCTRL - Oscillator Control Configure Function */
		(hal_mchp_clock_configure_function_t)hal_mchp_oscctrl_configure,
		/* OSC32KCTRL - 32kHz Oscillator Control Configure Function */
		(hal_mchp_clock_configure_function_t)hal_mchp_osc32kctrl_configure,
		/* GCLK - Generic Clock Configure Function */
		(hal_mchp_clock_configure_function_t)hal_mchp_gclk_configure,
};

/**
 * @brief Array of function pointers to get the rate of different clocks.
 *
 * This array holds function pointers to functions that retrieve the clock rate
 * for various modules, including MCLK, OSCCTRL, OSC32KCTRL, and GCLK.
 */
static const hal_mchp_clock_get_rate_function_t
	hal_mchp_clock_get_rate_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock Get Rate Function */
		(hal_mchp_clock_get_rate_function_t)hal_mchp_mclk_get_rate,
		/* OSCCTRL - Oscillator Control Get Rate Function */
		(hal_mchp_clock_get_rate_function_t)hal_mchp_oscctrl_get_rate,
		/* OSC32KCTRL - 32kHz Oscillator Control Get Rate Function */
		(hal_mchp_clock_get_rate_function_t)hal_mchp_osc32kctrl_get_rate,
		/* GCLK - Generic Clock Get Rate Function */
		(hal_mchp_clock_get_rate_function_t)hal_mchp_gclk_get_rate,
};

/**
 * @brief Array of function pointers to set the rate of different clocks.
 *
 * This array holds function pointers to functions that set the clock rate for
 * various modules, including MCLK, OSCCTRL, OSC32KCTRL, and GCLK.
 */
static const hal_mchp_clock_set_rate_function_t
	hal_mchp_clock_set_rate_functions[HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE] = {
		/* MCLK - Main Clock Set Rate Function */
		(hal_mchp_clock_set_rate_function_t)hal_mchp_mclk_set_rate,
		/* OSCCTRL - Oscillator Control Set Rate Function */
		(hal_mchp_clock_set_rate_function_t)hal_mchp_oscctrl_set_rate,
		/* OSC32KCTRL - 32kHz Oscillator Control Set Rate Function */
		(hal_mchp_clock_set_rate_function_t)hal_mchp_osc32kctrl_set_rate,
		/* GCLK - Generic Clock Set Rate Function */
		(hal_mchp_clock_set_rate_function_t)hal_mchp_gclk_set_rate,
};

/**
 * @brief Configures a clock based on the provided clock address and
 * configuration.
 *
 * This function searches for the corresponding clock base address in the
 * `hal_mchp_clock_base_addresses` array and invokes the appropriate clock
 * configuration function.
 *
 * @param clk_addr The base address of the clock to be configured.
 * @param clk The clock identifier for the specific clock.
 * @param configuration Pointer to the clock configuration structure.
 *
 * @return The state of the clock control after configuration. Returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock address is not supported.
 */
static inline enum clock_control_mchp_state
hal_mchp_clock_configure(uint32_t clk_addr, uint32_t clk,
			 clock_control_mchp_configuration_t *configuration)
{
	/* Index for iterating through clock base addresses */
	uint8_t index;

	/* Initialize state to NO_SUPPORT, indicating clock is not configured yet */
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the clock base addresses to find a match */
	for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
		/* Check if the clock address matches one of the base addresses */
		if (clk_addr == hal_mchp_clock_base_addresses[index]) {
			/* Call the appropriate clock configuration function */
			state = hal_mchp_clock_configure_functions[index]((void *)clk_addr, clk,
									  (void *)configuration);
		}
	}

	/* Return the state, either configured or not supported */
	return state;
}

/**
 * @brief Clears the interrupt for a specific clock based on the provided clock
 * address.
 *
 * This function searches for the corresponding clock base address in the
 * `hal_mchp_clock_base_addresses` array and invokes the appropriate function to
 * clear the interrupt for the specified clock.
 *
 * @param clk_addr The base address of the clock for which the interrupt should
 * be cleared.
 * @param clk The clock identifier for the specific clock.
 *
 * @return The state of the clock control after clearing the interrupt. Returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock address is not supported.
 */
static inline enum clock_control_mchp_state hal_mchp_clock_clear_interrupt(uint32_t clk_addr,
									   uint32_t clk)
{
	/* Index for iterating through clock base addresses */
	uint8_t index;

	/* Initialize state, indicating the interrupt is not cleared yet */
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the clock base addresses to find a match */
	for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
		/* Check if the clock address matches one of the base addresses */
		if (clk_addr == hal_mchp_clock_base_addresses[index]) {
			/* Call the appropriate function to clear the interrupt */
			state = hal_mchp_clock_clear_interrupt_functions[index]((void *)clk_addr,
										clk);
		}
	}

	/* Return the state, either cleared or not supported */
	return state;
}

/**
 * @brief Enables the interrupt for a specific clock based on the provided clock
 * address.
 *
 * This function searches for the corresponding clock base address in the
 * `hal_mchp_clock_base_addresses` array and invokes the appropriate function to
 * enable the interrupt for the specified clock.
 *
 * @param clk_addr The base address of the clock for which the interrupt should
 * be enabled.
 * @param clk The clock identifier for the specific clock.
 *
 * @return The state of the clock control after enabling the interrupt. Returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock address is not supported.
 */
static inline enum clock_control_mchp_state hal_mchp_clock_enable_interrupt(uint32_t clk_addr,
									    uint32_t clk)
{
	/* Index for iterating through clock base addresses */
	uint8_t index;

	/* Initialize state, indicating the interrupt is not enabled yet */
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the clock base addresses to find a match */
	for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
		/* Check if the clock address matches one of the base addresses */
		if (clk_addr == hal_mchp_clock_base_addresses[index]) {
			/* Call the appropriate function to enable the interrupt */
			state = hal_mchp_clock_enable_interrupt_functions[index]((void *)clk_addr,
										 clk);
		}
	}

	/* Return the state, either enabled or not supported */
	return state;
}

/**
 * @brief Disables the interrupt for a specific clock based on the provided
 * clock address.
 *
 * This function searches for the corresponding clock base address in the
 * `hal_mchp_clock_base_addresses` array and invokes the appropriate function to
 * disable the interrupt for the specified clock.
 *
 * @param clk_addr The base address of the clock for which the interrupt should
 * be disabled.
 * @param clk The clock identifier for the specific clock.
 *
 * @return The state of the clock control after disabling the interrupt. Returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock address is not supported.
 */
static inline enum clock_control_mchp_state hal_mchp_clock_disable_interrupt(uint32_t clk_addr,
									     uint32_t clk)
{
	/* Index for iterating through clock base addresses */
	uint8_t index;

	/* Initialize state, indicating the interrupt is not disabled yet */
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the clock base addresses to find a match */
	for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
		/* Check if the clock address matches one of the base addresses */
		if (clk_addr == hal_mchp_clock_base_addresses[index]) {
			/* Call the appropriate function to disable the interrupt */
			state = hal_mchp_clock_disable_interrupt_functions[index]((void *)clk_addr,
										  clk);
		}
	}

	/* Return the state, either disabled or not supported */
	return state;
}

/**
 * @brief Retrieves the rate of a specified clock based on the provided clock
 * address.
 *
 * This function searches for the appropriate clock base address, retrieves the
 * current frequency settings, applies the clock multiplier and fractional
 * resolution, and calculates the clock rate. If user-defined frequencies are
 * used, it fetches the corresponding frequency based on the `user_frequency`
 * structure.
 *
 * @param clk_addr The base address of the clock whose rate is to be retrieved.
 * @param clk The clock identifier for the specific clock.
 * @param rate A pointer to the variable where the calculated rate will be
 * stored.
 * @param user_frequency A structure containing user-defined frequency values.
 *
 * @return The state of the clock control after fetching the rate. It returns
 * `CLOCK_CONTROL_MCHP_STATE_OK` if the rate is successfully retrieved, or other
 * states like `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` or
 * `CLOCK_CONTROL_MCHP_STATE_NO_RATE` if errors occur.
 */
static inline enum clock_control_mchp_state
hal_mchp_clock_get_rate(uint32_t clk_addr, uint32_t clk, uint32_t *rate,
			struct clock_control_mchp_user_frequency user_frequency)
{
	/* Loop index for clock base addresses */
	uint32_t index;

	/* Stores the state of the clock operation */
	enum clock_control_mchp_state state;

	/* Holds the calculated clock rate */
	uint64_t calc_rate;

	/* Initialize the source structure with default values */
	struct clock_control_mchp_source source = {
		/* Default divisor */
		.div = 1,
		/* Default multiplier */
		.mul = 1,
		/* Fractional resolution */
		.mul_frac_res = HAL_MCHP_CLOCK_MULTIPLIER_FRACTION_RESOLUTION,
		/* Fractional multiplier */
		.mul_frac = 10 ^ HAL_MCHP_CLOCK_MULTIPLIER_FRACTION_RESOLUTION,
		/* Default frequency */
		.frequency = 0,
		/* Target clock */
		.target_clk = clk,
		/* Clock address */
		.target_clk_addr = clk_addr,
		/* Default user frequency ID */
		.user_freq_id = CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_NONE,
	};

	struct clock_control_mchp_source *src = &source;

	/* Search for the corresponding clock base address and get its rate */
	do {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

		/* Iterate through the clock base addresses to find a match */
		for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
			/* Get the rate using the appropriate function */
			if (source.target_clk_addr == hal_mchp_clock_base_addresses[index]) {
				state = hal_mchp_clock_get_rate_functions[index](
					(void *)source.target_clk_addr, source.target_clk, src);
				break;
			}
		}
	} while (state == CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE);

	/* Handle the case where user-defined frequencies are used */
	if (state == CLOCK_CONTROL_MCHP_STATE_USER_FREQ) {
		state = CLOCK_CONTROL_MCHP_STATE_OK;
		/* Set the frequency based on the user-defined frequency ID */
		switch (source.user_freq_id) {
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_DFLL:
			/* Use DFLL frequency */
			source.frequency = user_frequency.dfll;
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_XOSC:
			/* Use XOSC frequency */
			source.frequency = user_frequency.xosc;
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_XOSC32K:
			/* Use XOSC32K frequency */
			source.frequency = user_frequency.xosc32k;
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN0:
			/* Use GCLK_IN0 frequency */
			source.frequency = user_frequency.gclk_in[0];
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN1:
			/* Use GCLK_IN1 frequency */
			source.frequency = user_frequency.gclk_in[1];
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN2:
			/* Use GCLK_IN2 frequency */
			source.frequency = user_frequency.gclk_in[2];
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN3:
			/* Use GCLK_IN3 frequency */
			source.frequency = user_frequency.gclk_in[3];
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN4:
			/* Use GCLK_IN4 frequency */
			source.frequency = user_frequency.gclk_in[4];
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN5:
			/* Use GCLK_IN5 frequency */
			source.frequency = user_frequency.gclk_in[5];
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN6:
			/* Use GCLK_IN6 frequency */
			source.frequency = user_frequency.gclk_in[6];
			break;
		case CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_GCLK_IN7:
			/* Use GCLK_IN7 frequency */
			source.frequency = user_frequency.gclk_in[7];
			break;
		default:
			source.frequency = 0;
			state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
			break;
		}
	}

	/* Calculate rate using the multiplier, fractional multiplier, and divisor */
	calc_rate =
		((source.frequency * source.mul) * source.mul_frac) / (10 ^ source.mul_frac_res);

	/* Store the final calculated rate */
	*rate = (uint32_t)(calc_rate / source.div);

	return state;
}

/**
 * @brief Turns off a specific clock.
 *
 * This function disables the clock corresponding to the provided clock address
 * and clock identifier. It searches for the clock base address in the
 * predefined array and calls the appropriate function to turn off the clock.
 *
 * @param clk_addr The base address of the clock to be turned off.
 * @param clk The clock identifier for the specific clock to be turned off.
 *
 * @return The state of the clock control after attempting to turn off the
 * clock. It returns `CLOCK_CONTROL_MCHP_STATE_OK` if the clock was successfully
 * turned off, or other states like `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the
 * clock is not supported.
 */
static inline enum clock_control_mchp_state hal_mchp_clock_off(uint32_t clk_addr, uint32_t clk)
{
	/* Index for iterating through clock base addresses */
	uint8_t index;

	/* Initialize state to NO_SUPPORT, indicating clock is not turned off yet */
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the clock base to find the matching clock address */
	for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
		/* Check if the given clock address matches the one in the list */
		if (clk_addr == hal_mchp_clock_base_addresses[index]) {
			/* Call the function to turn off the clock and store the state */
			state = hal_mchp_clock_off_functions[index]((void *)clk_addr, clk);
		}
	}

	/* Return the state indicating the clock was successfully turned off */
	return state;
}

/**
 * @brief Turns on a specific clock.
 *
 * This function enables the clock corresponding to the provided clock address
 * and clock identifier. It searches for the clock base address in the
 * predefined array and calls the appropriate function to turn on the clock.
 *
 * @param clk_addr The base address of the clock to be turned on.
 * @param clk The clock identifier for the specific clock to be turned on.
 *
 * @return The state of the clock control after attempting to turn on the clock.
 * It returns `CLOCK_CONTROL_MCHP_STATE_OK` if the clock was successfully turned
 * on, or other states like `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock
 * is not supported.
 */
static inline enum clock_control_mchp_state hal_mchp_clock_on(uint32_t clk_addr, uint32_t clk)
{
	/* Index for iterating through clock base addresses */
	uint8_t index;

	/* Initialize state to NO_SUPPORT, indicating clock is not turned on yet */
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the clock base addresses to find the matching address */
	for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
		/* Check if the given clock address matches the one in the list */
		if (clk_addr == hal_mchp_clock_base_addresses[index]) {
			/* Call the function to turn on the clock */
			state = hal_mchp_clock_on_functions[index]((void *)clk_addr, clk);
		}
	}

	/* Return the state indicating whether clock was successfully turned on */
	return state;
}

/**
 * @brief Sets the rate of a specific clock.
 *
 * This function sets the rate for the clock corresponding to the provided clock
 * address and clock identifier. It searches for the clock base address in the
 * predefined array and calls the appropriate function to set the clock rate.
 *
 * @param clk_addr The base address of the clock whose rate is to be set.
 * @param clk The clock identifier for the specific clock whose rate is to be
 * set.
 * @param rate A pointer to the structure containing the rate value to be set
 * for the clock.
 *
 * @return The state of the clock control after attempting to set the clock
 * rate. It returns `CLOCK_CONTROL_MCHP_STATE_OK` if the rate was successfully
 * set, or other states like `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock
 * is not supported.
 */
static inline enum clock_control_mchp_state hal_mchp_clock_set_rate(uint32_t clk_addr, uint32_t clk,
								    clock_control_mchp_rate_t *rate)
{
	/* Index for iterating through clock base addresses */
	uint8_t index;

	/* Initialize state to NO_SUPPORT, indicating the rate is not set yet */
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the clock base addresses to find the matching address */
	for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
		/* Check if the given clock address matches the one in the list */
		if (clk_addr == hal_mchp_clock_base_addresses[index]) {
			/* Call the function to set the clock rate state */
			state = hal_mchp_clock_set_rate_functions[index]((void *)clk_addr, clk,
									 rate);
		}
	}

	/* Return the state indicating whether clock rate was successfully set */
	return state;
}

/**
 * @brief Retrieves the status of a specific clock.
 *
 * This function checks the status of the clock corresponding to the provided
 * clock address and clock identifier. It searches for the clock base address in
 * the predefined array and calls the appropriate function to get the status.
 *
 * @param clk_addr The base address of the clock whose status is to be
 * retrieved.
 * @param clk The clock identifier for the specific clock whose status is to be
 * checked.
 *
 * @return The state of the clock control after checking the clock status. It
 * returns `CLOCK_CONTROL_MCHP_STATE_OK` if the status was successfully
 * retrieved, or other states like `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the
 * clock is not supported.
 */
static inline enum clock_control_mchp_state hal_mchp_clock_status(uint32_t clk_addr, uint32_t clk)
{
	/* Index for iterating through clock base addresses */
	uint8_t index;

	/* Initialize state, indicating the status is not retrieved yet */
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through the clock base addresses to find the matching address */
	for (index = 0; index < HAL_MCHP_CLOCK_BASE_ADDRESS_SIZE; index++) {
		/* Check if the given clock address matches the one in the list */
		if (clk_addr == hal_mchp_clock_base_addresses[index]) {
			/* Call the function to retrieve the clock status */
			state = hal_mchp_clock_status_functions[index]((void *)clk_addr, clk);
		}
	}

	/* Return state indicating the clock status was successfully retrieved */
	return state;
}

#endif /* PERIPHERALS_CLOCK_SAME54_HAL_MCHP_CLOCK_H_ */
