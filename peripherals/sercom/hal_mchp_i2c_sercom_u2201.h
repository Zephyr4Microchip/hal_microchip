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

/** I2C Fast plus Speed: 1 MHz */
#define I2C_MCHP_SPEED_FAST_PLUS 1000000

/* I2C high Speed: 3.4 MHz */
#define I2C_MCHP_SPEED_HIGH_SPEED 3400000

/* Combined max of BAUD_LOW and BAUD.*/
#define I2C_BAUD_LOW_HIGH_MAX 382U

/* i2c start condion setup time 100ns */
#define I2C_MCHP_START_CONDITION_SETUP_TIME (100.0f / 1000000000.0f)

/* Enum to set & clear interrupts bits in controller mode */
typedef enum {

	/* Indicates that the controller is currently on the bus. */
	I2C_MCHP_CONTROLLER_INTERRUPT_CONTROLLER_ON_BUS = 1,

	/* Indicates that the target is currently on the bus. */
	I2C_MCHP_CONTROLLER_INTERRUPT_TARGET_ON_BUS = 2,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_CONTROLLER_INTERRUPT_ERROR = 4,

	/* Indicates that all interrupt */
	I2C_MCHP_CONTROLLER_INTERRUPT_ALL =
		(I2C_MCHP_CONTROLLER_INTERRUPT_CONTROLLER_ON_BUS |
		 I2C_MCHP_CONTROLLER_INTERRUPT_TARGET_ON_BUS | I2C_MCHP_CONTROLLER_INTERRUPT_ERROR),

} i2c_mchp_controller_interrupt_t;

/* Enum to set & clear interrupts bits in target mode */
typedef enum {
	/* Indicates that the controller is currently on the bus. */
	I2C_MCHP_TARGET_INTERRUPT_STOP = 1,

	/* Indicates that the target is currently on the bus. */
	I2C_MCHP_TARGET_INTERRUPT_ADDR_MATCH = 2,

	/* Indicates that the target is currently on the bus. */
	I2C_MCHP_TARGET_INTERRUPT_DATA_READY = 4,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_TARGET_INTERRUPT_ERROR = 8,

	/* Indicates that all interrupt */
	I2C_MCHP_TARGET_INTERRUPT_ALL =
		(I2C_MCHP_TARGET_INTERRUPT_STOP | I2C_MCHP_TARGET_INTERRUPT_ADDR_MATCH |
		 I2C_MCHP_TARGET_INTERRUPT_ERROR | I2C_MCHP_TARGET_INTERRUPT_DATA_READY),

} i2c_mchp_target_interrupt_t;

/* Enum to define & return int flag register bits in controller mode */
typedef enum {
	/* Indicates that there is no interrupt occured */
	I2C_MCHP_CONTROLLER_INTFLAG_NONE = 0,

	/* Indicates that the controller is currently on the bus. */
	I2C_MCHP_CONTROLLER_INTFLAG_CONTROLLER_ON_BUS = 1,

	/* Indicates that the target is currently on the bus. */
	I2C_MCHP_CONTROLLER_INTFLAG_TARGET_ON_BUS = 2,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_CONTROLLER_INTFLAG_ERROR = 4,

	/* Indicates that all the interrupt flags */
	I2C_MCHP_CONTROLLER_INTFLAG_ALL =
		(I2C_MCHP_CONTROLLER_INTFLAG_CONTROLLER_ON_BUS |
		 I2C_MCHP_CONTROLLER_INTFLAG_TARGET_ON_BUS | I2C_MCHP_CONTROLLER_INTFLAG_ERROR),

} i2c_mchp_controller_intflag_t;

/* Enum to define & return int flag register bits in target mode */
typedef enum {
	/* Indicates that there is no interrupt occured */
	I2C_MCHP_TARGET_INTFLAG_NONE = 0,

	/* Indicates that a STOP condition has been detected. */
	I2C_MCHP_TARGET_INTFLAG_STOP = 1,

	/* Indicates that an address match has occurred. */
	I2C_MCHP_TARGET_INTFLAG_ADDR_MATCH = 2,

	/* Indicates that data is ready for transmission or reception. */
	I2C_MCHP_TARGET_INTFLAG_DATA_READY = 4,

	/* Indicates an error condition in the I2C operation. */
	I2C_MCHP_TARGET_INTFLAG_ERROR = 8,

	/* Indicates that all the interrupt flags */
	I2C_MCHP_TARGET_INTFLAG_ALL =
		(I2C_MCHP_TARGET_INTFLAG_STOP | I2C_MCHP_TARGET_INTFLAG_ADDR_MATCH |
		 I2C_MCHP_TARGET_INTFLAG_DATA_READY | I2C_MCHP_TARGET_INTFLAG_ERROR),

} i2c_mchp_target_intflag_t;

