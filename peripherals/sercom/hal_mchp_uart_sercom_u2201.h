/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_uart_sercom_u2201.h
 * @brief HAL functions for sercom_u2201 UART.
 */

#ifndef MICROCHIP_HAL_MCHP_UART_SERCOM_U2201_H_
#define MICROCHIP_HAL_MCHP_UART_SERCOM_U2201_H_

/**
 * @brief Wait for synchronization of the UART.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 */
static inline void hal_mchp_uart_wait_sync(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		while ((hal->regs->USART_INT.SERCOM_SYNCBUSY & SERCOM_USART_INT_SYNCBUSY_Msk) !=
		       0) {
		}
	} else {
		while ((hal->regs->USART_EXT.SERCOM_SYNCBUSY & SERCOM_USART_EXT_SYNCBUSY_Msk) !=
		       0) {
		}
	}
}

/**
 * @brief Disable all UART interrupts.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 */
static inline void hal_mchp_uart_disable_interrupts(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		hal->regs->USART_INT.SERCOM_INTENCLR = SERCOM_USART_INT_INTENCLR_Msk;
	} else {
		hal->regs->USART_EXT.SERCOM_INTENCLR = SERCOM_USART_EXT_INTENCLR_Msk;
	}
}

/**
 * @brief Enable or disable the UART.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param enable Boolean to enable or disable the UART.
 */
static inline void hal_mchp_uart_enable(const hal_mchp_uart_t *hal, bool enable)
{
	hal_mchp_uart_wait_sync(hal);
	if (hal->clock_external == 1) {
		if (enable == true) {
			hal->regs->USART_INT.SERCOM_CTRLA |= SERCOM_USART_INT_CTRLA_ENABLE_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_CTRLA &= ~SERCOM_USART_INT_CTRLA_ENABLE_Msk;
		}
	} else {
		if (enable == true) {
			hal->regs->USART_EXT.SERCOM_CTRLA |= SERCOM_USART_EXT_CTRLA_ENABLE_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_CTRLA &= ~SERCOM_USART_EXT_CTRLA_ENABLE_Msk;
		}
	}

	hal_mchp_uart_wait_sync(hal);
}

/**
 * @brief Enable or disable the UART receiver.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param enable Boolean to enable or disable the receiver.
 */
static inline void hal_mchp_uart_rx_enable(const hal_mchp_uart_t *hal, bool enable)
{
	hal_mchp_uart_wait_sync(hal);
	if (hal->clock_external == 1) {
		if (enable == true) {
			hal->regs->USART_INT.SERCOM_CTRLB |= SERCOM_USART_INT_CTRLB_RXEN_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_CTRLB &= ~SERCOM_USART_INT_CTRLB_RXEN_Msk;
		}
	} else {
		if (enable == true) {
			hal->regs->USART_EXT.SERCOM_CTRLB |= SERCOM_USART_EXT_CTRLB_RXEN_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_CTRLB &= ~SERCOM_USART_EXT_CTRLB_RXEN_Msk;
		}
	}

	hal_mchp_uart_wait_sync(hal);
}

/**
 * @brief Enable or disable the UART transmitter.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param enable Boolean to enable or disable the transmitter.
 */
static inline void hal_mchp_uart_tx_enable(const hal_mchp_uart_t *hal, bool enable)
{
	hal_mchp_uart_wait_sync(hal);
	if (hal->clock_external == 1) {
		if (enable == true) {
			hal->regs->USART_INT.SERCOM_CTRLB |= SERCOM_USART_INT_CTRLB_TXEN_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_CTRLB &= ~SERCOM_USART_INT_CTRLB_TXEN_Msk;
		}
	} else {
		if (enable == true) {
			hal->regs->USART_EXT.SERCOM_CTRLB |= SERCOM_USART_EXT_CTRLB_TXEN_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_CTRLB &= ~SERCOM_USART_EXT_CTRLB_TXEN_Msk;
		}
	}

	hal_mchp_uart_wait_sync(hal);
}

