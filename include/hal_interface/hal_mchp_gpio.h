/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_gpio.h
 * @brief HAL MCHP GPIO driver error codes.
 *
 * This file contains definitions, and error codes used in
 * the Microchip GPIO driver HAL.
 *
 */

#ifndef MICROCHIP_HAL_MCHP_GPIO_H_
#define MICROCHIP_HAL_MCHP_GPIO_H_

/**
 * @def HAL_MCHP_GPIO_ERR_NOTSUP
 * @brief Macro indicating the feature is not supported.
 */
#define HAL_MCHP_GPIO_ERR_NOTSUP           	-1
/**
 * @def HAL_MCHP_GPIO_SUCCESS
 * @brief Macro indicating successful operation.
 */
#define HAL_MCHP_GPIO_SUCCESS           	0
/**
 * @def HAL_BIT(n)
 * @brief Unsigned integer with bit position 'n' set.
 */
#define HAL_BIT(n)  						(1UL << (n))

/** GPIO HAL Function prototypes */

/**
 * @brief Get the current value of the GPIO port.
 *
 * @param regs Pointer to the port group registers.
 * @param port_val Pointer to store the current port value.
 */
static inline void hal_mchp_gpio_port_get(hal_gpio_port_reg *regs, uint32_t *port_val);
/**
 * @brief Set the GPIO port output value with a mask.
 *
 * @param regs Pointer to the port group registers.
 * @param mask Mask to apply to the port.
 * @param value Value to set on the port.
 */
static inline void hal_mchp_gpio_port_set_masked(hal_gpio_port_reg *regs, uint32_t mask,
                                                 uint32_t value);
/**
 * @brief Enable input on a specific GPIO pin.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to enable input on.
 */
static inline void hal_mchp_gpio_enable_input(hal_gpio_port_reg *regs, const uint32_t pin);
/**
 * @brief Set a specific GPIO pin to high.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to set high.
 */
static inline void hal_mchp_gpio_outset(hal_gpio_port_reg *regs, const uint32_t pin);
/**
 * @brief Set a specific GPIO pin to low.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to clear low.
 */
static inline void hal_mchp_gpio_outclr(hal_gpio_port_reg *regs, const uint32_t pin);
/**
 * @brief Set the direction of a specific GPIO pin to output.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to set as output.
 */
static inline void hal_mchp_gpio_set_dir_output(hal_gpio_port_reg *regs, const uint32_t pin);
/**
 * @brief Set the direction of a specific GPIO pin to input.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to set as input.
 */
static inline void hal_mchp_gpio_set_dir_input(hal_gpio_port_reg *regs, const uint32_t pin);
/**
 * @brief Enable pull-up/pull-down resistor on a specific GPIO pin.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to enable pull resistor on.
 */
static inline void hal_mchp_gpio_enable_pullup(hal_gpio_port_reg *regs, const uint32_t pin);
/**
 * @brief Check if pull-up/pull-down resistor is enabled on a specific GPIO pin.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to check.
 * @return Non zero value (Pull enable bit) if pull resistor is enabled, 0 otherwise.
 */
static inline bool hal_mchp_gpio_is_pullup(hal_gpio_port_reg *regs, const uint32_t pin);
/**
 * @brief Set multiple GPIO pins to high.
 *
 * @param regs Pointer to the port group registers.
 * @param pins Bitmask of pins to set high.
 */
static inline void hal_mchp_gpio_set_pins_high(hal_gpio_port_reg *regs,
                                                   const uint32_t pins);
/**
 * @brief Set multiple GPIO pins to low.
 *
 * @param regs Pointer to the port group registers.
 * @param pins Bitmask of pins to clear low.
 */
static inline void hal_mchp_gpio_set_pins_low(hal_gpio_port_reg *regs,
                                                   const uint32_t pins);
/**
 * @brief Toggle multiple GPIO pins.
 *
 * @param regs Pointer to the port group registers.
 * @param pins Bitmask of pins to toggle.
 */
static inline void hal_mchp_gpio_toggle_pins(hal_gpio_port_reg *regs,
                                                   const uint32_t pins);
/**
 * @brief Check if a specific GPIO pin is set to high.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to check.
 * @retval true if the GPIO pin is high.
 * @retval false if the GPIO pin is not high.
 */
static inline bool hal_mchp_gpio_is_pin_high(hal_gpio_port_reg *regs,
                                                    const uint32_t pin);
/**
 * @brief Get the direction configuration of the GPIO port.
 *
 * @param regs Pointer to the port group registers.
 * @return Direction configuration of the port.
 *         The uint32_t return value will be a pin mask, 
 *         where pin configured as Output is represented as '1' and Input as '0'
 */
static inline uint32_t hal_mchp_gpio_port_get_dir(hal_gpio_port_reg *regs);
/**
 * @brief Check if a specific GPIO pin is configured as output.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to check.
 * @retval true if the GPIO pin is configured as output.
 * @retval false if the GPIO pin is not configured as output. 
 */
static inline bool hal_mchp_gpio_is_pin_output(hal_gpio_port_reg *regs, const uint32_t pin);
/**
 * @brief Set the GPIO pins to open-drain mode.
 *
 * @param regs Pointer to the port group registers.
 * @param pins Bitmask of pins to set to open-drain.
 * @retval 0 If successful
 * @retval HAL_MCHP_GPIO_ERR_NOTSUP if the feture is not supported. 
 */
static inline int hal_mchp_gpio_set_open_drain(hal_gpio_port_reg *regs, const uint32_t pins);
/**
 * @brief Set the GPIO pins to open-source mode.
 *
 * @param regs Pointer to the port group registers.
 * @param pins Bitmask of pins to set to open-source.
 * @retval 0 If successful
 * @retval HAL_MCHP_GPIO_ERR_NOTSUP if the feture is not supported. 
 */
static inline int hal_mchp_gpio_set_open_source(hal_gpio_port_reg *regs, const uint32_t pins);
/**
 * @brief Check if a specific GPIO pin is configured as open-drain.
 *
 * @param regs Pointer to the port group registers.
 * @param pin Pin number to check.
 * @retval true if the GPIO pin is configured as open-drain.
 * @retval false if the GPIO pin is not configured as open-drain. 
 */
 static inline bool hal_mchp_gpio_is_pin_open_drain(hal_gpio_port_reg *regs, const uint32_t pin);
#endif /* MICROCHIP_HAL_MCHP_GPIO_H_ */