/*Enum representing the status register bits in controller mode */
typedef enum {
	/* Indicates that there is no status */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_NONE = 0,

	/* Indicates that errors on bus has occurred. */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_ERROR = 1,

	/* Indicates that a arbitration lost condition has been detected. */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_ARBITRATION_LOST = 2,

	/* Indicates that a bus busy detected */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_STATE_BUSY = 4,

	/* Indicates that a Master SCL Low Extend Time-Out detected */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_MEXTTOUT = 8,

	/* Indicates that a Slave SCL Low Extend Time-Out detected */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_SEXTTOUT = 16,

	/* Indicates that a SCL Low Time-Out detected */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_LOWTOUT = 32,

	/* Indicates that aTransaction Length Error detected */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_LENERR = 64,

	/* Indicates that all status bits */
	I2C_MCHP_CONTROLLER_STATUS_FLAG_ALL =
		(I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_ERROR |
		 I2C_MCHP_CONTROLLER_STATUS_FLAG_ARBITRATION_LOST |
		 I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_STATE_BUSY |
		 I2C_MCHP_CONTROLLER_STATUS_FLAG_MEXTTOUT |
		 I2C_MCHP_CONTROLLER_STATUS_FLAG_SEXTTOUT |
		 I2C_MCHP_CONTROLLER_STATUS_FLAG_LOWTOUT | I2C_MCHP_CONTROLLER_STATUS_FLAG_LENERR),

} i2c_mchp_controller_status_flag_t;

/*Enum representing the status register bits in target mode */
typedef enum {
	/* Indicates that there is no status */
	I2C_MCHP_TARGET_STATUS_FLAG_NONE = 0,

	/* Indicates that errors on bus has occurred. */
	I2C_MCHP_TARGET_STATUS_FLAG_BUS_ERROR = 1,

	/* Indicates that a Transmit Collision has been detected. */
	I2C_MCHP_TARGET_STATUS_FLAG_COLL = 2,

	/*Indicates that data direction in read mode */
	I2C_MCHP_TARGET_STATUS_FLAG_DATA_DIR_READ = 4,

	/* Indicates that a SCL Low Time-Out detected */
	I2C_MCHP_TARGET_STATUS_FLAG_LOWTOUT = 16,

	/* Indicates that a Slave SCL Low Extend Time-Out detected */
	I2C_MCHP_TARGET_STATUS_FLAG_SEXTTOUT = 32,

	/* Indicates that all status bits */
	I2C_MCHP_TARGET_STATUS_FLAG_ALL =
		(I2C_MCHP_TARGET_STATUS_FLAG_BUS_ERROR | I2C_MCHP_TARGET_STATUS_FLAG_COLL |
		 I2C_MCHP_TARGET_STATUS_FLAG_LOWTOUT | I2C_MCHP_TARGET_STATUS_FLAG_SEXTTOUT),

} i2c_mchp_target_status_flag_t;

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
	hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_SWRST(1);

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SWRST_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SWRST_Msk) {
		/* Do nothing */
	};
}

/* API to get the nack status of i2c controller & target mode while tx/rx data */
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
		    SERCOM_I2CS_STATUS_RXNACK_Msk) {
			retval = true;
		} else {
			retval = false;
		}
	}
	return retval;
}

/* API to read the i2c data from data register in controller and target mode */
static inline uint8_t hal_mchp_i2c_byte_read(const hal_mchp_i2c_t *hal)
{
	if ((hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) ==
	    SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		return (uint8_t)hal->regs->I2CM.SERCOM_DATA;
	} else {
		return (uint8_t)hal->regs->I2CS.SERCOM_DATA;
	}
}

/* API to writes a single byte to the I2C data register in controller and target mode */
static inline void hal_mchp_i2c_byte_write(const hal_mchp_i2c_t *hal, uint8_t data)
{
	if ((hal->regs->I2CM.SERCOM_CTRLA & SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) ==
	    SERCOM_I2CM_CTRLA_MODE_I2C_MASTER) {
		hal->regs->I2CM.SERCOM_DATA = data;

		/* Wait for synchronization */
		while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) ==
		       SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) {
			/* Do nothing */
		};
	} else {
		hal->regs->I2CS.SERCOM_DATA = data;
	}
}

/* API to enable or disable the I2C peripheral in controller mode*/
static inline void hal_mchp_i2c_controller_enable(const hal_mchp_i2c_t *hal, bool enable)
{
	if (enable == true) {
		hal->regs->I2CM.SERCOM_CTRLA |= SERCOM_I2CM_CTRLA_ENABLE(1);
	} else {
		hal->regs->I2CM.SERCOM_CTRLA &= ~SERCOM_I2CM_CTRLA_ENABLE(1);
	}

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_ENABLE_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_ENABLE_Msk) {
		/* Do nothing */
	};
}