/**
 * @brief Configure the UART pinout.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 */
static inline void hal_mchp_uart_config_pinout(const hal_mchp_uart_t *hal)
{
	uint32_t reg_value;

	if (hal->clock_external == 1) {
		reg_value = hal->regs->USART_INT.SERCOM_CTRLA;
		reg_value &= ~(SERCOM_USART_INT_CTRLA_RXPO_Msk | SERCOM_USART_INT_CTRLA_TXPO_Msk);
		reg_value |= (SERCOM_USART_INT_CTRLA_RXPO(hal->rxpo) |
			      SERCOM_USART_INT_CTRLA_TXPO(hal->txpo));
		hal->regs->USART_INT.SERCOM_CTRLA = reg_value;
	} else {
		reg_value = hal->regs->USART_EXT.SERCOM_CTRLA;
		reg_value &= ~(SERCOM_USART_EXT_CTRLA_RXPO_Msk | SERCOM_USART_EXT_CTRLA_TXPO_Msk);
		reg_value |= (SERCOM_USART_EXT_CTRLA_RXPO(hal->rxpo) |
			      SERCOM_USART_EXT_CTRLA_TXPO(hal->txpo));
		hal->regs->USART_EXT.SERCOM_CTRLA = reg_value;
	}

	hal_mchp_uart_wait_sync(hal);
}

/**
 * @brief Set the clock polarity for the UART.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param tx_rising Boolean to set the clock polarity.
 */
static inline void hal_mchp_uart_set_clock_polarity(const hal_mchp_uart_t *hal, bool tx_rising)
{
	if (hal->clock_external == 1) {
		if (tx_rising == true) {
			hal->regs->USART_INT.SERCOM_CTRLA &= ~SERCOM_USART_INT_CTRLA_CPOL_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_CTRLA |= SERCOM_USART_INT_CTRLA_CPOL_Msk;
		}
	} else {
		if (tx_rising == true) {
			hal->regs->USART_EXT.SERCOM_CTRLA &= ~SERCOM_USART_EXT_CTRLA_CPOL_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_CTRLA |= SERCOM_USART_EXT_CTRLA_CPOL_Msk;
		}
	}

	hal_mchp_uart_wait_sync(hal);
}

/**
 * @brief Set the clock source for the UART.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param internal Boolean to set the clock source.
 */
static inline void hal_mchp_uart_set_clock_internal(const hal_mchp_uart_t *hal, bool internal)
{
	uint32_t reg_value;

	if (hal->clock_external == 1) {
		reg_value = hal->regs->USART_INT.SERCOM_CTRLA;
		reg_value &= ~SERCOM_USART_INT_CTRLA_MODE_Msk;
		hal->regs->USART_INT.SERCOM_CTRLA =
			reg_value |
			((internal == true) ? SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK
					    : SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK);
	} else {
		reg_value = hal->regs->USART_EXT.SERCOM_CTRLA;
		reg_value &= ~SERCOM_USART_EXT_CTRLA_MODE_Msk;
		hal->regs->USART_EXT.SERCOM_CTRLA =
			reg_value |
			((internal == true) ? SERCOM_USART_EXT_CTRLA_MODE_USART_INT_CLK
					    : SERCOM_USART_EXT_CTRLA_MODE_USART_EXT_CLK);
	}

	hal_mchp_uart_wait_sync(hal);	
}

/**
 * @brief Set the data order for the UART.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param lsb_first Boolean to set the data order.
 */
