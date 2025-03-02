/*
 * Copyright (c) 2025 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file hal_mchp_clock_mclk_u2408.h
 * @brief HAL functions for MCLK clock control on Microchip devices.
 *
 * This header file provides the HAL functions for the MCLK clock
 * controllers. These functions enable clock management and configuration
 * for Microchip-based systems.
 */

#ifndef MICROCHIP_HAL_MCHP_CLOCK_MCLK_U2408_H_
#define MICROCHIP_HAL_MCHP_CLOCK_MCLK_U2408_H_

/**
 * @brief AHB Clocks mapping structure
 *
 * This structure maps the AHB clocks to their respective mask values.
 */
static const clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_ahb[] = {
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_HPB0, MCLK_AHBMASK_HPB0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_HPB1, MCLK_AHBMASK_HPB1_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_HPB2, MCLK_AHBMASK_HPB2_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_HPB3, MCLK_AHBMASK_HPB3_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_DSU, MCLK_AHBMASK_DSU_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_NVMCTRL, MCLK_AHBMASK_NVMCTRL_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_CMCC, MCLK_AHBMASK_CMCC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_DMAC, MCLK_AHBMASK_DMAC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_USB, MCLK_AHBMASK_USB_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_PAC, MCLK_AHBMASK_PAC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_QSPI, MCLK_AHBMASK_QSPI_Msk},

/* GMAC Peripheral is available in E54 and E53 series only */
#if defined(MCHP_CLOCK_SAM_D5X_E5X_GMAC_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_GMAC, MCLK_AHBMASK_GMAC_Msk},
#endif

	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_SDHC0, MCLK_AHBMASK_SDHC0_Msk},

#if defined(MCHP_CLOCK_SAM_D5X_E5X_SDHC_1_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_SDHC1, MCLK_AHBMASK_SDHC1_Msk},
#endif

/* CAN Peripheral is available in E54 and E51 series only */
#if defined(MCHP_CLOCK_SAM_D5X_E5X_CAN_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_CAN0, MCLK_AHBMASK_CAN0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_CAN1, MCLK_AHBMASK_CAN1_Msk},
#endif

	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_PUKCC, MCLK_AHBMASK_PUKCC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_QSPI_2X, MCLK_AHBMASK_QSPI_2X_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_NVMCTRL_SMEEPROM, MCLK_AHBMASK_NVMCTRL_SMEEPROM_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_NVMCTRL_CACHE, MCLK_AHBMASK_NVMCTRL_CACHE_Msk},
};

/**
 * @brief Size of the AHB clocks mask map array
 */
#define HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_ahb))

/**
 * @brief Structure to map clock control identifiers to their respective mask
 * values.
 */
static const clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_apba[] = {
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_PAC, MCLK_APBAMASK_PAC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_PM, MCLK_APBAMASK_PM_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_MCLK, MCLK_APBAMASK_MCLK_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_RSTC, MCLK_APBAMASK_RSTC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_OSCCTRL, MCLK_APBAMASK_OSCCTRL_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_OSC32KCTRL, MCLK_APBAMASK_OSC32KCTRL_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_SUPC, MCLK_APBAMASK_SUPC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_GCLK, MCLK_APBAMASK_GCLK_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_WDT, MCLK_APBAMASK_WDT_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_RTC, MCLK_APBAMASK_RTC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_EIC, MCLK_APBAMASK_EIC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_FREQM, MCLK_APBAMASK_FREQM_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_SERCOM0, MCLK_APBAMASK_SERCOM0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_SERCOM1, MCLK_APBAMASK_SERCOM1_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_TC0, MCLK_APBAMASK_TC0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBA_TC1, MCLK_APBAMASK_TC1_Msk},
};

/** @brief Size of the APBA clock mask map array. */
#define HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_apba))

/**
 * @brief Structure to map clock control identifiers to their respective mask
 * values.
 */
