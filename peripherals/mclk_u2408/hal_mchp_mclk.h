/*
 * Copyright (c) [2024] [Microchip Technology Inc.]
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef PERIPHERALS_MCLK_U2408_HAL_MCHP_MCLK_H_
#define PERIPHERALS_MCLK_U2408_HAL_MCHP_MCLK_H_

/* AHB Clocks */
static const struct clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_ahb[] = {
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
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_GMAC, MCLK_AHBMASK_GMAC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_SDHC0, MCLK_AHBMASK_SDHC0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_SDHC1, MCLK_AHBMASK_SDHC1_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_CAN0, MCLK_AHBMASK_CAN0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_CAN1, MCLK_AHBMASK_CAN1_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_PUKCC, MCLK_AHBMASK_PUKCC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_QSPI_2X, MCLK_AHBMASK_QSPI_2X_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_NVMCTRL_SMEEPROM, MCLK_AHBMASK_NVMCTRL_SMEEPROM_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_AHB_NVMCTRL_CACHE, MCLK_AHBMASK_NVMCTRL_CACHE_Msk},
};
#define HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_ahb))

/* APBA Clocks */
static const struct clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_apba[] = {
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
#define HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_apba))

/* APBB Clocks */
static const struct clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_apbb[] = {
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
#define HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_apbb))

/* APBC Clocks */
static const struct clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_apbc[] = {
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_GMAC, MCLK_APBCMASK_GMAC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TCC2, MCLK_APBCMASK_TCC2_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TCC3, MCLK_APBCMASK_TCC3_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TC4, MCLK_APBCMASK_TC4_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TC5, MCLK_APBCMASK_TC5_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_PDEC, MCLK_APBCMASK_PDEC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_AC, MCLK_APBCMASK_AC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_AES, MCLK_APBCMASK_AES_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_TRNG, MCLK_APBCMASK_TRNG_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_ICM, MCLK_APBCMASK_ICM_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_QSPI, MCLK_APBCMASK_QSPI_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBC_CCL, MCLK_APBCMASK_CCL_Msk},
};
#define HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_apbc))

/* APBD Clocks */
static const struct clock_control_mchp_msk_map_t hal_mchp_msk_map_mclk_apbd[] = {
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_SERCOM4, MCLK_APBDMASK_SERCOM4_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_SERCOM5, MCLK_APBDMASK_SERCOM5_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_SERCOM6, MCLK_APBDMASK_SERCOM6_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_SERCOM7, MCLK_APBDMASK_SERCOM7_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_TCC4, MCLK_APBDMASK_TCC4_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_TC6, MCLK_APBDMASK_TC6_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_TC7, MCLK_APBDMASK_TC7_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_ADC0, MCLK_APBDMASK_ADC0_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_ADC1, MCLK_APBDMASK_ADC1_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_DAC, MCLK_APBDMASK_DAC_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_I2S, MCLK_APBDMASK_I2S_Msk},
	{CLOCK_CONTROL_MCHP_V1_MCLK_APBD_PCC, MCLK_APBDMASK_PCC_Msk},
};
#define HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE (ARRAY_SIZE(hal_mchp_msk_map_mclk_apbd))

