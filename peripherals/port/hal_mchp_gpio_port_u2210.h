/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_gpio_port_u2210.h
 * @brief Microchip MCU family I/O GPIO hal functions(PORT)
 *
 * This file provides the implementation of pin control functions
 * for Microchip-based systems.
 */

#ifndef MICROCHIP_HAL_MCHP_GPIO_PORT_U2210_H_
#define MICROCHIP_HAL_MCHP_GPIO_PORT_U2210_H_

#include <hal_interface/hal_mchp_gpio.h>

/**
 * Get the current value of the GPIO port.
 */
static inline void hal_mchp_gpio_port_get(hal_gpio_port_reg *regs, uint32_t *port_val)
{
    *port_val = regs->PORT_IN;
}

/**
 * Set the GPIO port output value with a mask.
 */
static inline void hal_mchp_gpio_port_set_masked(hal_gpio_port_reg *regs, uint32_t mask,
                                                 uint32_t value)
{
    regs->PORT_OUT = (regs->PORT_OUT & ~(mask)) | (value & mask);
}

/**
 * Enable input on a specific GPIO pin.
 */
static inline void hal_mchp_gpio_enable_input(hal_gpio_port_reg *regs, const uint32_t pin)
{
    regs->PORT_PINCFG[pin] |= PORT_PINCFG_INEN(1);
}

/**
 * Set a specific GPIO pin to high.
 */
static inline void hal_mchp_gpio_outset(hal_gpio_port_reg *regs, const uint32_t pin)
{
    regs->PORT_OUTSET |= HAL_BIT(pin);
}

/**
 * Set a specific GPIO pin to low.
 */
static inline void hal_mchp_gpio_outclr(hal_gpio_port_reg *regs, const uint32_t pin)
{
    regs->PORT_OUTCLR |= HAL_BIT(pin);
}

/**
 * Set the direction of a specific GPIO pin to output.
 */
static inline void hal_mchp_gpio_set_dir_output(hal_gpio_port_reg *regs, const uint32_t pin)
{
    regs->PORT_DIRSET |= HAL_BIT(pin);
}

/**
 * Set the direction of a specific GPIO pin to input.
 */
static inline void hal_mchp_gpio_set_dir_input(hal_gpio_port_reg *regs, const uint32_t pin)
{
	hal_mchp_gpio_enable_input(regs, pin);
	regs->PORT_DIRCLR |= HAL_BIT(pin);
}

/**
 * Enable pull-up/pull-down resistor on a specific GPIO pin.
 */
static inline void hal_mchp_gpio_enable_pullup(hal_gpio_port_reg *regs, const uint32_t pin)
{
    regs->PORT_PINCFG[pin] |= PORT_PINCFG_PULLEN(1);
}

/**
 * Check if pull-up/pull-down resistor is enabled on a specific GPIO pin.
 */
static inline bool hal_mchp_gpio_is_pullup(hal_gpio_port_reg *regs, const uint32_t pin)
{
	bool is_pull_enabled =  false;
    if((regs->PORT_PINCFG[pin] & PORT_PINCFG_PULLEN(1)) != 0){
		is_pull_enabled = true;
	}
	return is_pull_enabled;		
}

/**
 * Set multiple GPIO pins to high.
 */
static inline void hal_mchp_gpio_set_pins_high(hal_gpio_port_reg *regs,
                                                   const uint32_t pins)
{
    regs->PORT_OUTSET = pins;
}

/**
 * Set multiple GPIO pins to low.
 */
static inline void hal_mchp_gpio_set_pins_low(hal_gpio_port_reg *regs,
                                                   const uint32_t pins)
{
    regs->PORT_OUTCLR = pins;
}

/**
 * Toggle multiple GPIO pins.
 */
static inline void hal_mchp_gpio_toggle_pins(hal_gpio_port_reg *regs,
                                                   const uint32_t pins)
{
    regs->PORT_OUTTGL = pins;
}

/**
 * Check if a specific GPIO pin is set to high.
 */
static inline bool hal_mchp_gpio_is_pin_high(hal_gpio_port_reg *regs,
                                                    const uint32_t pin)
{
	bool is_output_high =  false;
    if((regs->PORT_OUT & HAL_BIT(pin)) != 0){
		is_output_high = true;
	}
	return is_output_high;	
}

/**
 * Get the direction configuration of the GPIO port.
 */
static inline uint32_t hal_mchp_gpio_port_get_dir(hal_gpio_port_reg *regs)
{
    return regs->PORT_DIR;
}

/**
 * Check if a specific GPIO pin is configured as output.
 */
static inline bool hal_mchp_gpio_is_pin_output(hal_gpio_port_reg *regs, const uint32_t pin)
{
	bool is_output =  false;
    if((hal_mchp_gpio_port_get_dir(regs) & HAL_BIT(pin)) != 0){
		is_output = true;
	}
	return is_output;
}

/**
 * Set the GPIO pins to open-drain mode.
 */
static inline int hal_mchp_gpio_set_open_drain(hal_gpio_port_reg *regs, const uint32_t pins)
{
    /* Not Supported */
    return HAL_MCHP_GPIO_ERR_NOTSUP;
}

/**
 * Set the GPIO pins to open-source mode.
 */
static inline int hal_mchp_gpio_set_open_source(hal_gpio_port_reg *regs, const uint32_t pins)
{
    /* Not Supported */
    return HAL_MCHP_GPIO_ERR_NOTSUP;
}

/**
 * Check if the GPIO pin is set to open-source mode.
 */
 static inline bool hal_mchp_gpio_is_pin_open_drain(hal_gpio_port_reg *regs, const uint32_t pin)
 {
    /* Not Supported */
    return false;
 }
#endif /* MICROCHIP_HAL_MCHP_GPIO_PORT_U2210_H_ */
