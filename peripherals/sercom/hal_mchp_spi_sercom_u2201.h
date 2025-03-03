/**
 * Copyright (c) 2025 Microchip Technology Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_spi.h
 * @brief HAL SPI driver for Microchip devices.
 *
 * This file provides low-level SPI functionalities for Microchip devices
 * using the SERCOM peripheral.
 */

#ifndef MICROCHIP_HAL_MCHP_SPI_SERCOM_U2201_H_
#define MICROCHIP_HAL_MCHP_SPI_SERCOM_U2201_H_

/*Wait synchronization*/
static inline void hal_mchp_spi_wait_sync(const hal_mchp_spi_t *hal, uint32_t sync_flag)
{
	/* Wait for synchronization */
	while ((hal->regs->SPIM.SERCOM_SYNCBUSY & sync_flag) != 0U) {
		/* Do nothing */
	}
}

/*Enable the SPI peripheral*/
static inline void hal_mchp_spi_enable(const hal_mchp_spi_t *hal)
{
	hal_mchp_spi_wait_sync(hal, SERCOM_SPIM_SYNCBUSY_ENABLE_Msk);
	hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_ENABLE_Msk;
	hal_mchp_spi_wait_sync(hal, SERCOM_SPIM_SYNCBUSY_ENABLE_Msk);
}

/*Disable the SPI peripheral*/
static inline void hal_mchp_spi_disable(const hal_mchp_spi_t *hal)
{
	hal_mchp_spi_wait_sync(hal, SERCOM_SPIM_SYNCBUSY_ENABLE_Msk);
	hal->regs->SPIM.SERCOM_CTRLA &= ~SERCOM_SPIM_CTRLA_ENABLE_Msk;
	hal_mchp_spi_wait_sync(hal, SERCOM_SPIM_SYNCBUSY_ENABLE_Msk);
}

/*Set the SPI Master Mode*/
static inline int hal_mchp_spi_master_mode(const hal_mchp_spi_t *hal)
{
	/* Clear the MODE bit field and set it to SPI Master mode */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA & ~SERCOM_SPIM_CTRLA_MODE_Msk) |
		SERCOM_SPIM_CTRLA_MODE_SPI_MASTER;

	return 0;
}

/*Set the SPI Slave Mode*/
static inline int hal_mchp_spi_slave_mode(const hal_mchp_spi_t *hal)
{
	return -1;
}

/*Set the SPI Data Order, MSB first*/
static inline void hal_mchp_spi_msb_first(const hal_mchp_spi_t *hal)
{
	/* Clear the DORD bit field and set it to MSB first */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA & ~SERCOM_SPIM_CTRLA_DORD_Msk) |
		SERCOM_SPIM_CTRLA_DORD_MSB;
}

/*Set the SPI Data Order,LSB first*/
static inline void hal_mchp_spi_lsb_first(const hal_mchp_spi_t *hal)
{
	/* Clear the DORD bit field and set it to LSB first */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA & ~SERCOM_SPIM_CTRLA_DORD_Msk) |
		SERCOM_SPIM_CTRLA_DORD_LSB;
}

/*Set the SPI Clock Polarity Idle Low*/
static inline void hal_mchp_spi_cpol_idle_low(const hal_mchp_spi_t *hal)
{
	/* Clear the CPOL bit field and set clock polarity to Idle Low */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA & ~SERCOM_SPIM_CTRLA_CPOL_Msk) |
		SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW;
}

/*Set the SPI Clock Polarity Idle High*/
static inline void hal_mchp_spi_cpol_idle_high(const hal_mchp_spi_t *hal)
{
	/* Clear the CPOL bit field and set clock polarity to Idle High */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA & ~SERCOM_SPIM_CTRLA_CPOL_Msk) |
		SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH;
}

/*Set the SPI Clock Phase leading Edge*/
static inline void hal_mchp_spi_cpha_lead_edge(const hal_mchp_spi_t *hal)
{
	/* Clear the CPHA bit field and set clock phase to Leading Edge */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA & ~SERCOM_SPIM_CTRLA_CPHA_Msk) |
		SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE;
}

/*Set the SPI Clock Phase Trailing Edge*/
static inline void hal_mchp_spi_cpha_trail_edge(const hal_mchp_spi_t *hal)
{
	/* Clear the CPHA bit field and set clock phase to Trailing Edge */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA & ~SERCOM_SPIM_CTRLA_CPHA_Msk) |
		SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE;
}

/*Set the SPI Half Duplex Mode*/
static inline int hal_mchp_spi_half_duplex_mode(const hal_mchp_spi_t *hal)
{
	return -1;
}

