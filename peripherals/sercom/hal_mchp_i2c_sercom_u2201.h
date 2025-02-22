/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

 #ifndef MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_
 #define MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_

/* Macro to define the source address for I2C DMA transfers */
#define I2C_MCHP_DMA_SRC_ADDR  (&(i2c->regs->I2CM.SERCOM_DATA))

/* Macro to define the destination address for I2C DMA transfers */
#define I2C_MCHP_DMA_DEST_ADDR (&(i2c->regs->I2CM.SERCOM_DATA))

/* API to wait for the I2C peripheral to synchronize */
static inline void hal_mchp_i2c_wait_sync(const struct hal_mchp_i2c *hal)
{
#if defined(SERCOM_I2CM_SYNCBUSY_Msk)

	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_Msk) != 0) {
	}
#else
#error Unsupported device
#endif
}

/* API to perform a software reset on the I2C peripheral */
static inline void hal_mchp_i2c_swrst(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_SWRST_Msk;

	hal_mchp_i2c_wait_sync(hal);
}

/* API to enable the I2C peripheral */
static inline void hal_mchp_i2c_enable(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_ENABLE_Msk;

	hal_mchp_i2c_wait_sync(hal);
}

/* API to disable the I2C peripheral */
static inline void hal_mchp_i2c_disable(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA &= ~SERCOM_I2CM_CTRLA_ENABLE_Msk;

	hal_mchp_i2c_wait_sync(hal);
}

/* API to enable automatic acknowledgment for the I2C peripheral */
static inline void hal_mchp_i2c_set_auto_ack(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB = SERCOM_I2CM_CTRLB_ACKACT(0);

	hal_mchp_i2c_wait_sync(hal);
}

/* API to configure specific features of the I2C peripheral */
static inline void hal_mchp_i2c_feature_config(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB |= SERCOM_I2CM_CTRLB_SMEN_Msk;

	hal_mchp_i2c_wait_sync(hal);
}

/* API to configure the I2C peripheral to operate in controller mode */
static inline bool hal_mchp_i2c_master_mode(const struct hal_mchp_i2c *hal)
{
	/* Enable i2c device specific features */
	hal_mchp_i2c_feature_config(hal);

	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_MODE_I2C_MASTER |
					SERCOM_I2CM_CTRLA_SDAHOLD_75NS |
					SERCOM_I2CM_CTRLA_SCLSM(0UL);

	hal_mchp_i2c_wait_sync(hal);

	if (hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		return true;
	} else {
		return false;
	}
}

/* API to send a Stop condition to terminate the I2C communication */
static inline void hal_mchp_i2c_transfer_stop(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB |= SERCOM_I2CM_CTRLB_ACKACT(1) | SERCOM_I2CM_CTRLB_CMD(0x3);
}

/* API to ensure the I2C bus is in an idle state */
static inline void hal_mchp_i2c_bus_state_idle(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_STATUS = (uint16_t)SERCOM_I2CM_STATUS_BUSSTATE(0x01UL);

	hal_mchp_i2c_wait_sync(hal);
}

/* API to enable I2C interrupts in controller mode */
static inline void hal_mchp_i2c_interrupt_enable(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_INTENSET = (uint8_t)SERCOM_I2CM_INTENSET_Msk;
}

/* API to disable I2C interrupts in controller mode */
static inline void hal_mchp_i2c_interrupt_disable(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_INTENCLR = (uint8_t)SERCOM_I2CM_INTENCLR_Msk;
}

/* API to get the I2C interrupt flag status */
static inline uint32_t hal_mchp_i2c_int_flag_get(const struct hal_mchp_i2c *hal)
{
	return (uint32_t)hal->regs->I2CM.SERCOM_INTFLAG;
}

/* API to clear the I2C interrupt flags */
static inline void hal_mchp_i2c_int_flag_Clear(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_INTFLAG = SERCOM_I2CM_INTFLAG_Msk;
}

/* API to get the current I2C status */
static inline uint32_t hal_mchp_i2c_status_get(const struct hal_mchp_i2c *hal)
{
	return hal->regs->I2CM.SERCOM_STATUS;
}

