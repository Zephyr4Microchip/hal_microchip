/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_osc32kctrl.h
 * @brief HAL functions for OSC32KCTRL clock control on Microchip devices.
 *
 * This header file provides the HAL functions for the OSC32KCTRL clock
 * controllers. These functions enable clock management and configuration
 * for Microchip-based systems.
 */

#ifndef PERIPHERALS_OSC32KCTRL_U2400_HAL_MCHP_OSC32KCTRL_H_
#define PERIPHERALS_OSC32KCTRL_U2400_HAL_MCHP_OSC32KCTRL_H_

/** @brief 32.768 kHz frequency for the 32K oscillator. */
#define HAL_MCHP_OSC32KCTRL_32K_FREQUENCY 32768

/** @brief 1 kHz frequency for the 32K oscillator. */
#define HAL_MCHP_OSC32KCTRL_1K_FREQUENCY 1024

/**
 * @brief Disables the selected 32kHz oscillator or its output.
 *
 * This function clears the appropriate control bits in the OSC32KCTRL registers
 * based on the provided clock identifier to disable the oscillator or its
 * output. It supports various 32kHz oscillators and outputs, returning
 * `CLOCK_CONTROL_MCHP_STATE_OK` on success or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock is unsupported.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to disable.
 *
 * @return The state of the operation (OK or NO_SUPPORT).
 */
