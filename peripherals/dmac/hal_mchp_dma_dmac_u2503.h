/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_dmac_dmac_u2503.h
 * @brief DMA Controller HAL for Microchip DMAC U2503
 *
 * This file contains the implementation of the DMA Controller HAL for the Microchip DMAC U2503.
 * It provides functions to configure and control the DMA controller, including setting up
 * descriptors, enabling/disabling channels, setting priorities, and handling interrupts.
 */

#ifndef MICROCHIP_HAL_MCHP_DMA_DMAC_U2503_H_
#define MICROCHIP_HAL_MCHP_DMA_DMAC_U2503_H_

#include <hal_interface/hal_mchp_dma.h>

/**
 * @brief DMAC peripheral data structure for Microchip devices.
 *
 * This structure contains the DMA descriptors, write-back descriptors, and
 * channel-specific runtime data for Microchip devices.
 */
typedef struct dma_mchp_dmac {

	/** DMA descriptors for channel configurations (must be 16-byte aligned). */
	__aligned(16) dmac_descriptor_registers_t descriptors[DMAC_CH_NUM];

	/** DMA write-back descriptors for tracking completed transfers (16-byte aligned). */
	__aligned(16) dmac_descriptor_registers_t descriptors_wb[DMAC_CH_NUM];

} dma_mchp_dmac_t;

/* Ensure any previous definition is removed */
#undef HAL_DMA_MCHP_DATA_MEMORY_SIZE

/**
 * @brief Defines the size of the DMA peripheral data structure.
 *
 * This macro evaluates to the size (in bytes) of the `dma_mchp_dmac_t` structure,
 * which represents the internal data used by the DMA controller.
 *
 * It can be used to allocate memory for DMA operations.
 */
#define HAL_DMA_MCHP_DATA_MEMORY_SIZE sizeof(dma_mchp_dmac_t)

/**
 * @brief Handle DMA interrupt and retrieve the associated callback and user data.
 *
 * This function reads the DMA interrupt status, determines the channel number,
 * acknowledges the interrupt, and retrieves the associated callback function
 * and user data for the given DMA channel.
 *
 * @param hal_dma Pointer to the HAL DMA instance.
 * @param channel Pointer to an integer where the DMA channel number will be stored.
 *
 * @return Interrupt status code, indicating success or error
 *
 */
static inline int8_t hal_mchp_dma_interrupt_handle_status(const hal_mchp_dma_t *hal_dma,
							  int *channel)
{
	/* Read interrupt status */
	uint16_t pend = hal_dma->regs->DMAC_INTPEND;
	int8_t interrupt_status_code = 0;

	/* Get the channel number */
	*channel = (pend & DMAC_INTPEND_ID_Msk) >> DMAC_INTPEND_ID_Pos;

	/* Acknowledge all interrupts */
	hal_dma->regs->DMAC_INTPEND = pend;

	/* Determine the status code */
	if (pend & DMAC_INTPEND_TERR_Msk) {
		interrupt_status_code = DMA_MCHP_INT_ERROR;
	} else if (pend & DMAC_INTPEND_TCMPL_Msk) {
		interrupt_status_code = DMA_MCHP_INT_SUCCESS;
	}

	return interrupt_status_code;
}

/**
 * @brief Reset the DMA controller.
 *
 * This function disables the DMA controller and performs a software reset.
 * It waits for the reset to complete before returning.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 */
static inline void hal_mchp_dma_controller_reset(const hal_mchp_dma_t *hal_dma)
{
	hal_dma->regs->DMAC_CTRL |= DMAC_CTRL_DMAENABLE(0);
	hal_dma->regs->DMAC_CTRL |= DMAC_CTRL_SWRST_Msk;
	while ((hal_dma->regs->DMAC_CTRL & DMAC_CTRL_SWRST_Msk) >> DMAC_CTRL_SWRST_Pos) {
	}
}