/* API to clear the I2C status flags */
static inline void hal_mchp_i2c_status_clear(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CM.SERCOM_STATUS = SERCOM_I2CM_STATUS_Msk;

	hal_mchp_i2c_wait_sync(hal);
}

/* API to get the nack status of i2c master while tx/rx data */
static inline bool hal_mchp_i2c_nack_get(const struct hal_mchp_i2c *hal)
{
	if (hal->regs->I2CM.SERCOM_STATUS & SERCOM_I2CM_STATUS_RXNACK_Msk) {
		return true;
	} else {
		return false;
	}
}

/* API to check the RXNACK, bus error and timeouts */
static inline bool hal_mchp_i2c_error_check(const struct hal_mchp_i2c *hal)
{
	if (!(hal->regs->I2CM.SERCOM_STATUS & SERCOM_I2CM_STATUS_Msk)) {
		return false;
	}

	return true;
}

/* API to write the address of target in address register */
static inline void hal_mchp_i2c_addr_write(const struct hal_mchp_i2c *hal, uint32_t addr)
{
	if ((addr & 1) == 1)
	{
		hal_mchp_i2c_set_auto_ack(hal);
	}
	
	hal->regs->I2CM.SERCOM_ADDR = addr;

	hal_mchp_i2c_wait_sync(hal);
}

/* API to read the i2c data from data register */
static inline uint8_t hal_mchp_i2c_byte_read(const struct hal_mchp_i2c *hal)
{
	hal_mchp_i2c_wait_sync(hal);

	return (uint8_t)hal->regs->I2CM.SERCOM_DATA;
}

/* API to read the i2c data from data register */
static inline void hal_mchp_i2c_byte_write(const struct hal_mchp_i2c *hal, uint8_t data)
{
	hal->regs->I2CM.SERCOM_DATA = data;

	hal_mchp_i2c_wait_sync(hal);
}

/* API to configure the i2c in target mode */
static inline void hal_mchp_i2c_target_mode(const struct hal_mchp_i2c *hal)
{
	/* Enable i2c device specific features */
	hal_mchp_i2c_feature_config(hal);

	hal->regs->I2CS.SERCOM_CTRLA = SERCOM_I2CS_CTRLA_MODE(0x4) |
				       SERCOM_I2CS_CTRLA_SDAHOLD(0x1) |
				       SERCOM_I2CS_CTRLA_SPEED(0x1);

	hal_mchp_i2c_wait_sync(hal);
}

/* API to reset the target address */
static inline void hal_mchp_i2c_reset_addr(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CS.SERCOM_ADDR = SERCOM_I2CS_ADDR_ADDR(0);
}

/* API to Enable i2c target interrupts */
static inline void hal_mchp_i2c_target_int_enable(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CS.SERCOM_INTENSET = (uint8_t)SERCOM_I2CS_INTENSET_Msk;
}

/* API to Disable i2c target interrupts */
static inline void hal_mchp_i2c_target_int_disable(const struct hal_mchp_i2c *hal)
{
	hal->regs->I2CS.SERCOM_INTENCLR = (uint8_t)SERCOM_I2CS_INTENCLR_Msk;
}

/* API to Disable i2c target interrupts */
static inline uint8_t hal_mchp_i2c_target_int_get(const struct hal_mchp_i2c *hal)
{
	return hal->regs->I2CS.SERCOM_INTENSET;
}

/* API to set the own uniqe address in target mode */
static inline void hal_mchp_i2c_set_target_addr(const struct hal_mchp_i2c *hal, uint32_t addr)
{
	hal->regs->I2CS.SERCOM_ADDR = SERCOM_I2CS_ADDR_ADDR(addr);
}