/* API to enable automatic acknowledgment for the I2C peripheral */
static inline void hal_mchp_i2c_set_controller_auto_ack(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB =
		((hal->regs->I2CM.SERCOM_CTRLB & ~SERCOM_I2CM_CTRLB_ACKACT_Msk) |
		 SERCOM_I2CM_CTRLB_ACKACT(0));
}

/* API to configure the I2C peripheral to operate in controller mode */
static inline void hal_mchp_i2c_set_controller_mode(const hal_mchp_i2c_t *hal)
{
	/* Enable i2c device smart mode features */
	hal->regs->I2CM.SERCOM_CTRLB =
		((hal->regs->I2CM.SERCOM_CTRLB & ~SERCOM_I2CM_CTRLB_SMEN_Msk) |
		 SERCOM_I2CM_CTRLB_SMEN(1));

	hal->regs->I2CM.SERCOM_CTRLA =
		(hal->regs->I2CM.SERCOM_CTRLA &
		 ~(SERCOM_I2CM_CTRLA_MODE_Msk | SERCOM_I2CM_CTRLA_INACTOUT_Msk |
		   SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk)) |
		(SERCOM_I2CM_CTRLA_MODE(0x5) | SERCOM_I2CM_CTRLA_LOWTOUTEN(1) |
		 SERCOM_I2CM_CTRLA_INACTOUT(0x3));
}

/* API to send a Stop condition to terminate the I2C communication */
static inline void hal_mchp_i2c_controller_transfer_stop(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_CTRLB =
		(hal->regs->I2CM.SERCOM_CTRLB &
		 ~(SERCOM_I2CM_CTRLB_ACKACT_Msk | SERCOM_I2CM_CTRLB_CMD_Msk)) |
		(SERCOM_I2CM_CTRLB_ACKACT(1) | SERCOM_I2CM_CTRLB_CMD(0x3));

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) {
		/* Do nothing */
	};
}

/* API to ensure the I2C bus is in an idle state */
static inline void hal_mchp_i2c_set_controller_bus_state_idle(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CM.SERCOM_STATUS = SERCOM_I2CM_STATUS_BUSSTATE(0x1);

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) {
		/* Do nothing */
	};
}

/* API to get the current I2C status in controller mode */
static inline i2c_mchp_controller_status_flag_t
hal_mchp_i2c_controller_status_get(const hal_mchp_i2c_t *hal)
{
	uint16_t status_reg_val;
	i2c_mchp_controller_status_flag_t status_flags = I2C_MCHP_CONTROLLER_STATUS_FLAG_NONE;

	status_reg_val = hal->regs->I2CM.SERCOM_STATUS;

	if ((status_reg_val & SERCOM_I2CM_STATUS_BUSERR_Msk) == SERCOM_I2CM_STATUS_BUSERR_Msk) {
		status_flags |= I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_ERROR;
	}
	if ((status_reg_val & SERCOM_I2CM_STATUS_ARBLOST_Msk) == SERCOM_I2CM_STATUS_ARBLOST_Msk) {
		status_flags |= I2C_MCHP_CONTROLLER_STATUS_FLAG_ARBITRATION_LOST;
	}
	if ((status_reg_val & SERCOM_I2CM_STATUS_BUSSTATE_BUSY) ==
	    SERCOM_I2CM_STATUS_BUSSTATE_BUSY) {
		status_flags |= I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_STATE_BUSY;
	}
	if ((status_reg_val & SERCOM_I2CM_STATUS_MEXTTOUT_Msk) == SERCOM_I2CM_STATUS_MEXTTOUT_Msk) {
		status_flags |= I2C_MCHP_CONTROLLER_STATUS_FLAG_MEXTTOUT;
	}
	if ((status_reg_val & SERCOM_I2CM_STATUS_SEXTTOUT_Msk) == SERCOM_I2CM_STATUS_SEXTTOUT_Msk) {
		status_flags |= I2C_MCHP_CONTROLLER_STATUS_FLAG_SEXTTOUT;
	}
	if ((status_reg_val & SERCOM_I2CM_STATUS_LOWTOUT_Msk) == SERCOM_I2CM_STATUS_LOWTOUT_Msk) {
		status_flags |= I2C_MCHP_CONTROLLER_STATUS_FLAG_LOWTOUT;
	}
	if ((status_reg_val & SERCOM_I2CM_STATUS_ARBLOST_Msk) == SERCOM_I2CM_STATUS_ARBLOST_Msk) {
		status_flags |= I2C_MCHP_CONTROLLER_STATUS_FLAG_LENERR;
	}

	return status_flags;
}

