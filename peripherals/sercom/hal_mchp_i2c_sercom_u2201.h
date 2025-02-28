/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_
#define MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_

/* Enum representing the interrupt flags for the MCHP I2C peripheral in controller and target mode
 */
typedef enum {
	/* Indicates that the controller is currently on the bus. */
	I2C_MCHP_INTFLAG_CONTROLLER_ON_BUS,

	/* Indicates that the target is currently on the bus. */
	I2C_MCHP_INTFLAG_TARGET_ON_BUS,

	/* Indicates that a STOP condition has been detected. */
	I2C_MCHP_INTFLAG_STOP,

	/* Indicates that an address match has occurred. */
	I2C_MCHP_INTFLAG_ADDR_MATCH,

	/* Indicates that data is ready for transmission or reception. */
	I2C_MCHP_INTFLAG_DATA_READY,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_INTFLAG_ERROR,

} i2c_mchp_intFlag_t;

/* Enum representing the interrupt for the MCHP I2C peripheral in target mode
 */
typedef enum {
	/* Indicates that a STOP condition has been detected. */
	I2C_MCHP_TARGET_INT_STOP = 2,

	/* Indicates that an address match has occurred. */
	I2C_MCHP_TARGET_INT_ADDR_MATCH,

	/* Indicates that data is ready for transmission or reception. */
	I2C_MCHP_TARGET_INT_DATA_READY,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_TARGET_INT_ERROR,

} i2c_mchp_target_int_t;

typedef enum {
	/* Indicates that a arbitration lost condition has been detected. */
	I2C_MCHP_STATUS_ARBLOST = 2,

	/* Indicates that errors on bus has occurred. */
	I2C_MCHP_STATUS_ERROR,

	/* Indicates that data direction for transmission or reception. */
	I2C_MCHP_STATUS_DIR,

} i2c_mchp_status_get_t;

/* Macro to define the source address for I2C DMA transfers */
static inline void *hal_mchp_i2c_get_dma_source_addr(const hal_mchp_i2c_t *hal)
{
	return ((void *)&(hal->regs->I2CM.SERCOM_DATA));
}

/* Macro to define the destination address for I2C DMA transfers */
static inline void *hal_mchp_i2c_get_dma_dest_addr(const hal_mchp_i2c_t *hal)
{
	return ((void *)&(hal->regs->I2CM.SERCOM_DATA));
}

/* API to wait for the I2C peripheral to synchronize */
static inline void hal_mchp_i2c_wait_sync(const hal_mchp_i2c_t *hal, uint32_t sync_flag)
{
	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & sync_flag) != 0) {
		/* Do nothing */
	}
}

/* API to perform a software reset on the I2C peripheral */
static inline void hal_mchp_i2c_swrst(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_SWRST_Msk;

	hal_mchp_i2c_wait_sync(hal, SERCOM_I2CM_CTRLA_SWRST_Msk);
}

/* API to enable the I2C peripheral */
static inline void hal_mchp_i2c_enable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_ENABLE_Msk;

	hal_mchp_i2c_wait_sync(hal, SERCOM_I2CM_CTRLA_ENABLE_Msk);
}

/* API to disable the I2C peripheral */
static inline void hal_mchp_i2c_disable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA &= ~SERCOM_I2CM_CTRLA_ENABLE_Msk;

	hal_mchp_i2c_wait_sync(hal, SERCOM_I2CM_CTRLA_ENABLE_Msk);
}

/* API to enable automatic acknowledgment for the I2C peripheral */
static inline void hal_mchp_i2c_set_auto_ack(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB = SERCOM_I2CM_CTRLB_ACKACT(0);
}

/* API to configure specific features of the I2C peripheral */
static inline void hal_mchp_i2c_feature_config(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB = SERCOM_I2CM_CTRLB_SMEN_Msk;
}

/* API to configure the I2C peripheral to operate in controller mode */
static inline int hal_mchp_i2c_controller_mode(const hal_mchp_i2c_t *hal)
{
	/* Enable i2c device specific features */
	hal_mchp_i2c_feature_config(hal);

	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_MODE_I2C_MASTER |
#ifdef SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk
					SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk |
#endif
					SERCOM_I2CM_CTRLA_INACTOUT(0x3);

	if (hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		return 0;
	} else {
		return -1;
	}
}