/**
 * @brief Enable or disable the DMA controller.
 *
 * This function enables or disables the DMA controller based on the given flag.
 * When enabling, all priority levels are activated.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param enable Boolean value to enable (true) or disable (false) the DMA controller.
 */
static inline void hal_mchp_dma_enable(const hal_mchp_dma_t *hal_dma, bool enable)
{
	if (enable == true) {
		hal_dma->regs->DMAC_CTRL = DMAC_CTRL_DMAENABLE(1) | DMAC_CTRL_LVLEN(0x0F);
	} else {
		hal_dma->regs->DMAC_CTRL = DMAC_CTRL_DMAENABLE(0);
	}
}

/**
 * @brief Set default priority levels for the DMA controller.
 *
 * This function assigns default priority levels to the four DMA priority levels.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 */
static inline void hal_mchp_dma_set_default_priority(const hal_mchp_dma_t *hal_dma)
{
	hal_dma->regs->DMAC_PRICTRL0 = DMAC_PRICTRL0_LVLPRI0(0) | DMAC_PRICTRL0_LVLPRI1(1) |
				       DMAC_PRICTRL0_LVLPRI2(2) | DMAC_PRICTRL0_LVLPRI3(3);
}

/**
 * @brief Set the trigger source for a DMA channel.
 *
 * This function sets the trigger source for a specified DMA channel based on the
 * provided trigger source and channel direction. It validates the trigger source
 * and configures the channel accordingly.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param trig_src Trigger source for the DMA channel.
 * @param channel_direction Direction of the DMA channel (e.g., MEMORY_TO_MEMORY,
 * MEMORY_TO_PERIPHERAL, PERIPHERAL_TO_MEMORY).
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_INVALID_TRIGGER_SRC if the trigger source is invalid.
 * @retval HAL_MCHP_DMA_ERR_INVALID_DIRECTION if the channel direction is invalid.
 */
static inline int8_t
hal_mchp_dma_ch_set_trig_src_n_dir(const hal_mchp_dma_t *hal_dma, uint8_t channel, uint8_t trig_src,
				   hal_dma_mchp_ch_direction_t channel_direction)
{
	int8_t ret_val = 0;

	/* Validate trigger source */
	if (trig_src >= DMAC_TRIG_NUM) {
		ret_val = HAL_MCHP_DMA_ERR_INVALID_TRIGGER_SRC;
	}

	/* If no error, configure trigger source */
	if (ret_val == 0) {
		if (channel_direction == DMA_MCHP_MEMORY_TO_MEMORY) {
			/*
			 * A single software trigger will start the
			 * transfer
			 */
			hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLA =
				DMAC_CHCTRLA_TRIGACT_TRANSACTION | DMAC_CHCTRLA_TRIGSRC(trig_src);

		} else if ((channel_direction == DMA_MCHP_MEMORY_TO_PERIPHERAL) ||
			   (channel_direction == DMA_MCHP_PERIPHERAL_TO_MEMORY)) {
			/* One peripheral trigger per beat */
			hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLA =
				DMAC_CHCTRLA_TRIGACT_BURST | DMAC_CHCTRLA_TRIGSRC(trig_src);

		} else {
			ret_val = HAL_MCHP_DMA_ERR_INVALID_DIRECTION;
		}
	}

	return ret_val;
}

/**
 * @brief Set the priority level for a DMA channel.
 *
 * This function sets the priority level for a specified DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param priority Priority level to be set.
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_INVALID_PRIORITY if the priority level is invalid.
 */
static inline int8_t hal_mchp_dma_ch_set_priority(const hal_mchp_dma_t *hal_dma, uint8_t channel,
						  uint8_t priority)
{
	int8_t ret_val = 0;

	/* Validate the priority level */
	if (priority >= DMAC_LVL_NUM) {
		ret_val = HAL_MCHP_DMA_ERR_INVALID_PRIORITY;
	}

	/* Apply priority setting if validation passed */
	if (ret_val == 0) {
		hal_dma->regs->CHANNEL[channel].DMAC_CHPRILVL = DMAC_CHPRILVL_PRILVL(priority);
	}

	return ret_val;
}

