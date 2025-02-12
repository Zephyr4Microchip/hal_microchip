/*
 * Copyright (c) [2024] [Microchip Technology Inc.]
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef PERIPHERALS_CLOCK_SAME54_HAL_MCHP_CLOCK_H_
#define PERIPHERALS_CLOCK_SAME54_HAL_MCHP_CLOCK_H_

static inline enum clock_control_mchp_state_t
hal_mchp_clock_configure(uint32_t clk_addr, uint32_t clk,
			 struct clock_control_mchp_configuration_t *configuration)
{
	if (MCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_mclk_configure((mclk_registers_t *)clk_addr, clk,
					       (struct clock_control_mchp_mclk_configuration_t
							*)(configuration->mclk_configuration));
	} else if (OSCCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_oscctrl_configure(
			(oscctrl_registers_t *)clk_addr, clk,
			(struct clock_control_mchp_oscctrl_configuration_t
				 *)(configuration->oscctrl_configuration));
	} else if (OSC32KCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_osc32kctrl_configure(
			(osc32kctrl_registers_t *)clk_addr, clk,
			(struct clock_control_mchp_osc32kctrl_configuration_t
				 *)(configuration->osc32kctrl_configuration));
	} else if (GCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_gclk_configure((gclk_registers_t *)clk_addr, clk,
					       (struct clock_control_mchp_gclk_configuration_t
							*)(configuration->gclk_configuration));
	} else {
		return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
}

static inline enum clock_control_mchp_state_t hal_mchp_clock_clear_interrupt(uint32_t clk_addr,
									     uint32_t clk)
{
	if (MCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_mclk_clear_interrupt((mclk_registers_t *)clk_addr, clk);
	} else if (OSCCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_oscctrl_clear_interrupt((oscctrl_registers_t *)clk_addr, clk);
	} else if (OSC32KCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_osc32kctrl_clear_interrupt((osc32kctrl_registers_t *)clk_addr, clk);
	} else if (GCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_gclk_clear_interrupt((gclk_registers_t *)clk_addr, clk);
	} else {
		return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
}

static inline enum clock_control_mchp_state_t hal_mchp_clock_enable_interrupt(uint32_t clk_addr,
									      uint32_t clk)
{
	if (MCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_mclk_enable_interrupt((mclk_registers_t *)clk_addr, clk);
	} else if (OSCCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_oscctrl_enable_interrupt((oscctrl_registers_t *)clk_addr, clk);
	} else if (OSC32KCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_osc32kctrl_enable_interrupt((osc32kctrl_registers_t *)clk_addr,
							    clk);
	} else if (GCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_gclk_enable_interrupt((gclk_registers_t *)clk_addr, clk);
	} else {
		return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
}

static inline enum clock_control_mchp_state_t hal_mchp_clock_disable_interrupt(uint32_t clk_addr,
									       uint32_t clk)
{
	if (MCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_mclk_disable_interrupt((mclk_registers_t *)clk_addr, clk);
	} else if (OSCCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_oscctrl_disable_interrupt((oscctrl_registers_t *)clk_addr, clk);
	} else if (OSC32KCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_osc32kctrl_disable_interrupt((osc32kctrl_registers_t *)clk_addr,
							     clk);
	} else if (GCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_gclk_disable_interrupt((gclk_registers_t *)clk_addr, clk);
	} else {
		return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
}

static inline enum clock_control_mchp_state_t
hal_mchp_clock_get_rate(uint32_t clk_addr, uint32_t clk, uint32_t *rate,
			struct clock_control_mchp_user_frequency_t user_frequency)
{
	enum clock_control_mchp_state_t state;
	volatile struct clock_control_mchp_src_t src;
	uint64_t calc_rate;

	src.div = 1;
	src.mul = 1;
	src.mul_frac_res = 3;
	src.mul_frac = 10 ^ src.mul_frac_res;
	src.frequency = 0;
	src.target_clk = clk;
	src.target_clk_addr = clk_addr;
	src.user_freq_id = CLOCK_CONTROL_MCHP_USER_FREQUENCY_NONE;
	do {
		if (MCLK_BASE_ADDRESS == src.target_clk_addr) {
			state = hal_mchp_mclk_get_rate((mclk_registers_t *)(src.target_clk_addr),
						       src.target_clk, &src);
		} else if (OSCCTRL_BASE_ADDRESS == src.target_clk_addr) {
			state = hal_mchp_oscctrl_get_rate(
				(oscctrl_registers_t *)(src.target_clk_addr), src.target_clk, &src);
		} else if (OSC32KCTRL_BASE_ADDRESS == src.target_clk_addr) {
			state = hal_mchp_osc32kctrl_get_rate(
				(osc32kctrl_registers_t *)(src.target_clk_addr), src.target_clk,
				&src);
		} else if (GCLK_BASE_ADDRESS == src.target_clk_addr) {
			state = hal_mchp_gclk_get_rate((gclk_registers_t *)(src.target_clk_addr),
						       src.target_clk, &src);
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		}
	} while (state == CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE);
	if (state == CLOCK_CONTROL_MCHP_STATE_USER_FREQ) {
		switch (src.user_freq_id) {
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_DFLL:
			src.frequency = user_frequency.dfll;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_XOSC:
			src.frequency = user_frequency.xosc;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_XOSC32K:
			src.frequency = user_frequency.xosc32k;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN0:
			src.frequency = user_frequency.gclk_in[0];
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN1:
			src.frequency = user_frequency.gclk_in[1];
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN2:
			src.frequency = user_frequency.gclk_in[2];
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN3:
			src.frequency = user_frequency.gclk_in[3];
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN4:
			src.frequency = user_frequency.gclk_in[4];
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN5:
			src.frequency = user_frequency.gclk_in[5];
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN6:
			src.frequency = user_frequency.gclk_in[6];
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		case CLOCK_CONTROL_MCHP_USER_FREQUENCY_GCLK_IN7:
			src.frequency = user_frequency.gclk_in[7];
			state = CLOCK_CONTROL_MCHP_STATE_OK;
			break;
		default:
			src.frequency = 0;
			state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
			break;
		}
	} else {
		/* source frequency is available in subsystem */
	}
	calc_rate = ((src.frequency * src.mul) * src.mul_frac) / (10 ^ src.mul_frac_res);
	*rate = (uint32_t)(calc_rate / src.div);
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_clock_off(uint32_t clk_addr, uint32_t clk)
{
	if (MCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_mclk_off((mclk_registers_t *)clk_addr, clk);
	} else if (OSCCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_oscctrl_off((oscctrl_registers_t *)clk_addr, clk);
	} else if (OSC32KCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_osc32kctrl_off((osc32kctrl_registers_t *)clk_addr, clk);
	} else if (GCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_gclk_off((gclk_registers_t *)clk_addr, clk);
	} else {
		return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
}

static inline enum clock_control_mchp_state_t hal_mchp_clock_on(uint32_t clk_addr, uint32_t clk)
{
	if (MCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_mclk_on((mclk_registers_t *)clk_addr, clk);
	} else if (OSCCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_oscctrl_on((oscctrl_registers_t *)clk_addr, clk);
	} else if (OSC32KCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_osc32kctrl_on((osc32kctrl_registers_t *)clk_addr, clk);
	} else if (GCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_gclk_on((gclk_registers_t *)clk_addr, clk);
	} else {
		return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
}

static inline enum clock_control_mchp_state_t
hal_mchp_clock_set_rate(uint32_t clk_addr, uint32_t clk, struct clock_control_mchp_rate_t *rate)
{
	if (MCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_mclk_set_rate(
			(mclk_registers_t *)clk_addr, clk,
			(struct clock_control_mchp_mclk_rate_t *)(rate->mclk_rate));
	} else if (OSCCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_oscctrl_set_rate(
			(oscctrl_registers_t *)clk_addr, clk,
			(struct clock_control_mchp_oscctrl_rate_t *)(rate->oscctrl_rate));
	} else if (OSC32KCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_osc32kctrl_set_rate(
			(osc32kctrl_registers_t *)clk_addr, clk,
			(struct clock_control_mchp_osc32kctrl_rate_t *)(rate->osc32kctrl_rate));
	} else if (GCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_gclk_set_rate(
			(gclk_registers_t *)clk_addr, clk,
			(struct clock_control_mchp_gclk_rate_t *)(rate->gclk_rate));
	} else {
		return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
}

static inline enum clock_control_mchp_state_t hal_mchp_clock_status(uint32_t clk_addr, uint32_t clk)
{
	if (MCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_mclk_status((mclk_registers_t *)clk_addr, clk);
	} else if (OSCCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_oscctrl_status((oscctrl_registers_t *)clk_addr, clk);
	} else if (OSC32KCTRL_BASE_ADDRESS == clk_addr) {
		return hal_mchp_osc32kctrl_status((osc32kctrl_registers_t *)clk_addr, clk);
	} else if (GCLK_BASE_ADDRESS == clk_addr) {
		return hal_mchp_gclk_status((gclk_registers_t *)clk_addr, clk);
	} else {
		return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
}

#endif /* PERIPHERALS_CLOCK_SAME54_HAL_MCHP_CLOCK_H_ */