/* API to send a Stop condition to terminate the I2C communication */
static inline void hal_mchp_i2c_transfer_stop(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB |= SERCOM_I2CM_CTRLB_ACKACT(1) | SERCOM_I2CM_CTRLB_CMD(0x3);

	hal_mchp_i2c_wait_sync(hal, SERCOM_I2CM_SYNCBUSY_SYSOP_Msk);
}

/* API to ensure the I2C bus is in an idle state */
static inline void hal_mchp_i2c_bus_state_idle(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_STATUS = SERCOM_I2CM_STATUS_BUSSTATE_IDLE;

	hal_mchp_i2c_wait_sync(hal, SERCOM_I2CM_SYNCBUSY_SYSOP_Msk);
}

/* API to enable I2C interrupts in controller mode */
static inline void hal_mchp_i2c_interrupt_enable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_INTENSET = (uint8_t)SERCOM_I2CM_INTENSET_Msk;
}

/* API to disable I2C interrupts in controller mode */
static inline void hal_mchp_i2c_interrupt_disable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_INTENCLR = SERCOM_I2CM_INTENCLR_Msk;
}

/* API to get the I2C interrupt flag status */
static inline i2c_mchp_intFlag_t hal_mchp_i2c_int_flag_get(const hal_mchp_i2c_t *hal)
{
	uint32_t flag;

	if (hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {

		flag = (uint32_t)hal->regs->I2CM.SERCOM_INTFLAG;

		if (flag == SERCOM_I2CM_INTFLAG_MB_Msk) {
			return I2C_MCHP_INTFLAG_CONTROLLER_ON_BUS;
		} else if (flag == SERCOM_I2CM_INTFLAG_SB_Msk) {
			return I2C_MCHP_INTFLAG_TARGET_ON_BUS;
		} else {
			/*code*/
		}

	} else {
		flag = (uint32_t)hal->regs->I2CS.SERCOM_INTFLAG;
		if (flag == SERCOM_I2CS_INTFLAG_AMATCH_Msk) {
			return I2C_MCHP_INTFLAG_ADDR_MATCH;
		} else if (flag == SERCOM_I2CS_INTFLAG_DRDY_Msk) {
			return I2C_MCHP_INTFLAG_DATA_READY;
		} else if (flag == SERCOM_I2CS_INTFLAG_PREC_Msk) {
			return I2C_MCHP_INTFLAG_STOP;
		} else {
			/*code*/
		}
	}

	return I2C_MCHP_INTFLAG_ERROR;
}

/* API to clear the I2C interrupt flags */
static inline void hal_mchp_i2c_int_flag_Clear(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_INTFLAG = SERCOM_I2CM_INTFLAG_Msk;
}

/* API to get the current I2C status */
static inline i2c_mchp_status_get_t hal_mchp_i2c_status_get(const hal_mchp_i2c_t *hal)
{
	uint32_t flag;

	if (hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		flag = hal->regs->I2CM.SERCOM_STATUS;

		if (flag & SERCOM_I2CM_STATUS_ARBLOST_Msk) {
			return I2C_MCHP_STATUS_ARBLOST;
		} else if (flag & SERCOM_I2CM_STATUS_Msk) {
			/* code */
		}
	} else {
		flag = hal->regs->I2CM.SERCOM_STATUS;

		if (flag & SERCOM_I2CS_STATUS_DIR_Msk) {
			return I2C_MCHP_STATUS_DIR;
		}else if(flag & (~SERCOM_I2CS_STATUS_DIR_Msk)){
			return 0;
		}
	}
	return I2C_MCHP_STATUS_ERROR;
}

/* API to clear the I2C status flags */
static inline void hal_mchp_i2c_status_clear(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_STATUS = SERCOM_I2CM_STATUS_Msk;
}

/* API to get the nack status of i2c controller while tx/rx data */
static inline int hal_mchp_i2c_nack_get(const hal_mchp_i2c_t *hal)
{
	if (hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		if (hal->regs->I2CM.SERCOM_STATUS & SERCOM_I2CM_STATUS_RXNACK_Msk) {
			return 0;
		} else {
			return -1;
		}
	} else {
		if (hal->regs->I2CS.SERCOM_STATUS & SERCOM_I2CS_STATUS_RXNACK_Msk) {
			return 0;
		} else {
			return -1;
		}
	}
}

/* API to check the RXNACK, bus error and timeouts */
static inline int hal_mchp_i2c_error_check(const hal_mchp_i2c_t *hal)
{
	if (hal->regs->I2CM.SERCOM_STATUS & SERCOM_I2CM_STATUS_Msk) {
		return -1;
	}

	return 0;
}

/* API to write the address of target in address register */
static inline void hal_mchp_i2c_addr_write(const hal_mchp_i2c_t *hal, uint32_t addr)
{
	if ((addr & 1) == 1) {
		hal_mchp_i2c_set_auto_ack(hal);
	}

	hal->regs->I2CM.SERCOM_ADDR = addr;

	hal_mchp_i2c_wait_sync(hal, SERCOM_I2CM_SYNCBUSY_SYSOP_Msk);
}

/* API to read the i2c data from data register */
static inline uint8_t hal_mchp_i2c_byte_read(const hal_mchp_i2c_t *hal)
{
	hal_mchp_i2c_wait_sync(hal, SERCOM_I2CM_SYNCBUSY_SYSOP_Msk);

	return (uint8_t)hal->regs->I2CM.SERCOM_DATA;
}

/* API to read the i2c data from data register */
static inline void hal_mchp_i2c_byte_write(const hal_mchp_i2c_t *hal, uint8_t data)
{
	hal->regs->I2CM.SERCOM_DATA = (uint8_t)data;

	hal_mchp_i2c_wait_sync(hal, SERCOM_I2CM_SYNCBUSY_SYSOP_Msk);
}

/* API to configure the i2c in target mode */
static inline void hal_mchp_i2c_target_mode(const hal_mchp_i2c_t *hal)
{
	/* Enable i2c device specific features */
	hal_mchp_i2c_feature_config(hal);

	hal->regs->I2CS.SERCOM_CTRLA = SERCOM_I2CS_CTRLA_MODE(0x4) |
				       SERCOM_I2CS_CTRLA_SDAHOLD(0x1) |
				       SERCOM_I2CS_CTRLA_SPEED(0x1);
}

/* API to reset the target address */
static inline void hal_mchp_i2c_reset_addr(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CS.SERCOM_ADDR = SERCOM_I2CS_ADDR_ADDR(0);
}

/* API to Enable i2c target interrupts */
static inline void hal_mchp_i2c_target_int_enable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CS.SERCOM_INTENSET = (uint8_t)SERCOM_I2CS_INTENSET_Msk;
}