/**
 * @brief Set the burst length for a DMA channel.
 *
 * This function sets the burst length for both the source and destination of a specified
 * DMA channel. The burst lengths for the source and destination must be equal and must not
 * exceed 16.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param source_burst_length Burst length for the source.
 * @param dest_burst_length Burst length for the destination.
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_SRC_DST_BURST_LENGTH_MISMATCH if the source and destination burst
 * lengths do not match.
 * @retval HAL_MCHP_DMA_ERR_BURST_LENGTH_OVERFLOW if the burst length exceeds the maximum allowed
 * value.
 */
static inline int8_t hal_mchp_dma_ch_set_burst_length(const hal_mchp_dma_t *hal_dma,
						      uint8_t channel, uint32_t source_burst_length,
						      uint32_t dest_burst_length)
{

	int8_t ret_val = 0;

	/* Validate source and destination burst lengths */
	if (source_burst_length != dest_burst_length) {
		ret_val = HAL_MCHP_DMA_ERR_SRC_DST_BURST_LENGTH_MISMATCH;
	}

	/* Validate burst length limit */
	if (source_burst_length > 16U) {
		ret_val = HAL_MCHP_DMA_ERR_BURST_LENGTH_OVERFLOW;
	}

	/* Apply burst length setting if validation passed */
	if (ret_val == 0 && source_burst_length > 0U) {
		hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLA |=
			DMAC_CHCTRLA_BURSTLEN(source_burst_length - 1U);
	}

	return ret_val;
}

/**
 * @brief Enable interrupts for a DMA channel.
 *
 * This function enables the transfer complete interrupt for a specified DMA channel.
 * It also conditionally enables or disables the transfer error interrupt based on the
 * provided parameter.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param disable_err_interrupt Boolean flag to disable the transfer error interrupt.
 *                              If true, the transfer error interrupt is disabled.
 *                              If false, the transfer error interrupt is enabled.
 */
static inline void hal_mchp_dma_ch_interrupt_enable(const hal_mchp_dma_t *hal_dma, uint8_t channel,
						    bool disable_err_interrupt)
{
	/* Enable transfer complete interrupt */
	hal_dma->regs->CHANNEL[channel].DMAC_CHINTENSET = DMAC_CHINTENSET_TCMPL(1);

	/* Enable or disable transfer error interrupt based on flag */
	if (disable_err_interrupt == false) {
		hal_dma->regs->CHANNEL[channel].DMAC_CHINTENSET = DMAC_CHINTENSET_TERR(1);
	} else {
		hal_dma->regs->CHANNEL[channel].DMAC_CHINTENCLR = DMAC_CHINTENSET_TERR(1);
	}

	/* Clear any pending interrupt flags */
	hal_dma->regs->CHANNEL[channel].DMAC_CHINTFLAG =
		DMAC_CHINTFLAG_TERR_Msk | DMAC_CHINTFLAG_TCMPL_Msk;
}

/**
 * @brief Enable or disable a DMA channel.
 *
 * This function enables or disables a specified DMA channel based on the provided flag.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param enable Flag to enable (true) or disable (false) the channel.
 */
static inline void hal_mchp_dma_ch_enable(const hal_mchp_dma_t *hal_dma, uint8_t channel,
					  bool enable)
{
	if (enable == true) {
		hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLA |= DMAC_CHCTRLA_ENABLE(1);
		if ((DMAC_CHCTRLA_TRIGSRC_Msk & hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLA) ==
		    0) {
			/* Trigger via software */
			hal_dma->regs->DMAC_SWTRIGCTRL = 1U << channel;
		}
	} else {
		hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLA &= ~DMAC_CHCTRLA_ENABLE(1);
	}
}

/**
 * @brief Suspend a DMA channel.
 *
 * This function suspends a specified DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 */