static inline void hal_mchp_uart_set_lsb_first(const hal_mchp_uart_t *hal, bool lsb_first)
{
	if (hal->clock_external == 1) {
		if (lsb_first == true) {
			hal->regs->USART_INT.SERCOM_CTRLA |= SERCOM_USART_INT_CTRLA_DORD_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_CTRLA &= ~SERCOM_USART_INT_CTRLA_DORD_Msk;
		}
	} else {
		if (lsb_first == true) {
			hal->regs->USART_EXT.SERCOM_CTRLA |= SERCOM_USART_EXT_CTRLA_DORD_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_CTRLA &= ~SERCOM_USART_EXT_CTRLA_DORD_Msk;
		}
	}

	hal_mchp_uart_wait_sync(hal);
}

/**
 * @brief Parity modes for UART configuration.
 */
enum hal_mchp_uart_config_parity {
	HAL_MCHP_UART_CFG_PARITY_NONE, /**< No parity */
	HAL_MCHP_UART_CFG_PARITY_ODD,  /**< Odd parity */
	HAL_MCHP_UART_CFG_PARITY_EVEN  /**< Even parity */
};

/**
 * @brief Configure the parity mode for the UART.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param parity Parity mode to configure.
 */
static inline void hal_mchp_uart_config_parity(const hal_mchp_uart_t *hal,
					       enum hal_mchp_uart_config_parity parity)
{
	if (hal->clock_external == 1) {
		hal->regs->USART_INT.SERCOM_CTRLA &= ~SERCOM_USART_INT_CTRLA_FORM_Msk;
		switch (parity) {
		case HAL_MCHP_UART_CFG_PARITY_ODD: {
			hal->regs->USART_INT.SERCOM_CTRLA |=
				SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY;
			hal_mchp_uart_wait_sync(hal);
			hal->regs->USART_INT.SERCOM_CTRLB |= SERCOM_USART_INT_CTRLB_PMODE_Msk;
			hal_mchp_uart_wait_sync(hal);
			break;
		}
		case HAL_MCHP_UART_CFG_PARITY_EVEN: {
			hal->regs->USART_INT.SERCOM_CTRLA |=
				SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY;
			hal_mchp_uart_wait_sync(hal);
			hal->regs->USART_INT.SERCOM_CTRLB &= ~SERCOM_USART_INT_CTRLB_PMODE_Msk;
			hal_mchp_uart_wait_sync(hal);
			break;
		}
		default: {
			hal->regs->USART_INT.SERCOM_CTRLA |=
				SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_NO_PARITY;
			hal_mchp_uart_wait_sync(hal);
			break;
		}
		}
	} else {
		hal->regs->USART_EXT.SERCOM_CTRLA &= ~SERCOM_USART_EXT_CTRLA_FORM_Msk;
		switch (parity) {
		case HAL_MCHP_UART_CFG_PARITY_ODD: {
			hal->regs->USART_EXT.SERCOM_CTRLA |=
				SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY;
			hal_mchp_uart_wait_sync(hal);
			hal->regs->USART_EXT.SERCOM_CTRLB |= SERCOM_USART_EXT_CTRLB_PMODE_Msk;
			hal_mchp_uart_wait_sync(hal);
			break;
		}
		case HAL_MCHP_UART_CFG_PARITY_EVEN: {
			hal->regs->USART_EXT.SERCOM_CTRLA |=
				SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY;
			hal_mchp_uart_wait_sync(hal);
			hal->regs->USART_EXT.SERCOM_CTRLB &= ~SERCOM_USART_EXT_CTRLB_PMODE_Msk;
			hal_mchp_uart_wait_sync(hal);
			break;
		}
		default: {
			hal->regs->USART_EXT.SERCOM_CTRLA |=
				SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_NO_PARITY;
			hal_mchp_uart_wait_sync(hal);
			break;
		}
		}
	}
}

/**
 * @brief Configure the number of stop bits for the UART.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param count Number of stop bits (1 or 2).
 * @return 0 on success, -1 on invalid count.
 */
