/*
 * Copyright (c) [2024] [Microchip Technology Inc.]
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef PERIPHERALS_OSCCTRL_U2401_HAL_MCHP_OSCCTRL_H_
#define PERIPHERALS_OSCCTRL_U2401_HAL_MCHP_OSCCTRL_H_

/* XOSC Generators Clocks id */
static const struct clock_control_mchp_id_int_map_t hal_mchp_id_int_map_oscctrl_xosc[] = {
	{CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0, 0, OSCCTRL_INTENSET_XOSCRDY0_Msk,
	 OSCCTRL_INTENCLR_XOSCRDY0_Msk, OSCCTRL_INTFLAG_XOSCRDY0_Msk},
	{CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1, 1, OSCCTRL_INTENSET_XOSCRDY0_Msk,
	 OSCCTRL_INTENCLR_XOSCRDY0_Msk, OSCCTRL_INTFLAG_XOSCRDY0_Msk},
};
#define HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE (ARRAY_SIZE(hal_mchp_id_int_map_oscctrl_xosc))

/* XOSC Generators Clocks id */
static const struct clock_control_mchp_id_map_t hal_mchp_id_map_oscctrl_dpll[] = {
	{CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL0, 0},
	{CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL1, 1},
};
#define HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE (ARRAY_SIZE(hal_mchp_id_map_oscctrl_dpll))

