/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_clock_oscctrl_u2401.h
 * @brief HAL functions for OSCCTRL clock control on Microchip devices.
 *
 * This header file provides the HAL functions for the OSCCTRL clock
 * controllers. These functions enable clock management and configuration
 * for Microchip-based systems.
 */

#ifndef MICROCHIP_HAL_MCHP_CLOCK_OSCCTRL_U2401_H_
#define MICROCHIP_HAL_MCHP_CLOCK_OSCCTRL_U2401_H_

/**
 * @brief Mapping structure for external oscillator interrupt control.
 *
 * This structure defines the mapping between the oscillator control registers
 * and their interrupt enable/clear/flag masks for external oscillators. It
 * includes details about the oscillator index and the corresponding interrupt
 * masks.
 */
static const struct clock_control_mchp_id_int_map hal_mchp_id_int_map_oscctrl_xosc[] = {
	{CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0, 0, OSCCTRL_INTENSET_XOSCRDY0_Msk,
	 OSCCTRL_INTENCLR_XOSCRDY0_Msk, OSCCTRL_INTFLAG_XOSCRDY0_Msk},
	{CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1, 1, OSCCTRL_INTENSET_XOSCRDY1_Msk,
	 OSCCTRL_INTENCLR_XOSCRDY1_Msk, OSCCTRL_INTFLAG_XOSCRDY1_Msk},
};

/** @brief Size of the external oscillator interrupt control map. */
#define HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE (ARRAY_SIZE(hal_mchp_id_int_map_oscctrl_xosc))

/**
 * @brief Mapping structure for DPLL (Digital Phase-Locked Loop) control.
 *
 * This structure defines the mapping between the DPLL control registers and
 * their respective indices. It includes details about the DPLL control register
 * and its associated index.
 */
static const struct clock_control_mchp_id_map hal_mchp_id_map_oscctrl_dpll[] = {
	{CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL0, 0},
	{CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL1, 1},
};

/** @brief Size of the DPLL control map. */
#define HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE (ARRAY_SIZE(hal_mchp_id_map_oscctrl_dpll))

/**
 * @brief Turns off the specified oscillator or PLL.
 *
 * This function takes in the clock register structure and a clock identifier,
 * and turns off the specified oscillator or PLL by clearing its corresponding
 * enable bit.
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The identifier for the clock to disable.
 *
 * @return The state of the operation (either `CLOCK_CONTROL_MCHP_STATE_OK` or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`).
 */