static inline int hal_mchp_uart_config_stop_bits(const hal_mchp_uart_t *hal, unsigned int count)
{
	if (hal->clock_external == 1) {
		switch (count) {
		case 1:
			hal->regs->USART_INT.SERCOM_CTRLB &= ~SERCOM_USART_INT_CTRLB_SBMODE_Msk;
			break;
		case 2:
			hal->regs->USART_INT.SERCOM_CTRLB |= SERCOM_USART_INT_CTRLB_SBMODE_Msk;
			break;
		default:
			return -1;
		}
	} else {
		switch (count) {
		case 1:
			hal->regs->USART_EXT.SERCOM_CTRLB &= ~SERCOM_USART_EXT_CTRLB_SBMODE_Msk;
			break;
		case 2:
			hal->regs->USART_EXT.SERCOM_CTRLB |= SERCOM_USART_EXT_CTRLB_SBMODE_Msk;
			break;
		default:
			return -1;
		}
	}

	hal_mchp_uart_wait_sync(hal);
	return 0;
}

/**
 * @brief Configure the number of data bits for the UART.
 *
 * @param hal Pointer to the hal_mchp_uart structure.
 * @param count Number of data bits (5 to 9).
 * @return 0 on success, -1 on invalid count.
 */
static inline int hal_mchp_uart_config_data_bits(const hal_mchp_uart_t *hal, unsigned int count)
{
	uint32_t value;
	if (hal->clock_external == 1) {
		switch (count) {
		case 5:
			value = SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT;
			break;
		case 6:
			value = SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT;
			break;
		case 7:
			value = SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT;
			break;
		case 8:
			value = SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT;
			break;
		case 9:
			value = SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT;
			break;
		default:
			return -1;
		}
		hal->regs->USART_INT.SERCOM_CTRLB &= ~SERCOM_USART_INT_CTRLB_CHSIZE_Msk;
		hal->regs->USART_INT.SERCOM_CTRLB |= value;
	} else {
		switch (count) {
		case 5:
			value = SERCOM_USART_EXT_CTRLB_CHSIZE_5_BIT;
			break;
		case 6:
			value = SERCOM_USART_EXT_CTRLB_CHSIZE_6_BIT;
			break;
		case 7:
			value = SERCOM_USART_EXT_CTRLB_CHSIZE_7_BIT;
			break;
		case 8:
			value = SERCOM_USART_EXT_CTRLB_CHSIZE_8_BIT;
			break;
		case 9:
			value = SERCOM_USART_EXT_CTRLB_CHSIZE_9_BIT;
			break;
		default:
			return -1;
		}
		hal->regs->USART_EXT.SERCOM_CTRLB &= ~SERCOM_USART_EXT_CTRLB_CHSIZE_Msk;
		hal->regs->USART_EXT.SERCOM_CTRLB |= value;
	}

	hal_mchp_uart_wait_sync(hal);
	return 0;
}

/**
 * @brief Set the UART baud rate.
 *
 * This function sets the baud rate for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @param baudrate Desired baud rate.
 * @param clk_freq_hz Clock frequency in Hz.
 * @return 0 on success, -ERANGE if the calculated baud rate is out of range.
 */
static inline int hal_mchp_uart_set_baudrate(const hal_mchp_uart_t *hal, uint32_t baudrate,
					     uint32_t clk_freq_hz)
{
	uint64_t tmp;
	uint16_t baud;

	tmp = (uint64_t)baudrate << 20;
	tmp = (tmp + (clk_freq_hz >> 1)) / clk_freq_hz;

	/* Verify that the calculated result is within range */
	if (tmp < 1 || tmp > UINT16_MAX) {
		return -ERANGE;
	}

	baud = 65536 - (uint16_t)tmp;

	if (hal->clock_external == 1) {
		hal->regs->USART_INT.SERCOM_CTRLA &= ~SERCOM_USART_INT_CTRLA_SAMPR_Msk;
		hal->regs->USART_INT.SERCOM_BAUD = baud;
	} else {
		hal->regs->USART_EXT.SERCOM_CTRLA &= ~SERCOM_USART_EXT_CTRLA_SAMPR_Msk;
		hal->regs->USART_EXT.SERCOM_BAUD = baud;
	}
	hal_mchp_uart_wait_sync(hal);

	return 0;
}

