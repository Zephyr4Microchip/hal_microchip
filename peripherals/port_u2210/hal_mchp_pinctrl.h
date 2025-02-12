/*
 * Copyright (c) [2025] [Microchip Technology Inc.]
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Microchip MCU family I/O Pin Controller hal functions(PORT)
 */

#ifndef _HAL_MCHP_PINCTRL_H_
#define _HAL_MCHP_PINCTRL_H_

typedef union {
	struct {
		uint32_t fpull_up: 1;        /*!< bit:  0 */
		uint32_t fpull_down: 1;      /*!< bit:  1 */
		uint32_t foutput_enable: 1;  /*!< bit:  2 */
		uint32_t finput_enable: 1;   /*!< bit:  3 */
		uint32_t fopen_drain: 1;     /*!< bit:  4 */
		uint32_t fdrive_strength: 1; /*!< bit:  5 */
		uint32_t reserved: 10;       /*!< bit:  6.. 15 */
		uint32_t port: 4;            /*!< bit:  16.. 19 */
		uint32_t pinnum: 5;          /*!< bit:  20.. 24 */
		uint32_t func: 3;            /*!< bit:  25.. 27  PORT Event Pin Identifier 0  */
		uint32_t pinmux: 4;          /*!< bit:  28.. 31  Pinmux function  */
	} soc_pin;                           /*!< Structure used for pinmux and flag access */
	uint32_t pinctrl_soc_bits;
} pinctrl_pin_un_t;

/* set pinmux registers using odd/even logic */
static inline void hal_mchp_pinctrl_pinmux(const uint32_t *hal, const uint32_t *reg)
{
	port_group_registers_t *pRegister;
	pinctrl_pin_un_t pinctrl_dts_info;

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

/* set all pin configuration registers by checking the flags */
static inline void hal_mchp_pinctrl_set_flags(const uint32_t *hal, const uint32_t *reg)
{
	pinctrl_pin_un_t pinctrl_dts_info;

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

#endif /* _HAL_MCHP_PINCTRL_H_ */