static inline void hal_mchp_dma_ch_suspend(const hal_mchp_dma_t *hal_dma, uint8_t channel)
{
	hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLB |=
		(hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLB & (uint8_t)(~DMAC_CHCTRLB_CMD_Msk)) |
		DMAC_CHCTRLB_CMD_SUSPEND;
}

/**
 * @brief Resume a DMA channel.
 *
 * This function resumes a specified DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 */
static inline void hal_mchp_dma_ch_resume(const hal_mchp_dma_t *hal_dma, uint8_t channel)
{
	hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLB =
		(hal_dma->regs->CHANNEL[channel].DMAC_CHCTRLB & (uint8_t)(~DMAC_CHCTRLB_CMD_Msk)) |
		DMAC_CHCTRLB_CMD_RESUME;

	/* Clear the SUSPEND Interrupt Flag */
	hal_dma->regs->CHANNEL[channel].DMAC_CHINTFLAG |= DMAC_CHINTFLAG_SUSP(1);
}

/**
 * @brief Get the state of a DMA channel.
 *
 * This function retrieves the current state of a specific DMA channel by
 * checking its status, activity, and interrupt flags.
 *
 * @param hal_dma Pointer to the DMA hardware abstraction layer.
 * @param channel DMA channel number to check.
 *
 * @return The current state of the DMA channel, which can be:
 *         - DMA_MCHP_CH_IDLE
 *         - DMA_MCHP_CH_ACTIVE
 *         - DMA_MCHP_CH_SUSPENDED
 *         - DMA_MCHP_CH_PENDING
 */
static inline hal_dma_mchp_ch_state_t hal_mchp_dma_ch_get_state(const hal_mchp_dma_t *hal_dma,
								uint32_t channel)
{
	hal_dma_mchp_ch_state_t ch_state = DMA_MCHP_CH_IDLE;
	uint32_t active_status = 0;
	uint8_t ch_int_flag = 0, ch_status = 0;

	/* Read channel status and interrupt flag */
	ch_status = hal_dma->regs->CHANNEL[channel].DMAC_CHSTATUS;
	ch_int_flag = hal_dma->regs->CHANNEL[channel].DMAC_CHINTFLAG;

	/* Check if the channel is busy */
	if (((ch_status & DMAC_CHSTATUS_BUSY_Msk) >> DMAC_CHSTATUS_BUSY_Pos) == 1) {
		active_status = hal_dma->regs->DMAC_ACTIVE;

		/* Check if the channel is currently active */
		if ((((active_status & DMAC_ACTIVE_ABUSY_Msk) >> DMAC_ACTIVE_ABUSY_Pos) == 1) &&
		    (((active_status & DMAC_ACTIVE_ID_Msk) >> DMAC_ACTIVE_ID_Pos) == channel)) {
			ch_state = DMA_MCHP_CH_ACTIVE;
		}
		/* Check if the channel is suspended */
		else if (((ch_int_flag & DMAC_CHINTFLAG_SUSP_Msk) >> DMAC_CHINTFLAG_SUSP_Pos) ==
			 1) {
			ch_state = DMA_MCHP_CH_SUSPENDED;
		}
	}
	/* Check if the channel is pending */
	else if (((ch_status & DMAC_CHSTATUS_PEND_Msk) >> DMAC_CHSTATUS_PEND_Pos) == 1) {
		ch_state = DMA_MCHP_CH_PENDING;
	}
	/* Explicitly setting to IDLE for clarity */
	else {
		ch_state = DMA_MCHP_CH_IDLE;
	}

	return ch_state;
}

/**
 * @brief Get the status of a DMA channel.
 *
 * This function retrieves the status of a specified DMA channel, including whether it is busy
 * and the pending length of data to be transferred.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param stat Pointer to the DMA status structure to be filled.
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_INVALID_CONFIG if the beat size is invalid.
 */