/**
 * @brief Enable or disable the UART RX interrupt.
 *
 * This function enables or disables the RX interrupt for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @param enable True to enable the interrupt, false to disable.
 */
static inline void hal_mchp_uart_enable_rx_interrupt(const hal_mchp_uart_t *hal, bool enable)
{
	if (hal->clock_external == 1) {
		if (enable == true) {
			hal->regs->USART_INT.SERCOM_INTENSET = SERCOM_USART_INT_INTENSET_RXC_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_INTENCLR = SERCOM_USART_INT_INTENCLR_RXC_Msk;
		}
	} else {
		if (enable == true) {
			hal->regs->USART_EXT.SERCOM_INTENSET = SERCOM_USART_EXT_INTENSET_RXC_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_INTENCLR = SERCOM_USART_EXT_INTENCLR_RXC_Msk;
		}
	}
}

/**
 * @brief Check if the UART receive is complete.
 *
 * This function checks if the receive operation is complete for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if receive is complete, false otherwise.
 */
static inline bool hal_mchp_uart_is_rx_complete(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_INTFLAG & SERCOM_USART_INT_INTFLAG_RXC_Msk) !=
			0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_INTFLAG & SERCOM_USART_EXT_INTFLAG_RXC_Msk) !=
			0);
	}
}

/**
 * @brief Get the received character from the UART.
 *
 * This function retrieves the received character from the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return The received character.
 */
static inline unsigned char hal_mchp_uart_get_received_char(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((unsigned char)hal->regs->USART_INT.SERCOM_DATA);
	} else {
		return ((unsigned char)hal->regs->USART_EXT.SERCOM_DATA);
	}
}

/**
 * @brief Enable or disable the UART TX ready interrupt.
 *
 * This function enables or disables the TX ready interrupt for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @param enable True to enable the interrupt, false to disable.
 */
static inline void hal_mchp_uart_enable_tx_ready_interrupt(const hal_mchp_uart_t *hal, bool enable)
{
	if (hal->clock_external == 1) {
		if (enable == true) {
			hal->regs->USART_INT.SERCOM_INTENSET = SERCOM_USART_INT_INTENSET_DRE_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_INTENCLR = SERCOM_USART_EXT_INTENCLR_DRE_Msk;
		}
	} else {
		if (enable == true) {
			hal->regs->USART_EXT.SERCOM_INTENSET = SERCOM_USART_INT_INTENSET_DRE_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_INTENCLR = SERCOM_USART_EXT_INTENCLR_DRE_Msk;
		}
	}
}

/**
 * @brief Check if the UART TX is ready.
 *
 * This function checks if the TX operation is ready for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if TX is ready, false otherwise.
 */
static inline bool hal_mchp_uart_is_tx_ready(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_INTFLAG & SERCOM_USART_INT_INTFLAG_DRE_Msk) !=
			0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_INTFLAG & SERCOM_USART_EXT_INTFLAG_DRE_Msk) !=
			0);
	}
}

/**
 * @brief Enable or disable the UART TX complete interrupt.
 *
 * This function enables or disables the TX complete interrupt for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @param enable True to enable the interrupt, false to disable.
 */
static inline void hal_mchp_uart_enable_tx_complete_interrupt(const hal_mchp_uart_t *hal,
							      bool enable)
{
	if (hal->clock_external == 1) {
		if (enable == true) {
			hal->regs->USART_INT.SERCOM_INTENSET = SERCOM_USART_INT_INTENSET_TXC_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_INTENCLR = SERCOM_USART_EXT_INTENCLR_TXC_Msk;
		}
	} else {
		if (enable == true) {
			hal->regs->USART_EXT.SERCOM_INTENSET = SERCOM_USART_INT_INTENSET_TXC_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_INTENCLR = SERCOM_USART_EXT_INTENCLR_TXC_Msk;
		}
	}
}