static inline enum clock_control_mchp_state_t hal_mchp_oscctrl_off(oscctrl_registers_t *regs,
								   uint32_t clk)
{
	enum clock_control_mchp_state_t state;

	state = CLOCK_CONTROL_MCHP_STATE_OFF;
	if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0) {
		regs->OSCCTRL_XOSCCTRL[0] &= ~OSCCTRL_XOSCCTRL_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1) {
		regs->OSCCTRL_XOSCCTRL[1] &= ~OSCCTRL_XOSCCTRL_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
		regs->OSCCTRL_DFLLCTRLA &= ~OSCCTRL_DFLLCTRLA_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL0) {
		regs->DPLL[0].OSCCTRL_DPLLCTRLA &= ~OSCCTRL_DPLLCTRLA_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL1) {
		regs->DPLL[1].OSCCTRL_DPLLCTRLA &= ~OSCCTRL_DPLLCTRLA_ENABLE_Msk;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_oscctrl_on(oscctrl_registers_t *regs,
								  uint32_t clk)
{
	enum clock_control_mchp_state_t state;

	state = CLOCK_CONTROL_MCHP_STATE_ON;
	if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0) {
		regs->OSCCTRL_XOSCCTRL[0] |= OSCCTRL_XOSCCTRL_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1) {
		regs->OSCCTRL_XOSCCTRL[1] |= OSCCTRL_XOSCCTRL_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
		regs->OSCCTRL_DFLLCTRLA |= OSCCTRL_DFLLCTRLA_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL0) {
		regs->DPLL[0].OSCCTRL_DPLLCTRLA |= OSCCTRL_DPLLCTRLA_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL1) {
		regs->DPLL[1].OSCCTRL_DPLLCTRLA |= OSCCTRL_DPLLCTRLA_ENABLE_Msk;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_oscctrl_status(oscctrl_registers_t *regs,
								      uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			if ((regs->OSCCTRL_XOSCCTRL[hal_mchp_id_int_map_oscctrl_xosc[index].id] &
			     OSCCTRL_XOSCCTRL_ENABLE_Msk) == OSCCTRL_XOSCCTRL_ENABLE_Msk) {
				state = CLOCK_CONTROL_MCHP_STATE_ON;
			} else {
				state = CLOCK_CONTROL_MCHP_STATE_OFF;
			}
			break;
		} else {
			/* Nothing to do */
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match in XOSC Gen */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			if ((regs->OSCCTRL_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ENABLE_Msk) ==
			    OSCCTRL_DFLLCTRLA_ENABLE_Msk) {
				state = CLOCK_CONTROL_MCHP_STATE_ON;
			} else {
				state = CLOCK_CONTROL_MCHP_STATE_OFF;
			}
		} else {
			/* Nothing to do */
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match in DFLL Gen */
		for (index = 0; index < HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE; index++) {
			if (clk == hal_mchp_id_map_oscctrl_dpll[index].clk) {
				if ((regs->DPLL[hal_mchp_id_map_oscctrl_dpll[index].id]
					     .OSCCTRL_DPLLCTRLA &
				     OSCCTRL_DPLLCTRLA_ENABLE_Msk) ==
				    OSCCTRL_DPLLCTRLA_ENABLE_Msk) {
					if ((regs->DPLL[hal_mchp_id_map_oscctrl_dpll[index].id]
						     .OSCCTRL_DPLLSYNCBUSY &
					     OSCCTRL_DPLLSYNCBUSY_ENABLE_Msk) == 0) {
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
			} else {
				/* Nothing to do */
			}
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_oscctrl_enable_interrupt(oscctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			regs->OSCCTRL_INTENSET = hal_mchp_id_int_map_oscctrl_xosc[index].set_msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		} else {
			/* Nothing to do */
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match in XOSC Gen */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			regs->OSCCTRL_INTENSET = OSCCTRL_INTENSET_DFLLRDY_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		} else {
			/* Nothing to do */
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_oscctrl_clear_interrupt(oscctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			regs->OSCCTRL_INTFLAG = hal_mchp_id_int_map_oscctrl_xosc[index].flag_msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		} else {
			/* Nothing to do */
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match in XOSC Gen */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			regs->OSCCTRL_INTFLAG = OSCCTRL_INTFLAG_DFLLRDY_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		} else {
			/* Nothing to do */
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_oscctrl_disable_interrupt(oscctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			regs->OSCCTRL_INTENCLR = hal_mchp_id_int_map_oscctrl_xosc[index].clr_msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		} else {
			/* Nothing to do */
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match in XOSC Gen */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			regs->OSCCTRL_INTENCLR = OSCCTRL_INTENCLR_DFLLRDY_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		} else {
			/* Nothing to do */
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_oscctrl_get_rate(oscctrl_registers_t *regs, uint32_t clk,
			  volatile struct clock_control_mchp_src_t *src)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;
	uint32_t divider;
	uint32_t mul_frac;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_ID_INT_MAP_OSCCTRL_XOSC_SIZE; index++) {
		if (clk == hal_mchp_id_int_map_oscctrl_xosc[index].clk) {
			if ((regs->OSCCTRL_XOSCCTRL[index] & OSCCTRL_XOSCCTRL_XTALEN_Msk) ==
			    OSCCTRL_XOSCCTRL_XTALEN_Msk) {
				src->user_freq_id = CLOCK_CONTROL_MCHP_USER_FREQUENCY_XOSC;
				state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
			} else {
				src->user_freq_id = CLOCK_CONTROL_MCHP_USER_FREQUENCY_XOSC;
				state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
			}
			break;
		} else {
			/* continue with next clk */
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Not an XOSC clock */
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			if ((regs->OSCCTRL_DFLLCTRLB & OSCCTRL_DFLLCTRLB_MODE_Msk) ==
			    OSCCTRL_DFLLCTRLB_MODE_Msk) {
				/* DFLL in closed loop */
				src->mul = src->mul *
					   ((regs->OSCCTRL_DFLLMUL & OSCCTRL_DFLLMUL_MUL_Msk) >>
					    OSCCTRL_DFLLMUL_MUL_Pos);
				src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_DFLL48;
				src->target_clk_addr = GCLK_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
			} else {
				/* DFLL in Open loop */
				src->user_freq_id = CLOCK_CONTROL_MCHP_USER_FREQUENCY_DFLL;
				state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
			}
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Not DFLL clock */
		for (index = 0; index < HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE; index++) {
			if (clk == hal_mchp_id_map_oscctrl_dpll[index].clk) {
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
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
			} else {
				/* continue with next clk */
			}
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_oscctrl_set_rate(oscctrl_registers_t *regs, uint32_t clk,
			  struct clock_control_mchp_oscctrl_rate_t *clk_rate)
{
	uint32_t index;
	enum clock_control_mchp_state_t state;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
		if (clk_rate->is_dfll_closed_loop == true) {
			regs->OSCCTRL_DFLLCTRLB |= OSCCTRL_DFLLCTRLB_MODE_Msk;
		} else {
			regs->OSCCTRL_DFLLCTRLB &= ~OSCCTRL_DFLLCTRLB_MODE_Msk;
		}
		regs->OSCCTRL_DFLLMUL = (regs->OSCCTRL_DFLLMUL & ~OSCCTRL_DFLLMUL_MUL_Msk) |
					OSCCTRL_DFLLMUL_MUL(clk_rate->dfll_mul_factor);
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		for (index = 0; index < HAL_MCHP_ID_MAP_OSCCTRL_DPLL_SIZE; index++) {
			if (clk == hal_mchp_id_map_oscctrl_dpll[index].clk) {
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				regs->DPLL[index].OSCCTRL_DPLLRATIO =
					(regs->DPLL[index].OSCCTRL_DPLLRATIO &
					 ~(OSCCTRL_DPLLRATIO_LDR_Msk |
					   OSCCTRL_DPLLRATIO_LDRFRAC_Msk)) |
					(OSCCTRL_DPLLRATIO_LDR(clk_rate->dpll_ldr[index]) |
					 OSCCTRL_DPLLRATIO_LDRFRAC(clk_rate->dpll_ldrfrac[index]));
				regs->DPLL[index].OSCCTRL_DPLLCTRLB =
					(regs->DPLL[index].OSCCTRL_DPLLCTRLB &
					 ~OSCCTRL_DPLLCTRLB_DIV_Msk) |
					OSCCTRL_DPLLCTRLB_DIV(clk_rate->dpll_xosc_div[index]);
				state = CLOCK_CONTROL_MCHP_STATE_OK;
				break;
			} else {
				/* continue with next clk */
			}
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_oscctrl_configure(oscctrl_registers_t *regs, uint32_t clk,
			   struct clock_control_mchp_oscctrl_configuration_t *configuration)
{
	enum clock_control_mchp_state_t state;

	if (clk == 0) {
		/* clk is not given */
		regs->OSCCTRL_XOSCCTRL[0] = OSCCTRL_XOSCCTRL_Msk & configuration->xoscctrl[0];
		regs->OSCCTRL_XOSCCTRL[1] = OSCCTRL_XOSCCTRL_Msk & configuration->xoscctrl[1];
		regs->OSCCTRL_DFLLCTRLA = OSCCTRL_DFLLCTRLA_Msk & configuration->dfllctrla;
		regs->OSCCTRL_DFLLCTRLB = OSCCTRL_DFLLCTRLB_Msk & configuration->dfllctrlb;
		regs->OSCCTRL_DFLLVAL = OSCCTRL_DFLLVAL_Msk & configuration->dfllval;
		regs->OSCCTRL_DFLLMUL = OSCCTRL_DFLLMUL_Msk & configuration->dfllmul;
		regs->DPLL[0].OSCCTRL_DPLLCTRLA =
			OSCCTRL_DPLLCTRLA_Msk & configuration->dpllctrla[0];
		regs->DPLL[1].OSCCTRL_DPLLCTRLA =
			OSCCTRL_DPLLCTRLA_Msk & configuration->dpllctrla[0];
		regs->DPLL[0].OSCCTRL_DPLLRATIO =
			OSCCTRL_DPLLRATIO_Msk & configuration->dpllctrla[0];
		regs->DPLL[1].OSCCTRL_DPLLCTRLA =
			OSCCTRL_DPLLRATIO_Msk & configuration->dpllctrla[0];
		regs->DPLL[0].OSCCTRL_DPLLCTRLB =
			OSCCTRL_DPLLCTRLB_Msk & configuration->dpllctrlb[0];
		regs->DPLL[1].OSCCTRL_DPLLCTRLB =
			OSCCTRL_DPLLCTRLB_Msk & configuration->dpllctrlb[0];
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_OK;
		if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC0) {
			regs->OSCCTRL_XOSCCTRL[0] =
				OSCCTRL_XOSCCTRL_Msk & configuration->xoscctrl[0];
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_XOSC1) {
			regs->OSCCTRL_XOSCCTRL[1] =
				OSCCTRL_XOSCCTRL_Msk & configuration->xoscctrl[1];
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_DFLL) {
			regs->OSCCTRL_DFLLCTRLA = OSCCTRL_DFLLCTRLA_Msk & configuration->dfllctrla;
			regs->OSCCTRL_DFLLCTRLB = OSCCTRL_DFLLCTRLB_Msk & configuration->dfllctrlb;
			regs->OSCCTRL_DFLLVAL = OSCCTRL_DFLLVAL_Msk & configuration->dfllval;
			regs->OSCCTRL_DFLLMUL = OSCCTRL_DFLLMUL_Msk & configuration->dfllmul;
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL0) {
			regs->DPLL[0].OSCCTRL_DPLLCTRLA =
				OSCCTRL_DPLLCTRLA_Msk & configuration->dpllctrla[0];
			regs->DPLL[0].OSCCTRL_DPLLRATIO =
				OSCCTRL_DPLLRATIO_Msk & configuration->dpllctrla[0];
			regs->DPLL[0].OSCCTRL_DPLLCTRLB =
				OSCCTRL_DPLLCTRLB_Msk & configuration->dpllctrlb[0];
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSCCTRL_FDPLL1) {
			regs->DPLL[1].OSCCTRL_DPLLCTRLA =
				OSCCTRL_DPLLCTRLA_Msk & configuration->dpllctrla[0];
			regs->DPLL[1].OSCCTRL_DPLLCTRLA =
				OSCCTRL_DPLLRATIO_Msk & configuration->dpllctrla[0];
			regs->DPLL[1].OSCCTRL_DPLLCTRLB =
				OSCCTRL_DPLLCTRLB_Msk & configuration->dpllctrlb[0];
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		}
	}
	return state;
}

#endif /* PERIPHERALS_OSCCTRL_U2401_HAL_MCHP_OSCCTRL_H_ */
