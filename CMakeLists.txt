# Copyright (c) 2025 Microchip Technology Inc.
#
# SPDX-License-Identifier: Apache-2.0
#

add_subdirectory(packs)
zephyr_include_directories(include)

add_subdirectory_ifdef(CONFIG_HAS_MEC_HAL mec)
add_subdirectory_ifdef(CONFIG_HAS_MPFS_HAL mpfs)
add_subdirectory_ifdef(CONFIG_HAS_MEC5_HAL mec5)
if(CONFIG_MCHP_IEEE802154_PHY_DRIVER OR CONFIG_CRYPTO_MCHP_G2 OR CONFIG_ENTROPY_MCHP_TRNG_G2)
  add_subdirectory(drivers)
endif()