static inline enum clock_control_mchp_state_t hal_mchp_mclk_off(mclk_registers_t *regs,
								uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
			if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
				regs->MCLK_AHBMASK &= ~(hal_mchp_msk_map_mclk_ahb[index].msk);
				state = CLOCK_CONTROL_MCHP_STATE_OFF;
				break;
			} else {
				/* Nothing to do */
			}
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in AHB */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
					regs->MCLK_APBAMASK &=
						~(hal_mchp_msk_map_mclk_apba[index].msk);
					state = CLOCK_CONTROL_MCHP_STATE_OFF;
					break;
				} else {
					/* Nothing to do */
				}
			}
		} else {
			/* Nothing to do */
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBA */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
					regs->MCLK_APBBMASK &=
						~(hal_mchp_msk_map_mclk_apbb[index].msk);
					state = CLOCK_CONTROL_MCHP_STATE_OFF;
					break;
				} else {
					/* Nothing to do */
				}
			}
		} else {
			/* Nothing to do */
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBB */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
					regs->MCLK_APBCMASK &=
						~(hal_mchp_msk_map_mclk_apbc[index].msk);
					state = CLOCK_CONTROL_MCHP_STATE_OFF;
					break;
				} else {
					/* Nothing to do */
				}
			}
		} else {
			/* Nothing to do */
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBC */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
					regs->MCLK_APBDMASK &=
						~(hal_mchp_msk_map_mclk_apbd[index].msk);
					state = CLOCK_CONTROL_MCHP_STATE_OFF;
					break;
				} else {
					/* Nothing to do */
				}
			}
		} else {
			/* Nothing to do */
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_mclk_on(mclk_registers_t *regs, uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
			if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
				regs->MCLK_AHBMASK |= hal_mchp_msk_map_mclk_ahb[index].msk;
				state = CLOCK_CONTROL_MCHP_STATE_ON;
				break;
			} else {
				/* Nothing to do */
			}
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in AHB */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
					regs->MCLK_APBAMASK |=
						hal_mchp_msk_map_mclk_apba[index].msk;
					state = CLOCK_CONTROL_MCHP_STATE_ON;
					break;
				} else {
					/* Nothing to do */
				}
			}
		} else {
			/* Nothing to do */
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBA */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
					regs->MCLK_APBBMASK |=
						hal_mchp_msk_map_mclk_apbb[index].msk;
					state = CLOCK_CONTROL_MCHP_STATE_ON;
					break;
				} else {
					/* Nothing to do */
				}
			}
		} else {
			/* Nothing to do */
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBB */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
					regs->MCLK_APBCMASK |=
						hal_mchp_msk_map_mclk_apbc[index].msk;
					state = CLOCK_CONTROL_MCHP_STATE_ON;
					break;
				} else {
					/* Nothing to do */
				}
			}
		} else {
			/* Nothing to do */
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBC */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
					regs->MCLK_APBDMASK |=
						hal_mchp_msk_map_mclk_apbd[index].msk;
					state = CLOCK_CONTROL_MCHP_STATE_ON;
					break;
				} else {
					/* Nothing to do */
				}
			}
		} else {
			/* Nothing to do */
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_mclk_status(mclk_registers_t *regs,
								   uint32_t clk)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else {
		if ((regs->MCLK_INTFLAG & MCLK_INTFLAG_Msk) == MCLK_INTFLAG_Msk) {
			if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
				state = CLOCK_CONTROL_MCHP_STATE_ON;
			} else {
				state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
					if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
						if ((regs->MCLK_AHBMASK &
						     hal_mchp_msk_map_mclk_ahb[index].msk) ==
						    hal_mchp_msk_map_mclk_ahb[index].msk) {
							state = CLOCK_CONTROL_MCHP_STATE_ON;
						} else {
							state = CLOCK_CONTROL_MCHP_STATE_OFF;
						}
						break;
					} else {
						/* Nothing to do */
					}
				}

				if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
					/* No match in AHB */
					for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE;
					     index++) {
						if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
							if ((regs->MCLK_APBAMASK &
							     hal_mchp_msk_map_mclk_apba[index]
								     .msk) ==
							    hal_mchp_msk_map_mclk_apba[index].msk) {
								state = CLOCK_CONTROL_MCHP_STATE_ON;
							} else {
								state = CLOCK_CONTROL_MCHP_STATE_OFF;
							}
							break;
						} else {
							/* Nothing to do */
						}
					}
				}

				if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
					/* No match in APBA */
					for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE;
					     index++) {
						if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
							if ((regs->MCLK_APBBMASK &
							     hal_mchp_msk_map_mclk_apbb[index]
								     .msk) ==
							    hal_mchp_msk_map_mclk_apbb[index].msk) {
								state = CLOCK_CONTROL_MCHP_STATE_ON;
							} else {
								state = CLOCK_CONTROL_MCHP_STATE_OFF;
							}
							break;
						} else {
							/* Nothing to do */
						}
					}
				}

				if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
					/* No match in APBB */
					for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE;
					     index++) {
						if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
							if ((regs->MCLK_APBCMASK &
							     hal_mchp_msk_map_mclk_apbc[index]
								     .msk) ==
							    hal_mchp_msk_map_mclk_apbc[index].msk) {
								state = CLOCK_CONTROL_MCHP_STATE_ON;
							} else {
								state = CLOCK_CONTROL_MCHP_STATE_OFF;
							}
							break;
						} else {
							/* Nothing to do */
						}
					}
				}

				if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
					/* No match in APBC */
					for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE;
					     index++) {
						if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
							if ((regs->MCLK_APBDMASK &
							     hal_mchp_msk_map_mclk_apbd[index]
								     .msk) ==
							    hal_mchp_msk_map_mclk_apbd[index].msk) {
								state = CLOCK_CONTROL_MCHP_STATE_ON;
							} else {
								state = CLOCK_CONTROL_MCHP_STATE_OFF;
							}
							break;
						} else {
							/* Nothing to do */
						}
					}
				}
			}
		} else {
			state = CLOCK_CONTROL_MCHP_STATE_OFF;
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t hal_mchp_mclk_enable_interrupt(mclk_registers_t *regs,
									     uint32_t clk)
{
	/* Only one interurpt available for all groups */
	regs->MCLK_INTENSET |= MCLK_INTENSET_Msk;
	return 0;
}

static inline enum clock_control_mchp_state_t hal_mchp_mclk_clear_interrupt(mclk_registers_t *regs,
									    uint32_t clk)
{
	regs->MCLK_INTFLAG |= MCLK_INTFLAG_Msk;
	return CLOCK_CONTROL_MCHP_STATE_OK;
}

static inline enum clock_control_mchp_state_t
hal_mchp_mclk_disable_interrupt(mclk_registers_t *regs, uint32_t clk)
{
	regs->MCLK_INTENCLR |= MCLK_INTENCLR_Msk;
	return CLOCK_CONTROL_MCHP_STATE_OK;
}

static inline enum clock_control_mchp_state_t
hal_mchp_mclk_get_rate(mclk_registers_t *regs, uint32_t clk,
		       volatile struct clock_control_mchp_src_t *src)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		src->div *= ((regs->MCLK_HSDIV & MCLK_HSDIV_DIV_Msk) >> MCLK_HSDIV_DIV_Pos);
		src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;
		src->target_clk_addr = GCLK_BASE_ADDRESS;
		state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
		src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >> MCLK_CPUDIV_DIV_Pos);
		src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;
		src->target_clk_addr = GCLK_BASE_ADDRESS;
		state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
			if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
				if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_AHB_QSPI_2X) {
					/* derived from HS clock */
					src->div *= ((regs->MCLK_HSDIV & MCLK_HSDIV_DIV_Msk) >>
						     MCLK_HSDIV_DIV_Pos);
				} else {
					/* derived from CPU clock */
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);
				}
				src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;
				src->target_clk_addr = GCLK_BASE_ADDRESS;
				state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
				break;
			} else {
				/* Nothing to do */
			}
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in AHB */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);
					src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;
					src->target_clk_addr = GCLK_BASE_ADDRESS;
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
					break;
				} else {
					/* Nothing to do */
				}
			}
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBA */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);
					src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;
					src->target_clk_addr = GCLK_BASE_ADDRESS;
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
					break;
				} else {
					/* Nothing to do */
				}
			}
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in APBB */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);
					src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;
					src->target_clk_addr = GCLK_BASE_ADDRESS;
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
					break;
				} else {
					/* Nothing to do */
				}
			}
		}

		if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
			/* No match in AHC */
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
					src->div *= ((regs->MCLK_CPUDIV & MCLK_CPUDIV_DIV_Msk) >>
						     MCLK_CPUDIV_DIV_Pos);
					src->target_clk = CLOCK_CONTROL_MCHP_V1_GCLK_GEN0;
					src->target_clk_addr = GCLK_BASE_ADDRESS;
					state = CLOCK_CONTROL_MCHP_STATE_NOT_SOURCE;
					break;
				} else {
					/* Nothing to do */
				}
			}
		}
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_mclk_set_rate(mclk_registers_t *regs, uint32_t clk,
		       struct clock_control_mchp_mclk_rate_t *clk_rate)
{
	enum clock_control_mchp_state_t state;