static const clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_apbb[] = {
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_USB, MCLK_APBBMASK_USB_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_DSU, MCLK_APBBMASK_DSU_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_NVMCTRL, MCLK_APBBMASK_NVMCTRL_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_PORT, MCLK_APBBMASK_PORT_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_EVSYS, MCLK_APBBMASK_EVSYS_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_SERCOM2, MCLK_APBBMASK_SERCOM2_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_SERCOM3, MCLK_APBBMASK_SERCOM3_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_TCC0, MCLK_APBBMASK_TCC0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_TCC1, MCLK_APBBMASK_TCC1_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_TC2, MCLK_APBBMASK_TC2_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_TC3, MCLK_APBBMASK_TC3_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBB_RAMECC, MCLK_APBBMASK_RAMECC_Msk},
};

/** @brief Size of the APBB clock mask map array. */
#define HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_apbb))

/**
 * @brief Structure to map clock control identifiers to their respective mask
 * values.
 */
static const clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_apbc[] = {
/* GMAC Peripheral is available in E54 and E53 series only */
#if defined(MCHP_CLOCK_SAM_D5X_E5X_GMAC_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_GMAC, MCLK_APBCMASK_GMAC_Msk},
#endif

	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TCC2, MCLK_APBCMASK_TCC2_Msk},

#if defined(MCHP_CLOCK_SAM_D5X_E5X_TCC_4_3_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TCC3, MCLK_APBCMASK_TCC3_Msk},
#endif

#if defined(MCHP_CLOCK_SAM_D5X_E5X_TC_5_4_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TC4, MCLK_APBCMASK_TC4_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TC5, MCLK_APBCMASK_TC5_Msk},
#endif

	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_PDEC, MCLK_APBCMASK_PDEC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_AC, MCLK_APBCMASK_AC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_AES, MCLK_APBCMASK_AES_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TRNG, MCLK_APBCMASK_TRNG_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_ICM, MCLK_APBCMASK_ICM_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_QSPI, MCLK_APBCMASK_QSPI_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_CCL, MCLK_APBCMASK_CCL_Msk},
};

/** @brief Size of the APBC clock mask map array. */
#define HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_apbc))

/**
 * @brief Structure to map clock control identifiers to their respective mask
 * values.
 */
static const clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_apbd[] = {
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_SERCOM4, MCLK_APBDMASK_SERCOM4_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_SERCOM5, MCLK_APBDMASK_SERCOM5_Msk},

#if (defined(MCHP_CLOCK_SAM_D5X_E5X_SERCOM_7_6_IP))
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_SERCOM6, MCLK_APBDMASK_SERCOM6_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_SERCOM7, MCLK_APBDMASK_SERCOM7_Msk},
#endif

#if defined(MCHP_CLOCK_SAM_D5X_E5X_TCC_4_3_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_TCC4, MCLK_APBDMASK_TCC4_Msk},
#endif

#if defined(MCHP_CLOCK_SAM_D5X_E5X_TC_7_6_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_TC6, MCLK_APBDMASK_TC6_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_TC7, MCLK_APBDMASK_TC7_Msk},
#endif

	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_ADC0, MCLK_APBDMASK_ADC0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_ADC1, MCLK_APBDMASK_ADC1_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_DAC, MCLK_APBDMASK_DAC_Msk},

#if defined(MCHP_CLOCK_SAM_D5X_E5X_I2S_IP)
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_I2S, MCLK_APBDMASK_I2S_Msk},
#endif

	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_PCC, MCLK_APBDMASK_PCC_Msk},
};

/** @brief Size of the APBD clock mask map array. */
#define HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_apbd))

/**
 * @brief Turn off the specified clock.
 *
 * This function disables the specified clock by clearing the corresponding mask
 * bit in the appropriate MCLK register.
 *
 * @param regs Pointer to the MCLK registers.
 * @param clk Clock identifier to be turned off.
 * @return The state of the clock after the operation.
 */