/* API to clear the current I2C status in controller mode */
static inline void
hal_mchp_i2c_controller_status_clear(const hal_mchp_i2c_t *hal,
				     i2c_mchp_controller_status_flag_t status_flags)
{
	uint16_t status_clear = 0;

	if ((status_flags & I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_ERROR) ==
	    I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_ERROR) {
		status_clear |= SERCOM_I2CM_STATUS_BUSERR(1);
	}
	if ((status_flags & I2C_MCHP_CONTROLLER_STATUS_FLAG_ARBITRATION_LOST) ==
	    I2C_MCHP_CONTROLLER_STATUS_FLAG_ARBITRATION_LOST) {
		status_clear |= SERCOM_I2CM_STATUS_ARBLOST(1);
	}
	if ((status_flags & I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_STATE_BUSY) ==
	    I2C_MCHP_CONTROLLER_STATUS_FLAG_BUS_STATE_BUSY) {
		status_clear |= SERCOM_I2CM_STATUS_BUSSTATE(0x1);
	}
	if ((status_flags & I2C_MCHP_CONTROLLER_STATUS_FLAG_MEXTTOUT) ==
	    I2C_MCHP_CONTROLLER_STATUS_FLAG_MEXTTOUT) {
		status_clear |= SERCOM_I2CM_STATUS_MEXTTOUT(1);
	}
	if ((status_flags & I2C_MCHP_CONTROLLER_STATUS_FLAG_SEXTTOUT) ==
	    I2C_MCHP_CONTROLLER_STATUS_FLAG_SEXTTOUT) {
		status_clear |= SERCOM_I2CM_STATUS_SEXTTOUT(1);
	}
	if ((status_flags & I2C_MCHP_CONTROLLER_STATUS_FLAG_LOWTOUT) ==
	    I2C_MCHP_CONTROLLER_STATUS_FLAG_LOWTOUT) {
		status_clear |= SERCOM_I2CM_STATUS_LOWTOUT(1);
	}
	if ((status_flags & I2C_MCHP_CONTROLLER_STATUS_FLAG_LENERR) ==
	    I2C_MCHP_CONTROLLER_STATUS_FLAG_LENERR) {
		status_clear |= SERCOM_I2CM_STATUS_LENERR(1);
	}

	hal->regs->I2CM.SERCOM_STATUS = status_clear;
}

/* API to enable I2C interrupts in controller mode */
static inline void
hal_mchp_i2c_controller_int_enable(const hal_mchp_i2c_t *hal,
				   i2c_mchp_controller_interrupt_t controller_int)
{
	uint8_t int_set = 0;
	if ((controller_int & I2C_MCHP_CONTROLLER_INTERRUPT_CONTROLLER_ON_BUS) ==
	    I2C_MCHP_CONTROLLER_INTERRUPT_CONTROLLER_ON_BUS) {
		int_set |= SERCOM_I2CM_INTENSET_MB(1);
	}
	if ((controller_int & I2C_MCHP_CONTROLLER_INTERRUPT_TARGET_ON_BUS) ==
	    I2C_MCHP_CONTROLLER_INTERRUPT_TARGET_ON_BUS) {
		int_set |= SERCOM_I2CM_INTENSET_SB(1);
	}
	if ((controller_int & I2C_MCHP_CONTROLLER_INTERRUPT_ERROR) ==
	    I2C_MCHP_CONTROLLER_INTERRUPT_ERROR) {
		int_set |= SERCOM_I2CM_INTENSET_ERROR(1);
	}

	hal->regs->I2CM.SERCOM_INTENSET = int_set;
}

/* API to disable I2C interrupts in controller mode */
static inline void
hal_mchp_i2c_controller_int_disable(const hal_mchp_i2c_t *hal,
				    i2c_mchp_controller_interrupt_t controller_int)
{
	uint8_t int_clear = 0;
	if ((controller_int & I2C_MCHP_CONTROLLER_INTERRUPT_CONTROLLER_ON_BUS) ==
	    I2C_MCHP_CONTROLLER_INTERRUPT_CONTROLLER_ON_BUS) {
		int_clear |= SERCOM_I2CM_INTENCLR_MB(1);
	}
	if ((controller_int & I2C_MCHP_CONTROLLER_INTERRUPT_TARGET_ON_BUS) ==
	    I2C_MCHP_CONTROLLER_INTERRUPT_TARGET_ON_BUS) {
		int_clear |= SERCOM_I2CM_INTENCLR_SB(1);
	}
	if ((controller_int & I2C_MCHP_CONTROLLER_INTERRUPT_ERROR) ==
	    I2C_MCHP_CONTROLLER_INTERRUPT_ERROR) {
		int_clear |= SERCOM_I2CM_INTENCLR_ERROR(1);
	}

	hal->regs->I2CM.SERCOM_INTENCLR = int_clear;
}

