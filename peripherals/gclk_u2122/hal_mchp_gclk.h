/*
 * Copyright (c) [2024] [Microchip Technology Inc.]
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef PERIPHERALS_GCLK_U2122_HAL_MCHP_GCLK_H_
#define PERIPHERALS_GCLK_U2122_HAL_MCHP_GCLK_H_

/* GCLK Generators Clocks sync */
static const struct clock_control_mchp_sync_map_t hal_mchp_sync_map_gclk_gen[] = {
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
#define HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE (ARRAY_SIZE(hal_mchp_sync_map_gclk_gen))

/* GCLK Generators Clocks sync */
static const struct clock_control_mchp_id_map_t hal_mchp_id_map_gclk_periph[] = {
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_DFLL48, 0},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_FDPLL0, 1},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_FDPLL1, 2},
	{CLOCK_CONTROL_MCHP_V1_GCLK_OSCCTRL_SLOW, 3},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EIC, 4},
	{CLOCK_CONTROL_MCHP_V1_GCLK_FREQM_MSR, 5},
	{CLOCK_CONTROL_MCHP_V1_GCLK_FREQM_REF, 6},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM0_CORE, 7},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM1_CORE, 8},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC0_TC1, 9},
	{CLOCK_CONTROL_MCHP_V1_GCLK_USB, 10},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS0, 11},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS1, 12},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS2, 13},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS3, 14},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS4, 15},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS5, 16},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS6, 17},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS7, 18},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS8, 19},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS9, 20},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS10, 21},
	{CLOCK_CONTROL_MCHP_V1_GCLK_EVSYS11, 22},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM2_CORE, 23},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM3_CORE, 24},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TCC0_TCC1, 25},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC2_TC3, 26},
	{CLOCK_CONTROL_MCHP_V1_GCLK_CAN0, 27},
	{CLOCK_CONTROL_MCHP_V1_GCLK_CAN1, 28},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TCC2_TCC3, 29},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC4_TC5, 30},
	{CLOCK_CONTROL_MCHP_V1_GCLK_PDEC, 31},
	{CLOCK_CONTROL_MCHP_V1_GCLK_AC, 32},
	{CLOCK_CONTROL_MCHP_V1_GCLK_CCL, 33},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM4_CORE, 34},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM5_CORE, 35},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM6_CORE, 36},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SERCOM7_CORE, 37},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TCC4, 38},
	{CLOCK_CONTROL_MCHP_V1_GCLK_TC6_TC7, 39},
	{CLOCK_CONTROL_MCHP_V1_GCLK_ADC0, 40},
	{CLOCK_CONTROL_MCHP_V1_GCLK_ADC1, 41},
	{CLOCK_CONTROL_MCHP_V1_GCLK_DAC, 42},
	{CLOCK_CONTROL_MCHP_V1_GCLK_I2S0, 43},
	{CLOCK_CONTROL_MCHP_V1_GCLK_I2S1, 44},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SDHC0, 45},
	{CLOCK_CONTROL_MCHP_V1_GCLK_SDHC1, 46},
	{CLOCK_CONTROL_MCHP_V1_GCLK_CM4_TRACE, 47},
};
#define HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE (ARRAY_SIZE(hal_mchp_id_map_gclk_periph))