static inline clock_control_mchp_state_t hal_mchp_mclk_off(mclk_registers_t *regs, uint32_t clk)
{
	/* Variable to store the state of the clock */
	clock_control_mchp_state_t state;

	/* Variable to iterate through the clock mask maps */
	uint32_t index;

	/* Check if the clock is HS, which is not supported for turning off */
	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		/* Set state to no support */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
		/* Set state to no support */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else {
		/* Initialize state to no support */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

		/* Check if the clock is in the AHB mask map */
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
			if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
				/* Clear the corresponding mask bit */
				regs->MCLK_AHBMASK &= ~(hal_mchp_msk_map_mclk_ahb[index].msk);
				/* Set state to off */
				state = CLOCK_CONTROL_MCHP_STATE_OK;
				/* Exit the loop */
				break;
			}
		}

		/* If not found in AHB, check the APBA mask map */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
					/* Clear the corresponding mask bit */
					regs->MCLK_APBAMASK &=
						~(hal_mchp_msk_map_mclk_apba[index].msk);
					/* Set state to off */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit the loop */
					break;
				}
			}
		}

		/* If not found in APBA, check the APBB mask map */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
					/* Clear the corresponding mask bit */
					regs->MCLK_APBBMASK &=
						~(hal_mchp_msk_map_mclk_apbb[index].msk);
					/* Set state to off */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit the loop */
					break;
				}
			}
		}

		/* If not found in APBB, check the APBC mask map */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
					/* Clear the corresponding mask bit */
					regs->MCLK_APBCMASK &=
						~(hal_mchp_msk_map_mclk_apbc[index].msk);
					/* Set state to off */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit the loop */
					break;
				}
			}
		}

		/* If not found in APBC, check the APBD mask map */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
					/* Clear the corresponding mask bit */
					regs->MCLK_APBDMASK &=
						~(hal_mchp_msk_map_mclk_apbd[index].msk);
					/* Set state to off */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit the loop */
					break;
				}
			}
		}
	}
	/* Return the state of the clock */
	return state;
}

/**
 * @brief Turn on the specified clock.
 *
 * This function enables the specified clock by setting the corresponding mask
 * bit in the appropriate MCLK register.
 *
 * @param regs Pointer to the MCLK registers.
 * @param clk Clock identifier to be turned on.
 * @return The state of the clock after the operation.
 */
static inline clock_control_mchp_state_t hal_mchp_mclk_on(mclk_registers_t *regs, uint32_t clk)
{
	/* Variable to store the state of the clock */
	clock_control_mchp_state_t state;

	/* Variable to iterate through the clock mask maps */
	uint32_t index;

	/* Check if the clock is HS, which is not supported for turning on */
	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		/* Set state to no support */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	/* Check if the clock is CPU, which is not supported for turning on */
	else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
		/* Set state to no support */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else {
		/* Initialize state to no support */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

		/* Check if the clock is in the AHB mask map */
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
			if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
				/* Set the corresponding mask bit */
				regs->MCLK_AHBMASK |= hal_mchp_msk_map_mclk_ahb[index].msk;
				/* Set state to on */
				state = CLOCK_CONTROL_MCHP_STATE_OK;
				/* Exit the loop */
				break;
			}
		}

		/* If not found in AHB, check the APBA mask map */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in AHB */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
					/* Set the corresponding mask bit */
					regs->MCLK_APBAMASK |=
						hal_mchp_msk_map_mclk_apba[index].msk;
					/* Set state to on */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit the loop */
					break;
				}
			}
		}

		/* If not found in APBA, check the APBB mask map */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBA */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
					/* Set the corresponding mask bit */
					regs->MCLK_APBBMASK |=
						hal_mchp_msk_map_mclk_apbb[index].msk;
					/* Set state to on */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit the loop */
					break;
				}
			}
		}

		/* If not found in APBB, check the APBC mask map */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBB */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
					/* Set the corresponding mask bit */
					regs->MCLK_APBCMASK |=
						hal_mchp_msk_map_mclk_apbc[index].msk;
					/* Set state to on */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit the loop */
					break;
				}
			}
		}

		/* If not found in APBC, check the APBD mask map */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBC */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
					/* Set the corresponding mask bit */
					regs->MCLK_APBDMASK |=
						hal_mchp_msk_map_mclk_apbd[index].msk;
					/* Set state to on */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit the loop */
					break;
				}
			}
		}
	}
	/* Return the state of the clock */
	return state;
}