/* API to get the controller I2C interrupt flag status */
static inline i2c_mchp_controller_intflag_t
hal_mchp_i2c_controller_int_flag_get(const hal_mchp_i2c_t *hal)
{
	uint8_t flag_reg_val;
	i2c_mchp_controller_intflag_t interrupt_flags = I2C_MCHP_CONTROLLER_INTFLAG_NONE;

	flag_reg_val = (uint8_t)hal->regs->I2CM.SERCOM_INTFLAG;

	if ((flag_reg_val & SERCOM_I2CM_INTFLAG_MB_Msk) == SERCOM_I2CM_INTFLAG_MB_Msk) {
		interrupt_flags |= I2C_MCHP_CONTROLLER_INTFLAG_CONTROLLER_ON_BUS;
	}
	if ((flag_reg_val & SERCOM_I2CM_INTFLAG_SB_Msk) == SERCOM_I2CM_INTFLAG_SB_Msk) {
		interrupt_flags |= I2C_MCHP_CONTROLLER_INTFLAG_TARGET_ON_BUS;
	}
	if ((flag_reg_val & SERCOM_I2CM_INTFLAG_ERROR_Msk) == SERCOM_I2CM_INTFLAG_ERROR_Msk) {
		interrupt_flags |= I2C_MCHP_CONTROLLER_INTFLAG_ERROR;
	}

	return interrupt_flags;
}

/* API to clear the I2C controller interrupt flags */
static inline void
hal_mchp_i2c_controller_int_flag_clear(const hal_mchp_i2c_t *hal,
				       i2c_mchp_controller_intflag_t controller_intflag)
{
	uint8_t flag_clear = 0;

	if ((controller_intflag & I2C_MCHP_CONTROLLER_INTFLAG_CONTROLLER_ON_BUS) ==
	    I2C_MCHP_CONTROLLER_INTFLAG_CONTROLLER_ON_BUS) {
		flag_clear |= SERCOM_I2CM_INTFLAG_MB(1);
	}
	if ((controller_intflag & I2C_MCHP_CONTROLLER_INTFLAG_TARGET_ON_BUS) ==
	    I2C_MCHP_CONTROLLER_INTFLAG_TARGET_ON_BUS) {
		flag_clear |= SERCOM_I2CM_INTFLAG_SB(1);
	}
	if ((controller_intflag & I2C_MCHP_CONTROLLER_INTFLAG_ERROR) ==
	    I2C_MCHP_CONTROLLER_INTFLAG_ERROR) {
		flag_clear |= SERCOM_I2CM_INTFLAG_ERROR(1);
	}

	hal->regs->I2CM.SERCOM_INTFLAG = flag_clear;
}
/* API to write the address of target in address register */
static inline void hal_mchp_i2c_controller_addr_write(const hal_mchp_i2c_t *hal, uint32_t addr)
{
	if ((addr & (uint32_t)I2C_MCHP_MESSAGE_DIR_READ_MASK) == I2C_MCHP_MESSAGE_DIR_READ_MASK) {
		hal_mchp_i2c_set_controller_auto_ack(hal);
	}

	hal->regs->I2CM.SERCOM_ADDR = (hal->regs->I2CM.SERCOM_ADDR & ~SERCOM_I2CM_ADDR_ADDR_Msk) |
				      SERCOM_I2CM_ADDR_ADDR(addr);

	/* Wait for synchronization */
	while ((hal->regs->I2CM.SERCOM_SYNCBUSY & SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) ==
	       SERCOM_I2CM_SYNCBUSY_SYSOP_Msk) {
		/* Do nothing */
	};
}

/* API to enable or disable the I2C peripheral in target mode*/
static inline void hal_mchp_i2c_target_enable(const hal_mchp_i2c_t *hal, bool enable)
{
	if (enable == true) {
		hal->regs->I2CS.SERCOM_CTRLA |= SERCOM_I2CS_CTRLA_ENABLE(1);
	} else {
		hal->regs->I2CS.SERCOM_CTRLA &= SERCOM_I2CS_CTRLA_ENABLE(0);
	}
	/* Wait for synchronization */
	while ((hal->regs->I2CS.SERCOM_SYNCBUSY & SERCOM_I2CS_SYNCBUSY_ENABLE_Msk) ==
	       SERCOM_I2CS_SYNCBUSY_ENABLE_Msk) {
		/* Do nothing */
	};
}