/**
 * @brief Check if the UART TX is complete.
 *
 * This function checks if the TX operation is complete for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if TX is complete, false otherwise.
 */
static inline bool hal_mchp_uart_is_tx_complete(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_INTFLAG & SERCOM_USART_INT_INTFLAG_TXC_Msk) !=
			0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_INTFLAG & SERCOM_USART_EXT_INTFLAG_TXC_Msk) !=
			0);
	}
}

/**
 * @brief Transmit a character via UART.
 *
 * This function transmits a character via the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @param data The character to transmit.
 */
static inline void hal_mchp_uart_tx_char(const hal_mchp_uart_t *hal, unsigned char data)
{
	if (hal->clock_external == 1) {
		hal->regs->USART_INT.SERCOM_DATA = data;
	} else {
		hal->regs->USART_EXT.SERCOM_DATA = data;
	}
}

/**
 * @brief Get the DMA source address for UART.
 *
 * This function retrieves the DMA source address for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return The DMA source address.
 */
static inline void *hal_mchp_uart_get_dma_source_addr(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((void *)&(hal->regs->USART_INT.SERCOM_DATA));
	} else {
		return ((void *)&(hal->regs->USART_EXT.SERCOM_DATA));
	}
}

/**
 * @brief Get the DMA destination address for UART.
 *
 * This function retrieves the DMA destination address for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return The DMA destination address.
 */
static inline void *hal_mchp_uart_get_dma_dest_addr(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((void *)&(hal->regs->USART_INT.SERCOM_DATA));
	} else {
		return ((void *)&(hal->regs->USART_EXT.SERCOM_DATA));
	}
}

/**
 * @brief Clear all UART interrupts.
 *
 * This function clears all interrupts for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 */
static inline void hal_mchp_uart_clear_interrupts(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		hal->regs->USART_INT.SERCOM_INTFLAG =
			SERCOM_USART_INT_INTFLAG_ERROR_Msk | SERCOM_USART_INT_INTFLAG_RXBRK_Msk |
			SERCOM_USART_INT_INTFLAG_CTSIC_Msk | SERCOM_USART_INT_INTFLAG_RXS_Msk |
			SERCOM_USART_INT_INTFLAG_TXC_Msk;
	} else {
		hal->regs->USART_EXT.SERCOM_INTFLAG =
			SERCOM_USART_EXT_INTFLAG_ERROR_Msk | SERCOM_USART_EXT_INTFLAG_RXBRK_Msk |
			SERCOM_USART_EXT_INTFLAG_CTSIC_Msk | SERCOM_USART_EXT_INTFLAG_RXS_Msk |
			SERCOM_USART_EXT_INTFLAG_TXC_Msk;
	}
}

/**
 * @brief Check if any UART interrupt is pending.
 *
 * This function checks if any interrupt is pending for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if any interrupt is pending, false otherwise.
 */
static inline bool hal_mchp_uart_is_interrupt_pending(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_INTENSET &
			 hal->regs->USART_INT.SERCOM_INTFLAG) != 0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_INTENSET &
			 hal->regs->USART_EXT.SERCOM_INTFLAG) != 0);
	}
}

/**
 * @brief Enable or disable the UART error interrupt.
 *
 * This function enables or disables the error interrupt for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @param enable True to enable the interrupt, false to disable.
 */
static inline void hal_mchp_uart_enable_err_interrupt(const hal_mchp_uart_t *hal, bool enable)
{
	if (hal->clock_external == 1) {
		if (enable == true) {
			hal->regs->USART_INT.SERCOM_INTENSET = SERCOM_USART_INT_INTENSET_ERROR_Msk;
		} else {
			hal->regs->USART_INT.SERCOM_INTENCLR = SERCOM_USART_EXT_INTENCLR_ERROR_Msk;
		}
	} else {
		if (enable == true) {
			hal->regs->USART_EXT.SERCOM_INTENSET = SERCOM_USART_INT_INTENSET_ERROR_Msk;
		} else {
			hal->regs->USART_EXT.SERCOM_INTENCLR = SERCOM_USART_EXT_INTENCLR_ERROR_Msk;
		}
	}
}