/**
 * @brief Check the status of the specified clock.
 *
 * This function checks whether the specified clock is on or off by reading the
 * corresponding mask bit in the appropriate MCLK register.
 *
 * @param regs Pointer to the MCLK registers.
 * @param clk Clock identifier to check the status of.
 * @return The state of the clock.
 */
static inline clock_control_mchp_state_t hal_mchp_mclk_status(mclk_registers_t *regs, uint32_t clk)
{
	/* Variable to store the state of the clock */
	clock_control_mchp_state_t state;

	/* Variable to iterate through the clock mask maps */
	uint32_t index;

	/* Check if the clock is HS, which is always on */
	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		/* Set state to on */
		state = CLOCK_CONTROL_MCHP_STATE_ON;
	} else {
		/* Check if the MCLK interrupt flag is set */
		if ((regs->MCLK_INTFLAG & MCLK_INTFLAG_Msk) == MCLK_INTFLAG_Msk) {
			/* Check the clock, which is on if the interrupt flag is set */
			if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
				/* Set state to on */
				state = CLOCK_CONTROL_MCHP_STATE_ON;
			} else {
				/* Initialize state to no support */
				state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

				/* Check if the clock is in the AHB mask map */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
					if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
						/* Check if the corresponding mask bit is set
						 */
						if ((regs->MCLK_AHBMASK &
						     hal_mchp_msk_map_mclk_ahb[index].msk) ==
						    hal_mchp_msk_map_mclk_ahb[index].msk) {
							/* Set state to on */
							state = CLOCK_CONTROL_MCHP_STATE_ON;
						} else {
							/* Set state to off */
							state = CLOCK_CONTROL_MCHP_STATE_OFF;
						}
						/* Exit the loop */
						break;
					}
				}

				/* If not found in AHB, check the APBA mask map */
				if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
					/* No match in AHB */
					for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE;
					     index++) {
						if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
							/* Check if the corresponding bit is
							 * set */
							if ((regs->MCLK_APBAMASK &
							     hal_mchp_msk_map_mclk_apba[index]
								     .msk) ==
							    hal_mchp_msk_map_mclk_apba[index].msk) {
								/* Set state to on */
								state = CLOCK_CONTROL_MCHP_STATE_ON;
							} else {
								/* Set state to off */
								state = CLOCK_CONTROL_MCHP_STATE_OFF;
							}
							/* Exit the loop */
							break;
						}
					}
				}

				/* If not found in APBA, check the APBB mask map */
				if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
					/* No match in APBA */
					for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE;
					     index++) {
						if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
							/* Check if the corresponding bit is
							 * set */
							if ((regs->MCLK_APBBMASK &
							     hal_mchp_msk_map_mclk_apbb[index]
								     .msk) ==
							    hal_mchp_msk_map_mclk_apbb[index].msk) {
								/* Set state to on */
								state = CLOCK_CONTROL_MCHP_STATE_ON;
							} else {
								/* Set state to off */
								state = CLOCK_CONTROL_MCHP_STATE_OFF;
							}
							/* Exit the loop */
							break;
						}
					}
				}

				/* If not found in APBB, check the APBC mask map */
				if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
					/* No match in APBB */
					for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE;
					     index++) {
						if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
							/* Check if the corresponding bit is
							 * set */
							if ((regs->MCLK_APBCMASK &
							     hal_mchp_msk_map_mclk_apbc[index]
								     .msk) ==
							    hal_mchp_msk_map_mclk_apbc[index].msk) {
								/* Set state to on */
								state = CLOCK_CONTROL_MCHP_STATE_ON;
							} else {
								/* Set state to off */
								state = CLOCK_CONTROL_MCHP_STATE_OFF;
							}
							/* Exit the loop */
							break;
						}
					}
				}

				/* If not found in APBC, check the APBD mask map */
				if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
					/* No match in APBC */
					for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE;
					     index++) {
						if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
							/* Check if the corresponding bit is
							 * set */
							if ((regs->MCLK_APBDMASK &
							     hal_mchp_msk_map_mclk_apbd[index]
								     .msk) ==
							    hal_mchp_msk_map_mclk_apbd[index].msk) {
								/* Set state to on */
								state = CLOCK_CONTROL_MCHP_STATE_ON;
							} else {
								/* Set state to off */
								state = CLOCK_CONTROL_MCHP_STATE_OFF;
							}
							/* Exit the loop */
							break;
						}
					}
				}
			}
		} else {
			/* Set state to off if the interrupt flag is not set */
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	}

	/* Check whether clock state is on */
	if (state == CLOCK_CONTROL_MCHP_STATE_ON) {
		/* Check clock ready flag to make sure clock is ready */
		if ((regs->MCLK_INTFLAG & MCLK_INTFLAG_CKRDY_Msk) != MCLK_INTFLAG_CKRDY_Msk) {
			state = CLOCK_CONTROL_MCHP_STATE_STARTING;
		}
	}

	/* Return the state of the clock */
	return state;
}