static inline int8_t hal_mchp_dma_ch_get_status(const hal_mchp_dma_t *hal_dma, uint8_t channel,
						hal_dma_mchp_status_t *stat)
{
	int8_t ret_val = 0;
	/* Get the Active channel ID and the status */
	dma_mchp_dmac_t *data = (dma_mchp_dmac_t *)hal_dma->data;

	/* Check if the channel is busy and retrieve pending transfer length */
	if (hal_mchp_dma_ch_get_state(hal_dma, channel) == DMA_MCHP_CH_ACTIVE) {
		stat->busy = true;
		stat->pending_length = (hal_dma->regs->DMAC_ACTIVE & DMAC_ACTIVE_BTCNT_Msk) >>
				       DMAC_ACTIVE_BTCNT_Pos;
	} else {
		stat->busy = false;
		stat->pending_length = data->descriptors_wb[channel].DMAC_BTCNT;
	}

	/* Adjust pending length based on beat size */
	switch (((DMAC_BTCTRL_BEATSIZE_Msk & data->descriptors[channel].DMAC_BTCTRL) >>
		 DMAC_BTCTRL_BEATSIZE_Pos)) {
	case DMAC_BTCTRL_BEATSIZE_BYTE_Val:
		/* No adjustment needed for byte-sized beats */
		break;
	case DMAC_BTCTRL_BEATSIZE_HWORD_Val:
		stat->pending_length *= 2U;
		break;
	case DMAC_BTCTRL_BEATSIZE_WORD_Val:
		stat->pending_length *= 4U;
		break;
	default:
		ret_val = HAL_MCHP_DMA_ERR_INVALID_CONFIG;
	}

	return ret_val;
}

/**
 * @brief Set up DMA descriptor addresses.
 *
 * This function configures the DMA controller with the base and write-back addresses
 * of the descriptors used for DMA transfers.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 */
static inline void hal_mchp_dma_desc_init(const hal_mchp_dma_t *hal_dma)
{
	dma_mchp_dmac_t *data = (dma_mchp_dmac_t *)hal_dma->data;

	hal_dma->regs->DMAC_BASEADDR = (uintptr_t)data->descriptors;
	hal_dma->regs->DMAC_WRBADDR = (uintptr_t)data->descriptors_wb;
}

/**
 * @brief Get the size of a DMA descriptor.
 *
 * This function returns the size of a DMA descriptor.
 *
 * @retval Size of the DMA descriptor in bytes.
 */
static inline int8_t hal_mchp_dma_get_desc_size(void)
{
	uint32_t size = sizeof(dmac_descriptor_registers_t);
	return size;
}

/**
 * @brief Get the base address of a DMA descriptor.
 *
 * This function returns the base address of a DMA descriptor for a specified channel.
 *
 * @param hal_dma Pointer to the DMA HAL Instance.
 * @param channel DMA channel number.
 *
 * @retval Pointer to the base address of the DMA descriptor.
 */
static inline void *hal_mchp_dma_desc_get_base_addr(const hal_mchp_dma_t *hal_dma, uint32_t channel)
{
	dma_mchp_dmac_t *data = (dma_mchp_dmac_t *)hal_dma->data;

	return &data->descriptors[channel];
}

/**
 * @brief Configure a DMA descriptor block.
 *
 * This function sets up a DMA descriptor with the provided block configuration,
 * including source and destination addresses, data transfer size, and block size.
 * It also links the descriptor to the previous descriptor if applicable.
 *
 * @param block Pointer to the DMA block configuration structure.
 * @param desc_ptr Pointer to the current DMA descriptor.
 * @param pre_desc_ptr Pointer to the previous DMA descriptor (can be NULL).
 * @param src_data_size Size of each data transfer in bytes (1, 2, or 4).
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_INVALID_SRC_DATA_SIZE if an invalid `src_data_size` is provided.
 * @retval HAL_MCHP_DMA_ERR_INVALID_SRC_ADDR if an invalid source address adjustment is provided.
 * @retval HAL_MCHP_DMA_ERR_INVALID_DST_ADDR if an invalid destination address adjustment is
 * provided.
 */