static inline clock_control_mchp_state_t hal_mchp_oscctrl_off(oscctrl_registers_t *regs,
							      uint32_t clk)
{
	clock_control_mchp_state_t state;

	state = CLOCK_CONTROL_MCHP_STATE_OK;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0) {
		/* Disable XOSC0 */
		regs->OSCCTRL_XOSCCTRL[0] &= ~OSCCTRL_XOSCCTRL_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1) {
		/* Disable XOSC1 */
		regs->OSCCTRL_XOSCCTRL[1] &= ~OSCCTRL_XOSCCTRL_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
		/* Disable DFLL */
		regs->OSCCTRL_DFLLCTRLA &= ~OSCCTRL_DFLLCTRLA_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL0) {
		/* Disable FDPLL0 */
		regs->DPLL[0].OSCCTRL_DPLLCTRLA &= ~OSCCTRL_DPLLCTRLA_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL1) {
		/* Disable FDPLL1 */
		regs->DPLL[1].OSCCTRL_DPLLCTRLA &= ~OSCCTRL_DPLLCTRLA_ENABLE_Msk;
	} else {
		/* Unsupported clock, set state to NO_SUPPORT */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Enables the specified oscillator or PLL.
 *
 * This function takes in the clock register structure and a clock identifier,
 * and enables the specified oscillator or PLL by setting its corresponding
 * enable bit.
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The identifier for the clock to enable.
 *
 * @return The state of the operation (either `CLOCK_CONTROL_MCHP_STATE_OK` or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`).
 */
static inline clock_control_mchp_state_t hal_mchp_oscctrl_on(oscctrl_registers_t *regs,
							     uint32_t clk)
{
	clock_control_mchp_state_t state;

	state = CLOCK_CONTROL_MCHP_STATE_OK;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0) {
		/* Enable XOSC0 */
		regs->OSCCTRL_XOSCCTRL[0] |= OSCCTRL_XOSCCTRL_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1) {
		/* Enable XOSC1 */
		regs->OSCCTRL_XOSCCTRL[1] |= OSCCTRL_XOSCCTRL_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
		/* Enable DFLL */
		regs->OSCCTRL_DFLLCTRLA |= OSCCTRL_DFLLCTRLA_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL0) {
		/* Enable FDPLL0 */
		regs->DPLL[0].OSCCTRL_DPLLCTRLA |= OSCCTRL_DPLLCTRLA_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL1) {
		/* Enable FDPLL1 */
		regs->DPLL[1].OSCCTRL_DPLLCTRLA |= OSCCTRL_DPLLCTRLA_ENABLE_Msk;
	} else {
		/* Unsupported clock, set state to NO_SUPPORT */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	return state;
}

/**
 * @brief Checks the status of the specified oscillator or PLL.
 *
 * This function checks if the specified oscillator or PLL is enabled and its
 * operational state. It verifies the corresponding control registers to
 * determine if the clock is on, off, or in the process of starting.
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The identifier for the clock whose status is to be checked.
 *
 * @return The state of the clock (either `CLOCK_CONTROL_MCHP_STATE_ON`,
 * `CLOCK_CONTROL_MCHP_STATE_OFF`, `CLOCK_CONTROL_MCHP_STATE_STARTING`, or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`).
 */
static inline clock_control_mchp_state_t hal_mchp_oscctrl_status(oscctrl_registers_t *regs,
								 uint32_t clk)
{
	clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through XOSC clock if the clock is present and enabled */
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			/* Check if XOSC clock is enabled */
			if ((regs->OSCCTRL_XOSCCTRL[hal_mchp_id_int_map_oscctrl_xosc[index].id] &
			     OSCCTRL_XOSCCTRL_ENABLE_Msk) == OSCCTRL_XOSCCTRL_ENABLE_Msk) {
				state = CLOCK_CONTROL_MCHP_STATE_ON;
			} else {
				state = CLOCK_CONTROL_MCHP_STATE_OFF;
			}
			break;
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match found in XOSC Gen, check DFLL Gen */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			/* Check if DFLL is enabled */
			if ((regs->OSCCTRL_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ENABLE_Msk) ==
			    OSCCTRL_DFLLCTRLA_ENABLE_Msk) {
				state = CLOCK_CONTROL_MCHP_STATE_ON;
			} else {
				state = CLOCK_CONTROL_MCHP_STATE_OFF;
			}
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match found in DFLL Gen, check DPLL Gen */
		for (index = 0; index < HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE; index++) {
			if (clk == hal_mchp_id_map_oscctrl_dpll[index].clk) {
				/* Check if DPLL is enabled */
				if ((regs->DPLL[hal_mchp_id_map_oscctrl_dpll[index].id]
					     .OSCCTRL_DPLLCTRLA &
				     OSCCTRL_DPLLCTRLA_ENABLE_Msk) ==
				    OSCCTRL_DPLLCTRLA_ENABLE_Msk) {
					/* Check if DPLL synchronization is complete */
					if ((regs->DPLL[hal_mchp_id_map_oscctrl_dpll[index].id]
						     .OSCCTRL_DPLLSYNCBUSY &
					     OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk) == 0) {
						/* Check if DPLL is locked */
						if ((regs->DPLL[hal_mchp_id_map_oscctrl_dpll[index]
									.id]
							     .OSCCTRL_DPLLSTATUS &
						     OSCCTRL_DPLLSTATUS_LOCK_Msk) ==
						    OSCCTRL_DPLLSTATUS_LOCK_Msk) {
							state = CLOCK_CONTROL_MCHP_STATE_ON;
						} else {
							state = CLOCK_CONTROL_MCHP_STATE_STARTING;
						}
					} else {
						state = CLOCK_CONTROL_MCHP_STATE_STARTING;
					}
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
 * @brief Enables interrupts for the specified oscillator or PLL.
 *
 * This function enables the interrupt for the specified oscillator or PLL by
 * setting the corresponding interrupt enable bit in the register. If the clock
 * is found, the interrupt is enabled, otherwise, a "no support" state is
 * returned.
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The identifier for the clock whose interrupt is to be enabled.
 *
 * @return The state of the operation (either `CLOCK_CONTROL_MCHP_STATE_OK` or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`).
 */
static inline clock_control_mchp_state_t
hal_mchp_oscctrl_enable_interrupt(oscctrl_registers_t *regs, uint32_t clk)
{
	clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through XOSC clock list and enable interrupt */
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			/* Enable interrupt for the selected XOSC */
			regs->OSCCTRL_INTENSET = hal_mchp_id_int_map_oscctrl_xosc[index].set_msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match found in XOSC Gen, check DFLL Gen */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			/* Enable DFLL interrupt */
			regs->OSCCTRL_INTENSET = OSCCTRL_INTENSET_DFLLRDY_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		}
	}

	return state;
}

/**
 * @brief Clears the interrupt flag for the specified oscillator or PLL.
 *
 * This function clears the interrupt flag for the specified oscillator or PLL
 * by writing to the interrupt flag register. If the clock is found, the
 * interrupt flag is cleared, otherwise, a "no support" state is returned.
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The identifier for the clock whose interrupt flag is to be
 * cleared.
 *
 * @return The state of the operation (either `CLOCK_CONTROL_MCHP_STATE_OK` or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`).
 */
static inline clock_control_mchp_state_t hal_mchp_oscctrl_clear_interrupt(oscctrl_registers_t *regs,
									  uint32_t clk)
{
	clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through XOSC clock list and clear interrupt flag */
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			/* Clear interrupt flag for the selected XOSC */
			regs->OSCCTRL_INTFLAG = hal_mchp_id_int_map_oscctrl_xosc[index].flag_msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match found in XOSC Gen, check DFLL Gen */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			/* Clear DFLL interrupt flag */
			regs->OSCCTRL_INTFLAG = OSCCTRL_INTFLAG_DFLLRDY_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		}
	}

	return state;
}

/**
 * @brief Disables the interrupt for the specified oscillator or PLL.
 *
 * This function disables the interrupt for the specified oscillator or PLL by
 * clearing the corresponding interrupt enable bit in the register. If the clock
 * is found, the interrupt is disabled, otherwise, a "no support" state is
 * returned.
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The identifier for the clock whose interrupt is to be disabled.
 *
 * @return The state of the operation (either `CLOCK_CONTROL_MCHP_STATE_OK` or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`).
 */
static inline clock_control_mchp_state_t
hal_mchp_oscctrl_disable_interrupt(oscctrl_registers_t *regs, uint32_t clk)
{
	clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Iterate through XOSC clock list and disable interrupt */
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			/* Disable interrupt for the selected XOSC */
			regs->OSCCTRL_INTENCLR = hal_mchp_id_int_map_oscctrl_xosc[index].clr_msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match found in XOSC Gen, check DFLL Gen */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			/* Disable DFLL interrupt */
			regs->OSCCTRL_INTENCLR = OSCCTRL_INTENCLR_DFLLRDY_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		}
	}

	return state;
}

/**
 * @brief Retrieves the frequency rate of the specified oscillator or PLL.
 *
 * This function checks the specified clock (XOSC, DFLL, DPLL) and retrieves the
 * frequency rate associated with it. Depending on the clock type, it computes
 * the frequency based on the source settings, multiplication factor, and
 * divider values.
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The identifier for the clock whose frequency rate is to be
 * retrieved.
 * @param src Pointer to the clock control source structure where the frequency
 * rate is stored.
 *
 * @return The state of the operation (either `CLOCK_CONTROL_MCHP_STATE_OK`,
 * `CLOCK_CONTROL_MCHP_STATE_USER_FREQ`, `CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE`,
 * or `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`).
 */
static inline clock_control_mchp_state_t
hal_mchp_oscctrl_get_rate(oscctrl_registers_t *regs, uint32_t clk, clock_control_mchp_source_t *src)
{
	clock_control_mchp_state_t state;
	uint32_t index;
	uint32_t divider;
	uint32_t mul_frac;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Check if the clock is an XOSC and retrieve the frequency */
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			/* Check if the XOSC is enabled and set the frequency source */
			if ((regs->OSCCTRL_XOSCCTRL[index] & OSCCTRL_XOSCCTRL_XTALEN_Msk) ==
			    OSCCTRL_XOSCCTRL_XTALEN_Msk) {
				src->user_freq_id = CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_XOSC;
				state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
			} else {
				src->user_freq_id = CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_XOSC;
				state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
			}
			break;
		}
	}

	/* Check if the clock is DFLL */
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Not an XOSC clock */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			/* DFLL in closed loop */
			if ((regs->OSCCTRL_DFLLCTRLB & OSCCTRL_DFLLCTRLB_MODE_Msk) ==
			    OSCCTRL_DFLLCTRLB_MODE_Msk) {
				src->mul = src->mul *
					   ((regs->OSCCTRL_DFLLMUL & OSCCTRL_DFLLMUL_MUL_Msk) >>
					    OSCCTRL_DFLLMUL_MUL_Pos);
				src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_DFLL48;
				src->target_clk_addr = GCLK_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
			} else {
				/* DFLL in open loop */
				src->user_freq_id = CLOCK_CONTROL_MCHP_USER_DEFINED_FREQUENCY_DFLL;
				state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
			}
		}
	}

	/* Check if the clock is DPLL */
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Not DFLL clock */
		for (index = 0; index < HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE; index++) {
			if (clk == hal_mchp_id_map_oscctrl_dpll[index].clk) {
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				/* Calculate DPLL multiplication factor */
				mul_frac = (((regs->DPLL[index].OSCCTRL_DPLLRATIO &
					      OSCCTRL_DPLLRATIO_LDR_Msk) >>
					     OSCCTRL_DPLLRATIO_LDR_Pos) +
					    1) *
					   (10 ^ src->mul_frac_res);
				src->mul_frac = mul_frac + ((((regs->DPLL[index].OSCCTRL_DPLLRATIO &
							       OSCCTRL_DPLLRATIO_LDRFRAC_Msk) >>
							      OSCCTRL_DPLLRATIO_LDRFRAC_Pos) *
							     (10 ^ src->mul_frac_res)) /
							    32);

				/* Determine target clock based on reference clock of DPLL */
				switch (regs->DPLL[index].OSCCTRL_DPLLCTRLB &
					OSCCTRL_DPLLCTRLB_REFCLK_Msk) {
				case OSCCTRL_DPLLCTRLB_REFCLK_GCLK:
					if (index == 0) {
						src->target_clk =
							CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_FDPLL0;
					} else {
						src->target_clk =
							CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_FDPLL1;
					}
					src->target_clk_addr = GCLK_BASE_ADDRESS;
					break;
				case OSCCTRL_DPLLCTRLB_REFCLK_XOSC32:
					src->target_clk = CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K;
					src->target_clk_addr = OSC32KCTRL_BASE_ADDRESS;
					break;
				case OSCCTRL_DPLLCTRLB_REFCLK_XOSC0:
					divider = (((regs->DPLL[index].OSCCTRL_DPLLCTRLB &
						     OSCCTRL_DPLLCTRLB_DIV_Msk) >>
						    OSCCTRL_DPLLCTRLB_DIV_Pos) +
						   1) *
						  2;
					src->target_clk = CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0;
					src->target_clk_addr = OSCCTRL_BASE_ADDRESS;
					src->div = src->div * divider;
					break;
				case OSCCTRL_DPLLCTRLB_REFCLK_XOSC1:
					divider = (((regs->DPLL[index].OSCCTRL_DPLLCTRLB &
						     OSCCTRL_DPLLCTRLB_DIV_Msk) >>
						    OSCCTRL_DPLLCTRLB_DIV_Pos) +
						   1) *
						  2;
					src->div = src->div * divider;
					src->target_clk = CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1;
					src->target_clk_addr = OSCCTRL_BASE_ADDRESS;
					break;
				default:
					src->frequency = 0;
					state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
					break;
				}
				break;
			}
		}
	}
	return state;
}

