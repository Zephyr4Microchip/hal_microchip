/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_
#define MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_

/* Macro to check message direction in read mode */
#define I2C_MCHP_MESSAGE_DIR_READ_MASK 1

/** I2C Fast Speed: 400 kHz */
#define I2C_MCHP_SPEED_FAST 400000

/* I2C Fast Plus Speed: 1 MHz */
#define I2C_MCHP_SPEED_FAST_PLUS 1000000

/* Combined max of BAUD_LOW and BAUD.*/
#define I2C_BAUD_LOW_HIGH_MAX 382U

/* i2c start condion setup time 100ns */
#define I2C_MCHP_START_CONDITION_SETUP_TIME (100.0f / 1000000000.0f)

/* Enum to define & return int flag register bits in controller mode */
typedef enum {
	/* Indicates that there is no interrupt occured */
	I2C_MCHP_INTFLAG_NO_FLAG = 0,
	/* Indicates that the controller is currently on the bus. */
	I2C_MCHP_INTFLAG_CONTROLLER_ON_BUS = 1,

	/* Indicates that the target is currently on the bus. */
	I2C_MCHP_INTFLAG_TARGET_ON_BUS = 2,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_INTFLAG_ERROR = 128,

} i2c_mchp_controller_intFlag_t;

/* Enum to define & return int flag register bits in target mode */
typedef enum {
	/* Indicates that there is no interrupt occured */
	I2C_MCHP_INTFLAG_NOFLAG = 0,
	/* Indicates that a STOP condition has been detected. */
	I2C_MCHP_INTFLAG_STOP = 1,

	/* Indicates that an address match has occurred. */
	I2C_MCHP_INTFLAG_ADDR_MATCH = 2,

	/* Indicates that data is ready for transmission or reception. */
	I2C_MCHP_INTFLAG_DATA_READY = 4,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_INTFLAG_ERROR = 128,
} i2c_mchp_target_intFlag_t;

/* Enum representing the interrupt for the MCHP I2C peripheral in target mode
 */
typedef enum {
	/* Indicated that there is no interrupt are enabled*/
	I2C_MCHP_TARGET_NO_INTERRUPT = 0,

	/* Indicates that a STOP condition has been detected. */
	I2C_MCHP_TARGET_INTERRUPT_STOP = 1,

	/* Indicates that an address match has occurred. */
	I2C_MCHP_TARGET_INTERRUPT_ADDR_MATCH = 2,

	/* Indicates that data is ready for transmission or reception. */
	I2C_MCHP_TARGET_INTERRUPT_DATA_READY = 4,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_TARGET_INTERRUPT_ERROR = 128,

} i2c_mchp_target_interrupt_t;

/*Enum representing the status register bits */
typedef enum {
	/* Indicates that there is no status */
	I2C_MCHP_STATUS_NOSTATUS = 0,

	/* Indicates that errors on bus has occurred. */
	I2C_MCHP_STATUS_BUS_ERROR = 1,

	/* Indicates that a arbitration lost condition has been detected. */
	I2C_MCHP_STATUS_ARBITRATION_LOST = 2,

	/*Indicates that data direction in read/write mode */
	I2C_MCHP_STATUS_DATA_DIR = 8,

} i2c_mchp_status_flag_t;

/* API to define the source address for I2C DMA transfers */
static inline void *hal_mchp_i2c_get_dma_source_addr(const hal_mchp_i2c_t *hal)
{
	return ((void *)&(hal->regs->I2CM.SERCOM_DATA));
}

/* API to define the destination address for I2C DMA transfers */
static inline void *hal_mchp_i2c_get_dma_dest_addr(const hal_mchp_i2c_t *hal)
{
	return ((void *)&(hal->regs->I2CM.SERCOM_DATA));
}

/* API to perform a software reset on the I2C peripheral */
static inline void hal_mchp_i2c_swrst(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_SWRST_Msk;

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SWRST_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SWRST_Msk) {
		/* Do nothing */
	};
}