static inline enum clock_control_mchp_state hal_mchp_osc32kctrl_off(osc32kctrl_registers_t *regs,
								    uint32_t clk)
{
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_OK;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* The clock is XOSC32K */
		regs->OSC32KCTRL_XOSC32K &= ~OSC32KCTRL_XOSC32K_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
		/* The clock is XOSC32K output 32kHz */
		regs->OSC32KCTRL_XOSC32K &= ~OSC32KCTRL_XOSC32K_EN32K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
		/* The clock is XOSC32K output 1kHz */
		regs->OSC32KCTRL_XOSC32K &= ~OSC32KCTRL_XOSC32K_EN1K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
		/* The clock is OSCULP32K output 32kHz */
		regs->OSC32KCTRL_OSCULP32K &= ~OSC32KCTRL_OSCULP32K_EN32K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
		/* The clock is OSCULP32K output 1kHz */
		regs->OSC32KCTRL_OSCULP32K &= ~OSC32KCTRL_OSCULP32K_EN1K_Msk;
	} else {
		/* Unsupported clock */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Enables the selected 32kHz oscillator or its output.
 *
 * This function sets the appropriate control bits in the OSC32KCTRL registers
 * based on the provided clock identifier to enable the oscillator or its
 * output. It supports various 32kHz oscillators and outputs, returning
 * `CLOCK_CONTROL_MCHP_STATE_OK` on success or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT` if the clock is unsupported.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to enable.
 *
 * @return The state of the operation (OK or NO_SUPPORT).
 */
static inline enum clock_control_mchp_state hal_mchp_osc32kctrl_on(osc32kctrl_registers_t *regs,
								   uint32_t clk)
{
	enum clock_control_mchp_state state = CLOCK_CONTROL_MCHP_STATE_OK;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* The clock is XOSC32K */
		regs->OSC32KCTRL_XOSC32K |= OSC32KCTRL_XOSC32K_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
		/* The clock is XOSC32K output 32kHz */
		regs->OSC32KCTRL_XOSC32K |= OSC32KCTRL_XOSC32K_EN32K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
		/* The clock is XOSC32K output 1kHz */
		regs->OSC32KCTRL_XOSC32K |= OSC32KCTRL_XOSC32K_EN1K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
		/* The clock is OSCULP32K output 32kHz */
		regs->OSC32KCTRL_OSCULP32K |= OSC32KCTRL_OSCULP32K_EN32K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
		/* The clock is OSCULP32K output 1kHz */
		regs->OSC32KCTRL_OSCULP32K |= OSC32KCTRL_OSCULP32K_EN1K_Msk;
	} else {
		/* Unsupported clock */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Retrieves the status of the selected 32kHz oscillator or its output.
 *
 * This function checks the status of a specific 32kHz oscillator or its output
 * and returns the state (ON or OFF). Some oscillators like OSCULP32K and RTC
 * are always on. If the clock is unsupported, it returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to check the status.
 *
 * @return The state of the oscillator or output (ON, OFF, or NO_SUPPORT).
 */
static inline enum clock_control_mchp_state hal_mchp_osc32kctrl_status(osc32kctrl_registers_t *regs,
								       uint32_t clk)
{
	enum clock_control_mchp_state state;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* XOSC32K has status */
		if ((regs->OSC32KCTRL_XOSC32K & OSC32KCTRL_XOSC32K_ENABLE_Msk) ==
		    OSC32KCTRL_XOSC32K_ENABLE_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_ON;
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
		/* The clock is XOSC32K output 32kHz */
		if ((regs->OSC32KCTRL_XOSC32K & OSC32KCTRL_XOSC32K_EN32K_Msk) ==
		    OSC32KCTRL_XOSC32K_EN32K_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_ON;
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
		/* The clock is XOSC32K output 1kHz */
		if ((regs->OSC32KCTRL_XOSC32K & OSC32KCTRL_XOSC32K_EN1K_Msk) ==
		    OSC32KCTRL_XOSC32K_EN1K_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_ON;
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K) {
		/* OSCULP32K is always On */
		state = CLOCK_CONTROL_MCHP_STATE_ON;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
		/* The clock is OSCULP32K output 32kHz */
		if ((regs->OSC32KCTRL_OSCULP32K & OSC32KCTRL_OSCULP32K_EN32K_Msk) ==
		    OSC32KCTRL_OSCULP32K_EN32K_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_ON;
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
		/* The clock is OSCULP32K output 1kHz */
		if ((regs->OSC32KCTRL_OSCULP32K & OSC32KCTRL_OSCULP32K_EN1K_Msk) ==
		    OSC32KCTRL_OSCULP32K_EN1K_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_ON;
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_RTC) {
		/* RTC is always On */
		state = CLOCK_CONTROL_MCHP_STATE_ON;
	} else {
		/* Unsupported clock */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Enables the interrupt for the selected 32kHz oscillator.
 *
 * This function enables the interrupt for the XOSC32K oscillator, which is the
 * only oscillator that supports interrupt functionality. If the clock is
 * unsupported, it returns `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to enable the interrupt for.
 *
 * @return The state of the operation (OK or NO_SUPPORT).
 */
static inline enum clock_control_mchp_state
hal_mchp_osc32kctrl_enable_interrupt(osc32kctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state state;

	/* Only XOSC32K has interrupt support */
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* Enable xosc32k ready interrupt */
		regs->OSC32KCTRL_INTENSET |= OSC32KCTRL_INTENSET_XOSC32KRDY_Msk;
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Unsupported clock */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Clears the interrupt for the selected 32kHz oscillator.
 *
 * This function clears the interrupt for the XOSC32K oscillator, which is the
 * only oscillator that supports interrupt functionality. If the clock is
 * unsupported, it returns `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to clear the interrupt for.
 *
 * @return The state of the operation (OK or NO_SUPPORT).
 */
static inline enum clock_control_mchp_state
hal_mchp_osc32kctrl_clear_interrupt(osc32kctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state state;

	/* Only XOSC32K has interrupt support */
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* Clear XOSC32K ready interrupt */
		regs->OSC32KCTRL_INTFLAG |= OSC32KCTRL_INTFLAG_XOSC32KRDY_Msk;
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Unsupported clock */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Disables the interrupt for the selected 32kHz oscillator.
 *
 * This function disables the interrupt for the XOSC32K oscillator, which is the
 * only oscillator that supports interrupt functionality. If the clock is
 * unsupported, it returns `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to disable the interrupt for.
 *
 * @return The state of the operation (OK or NO_SUPPORT).
 */
static inline enum clock_control_mchp_state
hal_mchp_osc32kctrl_disable_interrupt(osc32kctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state state;

	/* Only XOSC32K has interrupt support */
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* Disable XOSC32K ready interrupt */
		regs->OSC32KCTRL_INTENCLR |= OSC32KCTRL_INTENCLR_XOSC32KRDY_Msk;
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Unsupported clock */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Retrieves the frequency or rate of the selected 32kHz oscillator.
 *
 * This function returns the frequency or rate for the specified 32kHz
 * oscillator or output. If the clock source is RTC, the rate is determined
 * based on the selected RTC source. If the clock is unsupported, it returns
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to get the rate for.
 * @param src Pointer to the source structure to store the frequency.
 *
 * @return The state of the operation (OK, NO_SUPPORT, or NO_RATE).
 */
static inline enum clock_control_mchp_state
hal_mchp_osc32kctrl_get_rate(osc32kctrl_registers_t *regs, uint32_t clk,
			     struct clock_control_mchp_source *src)
{
	enum clock_control_mchp_state state;

	state = CLOCK_CONTROL_MCHP_STATE_OK;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* The clock is XOSC32K */
		src->user_freq_id = CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_XOSC32K;
		state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
		/* The clock is XOSC32K output 32kHz */
		src->frequency = HAL_MCHP_OSC32KCTRL_32K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
		/* The clock is XOSC32K output 1kHz */
		src->frequency = HAL_MCHP_OSC32KCTRL_1K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K) {
		/* The clock is OSCULP32K */
		src->frequency = HAL_MCHP_OSC32KCTRL_32K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
		/* The clock is OSCULP32K output 32kHz */
		src->frequency = HAL_MCHP_OSC32KCTRL_32K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
		/* The clock is OSCULP32K output 1kHz */
		src->frequency = HAL_MCHP_OSC32KCTRL_1K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_RTC) {
		/* The clock is RTC, determine rate based on RTC source */
		switch (regs->OSC32KCTRL_RTCCTRL & OSC32KCTRL_RTCCTRL_Msk) {
		case OSC32KCTRL_RTCCTRL_RTCSEL_ULP1K:
			src->frequency = HAL_MCHP_OSC32KCTRL_1K_FREQUENCY;
			break;
		case OSC32KCTRL_RTCCTRL_RTCSEL_ULP32K:
			src->frequency = HAL_MCHP_OSC32KCTRL_32K_FREQUENCY;
			break;
		case OSC32KCTRL_RTCCTRL_RTCSEL_XOSC1K:
			src->frequency = HAL_MCHP_OSC32KCTRL_1K_FREQUENCY;
			break;
		case OSC32KCTRL_RTCCTRL_RTCSEL_XOSC32K:
			src->frequency = HAL_MCHP_OSC32KCTRL_32K_FREQUENCY;
			break;
		default:
			/* Unsupported RTC source */
			src->frequency = 0;
			state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
			break;
		}
	} else {
		/* Unsupported clock */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Sets the rate for the selected 32kHz oscillator.
 *
 * This function sets the rate for the XOSC32K oscillator by configuring the
 * CFDCTRL register based on the provided rate. If the clock is unsupported,
 * it returns `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to set the rate for.
 * @param rate Pointer to the rate structure.
 *
 * @return The state of the operation (OK or NO_SUPPORT).
 */
static inline enum clock_control_mchp_state
hal_mchp_osc32kctrl_set_rate(osc32kctrl_registers_t *regs, uint32_t clk,
			     clock_control_mchp_rate_t *rate)
{
	enum clock_control_mchp_state state;

	/* Pointer to the osc32kctrl_rate field in the rate structure. */
	clock_control_mchp_osc32kctrl_rate_t *osc32kctrl_rate = rate->osc32kctrl_rate;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* Set the XOSC32K clock rate using CFDCTRL register */
		regs->OSC32KCTRL_CFDCTRL =
			(regs->OSC32KCTRL_CFDCTRL & ~OSC32KCTRL_CFDCTRL_CFDPRESC_Msk) |
			OSC32KCTRL_CFDCTRL_CFDPRESC(osc32kctrl_rate->xosc32k_cfd_presc);
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Unsupported clock */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Configures the 32kHz oscillator control registers.
 *
 * This function configures various clock sources (XOSC32K, OSCULP32K, RTC)
 * based on the provided configuration structure. If no specific clock is
 * provided (clk == 0), it configures all available clock settings.
 *
 * @param regs Pointer to the OSC32KCTRL registers.
 * @param clk Clock identifier to configure.
 * @param configuration Pointer to the configuration structure.
 *
 * @return The state of the operation (OK or NO_SUPPORT).
 */
static inline enum clock_control_mchp_state
hal_mchp_osc32kctrl_configure(osc32kctrl_registers_t *regs, uint32_t clk,
			      clock_control_mchp_configuration_t *configuration)
{
	enum clock_control_mchp_state state;

	/* Pointer to the osc32kctrl_configuration in the configuration structure. */
	clock_control_mchp_osc32kctrl_configuration_t *osc32kctrl_configuration =
		configuration->osc32kctrl_configuration;

	if (clk == 0) {
		/* If no clock is specified, configure all clocks */
		regs->OSC32KCTRL_XOSC32K =
			(osc32kctrl_configuration->xosc32k & OSC32KCTRL_XOSC32K_Msk);
		regs->OSC32KCTRL_OSCULP32K =
			(osc32kctrl_configuration->osculp32k & OSC32KCTRL_OSCULP32K_Msk);
		regs->OSC32KCTRL_CFDCTRL =
			(osc32kctrl_configuration->cfdctrl & OSC32KCTRL_CFDCTRL_Msk);
		regs->OSC32KCTRL_RTCCTRL =
			(osc32kctrl_configuration->rtcctrl & OSC32KCTRL_RTCCTRL_Msk);
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Configure the clock based on the clock identifier */
		state = CLOCK_CONTROL_MCHP_STATE_OK;

		if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
			/* Configure XOSC32K clock */
			regs->OSC32KCTRL_CFDCTRL =
				(osc32kctrl_configuration->cfdctrl & OSC32KCTRL_CFDCTRL_Msk);
			regs->OSC32KCTRL_XOSC32K =
				(osc32kctrl_configuration->xosc32k & OSC32KCTRL_XOSC32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
			/* Configure XOSC32K for 32kHz output */
			regs->OSC32KCTRL_XOSC32K =
				(osc32kctrl_configuration->xosc32k & OSC32KCTRL_XOSC32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
			/* Configure XOSC32K for 1kHz output */
			regs->OSC32KCTRL_XOSC32K =
				(osc32kctrl_configuration->xosc32k & OSC32KCTRL_XOSC32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K) {
			/* Configure OSCULP32K clock */
			regs->OSC32KCTRL_OSCULP32K =
				(osc32kctrl_configuration->osculp32k & OSC32KCTRL_OSCULP32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
			/* Configure OSCULP32K for 32kHz output */
			regs->OSC32KCTRL_OSCULP32K =
				(osc32kctrl_configuration->osculp32k & OSC32KCTRL_OSCULP32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
			/* Configure OSCULP32K for 1kHz output */
			regs->OSC32KCTRL_OSCULP32K =
				(osc32kctrl_configuration->osculp32k & OSC32KCTRL_OSCULP32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_RTC) {
			/* Configure RTC clock */
			regs->OSC32KCTRL_RTCCTRL =
				(osc32kctrl_configuration->rtcctrl & OSC32KCTRL_RTCCTRL_Msk);
		} else {
			/* Unsupported clock */
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		}
	}

	return state;
}

#endif /* PERIPHERALS_OSC32KCTRL_U2400_HAL_MCHP_OSC32KCTRL_H_ */