static inline int8_t hal_mchp_dma_desc_block_config(hal_dma_mchp_block_config_t *block,
						    void *desc_ptr, void *pre_desc_ptr,
						    uint32_t src_data_size)
{
	/* Descriptors typecast */
	dmac_descriptor_registers_t *desc = (dmac_descriptor_registers_t *)desc_ptr;
	dmac_descriptor_registers_t *pre_desc = (dmac_descriptor_registers_t *)pre_desc_ptr;

	uint16_t btctrl = 0;
	int8_t ret_val = 0;

	/* Set the DMAC Block Control */
	switch (src_data_size) {
	case 1:
		btctrl |= DMAC_BTCTRL_BEATSIZE_BYTE;
		break;
	case 2:
		btctrl |= DMAC_BTCTRL_BEATSIZE_HWORD;
		break;
	case 4:
		btctrl |= DMAC_BTCTRL_BEATSIZE_WORD;
		break;
	default:
		ret_val = HAL_MCHP_DMA_ERR_INVALID_SRC_DATA_SIZE;
		break;
	}

	if (ret_val == 0) {
		/* Set the block transfer count */
		desc->DMAC_BTCNT = (uint16_t)(block->block_size / src_data_size);
		desc->DMAC_DESCADDR = 0;

		/* Set the source address */
		switch (block->source_addr_adj) {
		case DMA_ADDR_ADJ_INCREMENT:
			desc->DMAC_SRCADDR = block->source_address + block->block_size;
			btctrl |= DMAC_BTCTRL_SRCINC(1);
			break;
		case DMA_ADDR_ADJ_NO_CHANGE:
			desc->DMAC_SRCADDR = block->source_address;
			break;
		default:
			ret_val = HAL_MCHP_DMA_ERR_INVALID_SRC_ADDR;
			break;
		}
	}

	if (ret_val == 0) {
		/* Set the destination address */
		switch (block->dest_addr_adj) {
		case DMA_ADDR_ADJ_INCREMENT:
			desc->DMAC_DSTADDR = block->dest_address + block->block_size;
			btctrl |= DMAC_BTCTRL_DSTINC(1);
			break;
		case DMA_ADDR_ADJ_NO_CHANGE:
			desc->DMAC_DSTADDR = block->dest_address;
			break;
		default:
			ret_val = HAL_MCHP_DMA_ERR_INVALID_DST_ADDR;
			break;
		}
	}

	if (ret_val == 0) {
		btctrl |= DMAC_BTCTRL_VALID(1);
		desc->DMAC_BTCTRL = btctrl;

		/* Attach the current descriptor to the previous descriptor at the end */
		if (pre_desc != NULL) {
			pre_desc->DMAC_DESCADDR = (uint32_t)desc;
		}
	}

	return ret_val;
}

/**
 * @brief Reload a DMA descriptor block.
 *
 * This function reloads a DMA descriptor block with new source and destination addresses and size.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param src Source address.
 * @param dst Destination address.
 * @param size Size of the data to be transferred.
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_INVALID_CONFIG if the beat size is invalid.
 */