/* API to enable the I2C peripheral */
static inline void hal_mchp_i2c_enable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_ENABLE_Msk;

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_ENABLE_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_ENABLE_Msk) {
		/* Do nothing */
	}
}

/* API to disable the I2C peripheral */
static inline void hal_mchp_i2c_disable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLA &= ~SERCOM_I2CM_CTRLA_ENABLE_Msk;

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_ENABLE_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_ENABLE_Msk) {
		/* Do nothing */
	}
}

/* API to enable automatic acknowledgment for the I2C peripheral */
static inline void hal_mchp_i2c_set_auto_ack(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB =
		(hal->regs->I2CM.SERCOM_CTRLB & ~SERCOM_I2CM_CTRLB_ACKACT_Msk) |
		SERCOM_I2CM_CTRLB_ACKACT(0);
}

/* API to configure the I2C peripheral to operate in controller mode */
static inline void hal_mchp_i2c_set_controller_mode(const hal_mchp_i2c_t *hal)
{
	/* Enable i2c device smart mode features */
	hal->regs->I2CM.SERCOM_CTRLB |= SERCOM_I2CM_CTRLB_SMEN_Msk;

	hal->regs->I2CM.SERCOM_CTRLA =
		(hal->regs->I2CM.SERCOM_CTRLA &
		 ~(SERCOM_I2CM_CTRLA_MODE_Msk | SERCOM_I2CM_CTRLA_INACTOUT_Msk |
		   SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk)) |
		(SERCOM_I2CM_CTRLA_MODE_I2C_MASTER | SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk |
		 SERCOM_I2CM_CTRLA_INACTOUT(0x3));
}

/* API to send a Stop condition to terminate the I2C communication */
static inline void hal_mchp_i2c_transfer_stop(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB =
		(hal->regs->I2CM.SERCOM_CTRLB &
		 ~(SERCOM_I2CM_CTRLB_ACKACT_Msk | SERCOM_I2CM_CTRLB_CMD_Msk)) |
		(SERCOM_I2CM_CTRLB_ACKACT(1) | SERCOM_I2CM_CTRLB_CMD(0x3));

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) {
		/* Do nothing */
	}
}

/* API to ensure the I2C bus is in an idle state */
static inline void hal_mchp_i2c_set_bus_state_idle(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_STATUS =
		(hal->regs->I2CM.SERCOM_STATUS & ~(SERCOM_I2CM_STATUS_BUSSTATE_Msk)) |
		SERCOM_I2CM_STATUS_BUSSTATE_IDLE;

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) {
		/* Do nothing */
	}
}

/* API to enable I2C interrupts in controller mode */
static inline void hal_mchp_i2c_interrupt_enable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_INTENSET = SERCOM_I2CM_INTENSET_Msk;
}

/* API to disable I2C interrupts in controller mode */
static inline void hal_mchp_i2c_interrupt_disable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_INTENCLR = SERCOM_I2CM_INTENCLR_Msk;
}

/* API to get the controller I2C interrupt flag status */
static inline i2c_mchp_controller_intFlag_t
hal_mchp_i2c_controller_int_flag(const hal_mchp_i2c_t *hal)
{
	uint8_t flag_reg_val;
	i2c_mchp_controller_intFlag_t interrupt_flags = I2C_MCHP_INTFLAG_NO_FLAG;

	flag_reg_val = (uint8_t)hal->regs->I2CM.SERCOM_INTFLAG;

	if ((flag_reg_val & SERCOM_I2CM_INTFLAG_MB_Msk) == SERCOM_I2CM_INTFLAG_MB_Msk) {
		interrupt_flags |= I2C_MCHP_INTFLAG_CONTROLLER_ON_BUS;
	}
	if ((flag_reg_val & SERCOM_I2CM_INTFLAG_SB_Msk) == SERCOM_I2CM_INTFLAG_SB_Msk) {
		interrupt_flags |= I2C_MCHP_INTFLAG_TARGET_ON_BUS;
	}
	if ((flag_reg_val & SERCOM_I2CM_INTFLAG_ERROR_Msk) == SERCOM_I2CM_INTFLAG_ERROR_Msk) {
		interrupt_flags |= I2C_MCHP_INTFLAG_ERROR;
	}

	return interrupt_flags;
}

