/*
 * Copyright (c) [2024] [Microchip Technology Inc.]
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef PERIPHERALS_OSC32KCTRL_U2400_HAL_MCHP_OSC32KCTRL_H_
#define PERIPHERALS_OSC32KCTRL_U2400_HAL_MCHP_OSC32KCTRL_H_

#define HAL_MCHP_OSC32KCTRL_32K_FREQUENCY 32768
#define HAL_MCHP_OSC32KCTRL_1K_FREQUENCY  1024

static inline enum clock_control_mchp_state_t hal_mchp_osc32kctrl_off(osc32kctrl_registers_t *regs,
								      uint32_t clk)
{
	enum clock_control_mchp_state_t state;

	state = CLOCK_CONTROL_MCHP_STATE_OFF;
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		regs->OSC32KCTRL_XOSC32K &= ~OSC32KCTRL_XOSC32K_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
		regs->OSC32KCTRL_XOSC32K &= ~OSC32KCTRL_XOSC32K_EN32K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
		regs->OSC32KCTRL_XOSC32K &= ~OSC32KCTRL_XOSC32K_EN1K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
		regs->OSC32KCTRL_OSCULP32K &= ~OSC32KCTRL_OSCULP32K_EN32K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
		regs->OSC32KCTRL_OSCULP32K &= ~OSC32KCTRL_OSCULP32K_EN1K_Msk;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_osc32kctrl_on(osc32kctrl_registers_t *regs,
								     uint32_t clk)
{
	enum clock_control_mchp_state_t state;

	state = CLOCK_CONTROL_MCHP_STATE_ON;
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		regs->OSC32KCTRL_XOSC32K |= OSC32KCTRL_XOSC32K_ENABLE_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
		regs->OSC32KCTRL_XOSC32K |= OSC32KCTRL_XOSC32K_EN32K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
		regs->OSC32KCTRL_XOSC32K |= OSC32KCTRL_XOSC32K_EN1K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
		regs->OSC32KCTRL_OSCULP32K |= OSC32KCTRL_OSCULP32K_EN32K_Msk;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
		regs->OSC32KCTRL_OSCULP32K |= OSC32KCTRL_OSCULP32K_EN1K_Msk;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_osc32kctrl_status(osc32kctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* XOSC32K has status */
		if ((regs->OSC32KCTRL_XOSC32K & OSC32KCTRL_XOSC32K_ENABLE_Msk) ==
		    OSC32KCTRL_XOSC32K_ENABLE_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_ON;
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
		if ((regs->OSC32KCTRL_XOSC32K & OSC32KCTRL_XOSC32K_EN32K_Msk) ==
		    OSC32KCTRL_XOSC32K_EN32K_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_ON;
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
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
		if ((regs->OSC32KCTRL_OSCULP32K & OSC32KCTRL_OSCULP32K_EN32K_Msk) ==
		    OSC32KCTRL_OSCULP32K_EN32K_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_ON;
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
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
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_osc32kctrl_enable_interrupt(osc32kctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;

	/* Only XOSC32K has interrupt support */
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* Enable xosc32k ready interrupt */
		regs->OSC32KCTRL_INTENSET |= OSC32KCTRL_INTENSET_XOSC32KRDY_Msk;
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_osc32kctrl_clear_interrupt(osc32kctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;

	/* Only XOSC32K has interrupt support */
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* Clear XOSC32K ready interrupt */
		regs->OSC32KCTRL_INTFLAG |= OSC32KCTRL_INTFLAG_XOSC32KRDY_Msk;
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_osc32kctrl_disable_interrupt(osc32kctrl_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;

	/* Only XOSC32K has interrupt support */
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		/* Disable XOSC32K ready interrupt */
		regs->OSC32KCTRL_INTENCLR |= OSC32KCTRL_INTENCLR_XOSC32KRDY_Msk;
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_osc32kctrl_get_rate(osc32kctrl_registers_t *regs, uint32_t clk,
			     volatile struct clock_control_mchp_src_t *src)
{
	enum clock_control_mchp_state_t state;

	state = CLOCK_CONTROL_MCHP_STATE_OK;
	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		src->user_freq_id = CLOCK_CONTROL_MCHP_USER_FREQUENCY_XOSC32K;
		state = CLOCK_CONTROL_MCHP_STATE_USER_FREQ;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
		src->frequency = HAL_MCHP_OSC32KCTRL_32K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
		src->frequency = HAL_MCHP_OSC32KCTRL_1K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K) {
		src->frequency = HAL_MCHP_OSC32KCTRL_32K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
		src->frequency = HAL_MCHP_OSC32KCTRL_32K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
		src->frequency = HAL_MCHP_OSC32KCTRL_1K_FREQUENCY;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_RTC) {
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
			src->frequency = 0;
			state = CLOCK_CONTROL_MCHP_STATE_NO_RATE;
			break;
		}
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_osc32kctrl_set_rate(osc32kctrl_registers_t *regs, uint32_t clk,
			     struct clock_control_mchp_osc32kctrl_rate_t *clk_rate)
{
	enum clock_control_mchp_state_t state;

	if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
		regs->OSC32KCTRL_CFDCTRL =
			(regs->OSC32KCTRL_CFDCTRL & ~OSC32KCTRL_CFDCTRL_CFDPRESC_Msk) |
			OSC32KCTRL_CFDCTRL_CFDPRESC(clk_rate->xosc32k_cfd_presc);
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_osc32kctrl_configure(osc32kctrl_registers_t *regs, uint32_t clk,
			      struct clock_control_mchp_osc32kctrl_configuration_t *configuration)
{
	enum clock_control_mchp_state_t state;

	if (clk == 0) {
		/* clk is not given */
		regs->OSC32KCTRL_XOSC32K = (configuration->xosc32k & OSC32KCTRL_XOSC32K_Msk);
		regs->OSC32KCTRL_OSCULP32K = (configuration->osculp32k & OSC32KCTRL_OSCULP32K_Msk);
		regs->OSC32KCTRL_CFDCTRL = (configuration->cfdctrl & OSC32KCTRL_CFDCTRL_Msk);
		regs->OSC32KCTRL_RTCCTRL = (configuration->rtcctrl & OSC32KCTRL_RTCCTRL_Msk);
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_OK;
		if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K) {
			regs->OSC32KCTRL_CFDCTRL =
				(configuration->cfdctrl & OSC32KCTRL_CFDCTRL_Msk);
			regs->OSC32KCTRL_XOSC32K =
				(configuration->xosc32k & OSC32KCTRL_XOSC32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT32K) {
			regs->OSC32KCTRL_XOSC32K =
				(configuration->xosc32k & OSC32KCTRL_XOSC32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_XOSC32K_OUT1K) {
			regs->OSC32KCTRL_XOSC32K =
				(configuration->xosc32k & OSC32KCTRL_XOSC32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K) {
			regs->OSC32KCTRL_OSCULP32K =
				(configuration->osculp32k & OSC32KCTRL_OSCULP32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT32K) {
			regs->OSC32KCTRL_OSCULP32K =
				(configuration->osculp32k & OSC32KCTRL_OSCULP32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_OSCULP32K_OUT1K) {
			regs->OSC32KCTRL_OSCULP32K =
				(configuration->osculp32k & OSC32KCTRL_OSCULP32K_Msk);
		} else if (clk == CLOCK_CONTROL_MCHP_V1_OSC32KCTRL_RTC) {
			regs->OSC32KCTRL_RTCCTRL =
				(configuration->rtcctrl & OSC32KCTRL_RTCCTRL_Msk);
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		}
	}
	return state;
}

#endif /* PERIPHERALS_OSC32KCTRL_U2400_HAL_MCHP_OSC32KCTRL_H_ */
