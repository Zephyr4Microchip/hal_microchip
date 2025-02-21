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

 #ifndef MICROCHIP_HAL_SPI_SERCOM_U2201_H_
 #define MICROCHIP_HAL_SPI_SERCOM_U2201_H_
 
 /*Wait synchronization*/
 static inline void hal_mchp_spi_wait_sync(const hal_mchp_spi_t *hal)
 {
 #if defined(SERCOM_SPIM_SYNCBUSY_Msk)
	 /* SYNCBUSY is a register */
	 while ((hal->regs->SPIM.SERCOM_SYNCBUSY & SERCOM_SPIM_SYNCBUSY_Msk) !=
			0) {
	 }
 #else
 #error Unsupported device
 #endif
 }
 
 /*Enable the SPI peripheral*/
 static inline void hal_mchp_spi_enable(const hal_mchp_spi_t *hal)
 {
	 hal_mchp_spi_wait_sync(hal);
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_ENABLE_Msk;
	 hal_mchp_spi_wait_sync(hal);
 }
 
 /*Disable the SPI peripheral*/
 static inline void hal_mchp_spi_disable(const hal_mchp_spi_t *hal)
 {
	 hal_mchp_spi_wait_sync(hal);
	 hal->regs->SPIM.SERCOM_CTRLA &= ~SERCOM_SPIM_CTRLA_ENABLE_Msk;
	 hal_mchp_spi_wait_sync(hal);
 }
 
 /*Select the SPI Master Mode*/
 static inline int hal_mchp_spi_master_mode(const hal_mchp_spi_t *hal)
 {
	 hal_mchp_spi_wait_sync(hal);
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_MODE_SPI_MASTER;
	 hal_mchp_spi_wait_sync(hal);
	 return 0;
 }
 
 /*Select the SPI Slave Mode*/
 static inline int hal_mchp_spi_slave_mode(const hal_mchp_spi_t *hal)
 {
	 return -1;
 }
 
 /*Select the SPI Data Order, MSB first*/
 static inline void hal_mchp_spi_msb_first(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_DORD_MSB;
 }
 
 /*Select the SPI Data Order,LSB first*/
 static inline void hal_mchp_spi_lsb_first(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_DORD_LSB;
 }
 
 /*Select the SPI Clock Polarity Idle Low*/
 static inline void
 hal_mchp_spi_cpol_idle_low(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW;
 }
 
 /*Select the SPI Clock Polarity Idle High*/
 static inline void
 hal_mchp_spi_cpol_idle_high(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH;
 }
 
 /*Select the SPI Clock Phase leading Edge*/
 static inline void
 hal_mchp_spi_cpha_lead_edge(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE;
 }
 
 /*Select the SPI Clock Phase Trailing Edge*/
 static inline void
 hal_mchp_spi_cpha_trail_edge(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE;
 }
 
 /*Select the SPI Half Duplex Mode*/
 static inline int
 hal_mchp_spi_half_duplex_mode(const hal_mchp_spi_t *hal)
 {
	 return -1;
 }
 
 /*Select the SPI Full Duplex Mode*/
 static inline int
 hal_mchp_spi_full_duplex_mode(const hal_mchp_spi_t *hal)
 {
	 return 0;
 }
 
 /*Select the pads for the SPI Transmission*/
 static inline void
 hal_mchp_spi_config_pinout(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLA =
		 (hal->pads) |
		 (hal->regs->SPIM.SERCOM_CTRLA & ~(SERCOM_SPIM_CTRLA_DIPO_Msk |
						   SERCOM_SPIM_CTRLA_DOPO_Msk));
 }
 
 /*Select the pads for the SPI Transmission for loopback mode*/
 static inline void hal_mchp_spi_mode_loop(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_DIPO_PAD0;
	 hal->regs->SPIM.SERCOM_CTRLA |= SERCOM_SPIM_CTRLA_DOPO_PAD0;
 }
 
 /*Enable the Receiver in SPI peripheral*/
 static inline void hal_mchp_spi_rx_enable(const hal_mchp_spi_t *hal)
 {
	 hal_mchp_spi_wait_sync(hal);
	 hal->regs->SPIM.SERCOM_CTRLB |= SERCOM_SPIM_CTRLB_RXEN_Msk;
	 hal_mchp_spi_wait_sync(hal);
 }
 
 /*Select the 8 BIT Character Size  in SPI peripheral*/
 static inline int hal_mchp_spi_8bit_ch_size(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_CTRLB |= SERCOM_SPIM_CTRLB_CHSIZE_8_BIT;
	 return 0;
 }
 
 /*Select the 9 BIT Character Size  in SPI peripheral*/
 static inline int hal_mchp_spi_9bit_ch_size(const hal_mchp_spi_t *hal)
 {
	 /* hal->regs->SPIM.SERCOM_CTRLB |= SERCOM_SPIM_CTRLB_CHSIZE_9_BIT;*/
	 return -1;
 }
 
 /*Set the BAUD Rate value for SPI peripheral*/
 static inline void
 hal_mchp_spi_set_baudrate(const hal_mchp_spi_t *hal,
			   const struct spi_config *config,
			   uint32_t clk_freq_hz)
 {
	 int baudvalue;
 
	 /* Use the requested or next highest possible frequency */
	 baudvalue = (clk_freq_hz / (2U * (config->frequency))) - 1U;
	 baudvalue = CLAMP(baudvalue, 0, UINT8_MAX);
	 hal->regs->SPIM.SERCOM_BAUD = baudvalue;
 }
 
 /*Disable all SPI Interrupt*/
 static inline void
 hal_mchp_spi_disable_interrupts(const hal_mchp_spi_t *hal)
 {
	 hal_mchp_spi_wait_sync(hal);
	 hal->regs->SPIM.SERCOM_INTENCLR = SERCOM_SPIM_INTENCLR_Msk;
	 hal_mchp_spi_wait_sync(hal);
 }
 
 /*Write Data into DATA register*/
 static inline void hal_mchp_spi_write_data(const hal_mchp_spi_t *hal,
						uint8_t c)
 {
	 hal->regs->SPIM.SERCOM_DATA = c;
 }
 
 /*Read Data from the DATA register*/
 static inline uint8_t
 hal_mchp_spi_read_data(const hal_mchp_spi_t *hal)
 {
	 return (uint8_t)hal->regs->SPIM.SERCOM_DATA;
 }
 
 /*Wait for receive complete*/
 static inline void hal_mchp_spi_rx_comp(const hal_mchp_spi_t *hal)
 {
	 while ((hal->regs->SPIM.SERCOM_INTFLAG &
		 SERCOM_SPIM_INTFLAG_RXC_Msk) !=
			SERCOM_SPIM_INTFLAG_RXC_Msk) {
		 /*Wait until the RXC Flag is set*/
	 };
 }
 
 /*Wait for transmit complete*/
 static inline void hal_mchp_spix_comp(const hal_mchp_spi_t *hal)
 {
	 while (!(hal->regs->SPIM.SERCOM_INTFLAG &
		  SERCOM_SPIM_INTFLAG_TXC_Msk)) {
		 /*Wait until the TXC Flag is set*/
	 }
 }
 
 /*Clear the DATA register*/
 static inline void hal_mchp_spi_clr_data(const hal_mchp_spi_t *hal)
 {
	 while ((hal->regs->SPIM.SERCOM_INTFLAG &
		 SERCOM_SPIM_INTFLAG_RXC_Msk) ==
			SERCOM_SPIM_INTFLAG_RXC_Msk) {
		 (void)hal->regs->SPIM.SERCOM_DATA;
		 /*Clear the DATA register until the RXC flag is cleared*/
	 };
 }
 
 /*Wait for Data Register Empty*/
 static inline void hal_mchp_spi_data_empty(const hal_mchp_spi_t *hal)
 {
	 while ((hal->regs->SPIM.SERCOM_INTFLAG &
		 SERCOM_SPIM_INTFLAG_DRE_Msk) !=
			SERCOM_SPIM_INTFLAG_DRE_Msk) {
		 /*Wait until the DRE Flag is set*/
	 }
 }
 
 /*Enable the Receive Complete Interrupt*/
 static inline void
 hal_mchp_spi_enable_rxc_interrupt(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_INTENSET = SERCOM_SPIM_INTENSET_RXC_Msk;
 }
 
 /*Enable the Transmit Complete Interrupt*/
 static inline void
 hal_mchp_spi_enable_txc_interrupt(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_INTENSET = SERCOM_SPIM_INTENSET_TXC_Msk;
 }
 
 /*Enable the Data Register Empty Interrupt*/
 static inline void
 hal_mchp_spi_enable_data_empty_interrupt(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_INTENSET = SERCOM_SPIM_INTENSET_DRE_Msk;
 }
 
 /*Disbale the Receive Complete Interrupt*/
 static inline void
 hal_mchp_spi_disable_rxc_interrupt(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_INTENCLR = SERCOM_SPIM_INTENCLR_RXC_Msk;
 }
 
 /*Disbale the Transmit Complete Interrupt*/
 static inline void
 hal_mchp_spi_disable_txc_interrupt(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_INTENCLR = SERCOM_SPIM_INTENCLR_TXC_Msk;
 }
 
 /*Disbale the Data Register Empty Interrupt*/
 static inline void
 hal_mchp_spi_disable_data_empty_interrupt(const hal_mchp_spi_t *hal)
 {
	 hal->regs->SPIM.SERCOM_INTENCLR = SERCOM_SPIM_INTENCLR_DRE_Msk;
 }
 
 /*Return true if receive complete flag is set*/
 static inline bool
 hal_mchp_spi_is_rx_comp_set(const hal_mchp_spi_t *hal)
 {
	 return ((hal->regs->SPIM.SERCOM_INTFLAG &
		  SERCOM_SPIM_INTFLAG_RXC_Msk) ==
		 SERCOM_SPIM_INTFLAG_RXC_Msk);
 }
 
 /*Return true if Data register empty flag is set*/
 static inline bool
 hal_mchp_spi_is_data_empty_set(const hal_mchp_spi_t *hal)
 {
	 return ((hal->regs->SPIM.SERCOM_INTFLAG &
		  SERCOM_SPIM_INTFLAG_DRE_Msk) ==
		 SERCOM_SPIM_INTFLAG_DRE_Msk);
 }
 
 /*Return true if transmit complete flag is set*/
 static inline bool
 hal_mchp_spi_is_tx_comp_set(const hal_mchp_spi_t *hal)
 {
	 return ((hal->regs->SPIM.SERCOM_INTFLAG &
		  SERCOM_SPIM_INTFLAG_TXC_Msk) ==
		 SERCOM_SPIM_INTFLAG_TXC_Msk);
 }
 
 /*Return the source address*/
 static inline void *
 hal_mchp_spi_get_dma_src_addr(const hal_mchp_spi_t *hal)
 {
	 return ((void *)&(hal->regs->SPIM.SERCOM_DATA));
 }
 
 /*Return the destination address*/
 static inline void *
 hal_mchp_spi_get_dma_dest_addr(const hal_mchp_spi_t *hal)
 {
	 return ((void *)&(hal->regs->SPIM.SERCOM_DATA));
 }
 
 #endif /* MICROCHIP_HAL_SPI_SERCOM_U2201_H_ */
 