/* API to get the controller I2C interrupt flag status */
static inline i2c_mchp_target_intFlag_t hal_mchp_i2c_target_int_flag(const hal_mchp_i2c_t *hal)
{
	uint8_t flag_reg_val;
	i2c_mchp_target_intFlag_t interrupt_flags = I2C_MCHP_INTFLAG_NOFLAG;

	flag_reg_val = (uint8_t)hal->regs->I2CS.SERCOM_INTFLAG;

	if ((flag_reg_val & SERCOM_I2CS_INTFLAG_AMATCH_Msk) == SERCOM_I2CS_INTFLAG_AMATCH_Msk) {
		interrupt_flags |= I2C_MCHP_INTFLAG_ADDR_MATCH;
	}
	if ((flag_reg_val & SERCOM_I2CS_INTFLAG_DRDY_Msk) == SERCOM_I2CS_INTFLAG_DRDY_Msk) {
		interrupt_flags |= I2C_MCHP_INTFLAG_DATA_READY;
	}
	if ((flag_reg_val & SERCOM_I2CS_INTFLAG_PREC_Msk) == SERCOM_I2CS_INTFLAG_PREC_Msk) {
		interrupt_flags |= I2C_MCHP_INTFLAG_STOP;
	}
	if ((flag_reg_val & SERCOM_I2CS_INTFLAG_ERROR_Msk) == SERCOM_I2CS_INTFLAG_ERROR_Msk) {
		interrupt_flags |= I2C_MCHP_INTFLAG_ERROR;
	}

	return interrupt_flags;
}

/* API to clear the I2C interrupt flags */
static inline void hal_mchp_i2c_int_flag_clear(const hal_mchp_i2c_t *hal)
{
	if ((hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) ==
	    SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		hal->regs->I2CM.SERCOM_INTFLAG |=
			(SERCOM_I2CM_INTFLAG_MB_Msk | SERCOM_I2CM_INTFLAG_SB_Msk |
			 SERCOM_I2CM_INTFLAG_ERROR_Msk);
	} else {
		hal->regs->I2CS.SERCOM_INTFLAG |=
			(SERCOM_I2CS_INTFLAG_PREC_Msk | SERCOM_I2CS_INTFLAG_AMATCH_Msk |
			 SERCOM_I2CS_INTFLAG_DRDY_Msk | SERCOM_I2CS_INTFLAG_ERROR_Msk);
	}
}

/* API to get the current I2C status */
static inline i2c_mchp_status_flag_t hal_mchp_i2c_status_get(const hal_mchp_i2c_t *hal)
{
	uint16_t status_reg_val;
	i2c_mchp_status_flag_t status_flags = I2C_MCHP_STATUS_NOSTATUS;

	if ((hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) ==
	    SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		status_reg_val = hal->regs->I2CM.SERCOM_STATUS;

		if ((status_reg_val & SERCOM_I2CM_STATUS_ARBLOST_Msk) ==
		    SERCOM_I2CM_STATUS_ARBLOST_Msk) {
			status_flags |= I2C_MCHP_STATUS_ARBITRATION_LOST;
		}
		if ((status_reg_val & SERCOM_I2CM_STATUS_BUSERR_Msk) ==
		    SERCOM_I2CM_STATUS_BUSERR_Msk) {
			status_flags |= I2C_MCHP_STATUS_BUS_ERROR;
		}
	} else {
		status_reg_val = hal->regs->I2CS.SERCOM_STATUS;

		if ((status_reg_val & SERCOM_I2CS_STATUS_DIR_Msk) == SERCOM_I2CS_STATUS_DIR_Msk) {
			status_flags |= I2C_MCHP_STATUS_DATA_DIR;
		}
		if ((status_reg_val & SERCOM_I2CS_STATUS_BUSERR_Msk) ==
		    SERCOM_I2CS_STATUS_BUSERR_Msk) {
			status_flags |= I2C_MCHP_STATUS_BUS_ERROR;
		}
	}

	return status_flags;
}