	if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	} else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
		regs->MCLK_CPUDIV = MCLK_CPUDIV_DIV(clk_rate->cpu_div) & MCLK_CPUDIV_Msk;
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		/* other clocks does not have rate setting */
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
	}
	return state;
}

static inline enum clock_control_mchp_state_t
hal_mchp_mclk_configure(mclk_registers_t *regs, uint32_t clk,
			struct clock_control_mchp_mclk_configuration_t *configuration)
{
	enum clock_control_mchp_state_t state;
	uint32_t index;

	if (clk == 0) {
		/* clk is not given */
		regs->MCLK_CPUDIV = MCLK_CPUDIV_DIV(configuration->cpu_div) & MCLK_CPUDIV_Msk;
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
			regs->MCLK_AHBMASK =
				(regs->MCLK_AHBMASK & ~(hal_mchp_msk_map_mclk_ahb[index].msk)) |
				(configuration->ahb[index]);
		}
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
			regs->MCLK_APBAMASK =
				(regs->MCLK_APBAMASK & ~(hal_mchp_msk_map_mclk_apba[index].msk)) |
				(configuration->apba[index]);
		}
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
			regs->MCLK_APBBMASK =
				(regs->MCLK_APBBMASK & ~(hal_mchp_msk_map_mclk_apbb[index].msk)) |
				(configuration->apbb[index]);
		}
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
			regs->MCLK_APBCMASK =
				(regs->MCLK_APBCMASK & ~(hal_mchp_msk_map_mclk_apbc[index].msk)) |
				(configuration->apbc[index]);
		}
		for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
			regs->MCLK_APBDMASK =
				(regs->MCLK_APBDMASK & ~(hal_mchp_msk_map_mclk_apbd[index].msk)) |
				(configuration->apbd[index]);
		}
		state = CLOCK_CONTROL_MCHP_STATE_OK;
	} else {
		state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_HS) {
			state = CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT;
		} else if (clk == CLOCK_CONTROL_MCHP_V1_MCLK_CPU) {
			regs->MCLK_CPUDIV =
				MCLK_CPUDIV_DIV(configuration->cpu_div) & MCLK_CPUDIV_Msk;
			state = CLOCK_CONTROL_MCHP_STATE_OK;
		} else {
			for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_AHB_SIZE; index++) {
				if (clk == hal_mchp_msk_map_mclk_ahb[index].clk) {
					regs->MCLK_AHBMASK =
						(regs->MCLK_AHBMASK &
						 ~(hal_mchp_msk_map_mclk_ahb[index].msk)) |
						(configuration->ahb[index]);
					state = CLOCK_CONTROL_MCHP_STATE_OK;
					break;
				}
			}

			if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
				/* No match in AHB */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBA_SIZE; index++) {
					if (clk == hal_mchp_msk_map_mclk_apba[index].clk) {
						regs->MCLK_APBAMASK =
							(regs->MCLK_APBAMASK &
							 ~(hal_mchp_msk_map_mclk_apba[index].msk)) |
							(configuration->apba[index]);
						state = CLOCK_CONTROL_MCHP_STATE_OK;
						break;
					}
				}
			}

			if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
				/* No match in APBA */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBB_SIZE; index++) {
					if (clk == hal_mchp_msk_map_mclk_apbb[index].clk) {
						regs->MCLK_APBBMASK =
							(regs->MCLK_APBBMASK &
							 ~(hal_mchp_msk_map_mclk_apbb[index].msk)) |
							(configuration->apbb[index]);
						state = CLOCK_CONTROL_MCHP_STATE_OK;
						break;
					}
				}
			}

			if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
				/* No match in APBB */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBC_SIZE; index++) {
					if (clk == hal_mchp_msk_map_mclk_apbc[index].clk) {
						regs->MCLK_APBCMASK =
							(regs->MCLK_APBCMASK &
							 ~(hal_mchp_msk_map_mclk_apbc[index].msk)) |
							(configuration->apbc[index]);
						state = CLOCK_CONTROL_MCHP_STATE_OK;
						break;
					}
				}
			}

			if (state == CLOCK_CONTROL_MCHP_STATE_NO_SUPPORT) {
				/* No match in AHC */
				for (index = 0; index < HAL_MCHP_MSK_MAP_MCLK_APBD_SIZE; index++) {
					if (clk == hal_mchp_msk_map_mclk_apbd[index].clk) {
						regs->MCLK_APBDMASK =
							(regs->MCLK_APBDMASK &
							 ~(hal_mchp_msk_map_mclk_apbd[index].msk)) |
							(configuration->apbd[index]);
						state = CLOCK_CONTROL_MCHP_STATE_OK;
						break;
					}
				}
			}
		}
	}
	return state;
}

#endif /* PERIPHERALS_MCLK_U2408_HAL_MCHP_MCLK_H_ */