/* API to Disable i2c target interrupts */
static inline void hal_mchp_i2c_target_int_disable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CS.SERCOM_INTENCLR = (uint8_t)SERCOM_I2CS_INTENCLR_Msk;
}

/* API to Disable i2c target interrupts */
static inline i2c_mchp_target_int_t hal_mchp_i2c_target_int_get(const hal_mchp_i2c_t *hal)
{
	uint32_t flag = (uint32_t)hal->regs->I2CS.SERCOM_INTFLAG;

	if (flag == SERCOM_I2CS_INTENSET_AMATCH_Msk) {
		return I2C_MCHP_TARGET_INT_ADDR_MATCH;
	} else if (flag == SERCOM_I2CS_INTENSET_DRDY_Msk) {
		return I2C_MCHP_TARGET_INT_DATA_READY;
	} else if (flag == SERCOM_I2CS_INTENSET_PREC_Msk) {
		return I2C_MCHP_TARGET_INT_STOP;
	} else if (flag == SERCOM_I2CS_INTENSET_ERROR_Msk) {
		return I2C_MCHP_TARGET_INT_ERROR;
	} else {
		return -1;
	}
}

/* API to set the own uniqe address in target mode */
static inline void hal_mchp_i2c_set_target_addr(const hal_mchp_i2c_t *hal, uint32_t addr)
{
	hal->regs->I2CS.SERCOM_ADDR = SERCOM_I2CS_ADDR_ADDR(addr);
}

