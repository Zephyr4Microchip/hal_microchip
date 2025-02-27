/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_dma.h
 * @brief HAL MCHP DMA driver definitions and error codes.
 *
 * This file contains definitions, structures, and error codes used in
 * the Microchip DMA driver HAL.
 *
 */

#ifndef MICROCHIP_HAL_MCHP_DMA_H_
#define MICROCHIP_HAL_MCHP_DMA_H_

/**
 * @name MCHP DMA configuration error codes
 * @{
 */
/** Invalid trigger source */
#define HAL_MCHP_DMA_ERR_INVALID_TRIGGER_SRC           -1
/** Invalid channel direction */
#define HAL_MCHP_DMA_ERR_INVALID_DIRECTION             -2
/** Invalid priority level */
#define HAL_MCHP_DMA_ERR_INVALID_PRIORITY              -3
/** Source and destination burst lengths do not match */
#define HAL_MCHP_DMA_ERR_SRC_DST_BURST_LENGTH_MISMATCH -4
/** Burst length exceeds maximum allowed value */
#define HAL_MCHP_DMA_ERR_BURST_LENGTH_OVERFLOW         -5
/** Invalid source data size */
#define HAL_MCHP_DMA_ERR_INVALID_SRC_DATA_SIZE         -6
/** Invalid source address */
#define HAL_MCHP_DMA_ERR_INVALID_SRC_ADDR              -7
/** Invalid destination address */
#define HAL_MCHP_DMA_ERR_INVALID_DST_ADDR              -8
/** Source and destination data sizes do not match */
#define HAL_MCHP_DMA_ERR_SRC_DST_DATA_SIZE_MISMATCH    -9
/** Requested number of descriptors are not available */
#define HAL_MCHP_DMA_ERR_DESCRIPTOR_OVERFLOW           -10
/** Error due to invalid reload configuration */
#define HAL_MCHP_DMA_RELOAD_CONFIG_ERR                 -11
/** Error due to invalid or unsupported IP configuration */
#define HAL_MCHP_DMA_ERR_INVALID_CONFIG                -12

/** @} */

/**
 * @enum hal_dma_mchp_int_sts_t
 * @brief Enumeration for DMA interrupt status codes.
 *
 * This enumeration defines the possible interrupt status codes
 * that indicate the outcome of a DMA transaction.
 */
typedef enum {
	/** DMA transfer encountered an error */
	DMA_MCHP_INT_ERROR = -1,

	/** DMA transfer completed successfully */
	DMA_MCHP_INT_SUCCESS = 0,

	/** DMA transfer was suspended */
	DMA_MCHP_INT_SUSPENDED = 1,
} hal_dma_mchp_int_sts_t;

/**
 * @enum hal_dma_mchp_ch_state_t
 * @brief DMA channel states for Microchip DMA.
 *
 * Represents the different states a DMA channel can be in during its lifecycle.
 */
typedef enum hal_dma_mchp_ch_state {
	/** DMA channel is idle */
	DMA_MCHP_CH_IDLE,
	/** DMA Channel is pending */
	DMA_MCHP_CH_PENDING,
	/** DMA channel is suspended */
	DMA_MCHP_CH_SUSPENDED,
	/** DMA channel is actively transferring data */
	DMA_MCHP_CH_ACTIVE,
	/** DMA channel is prepared for transfer */
	DMA_MCHP_CH_PREPARED,
} hal_dma_mchp_ch_state_t;

/**
 * @enum hal_dma_mchp_ch_direction_t
 * @brief Defines the DMA transfer directions for Microchip DMA controllers.
 *
 * This enumeration specifies the possible data transfer directions
 * for a DMA channel in Microchip's DMA controller.
 */
typedef enum hal_dma_mchp_ch_direction {
	/** Memory-to-memory transfer */
	DMA_MCHP_MEMORY_TO_MEMORY = 0x0,

	/** Memory-to-peripheral transfer */
	DMA_MCHP_MEMORY_TO_PERIPHERAL,

	/** Peripheral-to-memory transfer */
	DMA_MCHP_PERIPHERAL_TO_MEMORY,

	/** Peripheral-to-peripheral transfer */
	DMA_MCHP_PERIPHERAL_TO_PERIPHERAL,
} hal_dma_mchp_ch_direction_t;

/**
 * @brief Macro defining the required memory size for DMA peripheral data.
 *
 * This macro must be defined in the implementation file. It specifies the
 * required memory allocation for DMA descriptors and operations.
 *
 * @note The actual value depends on the specific DMA controller in use.
 */
#ifndef HAL_DMA_MCHP_DATA_MEMORY_SIZE
#define HAL_DMA_MCHP_DATA_MEMORY_SIZE /* Defined in the implementation file */
#endif

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
							  int *channel);

/**
 * @brief Reset the DMA controller.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 */
static inline void hal_mchp_dma_controller_reset(const hal_mchp_dma_t *hal_dma);

/**
 * @brief Enable or disable the DMA controller.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param enable Boolean value to enable (true) or disable (false) the DMA controller.
 */
static inline void hal_mchp_dma_enable(const hal_mchp_dma_t *hal_dma, bool enable);