/**
 * @brief Check if there is a buffer overflow error.
 *
 * This function checks if there is a buffer overflow error for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if there is a buffer overflow error, false otherwise.
 */
static inline bool hal_mchp_uart_is_err_buffer_overflow(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_STATUS & SERCOM_USART_INT_STATUS_BUFOVF_Msk) !=
			0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_STATUS & SERCOM_USART_EXT_STATUS_BUFOVF_Msk) !=
			0);
	}
}

/**
 * @brief Check if there is a frame error.
 *
 * This function checks if there is a frame error for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if there is a frame error, false otherwise.
 */
static inline bool hal_mchp_uart_is_err_frame(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_STATUS & SERCOM_USART_INT_STATUS_FERR_Msk) !=
			0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_STATUS & SERCOM_USART_EXT_STATUS_FERR_Msk) !=
			0);
	}
}

/**
 * @brief Check if there is a parity error.
 *
 * This function checks if there is a parity error for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if there is a parity error, false otherwise.
 */
static inline bool hal_mchp_uart_is_err_parity(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_STATUS & SERCOM_USART_INT_STATUS_PERR_Msk) !=
			0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_STATUS & SERCOM_USART_EXT_STATUS_PERR_Msk) !=
			0);
	}
}

/**
 * @brief Check if there is an autobaud synchronization error.
 *
 * This function checks if there is an autobaud synchronization error for the specified UART
 * instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if there is an autobaud synchronization error, false otherwise.
 */
static inline bool hal_mchp_uart_is_err_autobaud_sync(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_STATUS & SERCOM_USART_INT_STATUS_ISF_Msk) !=
			0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_STATUS & SERCOM_USART_EXT_STATUS_ISF_Msk) !=
			0);
	}
}

/**
 * @brief Check if there is a collision error.
 *
 * This function checks if there is a collision error for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 * @return True if there is a collision error, false otherwise.
 */
static inline bool hal_mchp_uart_is_err_collision(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		return ((hal->regs->USART_INT.SERCOM_STATUS & SERCOM_USART_INT_STATUS_COLL_Msk) !=
			0);
	} else {
		return ((hal->regs->USART_EXT.SERCOM_STATUS & SERCOM_USART_EXT_STATUS_COLL_Msk) !=
			0);
	}
}

/**
 * @brief Clear all UART error flags.
 *
 * This function clears all error flags for the specified UART instance.
 *
 * @param hal Pointer to the UART instance.
 */
static inline void hal_mchp_uart_err_clear_all(const hal_mchp_uart_t *hal)
{
	if (hal->clock_external == 1) {
		hal->regs->USART_INT.SERCOM_STATUS |=
			SERCOM_USART_INT_STATUS_BUFOVF_Msk | SERCOM_USART_INT_STATUS_FERR_Msk |
			SERCOM_USART_INT_STATUS_PERR_Msk | SERCOM_USART_INT_STATUS_ISF_Msk |
			SERCOM_USART_INT_STATUS_COLL_Msk;
	} else {
		hal->regs->USART_EXT.SERCOM_STATUS |=
			SERCOM_USART_EXT_STATUS_BUFOVF_Msk | SERCOM_USART_EXT_STATUS_FERR_Msk |
			SERCOM_USART_EXT_STATUS_PERR_Msk | SERCOM_USART_EXT_STATUS_ISF_Msk |
			SERCOM_USART_EXT_STATUS_COLL_Msk;
	}
}

#endif /* MICROCHIP_HAL_MCHP_UART_SERCOM_U2201_H_ */
