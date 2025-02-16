/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_pinctrl.h
 * @brief Microchip MCU family I/O Pin Controller hal functions(PORT)
 *
 * This file provides the implementation of pin control functions
 * for Microchip-based systems.
 */

#ifndef PERIPHERALS_PORT_U2210_HAL_MCHP_PINCTRL_H_
#define PERIPHERALS_PORT_U2210_HAL_MCHP_PINCTRL_H_

/**
 * @brief Union representing pin control configuration.
 *
 * This union allows access to pin control configuration either as individual
 * bit fields or as a single 32-bit value.
 */
typedef union {
	/* Structure used for pinmux and flag access */
	struct {
		/* Pull-up resistor enable flag */
		uint32_t fpull_up: 1;
		/* Pull-down resistor enable flag */
		uint32_t fpull_down: 1;
		/* Output enable flag */
		uint32_t foutput_enable: 1;
		/* Input enable flag */
		uint32_t finput_enable: 1;
		/* Open-drain enable flag */
		uint32_t fopen_drain: 1;
		/* Drive strength enable flag */
		uint32_t fdrive_strength: 1;
		/* Reserved bits */
		uint32_t reserved: 10;
		/* Port number */
		uint32_t port: 4;
		/* Pin number */
		uint32_t pinnum: 5;
		/* PORT Event Pin Identifier */
		uint32_t func: 3;
		/* Pinmux function */
		uint32_t pinmux: 4;
	} soc_pin;
	/* Union member to access all bits as a single uint32_t */
	uint32_t pinctrl_soc_bits;
} pinctrl_pin_t;

/**
 * @brief Set pinmux registers using odd/even logic
 *
 * This function configures the pinmux registers for a given pin based on
 * the provided pin control information. It determines whether the pin number
 * is odd or even and sets the appropriate bits in the PORT_PMUX register.
 *
 * @param hal Pointer to the pin control information
 * @param reg Pointer to the base address of the port group registers
 */
static inline void hal_mchp_pinctrl_pinmux(const uint32_t *hal, const uint32_t *reg)
{
	port_group_registers_t *pRegister;
	pinctrl_pin_t pinctrl_dts_info;

	pinctrl_dts_info.pinctrl_soc_bits = *hal;
	bool is_odd = (pinctrl_dts_info.soc_pin.pinnum) & 1;
	uint32_t idx = (pinctrl_dts_info.soc_pin.pinnum) / 2U;

	pRegister = (port_group_registers_t *)reg[pinctrl_dts_info.soc_pin.port];

	/* Each pinmux register holds the config for two pins.  The
	 * even numbered pin goes in the bits 0..3 and the odd
	 * numbered pin in bits 4..7.
	 */
	if (is_odd) {
		pRegister->PORT_PMUX[idx] |= PORT_PMUX_PMUXO(pinctrl_dts_info.soc_pin.pinmux);
	} else {
		pRegister->PORT_PMUX[idx] |= PORT_PMUX_PMUXE(pinctrl_dts_info.soc_pin.pinmux);
	}
	pRegister->PORT_PINCFG[pinctrl_dts_info.soc_pin.pinnum] |= (uint8_t)PORT_PINCFG_PMUXEN_Msk;
}

/**
 * @brief Set all pin configuration registers by checking the flags
 *
 * This function configures various pin settings such as pull-up, pull-down,
 * input enable, output enable, and drive strength based on the provided
 * pin control information.
 *
 * @param hal Pointer to the pin control information
 * @param reg Pointer to the base address of the port group registers
 */
static inline void hal_mchp_pinctrl_set_flags(const uint32_t *hal, const uint32_t *reg)
{
	pinctrl_pin_t pinctrl_dts_info;

	pinctrl_dts_info.pinctrl_soc_bits = *hal;
	port_group_registers_t *pRegister =
		(port_group_registers_t *)reg[pinctrl_dts_info.soc_pin.port];

	/* Check if pull-up or pull-down resistors need to be configured */
	if ((pinctrl_dts_info.soc_pin.fpull_up) || (pinctrl_dts_info.soc_pin.fpull_down)) {
		if (pinctrl_dts_info.soc_pin.fpull_up) {
			/* If pull-up resistor is enabled, set the corresponding bit in PORT_OUT reg
			 */
			pRegister->PORT_OUT |= (1 << pinctrl_dts_info.soc_pin.pinnum);
		}
		pRegister->PORT_PINCFG[pinctrl_dts_info.soc_pin.pinnum] |= PORT_PINCFG_PULLEN(1);
	}
	/* Check if input is enabled and set the corresponding bit in PORT_PINCFG register */
	if (pinctrl_dts_info.soc_pin.finput_enable) {
		pRegister->PORT_PINCFG[pinctrl_dts_info.soc_pin.pinnum] |= PORT_PINCFG_INEN(1);
	}
	/* Check if output is enabled and set the corresponding bit in PORT_DIR register */
	if (pinctrl_dts_info.soc_pin.foutput_enable) {
		pRegister->PORT_DIR |= (1 << pinctrl_dts_info.soc_pin.pinnum);
	}
	/* Check if drive strength is enabled and set the corresponding bit in PORT_PINCFG register
	 */
	if (pinctrl_dts_info.soc_pin.fdrive_strength) {
		pRegister->PORT_PINCFG[pinctrl_dts_info.soc_pin.pinnum] |= PORT_PINCFG_DRVSTR(1);
	}
}

#endif /* PERIPHERALS_PORT_U2210_HAL_MCHP_PINCTRL_H_ */