/**
 * @brief Set default priority levels for the DMA controller.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 */
static inline void hal_mchp_dma_set_default_priority(const hal_mchp_dma_t *hal_dma);

/**
 * @brief Set the trigger source and direction for a DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param trig_src Trigger source for the DMA channel.
 * @param channel_direction Direction of the DMA channel.
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_INVALID_TRIGGER_SRC if the trigger source is invalid.
 * @retval HAL_MCHP_DMA_ERR_INVALID_DIRECTION if the channel direction is invalid.
 */
static inline int8_t
hal_mchp_dma_ch_set_trig_src_n_dir(const hal_mchp_dma_t *hal_dma, uint8_t channel, uint8_t trig_src,
				   hal_dma_mchp_ch_direction_t channel_direction);

/**
 * @brief Set the priority level for a DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param priority Priority level to be set.
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_INVALID_PRIORITY if the priority level is invalid.
 */
static inline int8_t hal_mchp_dma_ch_set_priority(const hal_mchp_dma_t *hal_dma, uint8_t channel,
						  uint8_t priority);

/**
 * @brief Set the burst length for a DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param source_burst_length Burst length for the source.
 * @param dest_burst_length Burst length for the destination.
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_SRC_DST_BURST_LENGTH_MISMATCH if lengths do not match.
 * @retval HAL_MCHP_DMA_ERR_BURST_LENGTH_OVERFLOW if the burst length exceeds max allowed value.
 */
static inline int8_t hal_mchp_dma_ch_set_burst_length(const hal_mchp_dma_t *hal_dma,
						      uint8_t channel, uint32_t source_burst_length,
						      uint32_t dest_burst_length);

/**
 * @brief Enable interrupts for a DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param disable_err_interrupt Boolean flag to disable the transfer error interrupt.
 */
static inline void hal_mchp_dma_ch_interrupt_enable(const hal_mchp_dma_t *hal_dma, uint8_t channel,
						    bool disable_err_interrupt);

/**
 * @brief Enable or disable a DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param enable Flag to enable (true) or disable (false) the channel.
 */
static inline void hal_mchp_dma_ch_enable(const hal_mchp_dma_t *hal_dma, uint8_t channel,
					  bool enable);

/**
 * @brief Suspend a DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 */
static inline void hal_mchp_dma_ch_suspend(const hal_mchp_dma_t *hal_dma, uint8_t channel);

/**
 * @brief Resume a DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 */
static inline void hal_mchp_dma_ch_resume(const hal_mchp_dma_t *hal_dma, uint8_t channel);

/**
 * @brief Get the current state of a DMA channel.
 *
 * @param hal_dma Pointer to the DMA hardware abstraction layer structure.
 * @param channel DMA channel number.
 *
 * @return The state of the DMA channel.
 */
static inline hal_dma_mchp_ch_state_t hal_mchp_dma_ch_get_state(const hal_mchp_dma_t *hal_dma,
								uint32_t channel);

/**
 * @brief Get the status of a DMA channel.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 * @param channel DMA channel number.
 * @param stat Pointer to the DMA status structure to be filled.
 *
 * @retval 0 on success.
 * @retval HAL_MCHP_DMA_ERR_INVALID_BEAT_SIZE if the beat size is invalid.
 */
static inline int8_t hal_mchp_dma_ch_get_status(const hal_mchp_dma_t *hal_dma, uint8_t channel,
						hal_dma_mchp_status_t *stat);

/**
 * @brief Set up DMA descriptor addresses.
 *
 * @param hal_dma Pointer to the DMA HAL instance.
 */
static inline void hal_mchp_dma_desc_init(const hal_mchp_dma_t *hal_dma);

/**
 * @brief Get the size of a DMA descriptor.
 *
 * This function returns the size of a DMA descriptor.
 *
 * @retval Size of the DMA descriptor in bytes.
 */
static inline int8_t hal_mchp_dma_get_desc_size(void);

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
static inline void *hal_mchp_dma_desc_get_base_addr(const hal_mchp_dma_t *hal_dma,
						    uint32_t channel);

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
						    uint32_t src_data_size);

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
 * @retval HAL_MCHP_DMA_ERR_INVALID_BEAT_SIZE if the beat size is invalid.
 */
static inline int8_t hal_mchp_dma_desc_reload_block(const hal_mchp_dma_t *hal_dma, uint32_t channel,
						    uint32_t src, uint32_t dst, size_t size);

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
static inline void *hal_mchp_dma_desc_get_used(const hal_mchp_dma_t *hal_dma, uint32_t channel);

/**
 * @brief Enables a cyclic DMA descriptor chain.
 *
 * This function links the last descriptor in the DMA chain to the base descriptor,
 * enabling a cyclic transfer mode.
 *
 * @param last_desc_ptr Pointer to the last descriptor in the chain.
 * @param base_desc_ptr Pointer to the base (first) descriptor in the chain.
 */
static inline void hal_mchp_dma_enable_cyclic_desc_chain(void *last_desc_ptr, void *base_desc_ptr);

#endif /* MICROCHIP_HAL_MCHP_DMA_H_ */