static inline int8_t hal_mchp_dma_desc_reload_block(const hal_mchp_dma_t *hal_dma, uint32_t channel,
						    uint32_t src, uint32_t dst, size_t size)
{
	dma_mchp_dmac_t *data = (dma_mchp_dmac_t *)hal_dma->data;
	dmac_descriptor_registers_t *desc = &data->descriptors[channel];

	int8_t ret_val = 0;

	/* check if already multiple blocks are configured */
	if (desc->DMAC_DESCADDR != 0) {
		ret_val = HAL_MCHP_DMA_RELOAD_CONFIG_ERR;
	}

	if (ret_val == 0) {
		/* Update the block transfer count based on beat size */
		switch (((DMAC_BTCTRL_BEATSIZE_Msk & desc->DMAC_BTCTRL) >>
			 DMAC_BTCTRL_BEATSIZE_Pos)) {
		case DMAC_BTCTRL_BEATSIZE_BYTE_Val:
			desc->DMAC_BTCNT = (uint16_t)size;
			break;
		case DMAC_BTCTRL_BEATSIZE_HWORD_Val:
			desc->DMAC_BTCNT = (uint16_t)(size / 2U);
			break;
		case DMAC_BTCTRL_BEATSIZE_WORD_Val:
			desc->DMAC_BTCNT = (uint16_t)(size / 4U);
			break;
		default:
			ret_val = HAL_MCHP_DMA_ERR_INVALID_CONFIG;
			break;
		}
	}

	if (ret_val == 0) {
		/* Update the source address */
		if ((DMAC_BTCTRL_SRCINC_Msk & desc->DMAC_BTCTRL) != 0) {
			desc->DMAC_SRCADDR = src + size;
		} else {
			desc->DMAC_SRCADDR = src;
		}

		/* Update the destination address */
		if ((DMAC_BTCTRL_DSTINC_Msk & desc->DMAC_BTCTRL) != 0) {
			desc->DMAC_DSTADDR = dst + size;
		} else {
			desc->DMAC_DSTADDR = dst;
		}
	}

	return ret_val;
}

/**
 * @brief Retrieve the used DMA descriptor for a given channel.
 *
 * This function retrieves the next descriptor from the used descriptor list,
 * resets its values, and updates the descriptor chain. If no descriptors
 * remain, it returns NULL.
 *
 * @param hal_dma Pointer to the DMA HAL Instance.
 * @param channel DMA channel number.
 *
 * @return Pointer to the used descriptor, or NULL if none are available.
 */
static inline void *hal_mchp_dma_desc_get_used(const hal_mchp_dma_t *hal_dma, uint32_t channel)
{
	dma_mchp_dmac_t *data = (dma_mchp_dmac_t *)hal_dma->data;

	/* Get the configured descriptor after use */
	dmac_descriptor_registers_t *desc =
		(dmac_descriptor_registers_t *)data->descriptors[channel].DMAC_DESCADDR;

	void *ret_desc = NULL;

	if (desc != NULL) {
		/* Store the next descriptor before resetting */
		dmac_descriptor_registers_t *next_desc =
			(dmac_descriptor_registers_t *)desc->DMAC_DESCADDR;

		/* Reset descriptor values */
		desc->DMAC_BTCTRL = 0;
		desc->DMAC_BTCNT = 0;
		desc->DMAC_SRCADDR = 0;
		desc->DMAC_DSTADDR = 0;
		desc->DMAC_DESCADDR = 0;

		/* Move to the next descriptor for the next call */
		data->descriptors[channel].DMAC_DESCADDR = (uint32_t)next_desc;

		ret_desc = desc;
	} else {
		/* Reset descriptor if no more descriptors are available */
		data->descriptors[channel].DMAC_DESCADDR = 0;
	}

	return ret_desc;
}

/**
 * @brief Enables a cyclic DMA descriptor chain.
 *
 * This function links the last descriptor in the DMA chain to the base descriptor,
 * enabling a cyclic transfer mode.
 *
 * @param last_desc_ptr Pointer to the last descriptor in the chain.
 * @param base_desc_ptr Pointer to the base (first) descriptor in the chain.
 */
static inline void hal_mchp_dma_enable_cyclic_desc_chain(void *last_desc_ptr, void *base_desc_ptr)
{
	/* Descriptors typecast */
	dmac_descriptor_registers_t *last_desc = (dmac_descriptor_registers_t *)last_desc_ptr;
	dmac_descriptor_registers_t *base_desc = (dmac_descriptor_registers_t *)base_desc_ptr;

	/* Link the last descriptor to the base descriptor to form a cyclic chain */
	last_desc->DMAC_DESCADDR = (uint32_t)base_desc;
}

#endif /* MICROCHIP_HAL_MCHP_DMA_DMAC_U2503_H_ */