/**
 * @brief Sets the rate (frequency settings) for a given clock source.
 *
 * This function configures the rate for the specified clock source (DFLL or
 * DPLL). It adjusts the DFLL and DPLL registers based on the provided rate
 * parameters, including mode (closed/open loop for DFLL), multiplier factors,
 * and DPLL parameters.
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The identifier for the clock whose rate is to be set.
 * @param rate Pointer to the clock control rate structure that contains the
 * rate settings.
 *
 * @return The state of the operation (either `CLOCK_CONTROL_MCHP_STATE_OK` or
 * `CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE`).
 */
static inline clock_control_mchp_state_t
hal_mchp_oscctrl_set_rate(oscctrl_registers_t *regs, uint32_t clk, clock_control_mchp_rate_t *rate)
{
	uint32_t index;
	clock_control_mchp_state_t state;
	/* Pointer to the mclk_rate field in the rate structure. */
	clock_control_mchp_oscctrl_rate_t *oscctrl_rate = rate->oscctrl_rate;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

	/* Check if the clock is DFLL */
	if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
		/* Set DFLL mode (closed loop or open loop) */
		if (oscctrl_rate->is_dfll_closed_loop == true) {
			regs->OSCCTRL_DFLLCTRLB |= OSCCTRL_DFLLCTRLB_MODE_Msk;
		} else {
			regs->OSCCTRL_DFLLCTRLB &= ~OSCCTRL_DFLLCTRLB_MODE_Msk;
		}

		/* Set the DFLL multiplier factor */
		regs->OSCCTRL_DFLLMUL = (regs->OSCCTRL_DFLLMUL & ~OSCCTRL_DFLLMUL_MUL_Msk) |
					OSCCTRL_DFLLMUL_MUL(oscctrl_rate->dfll_mul_factor);

		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Check if the clock is a DPLL and update DPLL parameters */
		for (index = 0; index < HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE; index++) {
			if (clk == hal_mchp_id_map_oscctrl_dpll[index].clk) {
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;

				/* Set DPLL LDR (Multiplier) and LDRFRAC (Fractional Multiplier)
				 */
				regs->DPLL[index].OSCCTRL_DPLLRATIO =
					(regs->DPLL[index].OSCCTRL_DPLLRATIO &
					 ~(OSCCTRL_DPLLRATIO_LDR_Msk |
					   OSCCTRL_DPLLRATIO_LDRFRAC_Msk)) |
					(OSCCTRL_DPLLRATIO_LDR(oscctrl_rate->dpll_ldr[index]) |
					 OSCCTRL_DPLLRATIO_LDRFRAC(
						 oscctrl_rate->dpll_ldrfrac[index]));

				/* Set DPLL divider */
				regs->DPLL[index].OSCCTRL_DPLLCTRLB =
					(regs->DPLL[index].OSCCTRL_DPLLCTRLB &
					 ~OSCCTRL_DPLLCTRLB_DIV_Msk) |
					OSCCTRL_DPLLCTRLB_DIV(oscctrl_rate->dpll_xosc_div[index]);

				state = CLOCK_CONTROL_MCHP_STATE_OK;
				break;
			}
		}
	}

	return state;
}