/* API to clear the I2C status flags */
static inline void hal_mchp_i2c_status_clear(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_STATUS |=
		(SERCOM_I2CM_STATUS_BUSERR_Msk | SERCOM_I2CM_STATUS_ARBLOST_Msk |
		 SERCOM_I2CM_STATUS_RXNACK_Msk | SERCOM_I2CM_STATUS_LOWTOUT_Msk |
		 SERCOM_I2CM_STATUS_MEXTTOUT_Msk | SERCOM_I2CM_STATUS_SEXTTOUT_Msk);
}

/* API to get the nack status of i2c controller while tx/rx data */
static inline bool hal_mchp_i2c_is_nack(const hal_mchp_i2c_t *hal)
{
	bool retval;
	if ((hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) ==
	    SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		if ((hal->regs->I2CM.SERCOM_STATUS & SERCOM_I2CM_STATUS_RXNACK_Msk) ==
		    SERCOM_I2CM_STATUS_RXNACK_Msk) {
			retval = true;
		} else {
			retval = false;
		}
	} else {
		if ((hal->regs->I2CS.SERCOM_STATUS & SERCOM_I2CS_STATUS_RXNACK_Msk) ==
		    SERCOM_I2CM_STATUS_RXNACK_Msk) {
			retval = true;
		} else {
			retval = false;
		}
	}
	return retval;
}

/* API to check the RXNACK, bus error and timeouts */
static inline bool hal_mchp_i2c_is_error(const hal_mchp_i2c_t *hal)
{
	bool retval = false;
	if ((hal->regs->I2CM.SERCOM_STATUS &
	     (SERCOM_I2CM_STATUS_BUSERR_Msk | SERCOM_I2CM_STATUS_ARBLOST_Msk |
	      SERCOM_I2CM_STATUS_RXNACK_Msk | SERCOM_I2CM_STATUS_LOWTOUT_Msk |
	      SERCOM_I2CM_STATUS_MEXTTOUT_Msk | SERCOM_I2CM_STATUS_SEXTTOUT_Msk)) != 0) {
		retval = true;
	}

	return retval;
}

/* API to write the address of target in address register */
static inline void hal_mchp_i2c_addr_write(const hal_mchp_i2c_t *hal, uint32_t addr)
{
	if ((addr & (uint32_t)I2C_MCHP_MESSAGE_DIR_READ_MASK) == I2C_MCHP_MESSAGE_DIR_READ_MASK) {
		hal_mchp_i2c_set_auto_ack(hal);
	}

	hal->regs->I2CM.SERCOM_ADDR = (hal->regs->I2CM.SERCOM_ADDR & ~SERCOM_I2CM_ADDR_ADDR_Msk) |
				      SERCOM_I2CM_ADDR_ADDR(addr);

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) {
		/* Do nothing */
	}
}

/* API to read the i2c data from data register */
static inline uint8_t hal_mchp_i2c_byte_read(const hal_mchp_i2c_t *hal)
{
	return (uint8_t)hal->regs->I2CM.SERCOM_DATA;
}

/* API to read the i2c data from data register */
static inline void hal_mchp_i2c_byte_write(const hal_mchp_i2c_t *hal, uint8_t data)
{
	hal->regs->I2CM.SERCOM_DATA = (uint8_t)data;

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) {
		/* Do nothing */
	}
}

/* API to configure the i2c in target mode */
static inline void hal_mchp_i2c_set_target_mode(const hal_mchp_i2c_t *hal)
{
	/* Enable i2c device smart mode features */
	hal->regs->I2CM.SERCOM_CTRLB |= SERCOM_I2CM_CTRLB_SMEN_Msk;

	hal->regs->I2CS.SERCOM_CTRLA =
		(hal->regs->I2CM.SERCOM_CTRLA & ~SERCOM_I2CM_CTRLA_MODE_Msk) |
		(SERCOM_I2CS_CTRLA_MODE(0x4) | SERCOM_I2CS_CTRLA_SDAHOLD(0x1) |
		 SERCOM_I2CS_CTRLA_SPEED(0x1));
}