/* API to calculate i2c baud rate */
static inline bool hal_mchp_i2c_baudRate_calc(const struct hal_mchp_i2c *hal, uint32_t bitrate,
					      uint32_t sysClockRate, uint32_t *baudVal)
{
	uint32_t baudValue = 0U;
	uint32_t srcClkFreq = sysClockRate;
	float fSrcClkFreq = (float)srcClkFreq;
	float fI2cClkSpeed = (float)bitrate;
	float fBaudValue = 0.0f;

	/* Reference clock frequency must be atleast two times the baud rate */
	if (srcClkFreq < (2U * bitrate)) {
		return false;
	}

	if (bitrate > 1000000U) {
		/* HS mode baud calculation */
		fBaudValue = (fSrcClkFreq / fI2cClkSpeed) - 2.0f;
		baudValue = (uint32_t)fBaudValue;
	} else {
		/* Standard, FM and FM+ baud calculation */
		fBaudValue = (fSrcClkFreq / fI2cClkSpeed) -
			     ((fSrcClkFreq * (100.0f / 1000000000.0f)) + 10.0f);
		baudValue = (uint32_t)fBaudValue;
	}

	if (bitrate <= 400000U) {
		/* For I2C clock speed upto 400 kHz, the value of BAUD<7:0> determines both SCL_L
		 * and SCL_H with SCL_L = SCL_H
		 */
		if (baudValue > (0xFFU * 2U)) {
			/* Set baud rate to the minimum possible value */
			baudValue = 0xFFU;
		} else if (baudValue <= 1U) {
			/* Baud value cannot be 0. Set baud rate to maximum possible value */
			baudValue = 1U;
		} else {
			baudValue /= 2U;
		}
	} else {
		/* To maintain the ratio of SCL_L:SCL_H to 2:1, the max value of
		 * BAUD_LOW<15:8>:BAUD<7:0> can be 0xFF:0x7F. Hence BAUD_LOW + BAUD can not exceed
		 * 255+127 = 382
		 */
		if (baudValue >= 382U) {
			/* Set baud rate to the minimum possible value while maintaining SCL_L:SCL_H
			 * to 2:1
			 */
			baudValue = (0xFFUL << 8U) | (0x7FU);
		} else if (baudValue <= 3U) {
			/* Baud value cannot be 0. Set baud rate to maximum possible value while
			 * maintaining SCL_L:SCL_H to 2:1
			 */
			baudValue = (2UL << 8U) | 1U;
		} else {
			/* For Fm+ mode, I2C SCL_L:SCL_H to 2:1 */
			baudValue = ((((baudValue * 2U) / 3U) << 8U) | (baudValue / 3U));
		}
	}
	*baudVal = baudValue;
	return true;
}

/* API to set i2c baud rate */
static inline bool hal_mchp_i2c_set_baudRate(const struct hal_mchp_i2c *hal, uint32_t bitrate,
					     uint32_t sysClockRate)
{
	uint32_t i2cSpeedMode = 0;
	uint32_t baudValue;
	uint32_t hsBaudValue;
	uint32_t sdaHoldTime = 0;
	bool retVal = true;

	if (bitrate > 1000000U) {
		/* HS mode requires baud values for both 400kHz and HS frequency. First calculate
		 * baud for 400kHz
		 */
		if (hal_mchp_i2c_baudRate_calc(hal, 400000, sysClockRate, &baudValue) == false) {
			retVal = false;
			goto end;
		}
	} else {
		if (hal_mchp_i2c_baudRate_calc(hal, bitrate, sysClockRate, &baudValue) == false) {
			retVal = false;
			goto end;
		}
	}

	if (bitrate > 1000000U) {
		/* Now calculate HS baud value */
		if (hal_mchp_i2c_baudRate_calc(hal, bitrate, sysClockRate, &hsBaudValue) == false) {
			retVal = false;
			goto end;
		} else {
			baudValue |= (hsBaudValue << 16U);
			i2cSpeedMode = 2U;
			sdaHoldTime = 2U;
		}
	} else if (bitrate > 400000U) {
		i2cSpeedMode = 1U;
		sdaHoldTime = 1U;
	} else {
		/* Do nothing */
	}

	/* Baud rate - Master Baud Rate*/
	hal->regs->I2CM.SERCOM_BAUD = 255;

	hal->regs->I2CM.SERCOM_CTRLA =
		((hal->regs->I2CM.SERCOM_CTRLA &
		  (~SERCOM_I2CM_CTRLA_SPEED_Msk | ~SERCOM_I2CM_CTRLA_SDAHOLD_Msk)) |
		 (SERCOM_I2CM_CTRLA_SPEED(i2cSpeedMode) | SERCOM_I2CM_CTRLA_SDAHOLD(sdaHoldTime)));

	hal_mchp_i2c_wait_sync(hal);
end:
	return retVal;
}

#endif /* _HAL_MCHP_I2C_H_ */