/* API to calculate i2c baud rate */
static inline int hal_mchp_i2c_baudrate_calc(const hal_mchp_i2c_t *hal, uint32_t bitrate,
					     uint32_t sys_clock_rate, uint32_t *baud_val)
{
	uint32_t baud_value = 0U;
	uint32_t src_clk_freq = sys_clock_rate;
	float fsrc_clk_freq = (float)src_clk_freq;
	float fi2c_clk_speed = (float)bitrate;
	float fbaud_value = 0.0f;

	/* Reference clock frequency must be atleast two times the baud rate */
	if (src_clk_freq < (2U * bitrate)) {
		return -1;
	}

	if (bitrate > 1000000U) {
		/* HS mode baud calculation */
		fbaud_value = (fsrc_clk_freq / fi2c_clk_speed) - 2.0f;
		baud_value = (uint32_t)fbaud_value;
	} else {
		/* Standard, FM and FM+ baud calculation */
		fbaud_value = (fsrc_clk_freq / fi2c_clk_speed) -
			      ((fsrc_clk_freq * (100.0f / 1000000000.0f)) + 10.0f);
		baud_value = (uint32_t)fbaud_value;
	}

	if (bitrate <= 400000U) {
		/* For I2C clock speed upto 400 kHz, the value of BAUD<7:0> determines both SCL_L
		 * and SCL_H with SCL_L = SCL_H
		 */
		if (baud_value > (0xFFU * 2U)) {
			/* Set baud rate to the minimum possible value */
			baud_value = 0xFFU;
		} else if (baud_value <= 1U) {
			/* Baud value cannot be 0. Set baud rate to maximum possible value */
			baud_value = 1U;
		} else {
			baud_value /= 2U;
		}
	} else {
		/* To maintain the ratio of SCL_L:SCL_H to 2:1, the max value of
		 * BAUD_LOW<15:8>:BAUD<7:0> can be 0xFF:0x7F. Hence BAUD_LOW + BAUD can not exceed
		 * 255+127 = 382
		 */
		if (baud_value >= 382U) {
			/* Set baud rate to the minimum possible value while maintaining SCL_L:SCL_H
			 * to 2:1
			 */
			baud_value = (0xFFUL << 8U) | (0x7FU);
		} else if (baud_value <= 3U) {
			/* Baud value cannot be 0. Set baud rate to maximum possible value while
			 * maintaining SCL_L:SCL_H to 2:1
			 */
			baud_value = (2UL << 8U) | 1U;
		} else {
			/* For Fm+ mode, I2C SCL_L:SCL_H to 2:1 */
			baud_value = ((((baud_value * 2U) / 3U) << 8U) | (baud_value / 3U));
		}
	}
	*baud_val = baud_value;
	return 0;
}

/* API to set i2c baud rate */
static inline int hal_mchp_i2c_set_baudrate(const hal_mchp_i2c_t *hal, uint32_t bitrate,
					    uint32_t sys_clock_rate)
{
	uint32_t i2c_speed_mode = 0;
	uint32_t baud_value;
	uint32_t hsbaud_value;
	uint32_t sda_hold_time = 0;
	int retVal = 0;

	if (bitrate > 1000000U) {
		/* HS mode requires baud values for both 400kHz and HS frequency. First calculate
		 * baud for 400kHz
		 */
		if (hal_mchp_i2c_baudrate_calc(hal, 400000, sys_clock_rate, &baud_value) != 0) {
			return -1;
		}
	} else {
		if (hal_mchp_i2c_baudrate_calc(hal, bitrate, sys_clock_rate, &baud_value) != 0) {
			return -1;
		}
	}

	if (bitrate > 1000000U) {
		/* Now calculate HS baud value */
		if (hal_mchp_i2c_baudrate_calc(hal, bitrate, sys_clock_rate, &hsbaud_value) != 0) {
			return -1;
		} else {
			baud_value |= (hsbaud_value << 16U);
			i2c_speed_mode = 2U;
			sda_hold_time = 2U;
		}
	} else if (bitrate > 400000U) {
		i2c_speed_mode = 1U;
		sda_hold_time = 1U;
	} else {
		/* Do nothing */
	}

	/* Baud rate - controller Baud Rate*/
	hal->regs->I2CM.SERCOM_BAUD = 255;

	hal->regs->I2CM.SERCOM_CTRLA =
		((hal->regs->I2CM.SERCOM_CTRLA &
		  (~SERCOM_I2CM_CTRLA_SPEED_Msk | ~SERCOM_I2CM_CTRLA_SDAHOLD_Msk)) |
		 (SERCOM_I2CM_CTRLA_SPEED(i2c_speed_mode) |
		  SERCOM_I2CM_CTRLA_SDAHOLD(sda_hold_time)));

	return retVal;
}

#endif /* MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_ */