static inline enum clock_control_mchp_state_t hal_mchp_gclk_off(gclk_registers_t *regs,
								uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		if (clk == CLOCK_CONTROL_MCHP_V1_GCLK_GEN0) {
			/* GCLK off is not supported */
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
			break;
		} else if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			regs->GCLK_GENCTRL[index] &= ~GCLK_GENCTRL_GENEN_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
			break;
		} else {
			/* Continue with next clk */
		}
	}
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match in GCLK Gen */
		for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
			if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
				regs->GCLK_PCHCTRL[hal_mchp_id_map_gclk_periph[index].id] &=
					~GCLK_PCHCTRL_CHEN_Msk;
				state = CLOCK_CONTROL_MCHP_STATE_OFF;
				break;
			} else {
				/* Continue with next clk */
			}
		}
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_gclk_on(gclk_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		if (clk == CLOCK_CONTROL_MCHP_V1_GCLK_GEN0) {
			/* GCLK is always on */
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
			break;
		} else if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			regs->GCLK_GENCTRL[index] |= GCLK_GENCTRL_GENEN_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_ON;
			break;
		} else {
			/* Continue with next clk */
		}
	}
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match in GCLK Gen */
		for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
			if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
				regs->GCLK_PCHCTRL[hal_mchp_id_map_gclk_periph[index].id] |=
					GCLK_PCHCTRL_CHEN_Msk;
				state = CLOCK_CONTROL_MCHP_STATE_ON;
				break;
			} else {
				/* Continue with next clk */
			}
		}
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_gclk_status(gclk_registers_t *regs,
								   uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			if ((regs->GCLK_GENCTRL[index] & GCLK_GENCTRL_GENEN_Msk) ==
			    GCLK_GENCTRL_GENEN_Msk) {
				/* generator is on */
				if ((regs->GCLK_SYNCBUSY &
				     hal_mchp_sync_map_gclk_gen[index].sync) ==
				    hal_mchp_sync_map_gclk_gen[index].sync) {
					state = CLOCK_CONTROL_MCHP_STATE_STARTING;
				} else {
					/* generator is on */
					state = CLOCK_CONTROL_MCHP_STATE_ON;
				}
			} else {
				/* generator is off */
				state = CLOCK_CONTROL_MCHP_STATE_OFF;
			}
			break;
		} else {
			/* Nothing to do */
		}
	}
	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* No match in GCLK Gen */
		for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
			if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
				if ((regs->GCLK_PCHCTRL[hal_mchp_id_map_gclk_periph[index].id] &
				     GCLK_PCHCTRL_CHEN_Msk) == GCLK_PCHCTRL_CHEN_Msk) {
					state = CLOCK_CONTROL_MCHP_STATE_ON;
				} else {
					state = CLOCK_CONTROL_MCHP_STATE_OFF;
				}
				break;
			} else {
				/* Continue with next clk */
			}
		}
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_gclk_enable_interrupt(gclk_registers_t *regs,
									     uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

static inline enum clock_control_mchp_state_t hal_mchp_gclk_clear_interrupt(gclk_registers_t *regs,
									    uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

static inline enum clock_control_mchp_state_t
hal_mchp_gclk_disable_interrupt(gclk_registers_t *regs, uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

static inline enum clock_control_mchp_state_t
hal_mchp_gclk_get_rate(gclk_registers_t *regs, uint32_t clk,
		       volatile struct clock_control_mchp_src_t *src)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;
	uint32_t divider;
	uint32_t gen_index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			divider = (regs->GCLK_GENCTRL[index] & GCLK_GENCTRL_DIV_Msk) >>
				  GCLK_GENCTRL_DIV_Pos;
			if ((regs->GCLK_GENCTRL[index] & GCLK_GENCTRL_DIVSEL_Msk) ==
			    GCLK_GENCTRL_DIVSEL_Msk) {
				divider = 2 ^ (divider + 1);
			} else {
				if (divider == 0) {
					divider = 1;
				} else {
					/* Nothing to do */
				}
			}
			src->div = src->div * divider;
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
				if (index == 0) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN0;
				} else if (index == 1) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN1;
				} else if (index == 2) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN2;
				} else if (index == 3) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN3;
				} else if (index == 4) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN4;
				} else if (index == 5) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN5;
				} else if (index == 6) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN6;
				} else if (index == 7) {
					src->user_freq_id =
						CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN7;
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
				/* source invalid */
				src->frequency = 0;
				state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
				break;
			}
			break;
		} else {
			/* Continue with next clk */
		}
	}

	if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
		/* Not a gclk gen clock */
		for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
			if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
				gen_index = (regs->GCLK_PCHCTRL[index] & GCLK_PCHCTRL_GEN_Msk) >>
					    GCLK_PCHCTRL_GEN_Pos;
				if (gen_index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE) {
					src->target_clk = hal_mchp_sync_map_gclk_gen[gen_index].clk;
					src->target_clk_addr = GCLK_BASE_ADDRESS;
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				} else {
					/* gen index is out of bound */
					src->frequency = 0;
					state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
				}
				break;
			} else {
				/* Continue with next clk */
			}
		}
	}
	return state;
}

static inline int hal_mchp_gclk_set_rate(gclk_registers_t *regs, uint32_t clk,
					 struct clock_control_mchp_gclk_rate_t *clk_rate)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
		if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
			regs->GCLK_GENCTRL[index] =
				(regs->GCLK_GENCTRL[index] & ~GCLK_GENCTRL_DIVSEL_Msk) |
				GCLK_GENCTRL_DIVSEL(clk_rate->div_sel[index]);
			regs->GCLK_GENCTRL[index] =
				(regs->GCLK_GENCTRL[index] & ~GCLK_GENCTRL_DIV_Msk) |
				GCLK_GENCTRL_DIV(clk_rate->gen_div[index]);
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		} else {
			/* Continue with next clk */
		}
	}

	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_gclk_configure(gclk_registers_t *regs, uint32_t clk,
			struct clock_control_mchp_gclk_configuration_t *configuration)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	if (clk == 0) {
		/* clk is not given */
		for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
			regs->GCLK_GENCTRL[index] =
				GCLK_GENCTRL_Msk & configuration->genctrl[index];
		}
		for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
			regs->GCLK_PCHCTRL[index] =
				GCLK_PCHCTRL_Msk & configuration->pchctrl[index];
		}
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		for (index = 0; index < HAL_MCHP_SYNC_MAP_GCLK_GEN_SIZE; index++) {
			if (clk == hal_mchp_sync_map_gclk_gen[index].clk) {
				regs->GCLK_GENCTRL[index] =
					GCLK_GENCTRL_Msk & configuration->genctrl[index];
				state = CLOCK_CONTROL_MCHP_STATE_OK;
				break;
			}
		}
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in gclk gen */
			for (index = 0; index < HAL_MCHP_ID_MAP_GCLK_PERIPH_SIZE; index++) {
				if (clk == hal_mchp_id_map_gclk_periph[index].clk) {
					regs->GCLK_PCHCTRL[index] =
						GCLK_PCHCTRL_Msk & configuration->pchctrl[index];
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					break;
				}
			}
		} else {
			/* Nothing to do */
		}
	}
	return state;
}

#endif /* PERIPHERALS_GCLK_U2122_HAL_MCHP_GCLK_H_ */