/**
 * @brief Enable the interrupt for the specified clock group.
 *
 * This function enables the interrupt for the specified clock group by setting
 * the corresponding bit in the MCLK_INTENSET register.
 *
 * @param regs Pointer to the MCLK registers.
 * @param clk Clock identifier for which the interrupt is to be enabled.
 * @return The state of the clock after enabling the interrupt.
 */
static inline clock_control_mchp_state_t hal_mchp_mclk_enable_interrupt(mclk_registers_t *regs,
									uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

/**
 * @brief Clear the interrupt for the specified clock group.
 *
 * This function clears the interrupt for the specified clock group by setting
 * the corresponding bit in the MCLK_INTFLAG register.
 *
 * @param regs Pointer to the MCLK registers.
 * @param clk Clock identifier for which the interrupt is to be cleared.
 * @return The state of the clock after clearing the interrupt.
 */
static inline clock_control_mchp_state_t hal_mchp_mclk_clear_interrupt(mclk_registers_t *regs,
								       uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

/**
 * @brief Disable the interrupt for the specified clock.
 *
 * This function disables the interrupt for the specified clock by setting the
 * appropriate bits in the MCLK_INTENCLR register.
 *
 * @param regs Pointer to the MCLK registers structure.
 * @param clk Clock identifier (not used in this function).
 *
 * @return CLOCK_CONTROL_MCHP_STATE_OK on success.
 */
static inline clock_control_mchp_state_t hal_mchp_mclk_disable_interrupt(mclk_registers_t *regs,
									 uint32_t clk)
{
	/* No interrupt support */
	return CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
}

/**
 * @brief Get the clock rate for the specified clock group.
 *
 * This function retrieves the clock rate for the specified clock group by
 * determining the appropriate clock source and its division factor.
 *
 * @param regs Pointer to the MCLK registers.
 * @param clk Clock identifier for which the rate is to be retrieved.
 * @param src Pointer to the structure to store the clock source information.
 * @return The state of the clock after retrieving the rate.
 */
static inline clock_control_mchp_state_t
hal_mchp_mclk_get_rate(mclk_registers_t *regs, uint32_t clk, clock_control_mchp_source_t *src)
{
	/* Declare a variable to store the state of the clock */
	clock_control_mchp_state_t state;

	/* Declare a variable to use as an index in loops */
	uint32_t index;

	/* Check if the clock is the high-speed clock */
	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		/* Calculate the division factor for the high-speed clock */
		src->div *= ((regs->MCLK_HSDIV & MCLK_HSDIV_DIV_Msk) >> MCLK_HSDIV_DIV_Pos);

		/* Set the target clock to GCLK_GEN0 */
		src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;

		/* Set the target clock address to the base address of GCLK */
		src->target_clk_addr = GCLK_BASE_ADDRESS;

		/* Set the state to indicate that the clock is not the source */
		state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
		/* Calculate the division factor for the CPU clock */
		src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >> MCLK_CPUDIV_DIV_Pos);

		/* Set the target clock to GCLK_GEN0 */
		src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;

		/* Set the target clock address to the base address of GCLK */
		src->target_clk_addr = GCLK_BASE_ADDRESS;

		/* Set the state to indicate that the clock is not the source */
		state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
	} else {
		/* Set the state to indicate that the clock is not supported */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

		/* Loop through the AHB clock map */
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
			/* Check if the clock matches an AHB clock */
			if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
				/* Check if the clock is the QSPI 2X clock */
				if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_AHB_QSPI_2X) {
					/* Calculate the division factor for the high-speed
					 * clock */
					src->div *= ((regs->MCLK_HSDIV & MCLK_HSDIV_DIV_Msk) >>
						     MCLK_HSDIV_DIV_Pos);
				} else {
					/* Calculate the division factor for the CPU clock */
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);
				}

				/* Set the target clock to GCLK_GEN0 */
				src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;

				/* Set the target clock address to the base address of GCLK */
				src->target_clk_addr = GCLK_BASE_ADDRESS;

				/* Set the state to indicate that the clock is not the source
				 */
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;

				/* Exit the loop */
				break;
			}
		}

		/* Check if the clock is still not supported */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* Loop through the APBA clock map */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
				/* Check if the clock matches an APBA clock */
				if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
					/* Calculate the division factor for the CPU clock */
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);

					/* Set the target clock to GCLK_GEN0 */
					src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;

					/* Set the target clock to the base address of GCLK */
					src->target_clk_addr = GCLK_BASE_ADDRESS;

					/* Set the state to indicate that clock is not source
					 */
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;

					/* Exit the loop */
					break;
				}
			}
		}

		/* Check if the clock is still not supported */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* Loop through the APBB clock map */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
				/* Check if the clock matches an APBB clock */
				if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
					/* Calculate the division factor for the CPU clock */
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);

					/* Set the target clock to GCLK_GEN0 */
					src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;

					/* Set the target clock to the base address of GCLK */
					src->target_clk_addr = GCLK_BASE_ADDRESS;

					/* Set state to indicate that clock is not the source
					 */
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;

					/* Exit the loop */
					break;
				}
			}
		}

		/* Check if the clock is still not supported */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* Loop through the APBC clock map */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
				/* Check if the clock matches an APBC clock */
				if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
					/* Calculate the division factor for the CPU clock */
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);

					/* Set the target clock to GCLK_GEN0 */
					src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;

					/* Set the target clock to the base address of GCLK */
					src->target_clk_addr = GCLK_BASE_ADDRESS;

					/* Set state to indicate that clock is not the source
					 */
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;

					/* Exit the loop */
					break;
				}
			}
		}

		/* Check if the clock is still not supported */
		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* Loop through the APBD clock map */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
				/* Check if the clock matches an APBD clock */
				if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
					/* Calculate the division factor for the CPU clock */
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);

					/* Set the target clock to GCLK_GEN0 */
					src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;

					/* Set the target clock to base address of GCLK */
					src->target_clk_addr = GCLK_BASE_ADDRESS;

					/* Set state to indicate clock is not the source */
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;

					/* Exit the loop */
					break;
				}
			}
		}
	}

	/* Return the state of the clock */
	return state;
}