/* API to get the controller I2C interrupt flag status */
static inline i2c_mchp_target_intflag_t hal_mchp_i2c_target_int_flag_get(const hal_mchp_i2c_t *hal)
{
	uint8_t flag_reg_val;
	i2c_mchp_target_intflag_t interrupt_flags = I2C_MCHP_TARGET_INTFLAG_NONE;

	flag_reg_val = (uint8_t)hal->regs->I2CS.SERCOM_INTFLAG;

	if ((flag_reg_val & SERCOM_I2CS_INTFLAG_PREC_Msk) == SERCOM_I2CS_INTFLAG_PREC_Msk) {
		interrupt_flags |= I2C_MCHP_TARGET_INTFLAG_STOP;
	}
	if ((flag_reg_val & SERCOM_I2CS_INTFLAG_AMATCH_Msk) == SERCOM_I2CS_INTFLAG_AMATCH_Msk) {
		interrupt_flags |= I2C_MCHP_TARGET_INTFLAG_ADDR_MATCH;
	}
	if ((flag_reg_val & SERCOM_I2CS_INTFLAG_DRDY_Msk) == SERCOM_I2CS_INTFLAG_DRDY_Msk) {
		interrupt_flags |= I2C_MCHP_TARGET_INTFLAG_DATA_READY;
	}
	if ((flag_reg_val & SERCOM_I2CS_INTFLAG_ERROR_Msk) == SERCOM_I2CS_INTFLAG_ERROR_Msk) {
		interrupt_flags |= I2C_MCHP_TARGET_INTFLAG_ERROR;
	}

	return interrupt_flags;
}

/* API to clear the I2C target interrupt flags */
static inline void hal_mchp_i2c_target_int_flag_clear(const hal_mchp_i2c_t *hal,
						      i2c_mchp_target_intflag_t target_intflag)
{
	uint8_t flag_clear = 0;

	if ((target_intflag & I2C_MCHP_TARGET_INTFLAG_STOP) == I2C_MCHP_TARGET_INTFLAG_STOP) {
		flag_clear |= SERCOM_I2CS_INTFLAG_PREC(1);
	}
	if ((target_intflag & I2C_MCHP_TARGET_INTFLAG_ADDR_MATCH) ==
	    I2C_MCHP_TARGET_INTFLAG_ADDR_MATCH) {
		flag_clear |= SERCOM_I2CS_INTFLAG_AMATCH(1);
	}
	if ((target_intflag & I2C_MCHP_TARGET_INTFLAG_DATA_READY) ==
	    I2C_MCHP_TARGET_INTFLAG_DATA_READY) {
		flag_clear |= SERCOM_I2CS_INTFLAG_DRDY(1);
	}
	if ((target_intflag & I2C_MCHP_TARGET_INTFLAG_ERROR) == I2C_MCHP_TARGET_INTFLAG_ERROR) {
		flag_clear |= SERCOM_I2CS_INTFLAG_ERROR(1);
	}

	hal->regs->I2CS.SERCOM_INTFLAG = flag_clear;
}

/* API to configure the i2c in target mode */
static inline void hal_mchp_i2c_set_target_mode(const hal_mchp_i2c_t *hal)
{
	/* Enable i2c device smart mode features */
	hal->regs->I2CS.SERCOM_CTRLB =
		((hal->regs->I2CS.SERCOM_CTRLB & ~SERCOM_I2CS_CTRLB_SMEN_Msk) |
		 SERCOM_I2CS_CTRLB_SMEN(1));

	hal->regs->I2CS.SERCOM_CTRLA =
		(hal->regs->I2CS.SERCOM_CTRLA & ~SERCOM_I2CS_CTRLA_MODE_Msk) |
		(SERCOM_I2CS_CTRLA_MODE(0x4) | SERCOM_I2CS_CTRLA_SDAHOLD(0x1) |
		 SERCOM_I2CS_CTRLA_SPEED(0x1));
}

/* API to reset the target address */
static inline void hal_mchp_i2c_reset_target_addr(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CS.SERCOM_ADDR = (hal->regs->I2CS.SERCOM_ADDR & ~SERCOM_I2CS_ADDR_ADDR_Msk) |
				      SERCOM_I2CS_ADDR_ADDR(0);
}