/*Set the SPI Full Duplex Mode*/
static inline int hal_mchp_spi_full_duplex_mode(const hal_mchp_spi_t *hal)
{
	return 0;
}

/*Set the pads for the SPI Transmission*/
static inline void hal_mchp_spi_config_pinout(const hal_mchp_spi_t *hal)
{
	/* Clear the DIPO and DOPO bit fields and apply the new pad configuration */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA &
		 ~(SERCOM_SPIM_CTRLA_DIPO_Msk | SERCOM_SPIM_CTRLA_DOPO_Msk)) |
		(hal->pads);
}

/*Set the pads for the SPI Transmission for loopback mode*/
static inline void hal_mchp_spi_mode_loopback(const hal_mchp_spi_t *hal)
{
	/* Clear the DIPO and DOPO bit fields and set them to PAD0 */
	hal->regs->SPIM.SERCOM_CTRLA =
		(hal->regs->SPIM.SERCOM_CTRLA &
		 ~(SERCOM_SPIM_CTRLA_DIPO_Msk | SERCOM_SPIM_CTRLA_DOPO_Msk)) |
		(SERCOM_SPIM_CTRLA_DIPO_PAD0 | SERCOM_SPIM_CTRLA_DOPO_PAD0);
}

/*Enable the Receiver in SPI peripheral*/
static inline void hal_mchp_spi_rx_enable(const hal_mchp_spi_t *hal)
{
	hal_mchp_spi_wait_sync(hal, SERCOM_SPIM_SYNCBUSY_CTRLB_Msk);
	/* Clear the RXEN bit field and enable Receiver */
	hal->regs->SPIM.SERCOM_CTRLB =
		(hal->regs->SPIM.SERCOM_CTRLB & ~SERCOM_SPIM_CTRLB_RXEN_Msk) |
		SERCOM_SPIM_CTRLB_RXEN_Msk;

	hal_mchp_spi_wait_sync(hal, SERCOM_SPIM_SYNCBUSY_CTRLB_Msk);
}

/*Set the 8 BIT Character Size  in SPI peripheral*/
static inline int hal_mchp_spi_8bit_ch_size(const hal_mchp_spi_t *hal)
{
	/* Clear the CHSIZE bit field and set character size to 8-bit */
	hal->regs->SPIM.SERCOM_CTRLB =
		(hal->regs->SPIM.SERCOM_CTRLB & ~SERCOM_SPIM_CTRLB_CHSIZE_Msk) |
		SERCOM_SPIM_CTRLB_CHSIZE_8_BIT;
	return 0;
}

/*Set the 9 BIT Character Size  in SPI peripheral*/
static inline int hal_mchp_spi_9bit_ch_size(const hal_mchp_spi_t *hal)
{
	/* Clear the CHSIZE bit field and set character size to 9-bit */
	/* hal->regs->SPIM.SERCOM_CTRLB =
		(hal->regs->SPIM.SERCOM_CTRLB & ~SERCOM_SPIM_CTRLB_CHSIZE_Msk) |
		SERCOM_SPIM_CTRLB_CHSIZE_9_BIT; */
	return -1;
}

/*Set the BAUD Rate value for SPI peripheral*/
static inline void hal_mchp_spi_set_baudrate(const hal_mchp_spi_t *hal,
					     const struct spi_config *config, uint32_t clk_freq_hz)
{
	int baudvalue;

	/* Use the requested or next highest possible frequency */
	baudvalue = (clk_freq_hz / (2U * (config->frequency))) - 1U;
	baudvalue = CLAMP(baudvalue, 0, UINT8_MAX);
	hal->regs->SPIM.SERCOM_BAUD = baudvalue;
}

/*Disable all SPI Interrupt*/
static inline void hal_mchp_spi_disable_interrupts(const hal_mchp_spi_t *hal)
{
	hal->regs->SPIM.SERCOM_INTENCLR = SERCOM_SPIM_INTENCLR_Msk;
}

/*Write Data into DATA register*/
static inline void hal_mchp_spi_write_data(const hal_mchp_spi_t *hal, uint8_t data)
{
	hal->regs->SPIM.SERCOM_DATA = data;
}

/*Read Data from the DATA register*/
static inline uint8_t hal_mchp_spi_read_data(const hal_mchp_spi_t *hal)
{
	return (uint8_t)hal->regs->SPIM.SERCOM_DATA;
}

/*Return true if receive complete flag is set*/
static inline bool hal_mchp_spi_is_rx_comp(const hal_mchp_spi_t *hal)
{
	return (hal->regs->SPIM.SERCOM_INTFLAG & SERCOM_SPIM_INTFLAG_RXC_Msk) ==
	       SERCOM_SPIM_INTFLAG_RXC_Msk;
}