/**
 * @brief Set the clock rate for the specified clock group.
 *
 * This function sets the clock rate for the specified clock group by
 * configuring the appropriate clock division factor.
 *
 * @param regs Pointer to the MCLK registers.
 * @param clk Clock identifier for which the rate is to be set.
 * @param rate Pointer to the structure containing the clock rate
 * information.
 * @return The state of the clock after setting the rate.
 */
static inline clock_control_mchp_state_t
hal_mchp_mclk_set_rate(mclk_registers_t *regs, uint32_t clk, clock_control_mchp_rate_t *rate)
{
	/* Declare a variable to store the state of the clock */
	clock_control_mchp_state_t state;

	/* Pointer to the mclk_rate field in the rate structure. */
	clock_control_mchp_mclk_rate_t *mclk_rate = rate->mclk_rate;

	/* Check if the clock is the high-speed clock */
	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		/* Set the state to indicate that the clock is not supported */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
		/* Set the CPU clock division factor */
		regs->MCLK_CPUDIV = MCLK_CPUDIV_DIV(mclk_rate->cpu_div) & MCLK_CPUDIV_Msk;

		/* Set the state to indicate that the clock setting is successful */
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Set state to indicate that other clocks do not have rate setting */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}

	/* Return the state of the clock */
	return state;
}