/* API to get the current I2C status in target mode */
static inline i2c_mchp_target_status_flag_t
hal_mchp_i2c_target_status_get(const hal_mchp_i2c_t *hal)
{
	uint16_t status_reg_val;
	i2c_mchp_target_status_flag_t status_flags = I2C_MCHP_TARGET_STATUS_FLAG_NONE;

	status_reg_val = hal->regs->I2CS.SERCOM_STATUS;

	if ((status_reg_val & SERCOM_I2CS_STATUS_BUSERR_Msk) == SERCOM_I2CS_STATUS_BUSERR_Msk) {
		status_flags |= I2C_MCHP_TARGET_STATUS_FLAG_BUS_ERROR;
	}
	if ((status_reg_val & SERCOM_I2CS_STATUS_COLL_Msk) == SERCOM_I2CS_STATUS_COLL_Msk) {
		status_flags |= I2C_MCHP_TARGET_STATUS_FLAG_COLL;
	}
	if ((status_reg_val & SERCOM_I2CS_STATUS_DIR_Msk) == SERCOM_I2CS_STATUS_DIR_Msk) {
		status_flags |= I2C_MCHP_TARGET_STATUS_FLAG_DATA_DIR_READ;
	}
	if ((status_reg_val & SERCOM_I2CS_STATUS_LOWTOUT_Msk) == SERCOM_I2CS_STATUS_LOWTOUT_Msk) {
		status_flags |= I2C_MCHP_TARGET_STATUS_FLAG_LOWTOUT;
	}
	if ((status_reg_val & SERCOM_I2CS_STATUS_SEXTTOUT_Msk) == SERCOM_I2CS_STATUS_SEXTTOUT_Msk) {
		status_flags |= I2C_MCHP_TARGET_STATUS_FLAG_SEXTTOUT;
	}

	return status_flags;
}

/* API to clear the current I2C status in target mode */
static inline void hal_mchp_i2c_target_status_clear(const hal_mchp_i2c_t *hal,
						    i2c_mchp_target_status_flag_t status_flags)
{
	uint16_t status_clear = 0;

	if ((status_flags & I2C_MCHP_TARGET_STATUS_FLAG_BUS_ERROR) ==
	    I2C_MCHP_TARGET_STATUS_FLAG_BUS_ERROR) {
		status_clear |= SERCOM_I2CS_STATUS_BUSERR(1);
	}
	if ((status_flags & I2C_MCHP_TARGET_STATUS_FLAG_COLL) == I2C_MCHP_TARGET_STATUS_FLAG_COLL) {
		status_clear |= SERCOM_I2CS_STATUS_COLL(1);
	}
	if ((status_flags & I2C_MCHP_TARGET_STATUS_FLAG_LOWTOUT) ==
	    I2C_MCHP_TARGET_STATUS_FLAG_LOWTOUT) {
		status_clear |= SERCOM_I2CS_STATUS_LOWTOUT(1);
	}
	if ((status_flags & I2C_MCHP_TARGET_STATUS_FLAG_SEXTTOUT) ==
	    I2C_MCHP_TARGET_STATUS_FLAG_SEXTTOUT) {
		status_clear |= SERCOM_I2CS_STATUS_SEXTTOUT(1);
	}

	hal->regs->I2CS.SERCOM_STATUS = status_clear;
}

/* API to Enable i2c target interrupts */
static inline void hal_mchp_i2c_target_int_enable(const hal_mchp_i2c_t *hal,
						  i2c_mchp_target_interrupt_t target_int)
{
	uint8_t int_set = 0;

	if ((target_int & I2C_MCHP_TARGET_INTERRUPT_STOP) == I2C_MCHP_TARGET_INTERRUPT_STOP) {
		int_set |= SERCOM_I2CS_INTENSET_PREC(1);
	}
	if ((target_int & I2C_MCHP_TARGET_INTERRUPT_ADDR_MATCH) ==
	    I2C_MCHP_TARGET_INTERRUPT_ADDR_MATCH) {
		int_set |= SERCOM_I2CS_INTENSET_AMATCH(1);
	}
	if ((target_int & I2C_MCHP_TARGET_INTERRUPT_DATA_READY) ==
	    I2C_MCHP_TARGET_INTERRUPT_DATA_READY) {
		int_set |= SERCOM_I2CS_INTENSET_DRDY(1);
	}
	if ((target_int & I2C_MCHP_TARGET_INTERRUPT_ERROR) == I2C_MCHP_TARGET_INTERRUPT_ERROR) {
		int_set |= SERCOM_I2CS_INTENSET_ERROR(1);
	}

	hal->regs->I2CS.SERCOM_INTENSET = int_set;
}