/*Return true if transmit complete flag is set*/
static inline bool hal_mchp_spi_is_tx_comp(const hal_mchp_spi_t *hal)
{
	return (hal->regs->SPIM.SERCOM_INTFLAG & SERCOM_SPIM_INTFLAG_TXC_Msk) ==
	       SERCOM_SPIM_INTFLAG_TXC_Msk;
}

/*Clear the DATA register*/
static inline void hal_mchp_spi_clr_data(const hal_mchp_spi_t *hal)
{
	while ((hal->regs->SPIM.SERCOM_INTFLAG & SERCOM_SPIM_INTFLAG_RXC_Msk) ==
	       SERCOM_SPIM_INTFLAG_RXC_Msk) {
		(void)hal->regs->SPIM.SERCOM_DATA;
		/*Clear the DATA register until the RXC flag is cleared*/
	};
}

/*Return true if data register empty flag is set*/
static inline bool hal_mchp_spi_is_data_empty(const hal_mchp_spi_t *hal)
{
	return (hal->regs->SPIM.SERCOM_INTFLAG & SERCOM_SPIM_INTFLAG_DRE_Msk) ==
	       SERCOM_SPIM_INTFLAG_DRE_Msk;
}

/*Enable the Receive Complete Interrupt*/
static inline void hal_mchp_spi_enable_rxc_interrupt(const hal_mchp_spi_t *hal)
{
	hal->regs->SPIM.SERCOM_INTENSET = SERCOM_SPIM_INTENSET_RXC_Msk;
}

/*Enable the Transmit Complete Interrupt*/
static inline void hal_mchp_spi_enable_txc_interrupt(const hal_mchp_spi_t *hal)
{
	hal->regs->SPIM.SERCOM_INTENSET = SERCOM_SPIM_INTENSET_TXC_Msk;
}

/*Enable the Data Register Empty Interrupt*/
static inline void hal_mchp_spi_enable_data_empty_interrupt(const hal_mchp_spi_t *hal)
{
	hal->regs->SPIM.SERCOM_INTENSET = SERCOM_SPIM_INTENSET_DRE_Msk;
}

/*Disable the Receive Complete Interrupt*/
static inline void hal_mchp_spi_disable_rxc_interrupt(const hal_mchp_spi_t *hal)
{
	hal->regs->SPIM.SERCOM_INTENCLR = SERCOM_SPIM_INTENCLR_RXC_Msk;
}

/*Disable the Transmit Complete Interrupt*/
static inline void hal_mchp_spi_disable_txc_interrupt(const hal_mchp_spi_t *hal)
{
	hal->regs->SPIM.SERCOM_INTENCLR = SERCOM_SPIM_INTENCLR_TXC_Msk;
}

/*Disable the Data Register Empty Interrupt*/
static inline void hal_mchp_spi_disable_data_empty_interrupt(const hal_mchp_spi_t *hal)
{
	hal->regs->SPIM.SERCOM_INTENCLR = SERCOM_SPIM_INTENCLR_DRE_Msk;
}

/*Return the source address*/
static inline void *hal_mchp_spi_get_dma_src_addr(const hal_mchp_spi_t *hal)
{
	return ((void *)&(hal->regs->SPIM.SERCOM_DATA));
}

/*Return the destination address*/
static inline void *hal_mchp_spi_get_dma_dest_addr(const hal_mchp_spi_t *hal)
{
	return ((void *)&(hal->regs->SPIM.SERCOM_DATA));
}

/*Return true if any of the interrupt is enabled is set*/
static inline bool hal_mchp_spi_is_interrupt_set(const hal_mchp_spi_t *hal)
{
	return (hal->regs->SPIM.SERCOM_INTENSET != 0);
}

/* Set the Hardware slave select*/
static inline void hal_mchp_spi_slave_select_enable(const hal_mchp_spi_t *hal)
{
	hal_mchp_spi_wait_sync(hal, SERCOM_SPIM_SYNCBUSY_CTRLB_Msk);
	/* Clear the MSSEN bit field and enable Master Slave Select */
	hal->regs->SPIM.SERCOM_CTRLB =
		(hal->regs->SPIM.SERCOM_CTRLB & ~SERCOM_SPIM_CTRLB_MSSEN_Msk) |
		SERCOM_SPIM_CTRLB_MSSEN_Msk;
	hal_mchp_spi_wait_sync(hal, SERCOM_SPIM_SYNCBUSY_CTRLB_Msk);
}

#endif /* MICROCHIP_HAL_MCHP_SPI_SERCOM_U2201_H_ */