/**
 * @brief Configure the clock settings for the specified clock group.
 *
 * This function configures the clock settings for the specified clock group by
 * setting the appropriate clock division factors and mask registers.
 *
 * @param regs Pointer to the MCLK registers.
 * @param clk Clock identifier for which the configuration is to be set.
 * @param configuration Pointer to the structure containing the clock
 * configuration information.
 * @return The state of the clock after configuration.
 */
static inline clock_control_mchp_state_t
hal_mchp_mclk_configure(mclk_registers_t *regs, uint32_t clk,
			clock_control_mchp_configuration_t *configuration)
{
	/* Declare a variable to store the state of the clock */
	clock_control_mchp_state_t state;
	/* Declare a variable to use as an index in loops */
	uint32_t index;
	/* Pointer to the mclk_configuration in the configuration structure. */
	clock_control_mchp_mclk_configuration_t *mclk_configuration =
		configuration->mclk_configuration;

	/* Check if the clock identifier is zero */
	if (clk == 0) {
		/* Set the CPU clock division factor */
		regs->MCLK_CPUDIV = MCLK_CPUDIV_DIV(mclk_configuration->cpu_div) & MCLK_CPUDIV_Msk;

		/* Configure the AHB mask registers */
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
			/* Clear mask bits for the clock and set the new configuration */
			regs->MCLK_AHBMASK =
				(regs->MCLK_AHBMASK & ~(hal_mchp_msk_map_mclk_ahb[index].msk)) |
				(mclk_configuration->ahb[index]);
		}

		/* Configure the APBA mask registers */
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
			/* Clear mask bits for clock and set new configuration */
			regs->MCLK_APBAMASK =
				(regs->MCLK_APBAMASK & ~(hal_mchp_msk_map_mclk_apba[index].msk)) |
				(mclk_configuration->apba[index]);
		}

		/* Configure the APBB mask registers */
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
			/* Clear mask bits for clock and set new configuration */
			regs->MCLK_APBBMASK =
				(regs->MCLK_APBBMASK & ~(hal_mchp_msk_map_mclk_apbb[index].msk)) |
				(mclk_configuration->apbb[index]);
		}

		/* Configure the APBC mask registers */
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
			/* Clear mask bits for current clock and set new configuration */
			regs->MCLK_APBCMASK =
				(regs->MCLK_APBCMASK & ~(hal_mchp_msk_map_mclk_apbc[index].msk)) |
				(mclk_configuration->apbc[index]);
		}

		/* Configure the APBD mask registers */
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
			/* Clear mask bits for the clock and set new configuration */
			regs->MCLK_APBDMASK =
				(regs->MCLK_APBDMASK & ~(hal_mchp_msk_map_mclk_apbd[index].msk)) |
				(mclk_configuration->apbd[index]);
		}

		/* Set the state to indicate that clock configuration is successful */
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* Set the state to indicate that the clock is not supported */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;

		/* Check if the clock is the high-speed clock */
		if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
			/* Set the state to indicate that the clock is not supported */
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		}
		/* Check if the clock is the CPU clock */
		else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
			/* Set the CPU clock division factor */
			regs->MCLK_CPUDIV =
				MCLK_CPUDIV_DIV(mclk_configuration->cpu_div) & MCLK_CPUDIV_Msk;

			/* Set state to indicate clock configuration is successful */
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		} else {
			/* Loop through the AHB mask map to find a match */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
				/* Check if the current clock matches the desired clock */
				if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
					/* Update MCLK_AHBMASK with the new configuration */
					regs->MCLK_AHBMASK =
						(regs->MCLK_AHBMASK &
						 ~(hal_mchp_msk_map_mclk_ahb[index].msk)) |
						(mclk_configuration->ahb[index]);
					/* Update the state to CLOCK_CONTROL_MCHP_STATE_OK */
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					/* Exit loop as the desired clock has been updated */
					break;
				}
			}

			/* If no match found in AHB, check APBA */
			if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
				/* Loop through each index */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
					/* Check if the current clock matches the desired clock
					 */
					if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
						/* Update MCLK_APBAMASK register */
						regs->MCLK_APBAMASK =
							(regs->MCLK_APBAMASK &
							 ~(hal_mchp_msk_map_mclk_apba[index].msk)) |
							(mclk_configuration->apba[index]);
						/* Update state to CLOCK_CONTROL_MCHP_STATE_OK
						 */
						state = CLOCK_CONTROL_MCHP_STATE_OK;
						/* Exit loop as the clock has been updated */
						break;
					}
				}
			}

			/* If no match found in APBA, check APBB */
			if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
				/* Loop through each index */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
					/* Check if the current clock matches the desired clock
					 */
					if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
						/* Update MCLK_APBBMASK with new configuration
						 */
						regs->MCLK_APBBMASK =
							(regs->MCLK_APBBMASK &
							 ~(hal_mchp_msk_map_mclk_apbb[index].msk)) |
							(mclk_configuration->apbb[index]);
						/* Update state to CLOCK_CONTROL_MCHP_STATE_OK
						 */
						state = CLOCK_CONTROL_MCHP_STATE_OK;
						/* Exit loop as desired clock has been updated
						 */
						break;
					}
				}
			}

			/* If no match found in APBB, check APBC */
			if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
				/* Loop through each index */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
					/* Check if the current clock matches the desired clock
					 */
					if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
						/* Update MCLK_APBCMASK with new configuration
						 */
						regs->MCLK_APBCMASK =
							(regs->MCLK_APBCMASK &
							 ~(hal_mchp_msk_map_mclk_apbc[index].msk)) |
							(mclk_configuration->apbc[index]);
						/* Update state to CLOCK_CONTROL_MCHP_STATE_OK
						 */
						state = CLOCK_CONTROL_MCHP_STATE_OK;
						/* Exit loop as desired clock has been updated
						 */
						break;
					}
				}
			}

			/* If no match found in APBC, check APBD */
			if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
				/* Loop through each index */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
					/* Check if the current clock matches the desired clock
					 */
					if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
						/* Update MCLK_APBDMASK with new configuration
						 */
						regs->MCLK_APBDMASK =
							(regs->MCLK_APBDMASK &
							 ~(hal_mchp_msk_map_mclk_apbd[index].msk)) |
							(mclk_configuration->apbd[index]);
						/* Update state to CLOCK_CONTROL_MCHP_STATE_OK
						 */
						state = CLOCK_CONTROL_MCHP_STATE_OK;
						/* Exit the loop as the clock has been updated
						 */
						break;
					}
				}
			}
		}
	}

	/* Return the state of the clock */
	return state;
}

#endif /* MICROCHIP_HAL_MCHP_CLOCK_MCLK_U2408_H_ */