/**
 * @brief Configures the oscillator control registers for a specified clock.
 *
 * This function configures the oscillator control settings for various clock
 * sources. If no clock is specified (clk == 0), it configures all clocks;
 * otherwise, it configures only the specified clock source (XOSC, DFLL, or
 * DPLL).
 *
 * @param regs Pointer to the oscillator control registers.
 * @param clk The clock identifier to configure. If 0, configure all clocks.
 * @param configuration Pointer to the clock control configuration structure
 * containing settings.
 *
 * @return The state of the operation (either `CLOCK_CONTROL_MCHP_STATE_OK` or
 * `CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT`).
 */
static inline clock_control_mchp_state_t
hal_mchp_oscctrl_configure(oscctrl_registers_t *regs, uint32_t clk,
			   clock_control_mchp_configuration_t *configuration)
{
	clock_control_mchp_state_t state;
	uint32_t index;

	/* Pointer to the oscctrl_configuration in the configuration structure. */
	clock_control_mchp_oscctrl_configuration_t *oscctrl_configuration =
		configuration->oscctrl_configuration;

	if (clk == 0) {
		/* No specific clock given, configure all clocks. */
		for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
			regs->OSCCTRL_XOSCCTRL[index] =
				OSCCTRL_XOSCCTRL_Msk & oscctrl_configuration->xoscctrl[index];
		}

		/* Configure DFLL control registers. */
		regs->OSCCTRL_DFLLCTRLA = OSCCTRL_DFLLCTRLA_Msk & oscctrl_configuration->dfllctrla;
		regs->OSCCTRL_DFLLCTRLB = OSCCTRL_DFLLCTRLB_Msk & oscctrl_configuration->dfllctrlb;
		regs->OSCCTRL_DFLLVAL = OSCCTRL_DFLLVAL_Msk & oscctrl_configuration->dfllval;
		regs->OSCCTRL_DFLLMUL = OSCCTRL_DFLLMUL_Msk & oscctrl_configuration->dfllmul;

		/* Configure DPLL control registers. */
		for (index = 0; index < HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE; index++) {
			regs->DPLL[index].OSCCTRL_DPLLCTRLA =
				OSCCTRL_DPLLCTRLA_Msk & oscctrl_configuration->dpllctrla[index];
			regs->DPLL[index].OSCCTRL_DPLLRATIO =
				OSCCTRL_DPLLRATIO_Msk & oscctrl_configuration->dpllctrla[index];
			regs->DPLL[index].OSCCTRL_DPLLCTRLB =
				OSCCTRL_DPLLCTRLB_Msk & oscctrl_configuration->dpllctrlb[index];
		}
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

		/* Check and configure XOSC clocks. */
		for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
			if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
				regs->OSCCTRL_XOSCCTRL[index] =
					OSCCTRL_XOSCCTRL_Msk &
					oscctrl_configuration->xoscctrl[index];
				state = CLOCK_CONTROL_MCHP_STATE_OK;
				break;
			}
		}

		/* Check and configure DFLL clock. */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
				regs->OSCCTRL_DFLLCTRLA =
					OSCCTRL_DFLLCTRLA_Msk & oscctrl_configuration->dfllctrla;
				regs->OSCCTRL_DFLLCTRLB =
					OSCCTRL_DFLLCTRLB_Msk & oscctrl_configuration->dfllctrlb;
				regs->OSCCTRL_DFLLVAL =
					OSCCTRL_DFLLVAL_Msk & oscctrl_configuration->dfllval;
				regs->OSCCTRL_DFLLMUL =
					OSCCTRL_DFLLMUL_Msk & oscctrl_configuration->dfllmul;
				state = CLOCK_CONTROL_MCHP_STATE_OK;
			}
		}

		/* Check and configure DPLL clocks. */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			for (index = 0; index < HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE; index++) {
				if (clk == hal_mchp_id_map_oscctrl_dpll[index].clk) {
					regs->DPLL[index].OSCCTRL_DPLLCTRLA =
						OSCCTRL_DPLLCTRLA_Msk &
						oscctrl_configuration->dpllctrla[index];
					regs->DPLL[index].OSCCTRL_DPLLRATIO =
						OSCCTRL_DPLLRATIO_Msk &
						oscctrl_configuration->dpllctrla[index];
					regs->DPLL[index].OSCCTRL_DPLLCTRLB =
						OSCCTRL_DPLLCTRLB_Msk &
						oscctrl_configuration->dpllctrlb[index];
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					break;
				}
			}
		}
	}

	return state;
}

#endif /* MICROCHIP_HAL_MCHP_CLOCK_OSCCTRL_U2401_H_ */