/* API to Disable i2c target interrupts */
static inline void hal_mchp_i2c_target_int_disable(const hal_mchp_i2c_t *hal,
						   i2c_mchp_target_interrupt_t target_int)
{
	uint8_t int_clear = 0;

	if ((target_int & I2C_MCHP_TARGET_INTERRUPT_STOP) == I2C_MCHP_TARGET_INTERRUPT_STOP) {
		int_clear |= SERCOM_I2CS_INTENCLR_PREC(1);
	}
	if ((target_int & I2C_MCHP_TARGET_INTERRUPT_ADDR_MATCH) ==
	    I2C_MCHP_TARGET_INTERRUPT_ADDR_MATCH) {
		int_clear |= SERCOM_I2CS_INTENCLR_AMATCH(1);
	}
	if ((target_int & I2C_MCHP_TARGET_INTERRUPT_DATA_READY) ==
	    I2C_MCHP_TARGET_INTERRUPT_DATA_READY) {
		int_clear |= SERCOM_I2CS_INTENCLR_DRDY(1);
	}
	if ((target_int & I2C_MCHP_TARGET_INTERRUPT_ERROR) == I2C_MCHP_TARGET_INTERRUPT_ERROR) {
		int_clear |= SERCOM_I2CS_INTENCLR_ERROR(1);
	}

	hal->regs->I2CS.SERCOM_INTENCLR = int_clear;
}

/* API to set its own unique address in target mode. */
static inline void hal_mchp_i2c_set_target_addr(const hal_mchp_i2c_t *hal, uint32_t addr)
{
	hal->regs->I2CS.SERCOM_ADDR = (hal->regs->I2CS.SERCOM_ADDR & ~SERCOM_I2CS_ADDR_ADDR_Msk) |
				      SERCOM_I2CS_ADDR_ADDR(addr);
}

/* API to stop communication by sending NACK in target mode. */
static inline void hal_mchp_i2c_target_transfer_stop(const hal_mchp_i2c_t *hal)
{
	hal->regs->I2CS.SERCOM_CTRLB |= SERCOM_I2CS_CTRLB_ACKACT(1);
}

/* API to calculate i2c baud rate */
static inline bool hal_mchp_i2c_baudrate_calc(const hal_mchp_i2c_t *hal, uint32_t bitrate,
					      uint32_t sys_clock_rate, uint32_t *baud_val)
{
	uint32_t baud_value = 0U;
	float fsrc_clk_freq = (float)sys_clock_rate;
	float fi2c_clk_speed = (float)bitrate;
	float fbaud_value = 0.0f;
	bool is_calc_success = true;

	/* Reference clock frequency must be atleast two times the baud rate */
	if (sys_clock_rate < (2U * bitrate)) {
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
			/* For I2C clock speed upto 400 kHz, the value of BAUD<7:0>
			 * determines both SCL_L and SCL_H with SCL_L = SCL_H
			 */
			if (baud_value > (0xFFU * 2U)) {
				/* Set baud rate to the maximum possible value */
				baud_value = 0xFFU;
			} else if (baud_value <= 1U) {
				/* Baud value cannot be 0. Set baud rate to minimum possible
				 * value
				 */
				baud_value = 1U;
			} else {
				baud_value /= 2U;
			}
		} else {
			/* To maintain the ratio of SCL_L:SCL_H to 2:1, the max value of
			 * BAUD_LOW<15:8>:BAUD<7:0> can be 0xFF:0x7F. Hence BAUD_LOW + BAUD
			 * can not exceed 255+127 = 382
			 */
			if (baud_value >= I2C_BAUD_LOW_HIGH_MAX) {
				/* Set baud rate to the minimum possible value while
				 * maintaining SCL_L:SCL_H to 2:1
				 */
				baud_value = (0xFFUL << 8U) | (0x7FU);
			} else if (baud_value <= 3U) {
				/* Baud value cannot be 0. Set baud rate to maximum possible
				 * value while maintaining SCL_L:SCL_H to 2:1
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
	bool is_success = false;

	if (bitrate == I2C_MCHP_SPEED_HIGH_SPEED) {
		/* HS mode requires baud values for both FS and HS frequency. First
		 * calculate baud for FS
		 */
		if (hal_mchp_i2c_baudrate_calc(hal, I2C_MCHP_SPEED_FAST, sys_clock_rate,
					       &baud_value) == true) {
			if (hal_mchp_i2c_baudrate_calc(hal, bitrate, sys_clock_rate,
						       &hsbaud_value) == true) {
				is_success = true;
				baud_value |= (hsbaud_value << 16U);
				i2c_speed_mode = 2U;
				sda_hold_time = 2U;
			}
		}
	} else {
		if (hal_mchp_i2c_baudrate_calc(hal, bitrate, sys_clock_rate, &baud_value) == true) {
			if (bitrate == I2C_MCHP_SPEED_FAST_PLUS) {
				i2c_speed_mode = 1U;
				sda_hold_time = 1U;
			}
			is_success = true;
		}
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

	return is_success;
}

#endif /* MICROCHIP_HAL_MCHP_I2C_SERCOM_U2201_H_ */