/* API to reset the target address */
static inline void hal_mchp_i2c_reset_addr(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CS.SERCOM_ADDR = (hal->regs->I2CS.SERCOM_ADDR & ~SERCOM_I2CS_ADDR_ADDR_Msk) |
				      SERCOM_I2CS_ADDR_ADDR(0);
}

/* API to Enable i2c target interrupts */
static inline void hal_mchp_i2c_target_int_enable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CS.SERCOM_INTENSET = SERCOM_I2CS_INTENSET_Msk;
}

/* API to Disable i2c target interrupts */
static inline void hal_mchp_i2c_target_int_disable(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CS.SERCOM_INTENCLR = SERCOM_I2CS_INTENCLR_Msk;
}

/* API to Disable i2c target interrupts */
static inline i2c_mchp_target_interrupt_t hal_mchp_i2c_target_int_get(const hal_mchp_i2c_t *hal)
{
	i2c_mchp_target_interrupt_t interrupt_flags = I2C_MCHP_TARGET_NO_INTERRUPT;
	uint8_t target_int_reg_val = hal->regs->I2CS.SERCOM_INTFLAG;

	if ((target_int_reg_val & SERCOM_I2CS_INTENSET_AMATCH_Msk) ==
	    SERCOM_I2CS_INTENSET_AMATCH_Msk) {
		interrupt_flags |= I2C_MCHP_TARGET_INTERRUPT_ADDR_MATCH;
	}
	if ((target_int_reg_val & SERCOM_I2CS_INTENSET_DRDY_Msk) == SERCOM_I2CS_INTENSET_DRDY_Msk) {
		interrupt_flags |= I2C_MCHP_INTFLAG_DATA_READY;
	}
	if ((target_int_reg_val & SERCOM_I2CS_INTENSET_PREC_Msk) == SERCOM_I2CS_INTENSET_PREC_Msk) {
		interrupt_flags |= I2C_MCHP_TARGET_INTERRUPT_STOP;
	}
	if ((target_int_reg_val & SERCOM_I2CS_INTENSET_ERROR_Msk) ==
	    SERCOM_I2CS_INTENSET_ERROR_Msk) {
		interrupt_flags |= I2C_MCHP_TARGET_INTERRUPT_ERROR;
	}
	return interrupt_flags;
}

/* API to set the own uniqe address in target mode */
static inline void hal_mchp_i2c_set_target_addr(const hal_mchp_i2c_t *hal, uint32_t addr)
{
	hal->regs->I2CS.SERCOM_ADDR = (hal->regs->I2CS.SERCOM_ADDR & ~SERCOM_I2CS_ADDR_ADDR_Msk) |
				      SERCOM_I2CS_ADDR_ADDR(addr);
}

/* API to calculate i2c baud rate */
static inline bool hal_mchp_i2c_baudrate_calc(const hal_mchp_i2c_t *hal, uint32_t bitrate,
					      uint32_t sys_clock_rate, uint32_t *baud_val)
{
	uint32_t baud_value = 0U;
	uint32_t src_clk_freq = sys_clock_rate;
	float fsrc_clk_freq = (float)src_clk_freq;
	float fi2c_clk_speed = (float)bitrate;
	float fbaud_value = 0.0f;
	bool is_calc_success = true;

	/* Reference clock frequency must be atleast two times the baud rate */
	if (src_clk_freq < (2U * bitrate)) {
		is_calc_success = false;
	} else {

		if (bitrate > I2C_MCHP_SPEED_FAST_PLUS) {
			/* HS mode baud calculation */
			fbaud_value = (fsrc_clk_freq / fi2c_clk_speed) - 2.0f;
			baud_value = (uint32_t)fbaud_value;
		} else {
			/* Standard, FM and FM+ baud calculation */
			fbaud_value =
				(fsrc_clk_freq / fi2c_clk_speed) -
				((fsrc_clk_freq * I2C_MCHP_START_CONDITION_SETUP_TIME) + 10.0f);
			baud_value = (uint32_t)fbaud_value;
		}

		if (bitrate <= I2C_MCHP_SPEED_FAST) {
			/* For I2C clock speed upto 400 kHz, the value of BAUD<7:0> determines both
			 * SCL_L and SCL_H with SCL_L = SCL_H
			 */
			if (baud_value > (0xFFU * 2U)) {
				/* Set baud rate to the maximum possible value */
				baud_value = 0xFFU;
			} else if (baud_value <= 1U) {
				/* Baud value cannot be 0. Set baud rate to minimum possible value
				 */
				baud_value = 1U;
			} else {
				baud_value /= 2U;
			}
		} else {
			/* To maintain the ratio of SCL_L:SCL_H to 2:1, the max value of
			 * BAUD_LOW<15:8>:BAUD<7:0> can be 0xFF:0x7F. Hence BAUD_LOW + BAUD can not
			 * exceed 255+127 = 382
			 */
			if (baud_value >= I2C_BAUD_LOW_HIGH_MAX) {
				/* Set baud rate to the minimum possible value while maintaining
				 * SCL_L:SCL_H to 2:1
				 */
				baud_value = (0xFFUL << 8U) | (0x7FU);
			} else if (baud_value <= 3U) {
				/* Baud value cannot be 0. Set baud rate to maximum possible value
				 * while maintaining SCL_L:SCL_H to 2:1
				 */
				baud_value = (2UL << 8U) | 1U;
			} else {
				/* For Fm+ mode, I2C SCL_L:SCL_H to 2:1 */
				baud_value = ((((baud_value * 2U) / 3U) << 8U) | (baud_value / 3U));
			}
		}
		*baud_val = baud_value;
	}

	return is_calc_success;
}

/* API to set i2c baud rate */
static inline bool hal_mchp_i2c_set_baudrate(const hal_mchp_i2c_t *hal, uint32_t bitrate,
					     uint32_t sys_clock_rate)
{
	uint32_t i2c_speed_mode = 0;
	uint32_t baud_value;
	uint32_t hsbaud_value;
	uint32_t sda_hold_time = 0;
	bool is_success = true;

	if (bitrate > I2C_MCHP_SPEED_FAST_PLUS) {
		/* HS mode requires baud values for both FS and HS frequency. First calculate
		 * baud for FS
		 */
		if (hal_mchp_i2c_baudrate_calc(hal, I2C_MCHP_SPEED_FAST, sys_clock_rate,
					       &baud_value) != true) {
			is_success = false;
		}
	} else {
		if (hal_mchp_i2c_baudrate_calc(hal, bitrate, sys_clock_rate, &baud_value) != true) {
			is_success = false;
		}
	}

	if (is_success == true) {

		if (bitrate > I2C_MCHP_SPEED_FAST_PLUS) {
			/* Now calculate HS baud value */
			if (hal_mchp_i2c_baudrate_calc(hal, bitrate, sys_clock_rate,
						       &hsbaud_value) != true) {
				is_success = false;
			} else {
				baud_value |= (hsbaud_value << 16U);
				i2c_speed_mode = 2U;
				sda_hold_time = 2U;
			}
		} else if (bitrate > I2C_MCHP_SPEED_FAST) {
			i2c_speed_mode = 1U;
			sda_hold_time = 1U;
		} else {
			/* Do nothing */
		}
		if (is_success == true) {
			/* Baud rate - controller Baud Rate*/
			hal->regs->I2CM.SERCOM_BAUD = baud_value;

			hal->regs->I2CM.SERCOM_CTRLA =
				((hal->regs->I2CM.SERCOM_CTRLA &
				  (~SERCOM_I2CM_CTRLA_SPEED_Msk | ~SERCOM_I2CM_CTRLA_SDAHOLD_Msk)) |
				 (SERCOM_I2CM_CTRLA_SPEED(i2c_speed_mode) |
				  SERCOM_I2CM_CTRLA_SDAHOLD(sda_hold_time)));
		}
	}

	return is_success;
}

#endif /* MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_ */
