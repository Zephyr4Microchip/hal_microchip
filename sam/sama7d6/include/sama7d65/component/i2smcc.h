/*
 * Component description for I2SMCC
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*  file generated from device description file (ATDF) version 2025-05-27T09:30:00Z  */
#ifndef _SAMA7D_I2SMCC_COMPONENT_H_
#define _SAMA7D_I2SMCC_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR I2SMCC                     */
/* ************************************************************************** */

/* -------- I2SMCC_RHLxR : (I2SMCC Offset: 0x00) ( R/ 32) Receiver Holding Left x Register -------- */
#define I2SMCC_RHLxR_RESETVALUE               _UINT32_(0x00)                                       /*  (I2SMCC_RHLxR) Receiver Holding Left x Register  Reset Value */

#define I2SMCC_RHLxR_RHL_Pos                  _UINT32_(0)                                          /* (I2SMCC_RHLxR) Receiver Holding Left Position */
#define I2SMCC_RHLxR_RHL_Msk                  (_UINT32_(0xFFFFFFFF) << I2SMCC_RHLxR_RHL_Pos)       /* (I2SMCC_RHLxR) Receiver Holding Left Mask */
#define I2SMCC_RHLxR_RHL(value)               (I2SMCC_RHLxR_RHL_Msk & (_UINT32_(value) << I2SMCC_RHLxR_RHL_Pos)) /* Assignment of value for RHL in the I2SMCC_RHLxR register */
#define I2SMCC_RHLxR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_RHLxR) Register Mask  */


/* -------- I2SMCC_RHRxR : (I2SMCC Offset: 0x04) ( R/ 32) Receiver Holding Right x Register -------- */
#define I2SMCC_RHRxR_RESETVALUE               _UINT32_(0x00)                                       /*  (I2SMCC_RHRxR) Receiver Holding Right x Register  Reset Value */

#define I2SMCC_RHRxR_RHR_Pos                  _UINT32_(0)                                          /* (I2SMCC_RHRxR) Receiver Holding Right Position */
#define I2SMCC_RHRxR_RHR_Msk                  (_UINT32_(0xFFFFFFFF) << I2SMCC_RHRxR_RHR_Pos)       /* (I2SMCC_RHRxR) Receiver Holding Right Mask */
#define I2SMCC_RHRxR_RHR(value)               (I2SMCC_RHRxR_RHR_Msk & (_UINT32_(value) << I2SMCC_RHRxR_RHR_Pos)) /* Assignment of value for RHR in the I2SMCC_RHRxR register */
#define I2SMCC_RHRxR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_RHRxR) Register Mask  */


/* -------- I2SMCC_THLxR : (I2SMCC Offset: 0x00) ( /W 32) Transmitter Holding Left x Register -------- */
#define I2SMCC_THLxR_THL_Pos                  _UINT32_(0)                                          /* (I2SMCC_THLxR) Transmitter Holding Left Position */
#define I2SMCC_THLxR_THL_Msk                  (_UINT32_(0xFFFFFFFF) << I2SMCC_THLxR_THL_Pos)       /* (I2SMCC_THLxR) Transmitter Holding Left Mask */
#define I2SMCC_THLxR_THL(value)               (I2SMCC_THLxR_THL_Msk & (_UINT32_(value) << I2SMCC_THLxR_THL_Pos)) /* Assignment of value for THL in the I2SMCC_THLxR register */
#define I2SMCC_THLxR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_THLxR) Register Mask  */


/* -------- I2SMCC_THRxR : (I2SMCC Offset: 0x04) ( /W 32) Transmitter Holding Right x Register -------- */
#define I2SMCC_THRxR_THR_Pos                  _UINT32_(0)                                          /* (I2SMCC_THRxR) Transmitter Holding Right Position */
#define I2SMCC_THRxR_THR_Msk                  (_UINT32_(0xFFFFFFFF) << I2SMCC_THRxR_THR_Pos)       /* (I2SMCC_THRxR) Transmitter Holding Right Mask */
#define I2SMCC_THRxR_THR(value)               (I2SMCC_THRxR_THR_Msk & (_UINT32_(value) << I2SMCC_THRxR_THR_Pos)) /* Assignment of value for THR in the I2SMCC_THRxR register */
#define I2SMCC_THRxR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_THRxR) Register Mask  */


/* -------- I2SMCC_CR : (I2SMCC Offset: 0x00) ( /W 32) Control Register -------- */
#define I2SMCC_CR_RXEN_Pos                    _UINT32_(0)                                          /* (I2SMCC_CR) Receiver Enable Position */
#define I2SMCC_CR_RXEN_Msk                    (_UINT32_(0x1) << I2SMCC_CR_RXEN_Pos)                /* (I2SMCC_CR) Receiver Enable Mask */
#define I2SMCC_CR_RXEN(value)                 (I2SMCC_CR_RXEN_Msk & (_UINT32_(value) << I2SMCC_CR_RXEN_Pos)) /* Assignment of value for RXEN in the I2SMCC_CR register */
#define   I2SMCC_CR_RXEN_0_Val                _UINT32_(0x0)                                        /* (I2SMCC_CR) No effect.  */
#define   I2SMCC_CR_RXEN_1_Val                _UINT32_(0x1)                                        /* (I2SMCC_CR) Enables the I2SMCC receiver, if RXDIS is not '1'. Bit I2SMCC_SR.RXEN is set when the receiver is activated.  */
#define I2SMCC_CR_RXEN_0                      (I2SMCC_CR_RXEN_0_Val << I2SMCC_CR_RXEN_Pos)         /* (I2SMCC_CR) No effect. Position */
#define I2SMCC_CR_RXEN_1                      (I2SMCC_CR_RXEN_1_Val << I2SMCC_CR_RXEN_Pos)         /* (I2SMCC_CR) Enables the I2SMCC receiver, if RXDIS is not '1'. Bit I2SMCC_SR.RXEN is set when the receiver is activated. Position */
#define I2SMCC_CR_RXDIS_Pos                   _UINT32_(1)                                          /* (I2SMCC_CR) Receiver Disable Position */
#define I2SMCC_CR_RXDIS_Msk                   (_UINT32_(0x1) << I2SMCC_CR_RXDIS_Pos)               /* (I2SMCC_CR) Receiver Disable Mask */
#define I2SMCC_CR_RXDIS(value)                (I2SMCC_CR_RXDIS_Msk & (_UINT32_(value) << I2SMCC_CR_RXDIS_Pos)) /* Assignment of value for RXDIS in the I2SMCC_CR register */
#define   I2SMCC_CR_RXDIS_0_Val               _UINT32_(0x0)                                        /* (I2SMCC_CR) No effect.  */
#define   I2SMCC_CR_RXDIS_1_Val               _UINT32_(0x1)                                        /* (I2SMCC_CR) Disables the I2SMCC receiver. Bit I2SMCC_SR.RXEN is cleared when the receiver is stopped.  */
#define I2SMCC_CR_RXDIS_0                     (I2SMCC_CR_RXDIS_0_Val << I2SMCC_CR_RXDIS_Pos)       /* (I2SMCC_CR) No effect. Position */
#define I2SMCC_CR_RXDIS_1                     (I2SMCC_CR_RXDIS_1_Val << I2SMCC_CR_RXDIS_Pos)       /* (I2SMCC_CR) Disables the I2SMCC receiver. Bit I2SMCC_SR.RXEN is cleared when the receiver is stopped. Position */
#define I2SMCC_CR_CKEN_Pos                    _UINT32_(2)                                          /* (I2SMCC_CR) Clocks Enable Position */
#define I2SMCC_CR_CKEN_Msk                    (_UINT32_(0x1) << I2SMCC_CR_CKEN_Pos)                /* (I2SMCC_CR) Clocks Enable Mask */
#define I2SMCC_CR_CKEN(value)                 (I2SMCC_CR_CKEN_Msk & (_UINT32_(value) << I2SMCC_CR_CKEN_Pos)) /* Assignment of value for CKEN in the I2SMCC_CR register */
#define   I2SMCC_CR_CKEN_0_Val                _UINT32_(0x0)                                        /* (I2SMCC_CR) No effect.  */
#define   I2SMCC_CR_CKEN_1_Val                _UINT32_(0x1)                                        /* (I2SMCC_CR) Enables the I2SMCC clock generation, if CKDIS is not '1'.  */
#define I2SMCC_CR_CKEN_0                      (I2SMCC_CR_CKEN_0_Val << I2SMCC_CR_CKEN_Pos)         /* (I2SMCC_CR) No effect. Position */
#define I2SMCC_CR_CKEN_1                      (I2SMCC_CR_CKEN_1_Val << I2SMCC_CR_CKEN_Pos)         /* (I2SMCC_CR) Enables the I2SMCC clock generation, if CKDIS is not '1'. Position */
#define I2SMCC_CR_CKDIS_Pos                   _UINT32_(3)                                          /* (I2SMCC_CR) Clocks Disable Position */
#define I2SMCC_CR_CKDIS_Msk                   (_UINT32_(0x1) << I2SMCC_CR_CKDIS_Pos)               /* (I2SMCC_CR) Clocks Disable Mask */
#define I2SMCC_CR_CKDIS(value)                (I2SMCC_CR_CKDIS_Msk & (_UINT32_(value) << I2SMCC_CR_CKDIS_Pos)) /* Assignment of value for CKDIS in the I2SMCC_CR register */
#define   I2SMCC_CR_CKDIS_0_Val               _UINT32_(0x0)                                        /* (I2SMCC_CR) No effect.  */
#define   I2SMCC_CR_CKDIS_1_Val               _UINT32_(0x1)                                        /* (I2SMCC_CR) Disables the I2SMCC clock generation.  */
#define I2SMCC_CR_CKDIS_0                     (I2SMCC_CR_CKDIS_0_Val << I2SMCC_CR_CKDIS_Pos)       /* (I2SMCC_CR) No effect. Position */
#define I2SMCC_CR_CKDIS_1                     (I2SMCC_CR_CKDIS_1_Val << I2SMCC_CR_CKDIS_Pos)       /* (I2SMCC_CR) Disables the I2SMCC clock generation. Position */
#define I2SMCC_CR_TXEN_Pos                    _UINT32_(4)                                          /* (I2SMCC_CR) Transmitter Enable Position */
#define I2SMCC_CR_TXEN_Msk                    (_UINT32_(0x1) << I2SMCC_CR_TXEN_Pos)                /* (I2SMCC_CR) Transmitter Enable Mask */
#define I2SMCC_CR_TXEN(value)                 (I2SMCC_CR_TXEN_Msk & (_UINT32_(value) << I2SMCC_CR_TXEN_Pos)) /* Assignment of value for TXEN in the I2SMCC_CR register */
#define   I2SMCC_CR_TXEN_0_Val                _UINT32_(0x0)                                        /* (I2SMCC_CR) No effect.  */
#define   I2SMCC_CR_TXEN_1_Val                _UINT32_(0x1)                                        /* (I2SMCC_CR) Enables the I2SMCC transmitter, if TXDIS is not '1'. Bit I2SMCC_SR.TXEN is set when the Transmitter is started.  */
#define I2SMCC_CR_TXEN_0                      (I2SMCC_CR_TXEN_0_Val << I2SMCC_CR_TXEN_Pos)         /* (I2SMCC_CR) No effect. Position */
#define I2SMCC_CR_TXEN_1                      (I2SMCC_CR_TXEN_1_Val << I2SMCC_CR_TXEN_Pos)         /* (I2SMCC_CR) Enables the I2SMCC transmitter, if TXDIS is not '1'. Bit I2SMCC_SR.TXEN is set when the Transmitter is started. Position */
#define I2SMCC_CR_TXDIS_Pos                   _UINT32_(5)                                          /* (I2SMCC_CR) Transmitter Disable Position */
#define I2SMCC_CR_TXDIS_Msk                   (_UINT32_(0x1) << I2SMCC_CR_TXDIS_Pos)               /* (I2SMCC_CR) Transmitter Disable Mask */
#define I2SMCC_CR_TXDIS(value)                (I2SMCC_CR_TXDIS_Msk & (_UINT32_(value) << I2SMCC_CR_TXDIS_Pos)) /* Assignment of value for TXDIS in the I2SMCC_CR register */
#define   I2SMCC_CR_TXDIS_0_Val               _UINT32_(0x0)                                        /* (I2SMCC_CR) No effect.  */
#define   I2SMCC_CR_TXDIS_1_Val               _UINT32_(0x1)                                        /* (I2SMCC_CR) Disables the I2SMCC transmitter. Bit I2SMCC_SR.TXEN is cleared when the Transmitter is stopped.  */
#define I2SMCC_CR_TXDIS_0                     (I2SMCC_CR_TXDIS_0_Val << I2SMCC_CR_TXDIS_Pos)       /* (I2SMCC_CR) No effect. Position */
#define I2SMCC_CR_TXDIS_1                     (I2SMCC_CR_TXDIS_1_Val << I2SMCC_CR_TXDIS_Pos)       /* (I2SMCC_CR) Disables the I2SMCC transmitter. Bit I2SMCC_SR.TXEN is cleared when the Transmitter is stopped. Position */
#define I2SMCC_CR_SWRST_Pos                   _UINT32_(7)                                          /* (I2SMCC_CR) Software Reset Position */
#define I2SMCC_CR_SWRST_Msk                   (_UINT32_(0x1) << I2SMCC_CR_SWRST_Pos)               /* (I2SMCC_CR) Software Reset Mask */
#define I2SMCC_CR_SWRST(value)                (I2SMCC_CR_SWRST_Msk & (_UINT32_(value) << I2SMCC_CR_SWRST_Pos)) /* Assignment of value for SWRST in the I2SMCC_CR register */
#define   I2SMCC_CR_SWRST_0_Val               _UINT32_(0x0)                                        /* (I2SMCC_CR) No effect.  */
#define   I2SMCC_CR_SWRST_1_Val               _UINT32_(0x1)                                        /* (I2SMCC_CR) Resets all the registers in the I2SMCC. The I2SMCC is disabled after the reset.  */
#define I2SMCC_CR_SWRST_0                     (I2SMCC_CR_SWRST_0_Val << I2SMCC_CR_SWRST_Pos)       /* (I2SMCC_CR) No effect. Position */
#define I2SMCC_CR_SWRST_1                     (I2SMCC_CR_SWRST_1_Val << I2SMCC_CR_SWRST_Pos)       /* (I2SMCC_CR) Resets all the registers in the I2SMCC. The I2SMCC is disabled after the reset. Position */
#define I2SMCC_CR_Msk                         _UINT32_(0x000000BF)                                 /* (I2SMCC_CR) Register Mask  */


/* -------- I2SMCC_MRA : (I2SMCC Offset: 0x04) (R/W 32) Mode Register A -------- */
#define I2SMCC_MRA_RESETVALUE                 _UINT32_(0x00)                                       /*  (I2SMCC_MRA) Mode Register A  Reset Value */

#define I2SMCC_MRA_MODE_Pos                   _UINT32_(0)                                          /* (I2SMCC_MRA) Inter-IC Sound Multi Channel Controller Mode Position */
#define I2SMCC_MRA_MODE_Msk                   (_UINT32_(0x1) << I2SMCC_MRA_MODE_Pos)               /* (I2SMCC_MRA) Inter-IC Sound Multi Channel Controller Mode Mask */
#define I2SMCC_MRA_MODE(value)                (I2SMCC_MRA_MODE_Msk & (_UINT32_(value) << I2SMCC_MRA_MODE_Pos)) /* Assignment of value for MODE in the I2SMCC_MRA register */
#define   I2SMCC_MRA_MODE_SLAVE_Val           _UINT32_(0x0)                                        /* (I2SMCC_MRA) Client mode. I2SMCC_CK and I2SMCC_WS pin inputs used as bit clock and word select/frame synchronization.  */
#define   I2SMCC_MRA_MODE_MASTER_Val          _UINT32_(0x1)                                        /* (I2SMCC_MRA) Host mode. Bit clock and word select/frame synchronization generated by I2SMCC from Peripheral Clock or GCLK if I2SMCC_MCK/WS/CK rates must be independent of system bus clock (See I2SMCC_MR.SRCCLK) and output to I2SMCC_CK and I2SMCC_WS pins. MCK is output as host clock on I2SMCC_MCK if I2SMCC_MRA.IMCKMODE is set.  */
#define I2SMCC_MRA_MODE_SLAVE                 (I2SMCC_MRA_MODE_SLAVE_Val << I2SMCC_MRA_MODE_Pos)   /* (I2SMCC_MRA) Client mode. I2SMCC_CK and I2SMCC_WS pin inputs used as bit clock and word select/frame synchronization. Position */
#define I2SMCC_MRA_MODE_MASTER                (I2SMCC_MRA_MODE_MASTER_Val << I2SMCC_MRA_MODE_Pos)  /* (I2SMCC_MRA) Host mode. Bit clock and word select/frame synchronization generated by I2SMCC from Peripheral Clock or GCLK if I2SMCC_MCK/WS/CK rates must be independent of system bus clock (See I2SMCC_MR.SRCCLK) and output to I2SMCC_CK and I2SMCC_WS pins. MCK is output as host clock on I2SMCC_MCK if I2SMCC_MRA.IMCKMODE is set. Position */
#define I2SMCC_MRA_DATALENGTH_Pos             _UINT32_(1)                                          /* (I2SMCC_MRA) Data Word Length Position */
#define I2SMCC_MRA_DATALENGTH_Msk             (_UINT32_(0x7) << I2SMCC_MRA_DATALENGTH_Pos)         /* (I2SMCC_MRA) Data Word Length Mask */
#define I2SMCC_MRA_DATALENGTH(value)          (I2SMCC_MRA_DATALENGTH_Msk & (_UINT32_(value) << I2SMCC_MRA_DATALENGTH_Pos)) /* Assignment of value for DATALENGTH in the I2SMCC_MRA register */
#define   I2SMCC_MRA_DATALENGTH_32_BITS_Val   _UINT32_(0x0)                                        /* (I2SMCC_MRA) Data length is set to 32 bits.  */
#define   I2SMCC_MRA_DATALENGTH_24_BITS_Val   _UINT32_(0x1)                                        /* (I2SMCC_MRA) Data length is set to 24 bits.  */
#define   I2SMCC_MRA_DATALENGTH_20_BITS_Val   _UINT32_(0x2)                                        /* (I2SMCC_MRA) Data length is set to 20 bits.  */
#define   I2SMCC_MRA_DATALENGTH_18_BITS_Val   _UINT32_(0x3)                                        /* (I2SMCC_MRA) Data length is set to 18 bits.  */
#define   I2SMCC_MRA_DATALENGTH_16_BITS_Val   _UINT32_(0x4)                                        /* (I2SMCC_MRA) Data length is set to 16 bits.  */
#define   I2SMCC_MRA_DATALENGTH_16_BITS_COMPACT_Val _UINT32_(0x5)                                        /* (I2SMCC_MRA) Data length is set to 16-bit compact stereo. Left sample in bits [15:0] and right sample in bits [31:16] of same word.  */
#define   I2SMCC_MRA_DATALENGTH_8_BITS_Val    _UINT32_(0x6)                                        /* (I2SMCC_MRA) Data length is set to 8 bits.  */
#define   I2SMCC_MRA_DATALENGTH_8_BITS_COMPACT_Val _UINT32_(0x7)                                        /* (I2SMCC_MRA) Data length is set to 8-bit compact stereo. Left sample in bits [7:0] and right sample in bits [15:8] of the same word.  */
#define I2SMCC_MRA_DATALENGTH_32_BITS         (I2SMCC_MRA_DATALENGTH_32_BITS_Val << I2SMCC_MRA_DATALENGTH_Pos) /* (I2SMCC_MRA) Data length is set to 32 bits. Position */
#define I2SMCC_MRA_DATALENGTH_24_BITS         (I2SMCC_MRA_DATALENGTH_24_BITS_Val << I2SMCC_MRA_DATALENGTH_Pos) /* (I2SMCC_MRA) Data length is set to 24 bits. Position */
#define I2SMCC_MRA_DATALENGTH_20_BITS         (I2SMCC_MRA_DATALENGTH_20_BITS_Val << I2SMCC_MRA_DATALENGTH_Pos) /* (I2SMCC_MRA) Data length is set to 20 bits. Position */
#define I2SMCC_MRA_DATALENGTH_18_BITS         (I2SMCC_MRA_DATALENGTH_18_BITS_Val << I2SMCC_MRA_DATALENGTH_Pos) /* (I2SMCC_MRA) Data length is set to 18 bits. Position */
#define I2SMCC_MRA_DATALENGTH_16_BITS         (I2SMCC_MRA_DATALENGTH_16_BITS_Val << I2SMCC_MRA_DATALENGTH_Pos) /* (I2SMCC_MRA) Data length is set to 16 bits. Position */
#define I2SMCC_MRA_DATALENGTH_16_BITS_COMPACT (I2SMCC_MRA_DATALENGTH_16_BITS_COMPACT_Val << I2SMCC_MRA_DATALENGTH_Pos) /* (I2SMCC_MRA) Data length is set to 16-bit compact stereo. Left sample in bits [15:0] and right sample in bits [31:16] of same word. Position */
#define I2SMCC_MRA_DATALENGTH_8_BITS          (I2SMCC_MRA_DATALENGTH_8_BITS_Val << I2SMCC_MRA_DATALENGTH_Pos) /* (I2SMCC_MRA) Data length is set to 8 bits. Position */
#define I2SMCC_MRA_DATALENGTH_8_BITS_COMPACT  (I2SMCC_MRA_DATALENGTH_8_BITS_COMPACT_Val << I2SMCC_MRA_DATALENGTH_Pos) /* (I2SMCC_MRA) Data length is set to 8-bit compact stereo. Left sample in bits [7:0] and right sample in bits [15:8] of the same word. Position */
#define I2SMCC_MRA_WIRECFG_Pos                _UINT32_(4)                                          /* (I2SMCC_MRA) Wire Configuration Position */
#define I2SMCC_MRA_WIRECFG_Msk                (_UINT32_(0x3) << I2SMCC_MRA_WIRECFG_Pos)            /* (I2SMCC_MRA) Wire Configuration Mask */
#define I2SMCC_MRA_WIRECFG(value)             (I2SMCC_MRA_WIRECFG_Msk & (_UINT32_(value) << I2SMCC_MRA_WIRECFG_Pos)) /* Assignment of value for WIRECFG in the I2SMCC_MRA register */
#define   I2SMCC_MRA_WIRECFG_I2S_1_TDM_0_Val  _UINT32_(0x0)                                        /* (I2SMCC_MRA) In I2S and LJ formats, I2SMCC_DIN0 and I2SMCC_DOUT0 are used to transmit and receive I2S frames. In TDM and TDMLJ formats, I2SMCC_DIN0 and I2SMCC_DOUT0 are used to transmit and receive TDM frames.  */
#define   I2SMCC_MRA_WIRECFG_I2S_2_TDM_1_Val  _UINT32_(0x1)                                        /* (I2SMCC_MRA) In I2S and LJ formats, I2SMCC_DIN[1:0] and I2SMCC_DOUT[1:0] are used to transmit and receive 2 I2S frames. In TDM and TDMLJ formats, I2SMCC_DIN1 and I2SMCC_DOUT1 are used to transmit and receive TDM frames.  */
#define   I2SMCC_MRA_WIRECFG_I2S_4_TDM_2_Val  _UINT32_(0x2)                                        /* (I2SMCC_MRA) In I2S and LJ formats, I2SMCC_DIN[3:0] and I2SMCC_DOUT[3:0] are used to transmit and receive 4 I2S frames. In TDM and TDMLJ formats, I2SMCC_DIN2 and I2SMCC_DOUT2 are used to transmit and receive TDM frames.  */
#define   I2SMCC_MRA_WIRECFG_TDM_3_Val        _UINT32_(0x3)                                        /* (I2SMCC_MRA) In I2S and LJ formats, reserved for future use, do not use. In TDM and TDMLJ formats, I2SMCC_DIN3 and I2SMCC_DOUT3 are used to transmit and receive TDM frames.  */
#define I2SMCC_MRA_WIRECFG_I2S_1_TDM_0        (I2SMCC_MRA_WIRECFG_I2S_1_TDM_0_Val << I2SMCC_MRA_WIRECFG_Pos) /* (I2SMCC_MRA) In I2S and LJ formats, I2SMCC_DIN0 and I2SMCC_DOUT0 are used to transmit and receive I2S frames. In TDM and TDMLJ formats, I2SMCC_DIN0 and I2SMCC_DOUT0 are used to transmit and receive TDM frames. Position */
#define I2SMCC_MRA_WIRECFG_I2S_2_TDM_1        (I2SMCC_MRA_WIRECFG_I2S_2_TDM_1_Val << I2SMCC_MRA_WIRECFG_Pos) /* (I2SMCC_MRA) In I2S and LJ formats, I2SMCC_DIN[1:0] and I2SMCC_DOUT[1:0] are used to transmit and receive 2 I2S frames. In TDM and TDMLJ formats, I2SMCC_DIN1 and I2SMCC_DOUT1 are used to transmit and receive TDM frames. Position */
#define I2SMCC_MRA_WIRECFG_I2S_4_TDM_2        (I2SMCC_MRA_WIRECFG_I2S_4_TDM_2_Val << I2SMCC_MRA_WIRECFG_Pos) /* (I2SMCC_MRA) In I2S and LJ formats, I2SMCC_DIN[3:0] and I2SMCC_DOUT[3:0] are used to transmit and receive 4 I2S frames. In TDM and TDMLJ formats, I2SMCC_DIN2 and I2SMCC_DOUT2 are used to transmit and receive TDM frames. Position */
#define I2SMCC_MRA_WIRECFG_TDM_3              (I2SMCC_MRA_WIRECFG_TDM_3_Val << I2SMCC_MRA_WIRECFG_Pos) /* (I2SMCC_MRA) In I2S and LJ formats, reserved for future use, do not use. In TDM and TDMLJ formats, I2SMCC_DIN3 and I2SMCC_DOUT3 are used to transmit and receive TDM frames. Position */
#define I2SMCC_MRA_FORMAT_Pos                 _UINT32_(6)                                          /* (I2SMCC_MRA) Data Format Position */
#define I2SMCC_MRA_FORMAT_Msk                 (_UINT32_(0x3) << I2SMCC_MRA_FORMAT_Pos)             /* (I2SMCC_MRA) Data Format Mask */
#define I2SMCC_MRA_FORMAT(value)              (I2SMCC_MRA_FORMAT_Msk & (_UINT32_(value) << I2SMCC_MRA_FORMAT_Pos)) /* Assignment of value for FORMAT in the I2SMCC_MRA register */
#define   I2SMCC_MRA_FORMAT_I2S_Val           _UINT32_(0x0)                                        /* (I2SMCC_MRA) I2S format, stereo with I2SMCC_WS low for left channel, and MSB of sample starting one I2SMCC_CK period after I2SMCC_WS edge.  */
#define   I2SMCC_MRA_FORMAT_LJ_Val            _UINT32_(0x1)                                        /* (I2SMCC_MRA) Left-justified format, stereo with I2SMCC_WS high for left channel, and MSB of sample starting on I2SMCC_WS edge.  */
#define   I2SMCC_MRA_FORMAT_TDM_Val           _UINT32_(0x2)                                        /* (I2SMCC_MRA) TDM format, with (NBCHAN + 1) channels, I2SMCC_WS high at beginning of first channel, and MSB of sample starting one I2SMCC_CK period after I2SMCC_WS edge.  */
#define   I2SMCC_MRA_FORMAT_TDMLJ_Val         _UINT32_(0x3)                                        /* (I2SMCC_MRA) TDM format, left-justified, with (NBCHAN + 1) channels, I2SMCC_WS high at beginning of first channel, and MSB of sample starting on I2SMCC_WS edge.  */
#define I2SMCC_MRA_FORMAT_I2S                 (I2SMCC_MRA_FORMAT_I2S_Val << I2SMCC_MRA_FORMAT_Pos) /* (I2SMCC_MRA) I2S format, stereo with I2SMCC_WS low for left channel, and MSB of sample starting one I2SMCC_CK period after I2SMCC_WS edge. Position */
#define I2SMCC_MRA_FORMAT_LJ                  (I2SMCC_MRA_FORMAT_LJ_Val << I2SMCC_MRA_FORMAT_Pos)  /* (I2SMCC_MRA) Left-justified format, stereo with I2SMCC_WS high for left channel, and MSB of sample starting on I2SMCC_WS edge. Position */
#define I2SMCC_MRA_FORMAT_TDM                 (I2SMCC_MRA_FORMAT_TDM_Val << I2SMCC_MRA_FORMAT_Pos) /* (I2SMCC_MRA) TDM format, with (NBCHAN + 1) channels, I2SMCC_WS high at beginning of first channel, and MSB of sample starting one I2SMCC_CK period after I2SMCC_WS edge. Position */
#define I2SMCC_MRA_FORMAT_TDMLJ               (I2SMCC_MRA_FORMAT_TDMLJ_Val << I2SMCC_MRA_FORMAT_Pos) /* (I2SMCC_MRA) TDM format, left-justified, with (NBCHAN + 1) channels, I2SMCC_WS high at beginning of first channel, and MSB of sample starting on I2SMCC_WS edge. Position */
#define I2SMCC_MRA_RXMONO_Pos                 _UINT32_(8)                                          /* (I2SMCC_MRA) Receive Mono Position */
#define I2SMCC_MRA_RXMONO_Msk                 (_UINT32_(0x1) << I2SMCC_MRA_RXMONO_Pos)             /* (I2SMCC_MRA) Receive Mono Mask */
#define I2SMCC_MRA_RXMONO(value)              (I2SMCC_MRA_RXMONO_Msk & (_UINT32_(value) << I2SMCC_MRA_RXMONO_Pos)) /* Assignment of value for RXMONO in the I2SMCC_MRA register */
#define   I2SMCC_MRA_RXMONO_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRA) Stereo.  */
#define   I2SMCC_MRA_RXMONO_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRA) Mono, with left audio samples duplicated to right audio channel by the I2SMCC.  */
#define I2SMCC_MRA_RXMONO_0                   (I2SMCC_MRA_RXMONO_0_Val << I2SMCC_MRA_RXMONO_Pos)   /* (I2SMCC_MRA) Stereo. Position */
#define I2SMCC_MRA_RXMONO_1                   (I2SMCC_MRA_RXMONO_1_Val << I2SMCC_MRA_RXMONO_Pos)   /* (I2SMCC_MRA) Mono, with left audio samples duplicated to right audio channel by the I2SMCC. Position */
#define I2SMCC_MRA_RXLOOP_Pos                 _UINT32_(9)                                          /* (I2SMCC_MRA) Loop-back Test Mode Position */
#define I2SMCC_MRA_RXLOOP_Msk                 (_UINT32_(0x1) << I2SMCC_MRA_RXLOOP_Pos)             /* (I2SMCC_MRA) Loop-back Test Mode Mask */
#define I2SMCC_MRA_RXLOOP(value)              (I2SMCC_MRA_RXLOOP_Msk & (_UINT32_(value) << I2SMCC_MRA_RXLOOP_Pos)) /* Assignment of value for RXLOOP in the I2SMCC_MRA register */
#define   I2SMCC_MRA_RXLOOP_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRA) Normal mode.  */
#define   I2SMCC_MRA_RXLOOP_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRA) I2SMCC_DOUT outputs of I2SMCC are internally connected to I2SMCC_DIN inputs.  */
#define I2SMCC_MRA_RXLOOP_0                   (I2SMCC_MRA_RXLOOP_0_Val << I2SMCC_MRA_RXLOOP_Pos)   /* (I2SMCC_MRA) Normal mode. Position */
#define I2SMCC_MRA_RXLOOP_1                   (I2SMCC_MRA_RXLOOP_1_Val << I2SMCC_MRA_RXLOOP_Pos)   /* (I2SMCC_MRA) I2SMCC_DOUT outputs of I2SMCC are internally connected to I2SMCC_DIN inputs. Position */
#define I2SMCC_MRA_TXMONO_Pos                 _UINT32_(10)                                         /* (I2SMCC_MRA) Transmit Mono Position */
#define I2SMCC_MRA_TXMONO_Msk                 (_UINT32_(0x1) << I2SMCC_MRA_TXMONO_Pos)             /* (I2SMCC_MRA) Transmit Mono Mask */
#define I2SMCC_MRA_TXMONO(value)              (I2SMCC_MRA_TXMONO_Msk & (_UINT32_(value) << I2SMCC_MRA_TXMONO_Pos)) /* Assignment of value for TXMONO in the I2SMCC_MRA register */
#define   I2SMCC_MRA_TXMONO_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRA) Stereo.  */
#define   I2SMCC_MRA_TXMONO_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRA) Mono, with left audio samples duplicated to right audio channel by the I2SMCC.  */
#define I2SMCC_MRA_TXMONO_0                   (I2SMCC_MRA_TXMONO_0_Val << I2SMCC_MRA_TXMONO_Pos)   /* (I2SMCC_MRA) Stereo. Position */
#define I2SMCC_MRA_TXMONO_1                   (I2SMCC_MRA_TXMONO_1_Val << I2SMCC_MRA_TXMONO_Pos)   /* (I2SMCC_MRA) Mono, with left audio samples duplicated to right audio channel by the I2SMCC. Position */
#define I2SMCC_MRA_TXSAME_Pos                 _UINT32_(11)                                         /* (I2SMCC_MRA) Transmit Data when Underrun Position */
#define I2SMCC_MRA_TXSAME_Msk                 (_UINT32_(0x1) << I2SMCC_MRA_TXSAME_Pos)             /* (I2SMCC_MRA) Transmit Data when Underrun Mask */
#define I2SMCC_MRA_TXSAME(value)              (I2SMCC_MRA_TXSAME_Msk & (_UINT32_(value) << I2SMCC_MRA_TXSAME_Pos)) /* Assignment of value for TXSAME in the I2SMCC_MRA register */
#define   I2SMCC_MRA_TXSAME_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRA) '0' is transmitted when underrun.  */
#define   I2SMCC_MRA_TXSAME_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRA) Previous sample transmitted when underrun.  */
#define I2SMCC_MRA_TXSAME_0                   (I2SMCC_MRA_TXSAME_0_Val << I2SMCC_MRA_TXSAME_Pos)   /* (I2SMCC_MRA) '0' is transmitted when underrun. Position */
#define I2SMCC_MRA_TXSAME_1                   (I2SMCC_MRA_TXSAME_1_Val << I2SMCC_MRA_TXSAME_Pos)   /* (I2SMCC_MRA) Previous sample transmitted when underrun. Position */
#define I2SMCC_MRA_SRCCLK_Pos                 _UINT32_(12)                                         /* (I2SMCC_MRA) Source Clock Selection Position */
#define I2SMCC_MRA_SRCCLK_Msk                 (_UINT32_(0x1) << I2SMCC_MRA_SRCCLK_Pos)             /* (I2SMCC_MRA) Source Clock Selection Mask */
#define I2SMCC_MRA_SRCCLK(value)              (I2SMCC_MRA_SRCCLK_Msk & (_UINT32_(value) << I2SMCC_MRA_SRCCLK_Pos)) /* Assignment of value for SRCCLK in the I2SMCC_MRA register */
#define   I2SMCC_MRA_SRCCLK_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRA) The Peripheral clock is selected as source clock for I2SMCC_MCK/WS/CK pins.  */
#define   I2SMCC_MRA_SRCCLK_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRA) The PMC.GCLKx clock is selected as source clock (I2SMCC_MCK/WS/CK rate can be independent of system bus clock).  */
#define I2SMCC_MRA_SRCCLK_0                   (I2SMCC_MRA_SRCCLK_0_Val << I2SMCC_MRA_SRCCLK_Pos)   /* (I2SMCC_MRA) The Peripheral clock is selected as source clock for I2SMCC_MCK/WS/CK pins. Position */
#define I2SMCC_MRA_SRCCLK_1                   (I2SMCC_MRA_SRCCLK_1_Val << I2SMCC_MRA_SRCCLK_Pos)   /* (I2SMCC_MRA) The PMC.GCLKx clock is selected as source clock (I2SMCC_MCK/WS/CK rate can be independent of system bus clock). Position */
#define I2SMCC_MRA_NBCHAN_Pos                 _UINT32_(13)                                         /* (I2SMCC_MRA) Number of TDM Channels-1 Position */
#define I2SMCC_MRA_NBCHAN_Msk                 (_UINT32_(0x7) << I2SMCC_MRA_NBCHAN_Pos)             /* (I2SMCC_MRA) Number of TDM Channels-1 Mask */
#define I2SMCC_MRA_NBCHAN(value)              (I2SMCC_MRA_NBCHAN_Msk & (_UINT32_(value) << I2SMCC_MRA_NBCHAN_Pos)) /* Assignment of value for NBCHAN in the I2SMCC_MRA register */
#define I2SMCC_MRA_IMCKDIV_Pos                _UINT32_(16)                                         /* (I2SMCC_MRA) Selected Clock to I2SMCC Host Clock Ratio Position */
#define I2SMCC_MRA_IMCKDIV_Msk                (_UINT32_(0x3F) << I2SMCC_MRA_IMCKDIV_Pos)           /* (I2SMCC_MRA) Selected Clock to I2SMCC Host Clock Ratio Mask */
#define I2SMCC_MRA_IMCKDIV(value)             (I2SMCC_MRA_IMCKDIV_Msk & (_UINT32_(value) << I2SMCC_MRA_IMCKDIV_Pos)) /* Assignment of value for IMCKDIV in the I2SMCC_MRA register */
#define I2SMCC_MRA_TDMFS_Pos                  _UINT32_(22)                                         /* (I2SMCC_MRA) TDM Frame Synchronization Position */
#define I2SMCC_MRA_TDMFS_Msk                  (_UINT32_(0x3) << I2SMCC_MRA_TDMFS_Pos)              /* (I2SMCC_MRA) TDM Frame Synchronization Mask */
#define I2SMCC_MRA_TDMFS(value)               (I2SMCC_MRA_TDMFS_Msk & (_UINT32_(value) << I2SMCC_MRA_TDMFS_Pos)) /* Assignment of value for TDMFS in the I2SMCC_MRA register */
#define   I2SMCC_MRA_TDMFS_SLOT_Val           _UINT32_(0x0)                                        /* (I2SMCC_MRA) I2SMCC_WS pulse is high for one time slot at beginning of frame.  */
#define   I2SMCC_MRA_TDMFS_HALF_Val           _UINT32_(0x1)                                        /* (I2SMCC_MRA) I2SMCC_WS pulse is high for half the time slots at beginning of frame.  */
#define   I2SMCC_MRA_TDMFS_BIT_Val            _UINT32_(0x2)                                        /* (I2SMCC_MRA) I2SMCC_WS pulse is high for one bit period at beginning of frame, i.e., one I2SMCC_CK period.  */
#define I2SMCC_MRA_TDMFS_SLOT                 (I2SMCC_MRA_TDMFS_SLOT_Val << I2SMCC_MRA_TDMFS_Pos)  /* (I2SMCC_MRA) I2SMCC_WS pulse is high for one time slot at beginning of frame. Position */
#define I2SMCC_MRA_TDMFS_HALF                 (I2SMCC_MRA_TDMFS_HALF_Val << I2SMCC_MRA_TDMFS_Pos)  /* (I2SMCC_MRA) I2SMCC_WS pulse is high for half the time slots at beginning of frame. Position */
#define I2SMCC_MRA_TDMFS_BIT                  (I2SMCC_MRA_TDMFS_BIT_Val << I2SMCC_MRA_TDMFS_Pos)   /* (I2SMCC_MRA) I2SMCC_WS pulse is high for one bit period at beginning of frame, i.e., one I2SMCC_CK period. Position */
#define I2SMCC_MRA_ISCKDIV_Pos                _UINT32_(24)                                         /* (I2SMCC_MRA) Selected Clock to I2SMCC Serial Clock Ratio Position */
#define I2SMCC_MRA_ISCKDIV_Msk                (_UINT32_(0x3F) << I2SMCC_MRA_ISCKDIV_Pos)           /* (I2SMCC_MRA) Selected Clock to I2SMCC Serial Clock Ratio Mask */
#define I2SMCC_MRA_ISCKDIV(value)             (I2SMCC_MRA_ISCKDIV_Msk & (_UINT32_(value) << I2SMCC_MRA_ISCKDIV_Pos)) /* Assignment of value for ISCKDIV in the I2SMCC_MRA register */
#define I2SMCC_MRA_IMCKMODE_Pos               _UINT32_(30)                                         /* (I2SMCC_MRA) Host Clock Mode Position */
#define I2SMCC_MRA_IMCKMODE_Msk               (_UINT32_(0x1) << I2SMCC_MRA_IMCKMODE_Pos)           /* (I2SMCC_MRA) Host Clock Mode Mask */
#define I2SMCC_MRA_IMCKMODE(value)            (I2SMCC_MRA_IMCKMODE_Msk & (_UINT32_(value) << I2SMCC_MRA_IMCKMODE_Pos)) /* Assignment of value for IMCKMODE in the I2SMCC_MRA register */
#define   I2SMCC_MRA_IMCKMODE_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_MRA) No host clock generated.  */
#define   I2SMCC_MRA_IMCKMODE_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_MRA) Host clock generated.  */
#define I2SMCC_MRA_IMCKMODE_0                 (I2SMCC_MRA_IMCKMODE_0_Val << I2SMCC_MRA_IMCKMODE_Pos) /* (I2SMCC_MRA) No host clock generated. Position */
#define I2SMCC_MRA_IMCKMODE_1                 (I2SMCC_MRA_IMCKMODE_1_Val << I2SMCC_MRA_IMCKMODE_Pos) /* (I2SMCC_MRA) Host clock generated. Position */
#define I2SMCC_MRA_IWS_Pos                    _UINT32_(31)                                         /* (I2SMCC_MRA) I2SMCC_WS Slot Length Position */
#define I2SMCC_MRA_IWS_Msk                    (_UINT32_(0x1) << I2SMCC_MRA_IWS_Pos)                /* (I2SMCC_MRA) I2SMCC_WS Slot Length Mask */
#define I2SMCC_MRA_IWS(value)                 (I2SMCC_MRA_IWS_Msk & (_UINT32_(value) << I2SMCC_MRA_IWS_Pos)) /* Assignment of value for IWS in the I2SMCC_MRA register */
#define   I2SMCC_MRA_IWS_0_Val                _UINT32_(0x0)                                        /* (I2SMCC_MRA) I2SMCC_WS slot is 32 bits long for DATALENGTH = 18/20/24 bits.  */
#define   I2SMCC_MRA_IWS_1_Val                _UINT32_(0x1)                                        /* (I2SMCC_MRA) I2SMCC_WS slot is 24 bits long for DATALENGTH = 18/20/24 bits.  */
#define I2SMCC_MRA_IWS_0                      (I2SMCC_MRA_IWS_0_Val << I2SMCC_MRA_IWS_Pos)         /* (I2SMCC_MRA) I2SMCC_WS slot is 32 bits long for DATALENGTH = 18/20/24 bits. Position */
#define I2SMCC_MRA_IWS_1                      (I2SMCC_MRA_IWS_1_Val << I2SMCC_MRA_IWS_Pos)         /* (I2SMCC_MRA) I2SMCC_WS slot is 24 bits long for DATALENGTH = 18/20/24 bits. Position */
#define I2SMCC_MRA_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_MRA) Register Mask  */


/* -------- I2SMCC_MRB : (I2SMCC Offset: 0x08) (R/W 32) Mode Register B -------- */
#define I2SMCC_MRB_RESETVALUE                 _UINT32_(0x3000000)                                  /*  (I2SMCC_MRB) Mode Register B  Reset Value */

#define I2SMCC_MRB_CRAMODE_Pos                _UINT32_(0)                                          /* (I2SMCC_MRB) Common Register Access Mode Position */
#define I2SMCC_MRB_CRAMODE_Msk                (_UINT32_(0x1) << I2SMCC_MRB_CRAMODE_Pos)            /* (I2SMCC_MRB) Common Register Access Mode Mask */
#define I2SMCC_MRB_CRAMODE(value)             (I2SMCC_MRB_CRAMODE_Msk & (_UINT32_(value) << I2SMCC_MRB_CRAMODE_Pos)) /* Assignment of value for CRAMODE in the I2SMCC_MRB register */
#define   I2SMCC_MRB_CRAMODE_LEFT_FIRST_Val   _UINT32_(0x0)                                        /* (I2SMCC_MRB) All enabled I2S left channels are filled first, then I2S right channels.  */
#define   I2SMCC_MRB_CRAMODE_REGULAR_Val      _UINT32_(0x1)                                        /* (I2SMCC_MRB) An enabled I2S left channel is filled, then the corresponding right channel, until all channels are filled.  */
#define I2SMCC_MRB_CRAMODE_LEFT_FIRST         (I2SMCC_MRB_CRAMODE_LEFT_FIRST_Val << I2SMCC_MRB_CRAMODE_Pos) /* (I2SMCC_MRB) All enabled I2S left channels are filled first, then I2S right channels. Position */
#define I2SMCC_MRB_CRAMODE_REGULAR            (I2SMCC_MRB_CRAMODE_REGULAR_Val << I2SMCC_MRB_CRAMODE_Pos) /* (I2SMCC_MRB) An enabled I2S left channel is filled, then the corresponding right channel, until all channels are filled. Position */
#define I2SMCC_MRB_RXDIRECT_Pos               _UINT32_(1)                                          /* (I2SMCC_MRB) Receiver Direct Access Enable Position */
#define I2SMCC_MRB_RXDIRECT_Msk               (_UINT32_(0x1) << I2SMCC_MRB_RXDIRECT_Pos)           /* (I2SMCC_MRB) Receiver Direct Access Enable Mask */
#define I2SMCC_MRB_RXDIRECT(value)            (I2SMCC_MRB_RXDIRECT_Msk & (_UINT32_(value) << I2SMCC_MRB_RXDIRECT_Pos)) /* Assignment of value for RXDIRECT in the I2SMCC_MRB register */
#define   I2SMCC_MRB_RXDIRECT_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_MRB) The I2SMCC_RHR must be read by software or DMA to read audio samples from I2S line.  */
#define   I2SMCC_MRB_RXDIRECT_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_MRB) Audio Sample Rate Converter (ASRC) can be directly loaded with the audio samples recovered from I2S line without software or DMA intervention. The FIFO must be enabled (I2SMCC_MRB.FIFOEN = 1).  */
#define I2SMCC_MRB_RXDIRECT_0                 (I2SMCC_MRB_RXDIRECT_0_Val << I2SMCC_MRB_RXDIRECT_Pos) /* (I2SMCC_MRB) The I2SMCC_RHR must be read by software or DMA to read audio samples from I2S line. Position */
#define I2SMCC_MRB_RXDIRECT_1                 (I2SMCC_MRB_RXDIRECT_1_Val << I2SMCC_MRB_RXDIRECT_Pos) /* (I2SMCC_MRB) Audio Sample Rate Converter (ASRC) can be directly loaded with the audio samples recovered from I2S line without software or DMA intervention. The FIFO must be enabled (I2SMCC_MRB.FIFOEN = 1). Position */
#define I2SMCC_MRB_TXDIRECT_Pos               _UINT32_(2)                                          /* (I2SMCC_MRB) Transmitter Direct Access Enable Position */
#define I2SMCC_MRB_TXDIRECT_Msk               (_UINT32_(0x1) << I2SMCC_MRB_TXDIRECT_Pos)           /* (I2SMCC_MRB) Transmitter Direct Access Enable Mask */
#define I2SMCC_MRB_TXDIRECT(value)            (I2SMCC_MRB_TXDIRECT_Msk & (_UINT32_(value) << I2SMCC_MRB_TXDIRECT_Pos)) /* Assignment of value for TXDIRECT in the I2SMCC_MRB register */
#define   I2SMCC_MRB_TXDIRECT_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_MRB) The I2SMCC_THR must be loaded by software or DMA to transfer audio sample on I2S line.  */
#define   I2SMCC_MRB_TXDIRECT_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_MRB) Audio Sample Rate Converter (ASRC) can directly transmit the converted audio samples on I2S line without software or DMA intervention. The FIFO must be enabled (I2SMCC_MRB.FIFOEN = 1).  */
#define I2SMCC_MRB_TXDIRECT_0                 (I2SMCC_MRB_TXDIRECT_0_Val << I2SMCC_MRB_TXDIRECT_Pos) /* (I2SMCC_MRB) The I2SMCC_THR must be loaded by software or DMA to transfer audio sample on I2S line. Position */
#define I2SMCC_MRB_TXDIRECT_1                 (I2SMCC_MRB_TXDIRECT_1_Val << I2SMCC_MRB_TXDIRECT_Pos) /* (I2SMCC_MRB) Audio Sample Rate Converter (ASRC) can directly transmit the converted audio samples on I2S line without software or DMA intervention. The FIFO must be enabled (I2SMCC_MRB.FIFOEN = 1). Position */
#define I2SMCC_MRB_FIFOEN_Pos                 _UINT32_(4)                                          /* (I2SMCC_MRB) FIFO Enable Position */
#define I2SMCC_MRB_FIFOEN_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_FIFOEN_Pos)             /* (I2SMCC_MRB) FIFO Enable Mask */
#define I2SMCC_MRB_FIFOEN(value)              (I2SMCC_MRB_FIFOEN_Msk & (_UINT32_(value) << I2SMCC_MRB_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the I2SMCC_MRB register */
#define   I2SMCC_MRB_FIFOEN_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The Receive and Transmit FIFOs are disabled.  */
#define   I2SMCC_MRB_FIFOEN_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The Receive and Transmit FIFOs are enabled. Transmit data can only be written through I2SMCC_THR. Receive data can only be read through I2SMCC_RHR.  */
#define I2SMCC_MRB_FIFOEN_0                   (I2SMCC_MRB_FIFOEN_0_Val << I2SMCC_MRB_FIFOEN_Pos)   /* (I2SMCC_MRB) The Receive and Transmit FIFOs are disabled. Position */
#define I2SMCC_MRB_FIFOEN_1                   (I2SMCC_MRB_FIFOEN_1_Val << I2SMCC_MRB_FIFOEN_Pos)   /* (I2SMCC_MRB) The Receive and Transmit FIFOs are enabled. Transmit data can only be written through I2SMCC_THR. Receive data can only be read through I2SMCC_RHR. Position */
#define I2SMCC_MRB_LEFTAL24_Pos               _UINT32_(5)                                          /* (I2SMCC_MRB) Left Aligned 24-bit Data Position */
#define I2SMCC_MRB_LEFTAL24_Msk               (_UINT32_(0x1) << I2SMCC_MRB_LEFTAL24_Pos)           /* (I2SMCC_MRB) Left Aligned 24-bit Data Mask */
#define I2SMCC_MRB_LEFTAL24(value)            (I2SMCC_MRB_LEFTAL24_Msk & (_UINT32_(value) << I2SMCC_MRB_LEFTAL24_Pos)) /* Assignment of value for LEFTAL24 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_LEFTAL24_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_MRB) The 24-bit audio sample is right aligned in the 32-bit Holding register.  */
#define   I2SMCC_MRB_LEFTAL24_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_MRB) The 24-bit audio sample is left aligned in the 32-bit Holding register.  */
#define I2SMCC_MRB_LEFTAL24_0                 (I2SMCC_MRB_LEFTAL24_0_Val << I2SMCC_MRB_LEFTAL24_Pos) /* (I2SMCC_MRB) The 24-bit audio sample is right aligned in the 32-bit Holding register. Position */
#define I2SMCC_MRB_LEFTAL24_1                 (I2SMCC_MRB_LEFTAL24_1_Val << I2SMCC_MRB_LEFTAL24_Pos) /* (I2SMCC_MRB) The 24-bit audio sample is left aligned in the 32-bit Holding register. Position */
#define I2SMCC_MRB_PACK24_Pos                 _UINT32_(6)                                          /* (I2SMCC_MRB) Packed 24-bit Mode Position */
#define I2SMCC_MRB_PACK24_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_PACK24_Pos)             /* (I2SMCC_MRB) Packed 24-bit Mode Mask */
#define I2SMCC_MRB_PACK24(value)              (I2SMCC_MRB_PACK24_Msk & (_UINT32_(value) << I2SMCC_MRB_PACK24_Pos)) /* Assignment of value for PACK24 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_PACK24_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) Each 24-bit audio sample is mapped into the 32-bit Holding register.  */
#define   I2SMCC_MRB_PACK24_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) 24-bit audio samples are compacted in the 32-bit Holding register to optimize data transfer in system bus and memory. The FIFO must be enabled (I2SMCC_MRB.FIFOEN = 1).  */
#define I2SMCC_MRB_PACK24_0                   (I2SMCC_MRB_PACK24_0_Val << I2SMCC_MRB_PACK24_Pos)   /* (I2SMCC_MRB) Each 24-bit audio sample is mapped into the 32-bit Holding register. Position */
#define I2SMCC_MRB_PACK24_1                   (I2SMCC_MRB_PACK24_1_Val << I2SMCC_MRB_PACK24_Pos)   /* (I2SMCC_MRB) 24-bit audio samples are compacted in the 32-bit Holding register to optimize data transfer in system bus and memory. The FIFO must be enabled (I2SMCC_MRB.FIFOEN = 1). Position */
#define I2SMCC_MRB_DMACHUNK_Pos               _UINT32_(8)                                          /* (I2SMCC_MRB) DMA Chunk Size Position */
#define I2SMCC_MRB_DMACHUNK_Msk               (_UINT32_(0x3) << I2SMCC_MRB_DMACHUNK_Pos)           /* (I2SMCC_MRB) DMA Chunk Size Mask */
#define I2SMCC_MRB_DMACHUNK(value)            (I2SMCC_MRB_DMACHUNK_Msk & (_UINT32_(value) << I2SMCC_MRB_DMACHUNK_Pos)) /* Assignment of value for DMACHUNK in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DMACHUNK_1_WORD_Val      _UINT32_(0x0)                                        /* (I2SMCC_MRB) A DMA transfer request is issued when at least 1 word is empty in the FIFO.  */
#define   I2SMCC_MRB_DMACHUNK_2_WORDS_Val     _UINT32_(0x1)                                        /* (I2SMCC_MRB) A DMA transfer request is issued when at least 2 words are empty in the FIFO. When PACK24=1, only 1-word chunks are allowed for the DMA transfer.  */
#define   I2SMCC_MRB_DMACHUNK_4_WORDS_Val     _UINT32_(0x2)                                        /* (I2SMCC_MRB) A DMA transfer request is issued when at least 4 words are empty in the FIFO. Limitations exist when operating in Mono or TDM. See Table 7-7 "TX DMA Chunk Configurations" and Table 7-8 "RX DMA Chunk Configurations".  When PACK24=1, only 1-word chunks are allowed for the DMA transfer.  */
#define   I2SMCC_MRB_DMACHUNK_8_WORDS_Val     _UINT32_(0x3)                                        /* (I2SMCC_MRB) A DMA transfer request is issued when at least 8 words are empty in the FIFO. Limitations exist when operating in Mono or TDM. See Table 7-7 "TX DMA Chunk Configurations" and Table 7-8 "RX DMA Chunk Configurations".  When PACK24=1, only 1-word chunks are allowed for the DMA transfer.  */
#define I2SMCC_MRB_DMACHUNK_1_WORD            (I2SMCC_MRB_DMACHUNK_1_WORD_Val << I2SMCC_MRB_DMACHUNK_Pos) /* (I2SMCC_MRB) A DMA transfer request is issued when at least 1 word is empty in the FIFO. Position */
#define I2SMCC_MRB_DMACHUNK_2_WORDS           (I2SMCC_MRB_DMACHUNK_2_WORDS_Val << I2SMCC_MRB_DMACHUNK_Pos) /* (I2SMCC_MRB) A DMA transfer request is issued when at least 2 words are empty in the FIFO. When PACK24=1, only 1-word chunks are allowed for the DMA transfer. Position */
#define I2SMCC_MRB_DMACHUNK_4_WORDS           (I2SMCC_MRB_DMACHUNK_4_WORDS_Val << I2SMCC_MRB_DMACHUNK_Pos) /* (I2SMCC_MRB) A DMA transfer request is issued when at least 4 words are empty in the FIFO. Limitations exist when operating in Mono or TDM. See Table 7-7 "TX DMA Chunk Configurations" and Table 7-8 "RX DMA Chunk Configurations".  When PACK24=1, only 1-word chunks are allowed for the DMA transfer. Position */
#define I2SMCC_MRB_DMACHUNK_8_WORDS           (I2SMCC_MRB_DMACHUNK_8_WORDS_Val << I2SMCC_MRB_DMACHUNK_Pos) /* (I2SMCC_MRB) A DMA transfer request is issued when at least 8 words are empty in the FIFO. Limitations exist when operating in Mono or TDM. See Table 7-7 "TX DMA Chunk Configurations" and Table 7-8 "RX DMA Chunk Configurations".  When PACK24=1, only 1-word chunks are allowed for the DMA transfer. Position */
#define I2SMCC_MRB_I2SLINESIZE_Pos            _UINT32_(20)                                         /* (I2SMCC_MRB) I2S Transceiver Data Slot Size Selection Position */
#define I2SMCC_MRB_I2SLINESIZE_Msk            (_UINT32_(0x7) << I2SMCC_MRB_I2SLINESIZE_Pos)        /* (I2SMCC_MRB) I2S Transceiver Data Slot Size Selection Mask */
#define I2SMCC_MRB_I2SLINESIZE(value)         (I2SMCC_MRB_I2SLINESIZE_Msk & (_UINT32_(value) << I2SMCC_MRB_I2SLINESIZE_Pos)) /* Assignment of value for I2SLINESIZE in the I2SMCC_MRB register */
#define   I2SMCC_MRB_I2SLINESIZE_DATALENGTH_DEFINED_Val _UINT32_(0x0)                                        /* (I2SMCC_MRB) The I2S data slot size is configured by I2SMCC_MRA.DATALENGTH and the software is forced to manage audio samples of the same size as the ones transfered on I2S line.  */
#define   I2SMCC_MRB_I2SLINESIZE_32_BITS_Val  _UINT32_(0x1)                                        /* (I2SMCC_MRB) The I2S data slot size is 32-bit. I2SMCC_MRA.DATALENGTH/IWS has no effect on I2S data slot size but defines the audio sample size managed at user interface level.  */
#define   I2SMCC_MRB_I2SLINESIZE_32_24_BITS_Val _UINT32_(0x2)                                        /* (I2SMCC_MRB) The I2S data slot size is 24-bit or 32-bit. 32 or 24 bits depends on I2SMCC_MR.IWS. I2SMCC_MRA.DATALENGTH/IWS have no effect on I2S data slot size but define the audio sample size managed at user interface level.  */
#define   I2SMCC_MRB_I2SLINESIZE_16_BITS_Val  _UINT32_(0x3)                                        /* (I2SMCC_MRB) The I2S data slot size is 16-bit. I2SMCC_MRA.DATALENGTH/IWS have no effect on I2S data slot size but defines the audio sample size managed at user interface level.  */
#define   I2SMCC_MRB_I2SLINESIZE_8_BITS_Val   _UINT32_(0x4)                                        /* (I2SMCC_MRB) The I2S data slot size is 8-bit. I2SMCC_MRA.DATALENGTH/IWS have no effect on I2S data slot size but defines the audio sample size managed at user interface level.  */
#define I2SMCC_MRB_I2SLINESIZE_DATALENGTH_DEFINED (I2SMCC_MRB_I2SLINESIZE_DATALENGTH_DEFINED_Val << I2SMCC_MRB_I2SLINESIZE_Pos) /* (I2SMCC_MRB) The I2S data slot size is configured by I2SMCC_MRA.DATALENGTH and the software is forced to manage audio samples of the same size as the ones transfered on I2S line. Position */
#define I2SMCC_MRB_I2SLINESIZE_32_BITS        (I2SMCC_MRB_I2SLINESIZE_32_BITS_Val << I2SMCC_MRB_I2SLINESIZE_Pos) /* (I2SMCC_MRB) The I2S data slot size is 32-bit. I2SMCC_MRA.DATALENGTH/IWS has no effect on I2S data slot size but defines the audio sample size managed at user interface level. Position */
#define I2SMCC_MRB_I2SLINESIZE_32_24_BITS     (I2SMCC_MRB_I2SLINESIZE_32_24_BITS_Val << I2SMCC_MRB_I2SLINESIZE_Pos) /* (I2SMCC_MRB) The I2S data slot size is 24-bit or 32-bit. 32 or 24 bits depends on I2SMCC_MR.IWS. I2SMCC_MRA.DATALENGTH/IWS have no effect on I2S data slot size but define the audio sample size managed at user interface level. Position */
#define I2SMCC_MRB_I2SLINESIZE_16_BITS        (I2SMCC_MRB_I2SLINESIZE_16_BITS_Val << I2SMCC_MRB_I2SLINESIZE_Pos) /* (I2SMCC_MRB) The I2S data slot size is 16-bit. I2SMCC_MRA.DATALENGTH/IWS have no effect on I2S data slot size but defines the audio sample size managed at user interface level. Position */
#define I2SMCC_MRB_I2SLINESIZE_8_BITS         (I2SMCC_MRB_I2SLINESIZE_8_BITS_Val << I2SMCC_MRB_I2SLINESIZE_Pos) /* (I2SMCC_MRB) The I2S data slot size is 8-bit. I2SMCC_MRA.DATALENGTH/IWS have no effect on I2S data slot size but defines the audio sample size managed at user interface level. Position */
#define I2SMCC_MRB_DTCEN0_Pos                 _UINT32_(24)                                         /* (I2SMCC_MRB) Direct Audio Transmit Channel 0 Enable Position */
#define I2SMCC_MRB_DTCEN0_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_DTCEN0_Pos)             /* (I2SMCC_MRB) Direct Audio Transmit Channel 0 Enable Mask */
#define I2SMCC_MRB_DTCEN0(value)              (I2SMCC_MRB_DTCEN0_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN0_Pos)) /* Assignment of value for DTCEN0 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DTCEN0_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line.  */
#define   I2SMCC_MRB_DTCEN0_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line.  */
#define I2SMCC_MRB_DTCEN0_0                   (I2SMCC_MRB_DTCEN0_0_Val << I2SMCC_MRB_DTCEN0_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN0_1                   (I2SMCC_MRB_DTCEN0_1_Val << I2SMCC_MRB_DTCEN0_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN1_Pos                 _UINT32_(25)                                         /* (I2SMCC_MRB) Direct Audio Transmit Channel 1 Enable Position */
#define I2SMCC_MRB_DTCEN1_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_DTCEN1_Pos)             /* (I2SMCC_MRB) Direct Audio Transmit Channel 1 Enable Mask */
#define I2SMCC_MRB_DTCEN1(value)              (I2SMCC_MRB_DTCEN1_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN1_Pos)) /* Assignment of value for DTCEN1 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DTCEN1_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line.  */
#define   I2SMCC_MRB_DTCEN1_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line.  */
#define I2SMCC_MRB_DTCEN1_0                   (I2SMCC_MRB_DTCEN1_0_Val << I2SMCC_MRB_DTCEN1_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN1_1                   (I2SMCC_MRB_DTCEN1_1_Val << I2SMCC_MRB_DTCEN1_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN2_Pos                 _UINT32_(26)                                         /* (I2SMCC_MRB) Direct Audio Transmit Channel 2 Enable Position */
#define I2SMCC_MRB_DTCEN2_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_DTCEN2_Pos)             /* (I2SMCC_MRB) Direct Audio Transmit Channel 2 Enable Mask */
#define I2SMCC_MRB_DTCEN2(value)              (I2SMCC_MRB_DTCEN2_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN2_Pos)) /* Assignment of value for DTCEN2 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DTCEN2_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line.  */
#define   I2SMCC_MRB_DTCEN2_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line.  */
#define I2SMCC_MRB_DTCEN2_0                   (I2SMCC_MRB_DTCEN2_0_Val << I2SMCC_MRB_DTCEN2_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN2_1                   (I2SMCC_MRB_DTCEN2_1_Val << I2SMCC_MRB_DTCEN2_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN3_Pos                 _UINT32_(27)                                         /* (I2SMCC_MRB) Direct Audio Transmit Channel 3 Enable Position */
#define I2SMCC_MRB_DTCEN3_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_DTCEN3_Pos)             /* (I2SMCC_MRB) Direct Audio Transmit Channel 3 Enable Mask */
#define I2SMCC_MRB_DTCEN3(value)              (I2SMCC_MRB_DTCEN3_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN3_Pos)) /* Assignment of value for DTCEN3 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DTCEN3_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line.  */
#define   I2SMCC_MRB_DTCEN3_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line.  */
#define I2SMCC_MRB_DTCEN3_0                   (I2SMCC_MRB_DTCEN3_0_Val << I2SMCC_MRB_DTCEN3_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN3_1                   (I2SMCC_MRB_DTCEN3_1_Val << I2SMCC_MRB_DTCEN3_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN4_Pos                 _UINT32_(28)                                         /* (I2SMCC_MRB) Direct Audio Transmit Channel 4 Enable Position */
#define I2SMCC_MRB_DTCEN4_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_DTCEN4_Pos)             /* (I2SMCC_MRB) Direct Audio Transmit Channel 4 Enable Mask */
#define I2SMCC_MRB_DTCEN4(value)              (I2SMCC_MRB_DTCEN4_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN4_Pos)) /* Assignment of value for DTCEN4 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DTCEN4_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line.  */
#define   I2SMCC_MRB_DTCEN4_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line.  */
#define I2SMCC_MRB_DTCEN4_0                   (I2SMCC_MRB_DTCEN4_0_Val << I2SMCC_MRB_DTCEN4_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN4_1                   (I2SMCC_MRB_DTCEN4_1_Val << I2SMCC_MRB_DTCEN4_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN5_Pos                 _UINT32_(29)                                         /* (I2SMCC_MRB) Direct Audio Transmit Channel 5 Enable Position */
#define I2SMCC_MRB_DTCEN5_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_DTCEN5_Pos)             /* (I2SMCC_MRB) Direct Audio Transmit Channel 5 Enable Mask */
#define I2SMCC_MRB_DTCEN5(value)              (I2SMCC_MRB_DTCEN5_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN5_Pos)) /* Assignment of value for DTCEN5 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DTCEN5_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line.  */
#define   I2SMCC_MRB_DTCEN5_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line.  */
#define I2SMCC_MRB_DTCEN5_0                   (I2SMCC_MRB_DTCEN5_0_Val << I2SMCC_MRB_DTCEN5_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN5_1                   (I2SMCC_MRB_DTCEN5_1_Val << I2SMCC_MRB_DTCEN5_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN6_Pos                 _UINT32_(30)                                         /* (I2SMCC_MRB) Direct Audio Transmit Channel 6 Enable Position */
#define I2SMCC_MRB_DTCEN6_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_DTCEN6_Pos)             /* (I2SMCC_MRB) Direct Audio Transmit Channel 6 Enable Mask */
#define I2SMCC_MRB_DTCEN6(value)              (I2SMCC_MRB_DTCEN6_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN6_Pos)) /* Assignment of value for DTCEN6 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DTCEN6_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line.  */
#define   I2SMCC_MRB_DTCEN6_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line.  */
#define I2SMCC_MRB_DTCEN6_0                   (I2SMCC_MRB_DTCEN6_0_Val << I2SMCC_MRB_DTCEN6_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN6_1                   (I2SMCC_MRB_DTCEN6_1_Val << I2SMCC_MRB_DTCEN6_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN7_Pos                 _UINT32_(31)                                         /* (I2SMCC_MRB) Direct Audio Transmit Channel 7 Enable Position */
#define I2SMCC_MRB_DTCEN7_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_DTCEN7_Pos)             /* (I2SMCC_MRB) Direct Audio Transmit Channel 7 Enable Mask */
#define I2SMCC_MRB_DTCEN7(value)              (I2SMCC_MRB_DTCEN7_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN7_Pos)) /* Assignment of value for DTCEN7 in the I2SMCC_MRB register */
#define   I2SMCC_MRB_DTCEN7_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line.  */
#define   I2SMCC_MRB_DTCEN7_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line.  */
#define I2SMCC_MRB_DTCEN7_0                   (I2SMCC_MRB_DTCEN7_0_Val << I2SMCC_MRB_DTCEN7_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is not transmitted on I2S line. Position */
#define I2SMCC_MRB_DTCEN7_1                   (I2SMCC_MRB_DTCEN7_1_Val << I2SMCC_MRB_DTCEN7_Pos)   /* (I2SMCC_MRB) The channel x from the direct audio stream is transmitted on I2S line. Position */
#define I2SMCC_MRB_Msk                        _UINT32_(0xFF700377)                                 /* (I2SMCC_MRB) Register Mask  */

#define I2SMCC_MRB_LEFTAL_Pos                 _UINT32_(5)                                          /* (I2SMCC_MRB Position) Left Aligned 24-bit Data */
#define I2SMCC_MRB_LEFTAL_Msk                 (_UINT32_(0x1) << I2SMCC_MRB_LEFTAL_Pos)             /* (I2SMCC_MRB Mask) LEFTAL */
#define I2SMCC_MRB_LEFTAL(value)              (I2SMCC_MRB_LEFTAL_Msk & (_UINT32_(value) << I2SMCC_MRB_LEFTAL_Pos)) 
#define I2SMCC_MRB_PACK_Pos                   _UINT32_(6)                                          /* (I2SMCC_MRB Position) Packed 24-bit Mode */
#define I2SMCC_MRB_PACK_Msk                   (_UINT32_(0x1) << I2SMCC_MRB_PACK_Pos)               /* (I2SMCC_MRB Mask) PACK */
#define I2SMCC_MRB_PACK(value)                (I2SMCC_MRB_PACK_Msk & (_UINT32_(value) << I2SMCC_MRB_PACK_Pos)) 
#define I2SMCC_MRB_DTCEN_Pos                  _UINT32_(24)                                         /* (I2SMCC_MRB Position) Direct Audio Transmit Channel 7 Enable */
#define I2SMCC_MRB_DTCEN_Msk                  (_UINT32_(0xFF) << I2SMCC_MRB_DTCEN_Pos)             /* (I2SMCC_MRB Mask) DTCEN */
#define I2SMCC_MRB_DTCEN(value)               (I2SMCC_MRB_DTCEN_Msk & (_UINT32_(value) << I2SMCC_MRB_DTCEN_Pos)) 

/* -------- I2SMCC_SR : (I2SMCC Offset: 0x0C) ( R/ 32) Status Register -------- */
#define I2SMCC_SR_RESETVALUE                  _UINT32_(0x00)                                       /*  (I2SMCC_SR) Status Register  Reset Value */

#define I2SMCC_SR_RXEN_Pos                    _UINT32_(0)                                          /* (I2SMCC_SR) Receiver Enabled Position */
#define I2SMCC_SR_RXEN_Msk                    (_UINT32_(0x1) << I2SMCC_SR_RXEN_Pos)                /* (I2SMCC_SR) Receiver Enabled Mask */
#define I2SMCC_SR_RXEN(value)                 (I2SMCC_SR_RXEN_Msk & (_UINT32_(value) << I2SMCC_SR_RXEN_Pos)) /* Assignment of value for RXEN in the I2SMCC_SR register */
#define   I2SMCC_SR_RXEN_0_Val                _UINT32_(0x0)                                        /* (I2SMCC_SR) Cleared when the receiver is disabled, following a RXDIS or SWRST request in I2SMCC_CR.  */
#define   I2SMCC_SR_RXEN_1_Val                _UINT32_(0x1)                                        /* (I2SMCC_SR) Set when the receiver is enabled, following a RXEN request in I2SMCC_CR.  */
#define I2SMCC_SR_RXEN_0                      (I2SMCC_SR_RXEN_0_Val << I2SMCC_SR_RXEN_Pos)         /* (I2SMCC_SR) Cleared when the receiver is disabled, following a RXDIS or SWRST request in I2SMCC_CR. Position */
#define I2SMCC_SR_RXEN_1                      (I2SMCC_SR_RXEN_1_Val << I2SMCC_SR_RXEN_Pos)         /* (I2SMCC_SR) Set when the receiver is enabled, following a RXEN request in I2SMCC_CR. Position */
#define I2SMCC_SR_TXEN_Pos                    _UINT32_(4)                                          /* (I2SMCC_SR) Transmitter Enabled Position */
#define I2SMCC_SR_TXEN_Msk                    (_UINT32_(0x1) << I2SMCC_SR_TXEN_Pos)                /* (I2SMCC_SR) Transmitter Enabled Mask */
#define I2SMCC_SR_TXEN(value)                 (I2SMCC_SR_TXEN_Msk & (_UINT32_(value) << I2SMCC_SR_TXEN_Pos)) /* Assignment of value for TXEN in the I2SMCC_SR register */
#define   I2SMCC_SR_TXEN_0_Val                _UINT32_(0x0)                                        /* (I2SMCC_SR) Cleared when the transmitter is disabled, following a I2SMCC_CR.TXDIS or I2SMCC_CR.SWRST request.  */
#define   I2SMCC_SR_TXEN_1_Val                _UINT32_(0x1)                                        /* (I2SMCC_SR) Set when the transmitter is enabled, following a I2SMCC_CR.TXEN request.  */
#define I2SMCC_SR_TXEN_0                      (I2SMCC_SR_TXEN_0_Val << I2SMCC_SR_TXEN_Pos)         /* (I2SMCC_SR) Cleared when the transmitter is disabled, following a I2SMCC_CR.TXDIS or I2SMCC_CR.SWRST request. Position */
#define I2SMCC_SR_TXEN_1                      (I2SMCC_SR_TXEN_1_Val << I2SMCC_SR_TXEN_Pos)         /* (I2SMCC_SR) Set when the transmitter is enabled, following a I2SMCC_CR.TXEN request. Position */
#define I2SMCC_SR_Msk                         _UINT32_(0x00000011)                                 /* (I2SMCC_SR) Register Mask  */


/* -------- I2SMCC_IERA : (I2SMCC Offset: 0x10) ( /W 32) Interrupt Enable Register A -------- */
#define I2SMCC_IERA_TXLRDY0_Pos               _UINT32_(0)                                          /* (I2SMCC_IERA) I2S Transmit Left 0  or TDM Channel 2x ReadyInterrupt Enable Position */
#define I2SMCC_IERA_TXLRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXLRDY0_Pos)           /* (I2SMCC_IERA) I2S Transmit Left 0  or TDM Channel 2x ReadyInterrupt Enable Mask */
#define I2SMCC_IERA_TXLRDY0(value)            (I2SMCC_IERA_TXLRDY0_Msk & (_UINT32_(value) << I2SMCC_IERA_TXLRDY0_Pos)) /* Assignment of value for TXLRDY0 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXRRDY0_Pos               _UINT32_(1)                                          /* (I2SMCC_IERA) I2S Transmit Right 0  or TDM Channel [2x]+1 Ready Interrupt Enable Position */
#define I2SMCC_IERA_TXRRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXRRDY0_Pos)           /* (I2SMCC_IERA) I2S Transmit Right 0  or TDM Channel [2x]+1 Ready Interrupt Enable Mask */
#define I2SMCC_IERA_TXRRDY0(value)            (I2SMCC_IERA_TXRRDY0_Msk & (_UINT32_(value) << I2SMCC_IERA_TXRRDY0_Pos)) /* Assignment of value for TXRRDY0 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXLRDY1_Pos               _UINT32_(2)                                          /* (I2SMCC_IERA) I2S Transmit Left 1  or TDM Channel 2x ReadyInterrupt Enable Position */
#define I2SMCC_IERA_TXLRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXLRDY1_Pos)           /* (I2SMCC_IERA) I2S Transmit Left 1  or TDM Channel 2x ReadyInterrupt Enable Mask */
#define I2SMCC_IERA_TXLRDY1(value)            (I2SMCC_IERA_TXLRDY1_Msk & (_UINT32_(value) << I2SMCC_IERA_TXLRDY1_Pos)) /* Assignment of value for TXLRDY1 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXRRDY1_Pos               _UINT32_(3)                                          /* (I2SMCC_IERA) I2S Transmit Right 1  or TDM Channel [2x]+1 Ready Interrupt Enable Position */
#define I2SMCC_IERA_TXRRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXRRDY1_Pos)           /* (I2SMCC_IERA) I2S Transmit Right 1  or TDM Channel [2x]+1 Ready Interrupt Enable Mask */
#define I2SMCC_IERA_TXRRDY1(value)            (I2SMCC_IERA_TXRRDY1_Msk & (_UINT32_(value) << I2SMCC_IERA_TXRRDY1_Pos)) /* Assignment of value for TXRRDY1 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXLRDY2_Pos               _UINT32_(4)                                          /* (I2SMCC_IERA) I2S Transmit Left 2  or TDM Channel 2x ReadyInterrupt Enable Position */
#define I2SMCC_IERA_TXLRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXLRDY2_Pos)           /* (I2SMCC_IERA) I2S Transmit Left 2  or TDM Channel 2x ReadyInterrupt Enable Mask */
#define I2SMCC_IERA_TXLRDY2(value)            (I2SMCC_IERA_TXLRDY2_Msk & (_UINT32_(value) << I2SMCC_IERA_TXLRDY2_Pos)) /* Assignment of value for TXLRDY2 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXRRDY2_Pos               _UINT32_(5)                                          /* (I2SMCC_IERA) I2S Transmit Right 2  or TDM Channel [2x]+1 Ready Interrupt Enable Position */
#define I2SMCC_IERA_TXRRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXRRDY2_Pos)           /* (I2SMCC_IERA) I2S Transmit Right 2  or TDM Channel [2x]+1 Ready Interrupt Enable Mask */
#define I2SMCC_IERA_TXRRDY2(value)            (I2SMCC_IERA_TXRRDY2_Msk & (_UINT32_(value) << I2SMCC_IERA_TXRRDY2_Pos)) /* Assignment of value for TXRRDY2 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXLRDY3_Pos               _UINT32_(6)                                          /* (I2SMCC_IERA) I2S Transmit Left 3  or TDM Channel 2x ReadyInterrupt Enable Position */
#define I2SMCC_IERA_TXLRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXLRDY3_Pos)           /* (I2SMCC_IERA) I2S Transmit Left 3  or TDM Channel 2x ReadyInterrupt Enable Mask */
#define I2SMCC_IERA_TXLRDY3(value)            (I2SMCC_IERA_TXLRDY3_Msk & (_UINT32_(value) << I2SMCC_IERA_TXLRDY3_Pos)) /* Assignment of value for TXLRDY3 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXRRDY3_Pos               _UINT32_(7)                                          /* (I2SMCC_IERA) I2S Transmit Right 3  or TDM Channel [2x]+1 Ready Interrupt Enable Position */
#define I2SMCC_IERA_TXRRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXRRDY3_Pos)           /* (I2SMCC_IERA) I2S Transmit Right 3  or TDM Channel [2x]+1 Ready Interrupt Enable Mask */
#define I2SMCC_IERA_TXRRDY3(value)            (I2SMCC_IERA_TXRRDY3_Msk & (_UINT32_(value) << I2SMCC_IERA_TXRRDY3_Pos)) /* Assignment of value for TXRRDY3 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXLUNF0_Pos               _UINT32_(8)                                          /* (I2SMCC_IERA) I2S Transmit Left 0  or TDM Channel 2x Underrun Interrupt Enable Position */
#define I2SMCC_IERA_TXLUNF0_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXLUNF0_Pos)           /* (I2SMCC_IERA) I2S Transmit Left 0  or TDM Channel 2x Underrun Interrupt Enable Mask */
#define I2SMCC_IERA_TXLUNF0(value)            (I2SMCC_IERA_TXLUNF0_Msk & (_UINT32_(value) << I2SMCC_IERA_TXLUNF0_Pos)) /* Assignment of value for TXLUNF0 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXRUNF0_Pos               _UINT32_(9)                                          /* (I2SMCC_IERA) I2S Transmit Right 0  or TDM Channel [2x]+1 Underrun Interrupt Enable Position */
#define I2SMCC_IERA_TXRUNF0_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXRUNF0_Pos)           /* (I2SMCC_IERA) I2S Transmit Right 0  or TDM Channel [2x]+1 Underrun Interrupt Enable Mask */
#define I2SMCC_IERA_TXRUNF0(value)            (I2SMCC_IERA_TXRUNF0_Msk & (_UINT32_(value) << I2SMCC_IERA_TXRUNF0_Pos)) /* Assignment of value for TXRUNF0 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXLUNF1_Pos               _UINT32_(10)                                         /* (I2SMCC_IERA) I2S Transmit Left 1  or TDM Channel 2x Underrun Interrupt Enable Position */
#define I2SMCC_IERA_TXLUNF1_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXLUNF1_Pos)           /* (I2SMCC_IERA) I2S Transmit Left 1  or TDM Channel 2x Underrun Interrupt Enable Mask */
#define I2SMCC_IERA_TXLUNF1(value)            (I2SMCC_IERA_TXLUNF1_Msk & (_UINT32_(value) << I2SMCC_IERA_TXLUNF1_Pos)) /* Assignment of value for TXLUNF1 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXRUNF1_Pos               _UINT32_(11)                                         /* (I2SMCC_IERA) I2S Transmit Right 1  or TDM Channel [2x]+1 Underrun Interrupt Enable Position */
#define I2SMCC_IERA_TXRUNF1_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXRUNF1_Pos)           /* (I2SMCC_IERA) I2S Transmit Right 1  or TDM Channel [2x]+1 Underrun Interrupt Enable Mask */
#define I2SMCC_IERA_TXRUNF1(value)            (I2SMCC_IERA_TXRUNF1_Msk & (_UINT32_(value) << I2SMCC_IERA_TXRUNF1_Pos)) /* Assignment of value for TXRUNF1 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXLUNF2_Pos               _UINT32_(12)                                         /* (I2SMCC_IERA) I2S Transmit Left 2  or TDM Channel 2x Underrun Interrupt Enable Position */
#define I2SMCC_IERA_TXLUNF2_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXLUNF2_Pos)           /* (I2SMCC_IERA) I2S Transmit Left 2  or TDM Channel 2x Underrun Interrupt Enable Mask */
#define I2SMCC_IERA_TXLUNF2(value)            (I2SMCC_IERA_TXLUNF2_Msk & (_UINT32_(value) << I2SMCC_IERA_TXLUNF2_Pos)) /* Assignment of value for TXLUNF2 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXRUNF2_Pos               _UINT32_(13)                                         /* (I2SMCC_IERA) I2S Transmit Right 2  or TDM Channel [2x]+1 Underrun Interrupt Enable Position */
#define I2SMCC_IERA_TXRUNF2_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXRUNF2_Pos)           /* (I2SMCC_IERA) I2S Transmit Right 2  or TDM Channel [2x]+1 Underrun Interrupt Enable Mask */
#define I2SMCC_IERA_TXRUNF2(value)            (I2SMCC_IERA_TXRUNF2_Msk & (_UINT32_(value) << I2SMCC_IERA_TXRUNF2_Pos)) /* Assignment of value for TXRUNF2 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXLUNF3_Pos               _UINT32_(14)                                         /* (I2SMCC_IERA) I2S Transmit Left 3  or TDM Channel 2x Underrun Interrupt Enable Position */
#define I2SMCC_IERA_TXLUNF3_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXLUNF3_Pos)           /* (I2SMCC_IERA) I2S Transmit Left 3  or TDM Channel 2x Underrun Interrupt Enable Mask */
#define I2SMCC_IERA_TXLUNF3(value)            (I2SMCC_IERA_TXLUNF3_Msk & (_UINT32_(value) << I2SMCC_IERA_TXLUNF3_Pos)) /* Assignment of value for TXLUNF3 in the I2SMCC_IERA register */
#define I2SMCC_IERA_TXRUNF3_Pos               _UINT32_(15)                                         /* (I2SMCC_IERA) I2S Transmit Right 3  or TDM Channel [2x]+1 Underrun Interrupt Enable Position */
#define I2SMCC_IERA_TXRUNF3_Msk               (_UINT32_(0x1) << I2SMCC_IERA_TXRUNF3_Pos)           /* (I2SMCC_IERA) I2S Transmit Right 3  or TDM Channel [2x]+1 Underrun Interrupt Enable Mask */
#define I2SMCC_IERA_TXRUNF3(value)            (I2SMCC_IERA_TXRUNF3_Msk & (_UINT32_(value) << I2SMCC_IERA_TXRUNF3_Pos)) /* Assignment of value for TXRUNF3 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXLRDY0_Pos               _UINT32_(16)                                         /* (I2SMCC_IERA) I2S Receive Left 0  or TDM Channel 2x Ready Interrupt Enable Position */
#define I2SMCC_IERA_RXLRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXLRDY0_Pos)           /* (I2SMCC_IERA) I2S Receive Left 0  or TDM Channel 2x Ready Interrupt Enable Mask */
#define I2SMCC_IERA_RXLRDY0(value)            (I2SMCC_IERA_RXLRDY0_Msk & (_UINT32_(value) << I2SMCC_IERA_RXLRDY0_Pos)) /* Assignment of value for RXLRDY0 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXRRDY0_Pos               _UINT32_(17)                                         /* (I2SMCC_IERA) I2S Receive Right 0  or TDM Channel [2x]+1 Ready Interrupt Enable Position */
#define I2SMCC_IERA_RXRRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXRRDY0_Pos)           /* (I2SMCC_IERA) I2S Receive Right 0  or TDM Channel [2x]+1 Ready Interrupt Enable Mask */
#define I2SMCC_IERA_RXRRDY0(value)            (I2SMCC_IERA_RXRRDY0_Msk & (_UINT32_(value) << I2SMCC_IERA_RXRRDY0_Pos)) /* Assignment of value for RXRRDY0 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXLRDY1_Pos               _UINT32_(18)                                         /* (I2SMCC_IERA) I2S Receive Left 1  or TDM Channel 2x Ready Interrupt Enable Position */
#define I2SMCC_IERA_RXLRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXLRDY1_Pos)           /* (I2SMCC_IERA) I2S Receive Left 1  or TDM Channel 2x Ready Interrupt Enable Mask */
#define I2SMCC_IERA_RXLRDY1(value)            (I2SMCC_IERA_RXLRDY1_Msk & (_UINT32_(value) << I2SMCC_IERA_RXLRDY1_Pos)) /* Assignment of value for RXLRDY1 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXRRDY1_Pos               _UINT32_(19)                                         /* (I2SMCC_IERA) I2S Receive Right 1  or TDM Channel [2x]+1 Ready Interrupt Enable Position */
#define I2SMCC_IERA_RXRRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXRRDY1_Pos)           /* (I2SMCC_IERA) I2S Receive Right 1  or TDM Channel [2x]+1 Ready Interrupt Enable Mask */
#define I2SMCC_IERA_RXRRDY1(value)            (I2SMCC_IERA_RXRRDY1_Msk & (_UINT32_(value) << I2SMCC_IERA_RXRRDY1_Pos)) /* Assignment of value for RXRRDY1 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXLRDY2_Pos               _UINT32_(20)                                         /* (I2SMCC_IERA) I2S Receive Left 2  or TDM Channel 2x Ready Interrupt Enable Position */
#define I2SMCC_IERA_RXLRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXLRDY2_Pos)           /* (I2SMCC_IERA) I2S Receive Left 2  or TDM Channel 2x Ready Interrupt Enable Mask */
#define I2SMCC_IERA_RXLRDY2(value)            (I2SMCC_IERA_RXLRDY2_Msk & (_UINT32_(value) << I2SMCC_IERA_RXLRDY2_Pos)) /* Assignment of value for RXLRDY2 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXRRDY2_Pos               _UINT32_(21)                                         /* (I2SMCC_IERA) I2S Receive Right 2  or TDM Channel [2x]+1 Ready Interrupt Enable Position */
#define I2SMCC_IERA_RXRRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXRRDY2_Pos)           /* (I2SMCC_IERA) I2S Receive Right 2  or TDM Channel [2x]+1 Ready Interrupt Enable Mask */
#define I2SMCC_IERA_RXRRDY2(value)            (I2SMCC_IERA_RXRRDY2_Msk & (_UINT32_(value) << I2SMCC_IERA_RXRRDY2_Pos)) /* Assignment of value for RXRRDY2 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXLRDY3_Pos               _UINT32_(22)                                         /* (I2SMCC_IERA) I2S Receive Left 3  or TDM Channel 2x Ready Interrupt Enable Position */
#define I2SMCC_IERA_RXLRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXLRDY3_Pos)           /* (I2SMCC_IERA) I2S Receive Left 3  or TDM Channel 2x Ready Interrupt Enable Mask */
#define I2SMCC_IERA_RXLRDY3(value)            (I2SMCC_IERA_RXLRDY3_Msk & (_UINT32_(value) << I2SMCC_IERA_RXLRDY3_Pos)) /* Assignment of value for RXLRDY3 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXRRDY3_Pos               _UINT32_(23)                                         /* (I2SMCC_IERA) I2S Receive Right 3  or TDM Channel [2x]+1 Ready Interrupt Enable Position */
#define I2SMCC_IERA_RXRRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXRRDY3_Pos)           /* (I2SMCC_IERA) I2S Receive Right 3  or TDM Channel [2x]+1 Ready Interrupt Enable Mask */
#define I2SMCC_IERA_RXRRDY3(value)            (I2SMCC_IERA_RXRRDY3_Msk & (_UINT32_(value) << I2SMCC_IERA_RXRRDY3_Pos)) /* Assignment of value for RXRRDY3 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXLOVF0_Pos               _UINT32_(24)                                         /* (I2SMCC_IERA) I2S Receive Left 0  or TDM Channel 2x Overrun Interrupt Enable Position */
#define I2SMCC_IERA_RXLOVF0_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXLOVF0_Pos)           /* (I2SMCC_IERA) I2S Receive Left 0  or TDM Channel 2x Overrun Interrupt Enable Mask */
#define I2SMCC_IERA_RXLOVF0(value)            (I2SMCC_IERA_RXLOVF0_Msk & (_UINT32_(value) << I2SMCC_IERA_RXLOVF0_Pos)) /* Assignment of value for RXLOVF0 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXROVF0_Pos               _UINT32_(25)                                         /* (I2SMCC_IERA) I2S Receive Right 0  or TDM Channel [2x]+1 Overrun Interrupt Enable Position */
#define I2SMCC_IERA_RXROVF0_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXROVF0_Pos)           /* (I2SMCC_IERA) I2S Receive Right 0  or TDM Channel [2x]+1 Overrun Interrupt Enable Mask */
#define I2SMCC_IERA_RXROVF0(value)            (I2SMCC_IERA_RXROVF0_Msk & (_UINT32_(value) << I2SMCC_IERA_RXROVF0_Pos)) /* Assignment of value for RXROVF0 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXLOVF1_Pos               _UINT32_(26)                                         /* (I2SMCC_IERA) I2S Receive Left 1  or TDM Channel 2x Overrun Interrupt Enable Position */
#define I2SMCC_IERA_RXLOVF1_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXLOVF1_Pos)           /* (I2SMCC_IERA) I2S Receive Left 1  or TDM Channel 2x Overrun Interrupt Enable Mask */
#define I2SMCC_IERA_RXLOVF1(value)            (I2SMCC_IERA_RXLOVF1_Msk & (_UINT32_(value) << I2SMCC_IERA_RXLOVF1_Pos)) /* Assignment of value for RXLOVF1 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXROVF1_Pos               _UINT32_(27)                                         /* (I2SMCC_IERA) I2S Receive Right 1  or TDM Channel [2x]+1 Overrun Interrupt Enable Position */
#define I2SMCC_IERA_RXROVF1_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXROVF1_Pos)           /* (I2SMCC_IERA) I2S Receive Right 1  or TDM Channel [2x]+1 Overrun Interrupt Enable Mask */
#define I2SMCC_IERA_RXROVF1(value)            (I2SMCC_IERA_RXROVF1_Msk & (_UINT32_(value) << I2SMCC_IERA_RXROVF1_Pos)) /* Assignment of value for RXROVF1 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXLOVF2_Pos               _UINT32_(28)                                         /* (I2SMCC_IERA) I2S Receive Left 2  or TDM Channel 2x Overrun Interrupt Enable Position */
#define I2SMCC_IERA_RXLOVF2_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXLOVF2_Pos)           /* (I2SMCC_IERA) I2S Receive Left 2  or TDM Channel 2x Overrun Interrupt Enable Mask */
#define I2SMCC_IERA_RXLOVF2(value)            (I2SMCC_IERA_RXLOVF2_Msk & (_UINT32_(value) << I2SMCC_IERA_RXLOVF2_Pos)) /* Assignment of value for RXLOVF2 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXROVF2_Pos               _UINT32_(29)                                         /* (I2SMCC_IERA) I2S Receive Right 2  or TDM Channel [2x]+1 Overrun Interrupt Enable Position */
#define I2SMCC_IERA_RXROVF2_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXROVF2_Pos)           /* (I2SMCC_IERA) I2S Receive Right 2  or TDM Channel [2x]+1 Overrun Interrupt Enable Mask */
#define I2SMCC_IERA_RXROVF2(value)            (I2SMCC_IERA_RXROVF2_Msk & (_UINT32_(value) << I2SMCC_IERA_RXROVF2_Pos)) /* Assignment of value for RXROVF2 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXLOVF3_Pos               _UINT32_(30)                                         /* (I2SMCC_IERA) I2S Receive Left 3  or TDM Channel 2x Overrun Interrupt Enable Position */
#define I2SMCC_IERA_RXLOVF3_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXLOVF3_Pos)           /* (I2SMCC_IERA) I2S Receive Left 3  or TDM Channel 2x Overrun Interrupt Enable Mask */
#define I2SMCC_IERA_RXLOVF3(value)            (I2SMCC_IERA_RXLOVF3_Msk & (_UINT32_(value) << I2SMCC_IERA_RXLOVF3_Pos)) /* Assignment of value for RXLOVF3 in the I2SMCC_IERA register */
#define I2SMCC_IERA_RXROVF3_Pos               _UINT32_(31)                                         /* (I2SMCC_IERA) I2S Receive Right 3  or TDM Channel [2x]+1 Overrun Interrupt Enable Position */
#define I2SMCC_IERA_RXROVF3_Msk               (_UINT32_(0x1) << I2SMCC_IERA_RXROVF3_Pos)           /* (I2SMCC_IERA) I2S Receive Right 3  or TDM Channel [2x]+1 Overrun Interrupt Enable Mask */
#define I2SMCC_IERA_RXROVF3(value)            (I2SMCC_IERA_RXROVF3_Msk & (_UINT32_(value) << I2SMCC_IERA_RXROVF3_Pos)) /* Assignment of value for RXROVF3 in the I2SMCC_IERA register */
#define I2SMCC_IERA_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_IERA) Register Mask  */


/* -------- I2SMCC_IDRA : (I2SMCC Offset: 0x14) ( /W 32) Interrupt Disable Register A -------- */
#define I2SMCC_IDRA_TXLRDY0_Pos               _UINT32_(0)                                          /* (I2SMCC_IDRA) I2S Transmit Left 0  or TDM Channel 2x ReadyInterrupt Disable Position */
#define I2SMCC_IDRA_TXLRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXLRDY0_Pos)           /* (I2SMCC_IDRA) I2S Transmit Left 0  or TDM Channel 2x ReadyInterrupt Disable Mask */
#define I2SMCC_IDRA_TXLRDY0(value)            (I2SMCC_IDRA_TXLRDY0_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXLRDY0_Pos)) /* Assignment of value for TXLRDY0 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXRRDY0_Pos               _UINT32_(1)                                          /* (I2SMCC_IDRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Ready Interrupt Disable Position */
#define I2SMCC_IDRA_TXRRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXRRDY0_Pos)           /* (I2SMCC_IDRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_TXRRDY0(value)            (I2SMCC_IDRA_TXRRDY0_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXRRDY0_Pos)) /* Assignment of value for TXRRDY0 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXLRDY1_Pos               _UINT32_(2)                                          /* (I2SMCC_IDRA) I2S Transmit Left 1  or TDM Channel 2x ReadyInterrupt Disable Position */
#define I2SMCC_IDRA_TXLRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXLRDY1_Pos)           /* (I2SMCC_IDRA) I2S Transmit Left 1  or TDM Channel 2x ReadyInterrupt Disable Mask */
#define I2SMCC_IDRA_TXLRDY1(value)            (I2SMCC_IDRA_TXLRDY1_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXLRDY1_Pos)) /* Assignment of value for TXLRDY1 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXRRDY1_Pos               _UINT32_(3)                                          /* (I2SMCC_IDRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Ready Interrupt Disable Position */
#define I2SMCC_IDRA_TXRRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXRRDY1_Pos)           /* (I2SMCC_IDRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_TXRRDY1(value)            (I2SMCC_IDRA_TXRRDY1_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXRRDY1_Pos)) /* Assignment of value for TXRRDY1 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXLRDY2_Pos               _UINT32_(4)                                          /* (I2SMCC_IDRA) I2S Transmit Left 2  or TDM Channel 2x ReadyInterrupt Disable Position */
#define I2SMCC_IDRA_TXLRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXLRDY2_Pos)           /* (I2SMCC_IDRA) I2S Transmit Left 2  or TDM Channel 2x ReadyInterrupt Disable Mask */
#define I2SMCC_IDRA_TXLRDY2(value)            (I2SMCC_IDRA_TXLRDY2_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXLRDY2_Pos)) /* Assignment of value for TXLRDY2 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXRRDY2_Pos               _UINT32_(5)                                          /* (I2SMCC_IDRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Ready Interrupt Disable Position */
#define I2SMCC_IDRA_TXRRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXRRDY2_Pos)           /* (I2SMCC_IDRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_TXRRDY2(value)            (I2SMCC_IDRA_TXRRDY2_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXRRDY2_Pos)) /* Assignment of value for TXRRDY2 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXLRDY3_Pos               _UINT32_(6)                                          /* (I2SMCC_IDRA) I2S Transmit Left 3  or TDM Channel 2x ReadyInterrupt Disable Position */
#define I2SMCC_IDRA_TXLRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXLRDY3_Pos)           /* (I2SMCC_IDRA) I2S Transmit Left 3  or TDM Channel 2x ReadyInterrupt Disable Mask */
#define I2SMCC_IDRA_TXLRDY3(value)            (I2SMCC_IDRA_TXLRDY3_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXLRDY3_Pos)) /* Assignment of value for TXLRDY3 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXRRDY3_Pos               _UINT32_(7)                                          /* (I2SMCC_IDRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Ready Interrupt Disable Position */
#define I2SMCC_IDRA_TXRRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXRRDY3_Pos)           /* (I2SMCC_IDRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_TXRRDY3(value)            (I2SMCC_IDRA_TXRRDY3_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXRRDY3_Pos)) /* Assignment of value for TXRRDY3 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXLUNF0_Pos               _UINT32_(8)                                          /* (I2SMCC_IDRA) I2S Transmit Left 0  or TDM Channel 2x Underrun Interrupt Disable Position */
#define I2SMCC_IDRA_TXLUNF0_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXLUNF0_Pos)           /* (I2SMCC_IDRA) I2S Transmit Left 0  or TDM Channel 2x Underrun Interrupt Disable Mask */
#define I2SMCC_IDRA_TXLUNF0(value)            (I2SMCC_IDRA_TXLUNF0_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXLUNF0_Pos)) /* Assignment of value for TXLUNF0 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXRUNF0_Pos               _UINT32_(9)                                          /* (I2SMCC_IDRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Underrun Interrupt Disable Position */
#define I2SMCC_IDRA_TXRUNF0_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXRUNF0_Pos)           /* (I2SMCC_IDRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Underrun Interrupt Disable Mask */
#define I2SMCC_IDRA_TXRUNF0(value)            (I2SMCC_IDRA_TXRUNF0_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXRUNF0_Pos)) /* Assignment of value for TXRUNF0 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXLUNF1_Pos               _UINT32_(10)                                         /* (I2SMCC_IDRA) I2S Transmit Left 1  or TDM Channel 2x Underrun Interrupt Disable Position */
#define I2SMCC_IDRA_TXLUNF1_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXLUNF1_Pos)           /* (I2SMCC_IDRA) I2S Transmit Left 1  or TDM Channel 2x Underrun Interrupt Disable Mask */
#define I2SMCC_IDRA_TXLUNF1(value)            (I2SMCC_IDRA_TXLUNF1_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXLUNF1_Pos)) /* Assignment of value for TXLUNF1 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXRUNF1_Pos               _UINT32_(11)                                         /* (I2SMCC_IDRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Underrun Interrupt Disable Position */
#define I2SMCC_IDRA_TXRUNF1_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXRUNF1_Pos)           /* (I2SMCC_IDRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Underrun Interrupt Disable Mask */
#define I2SMCC_IDRA_TXRUNF1(value)            (I2SMCC_IDRA_TXRUNF1_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXRUNF1_Pos)) /* Assignment of value for TXRUNF1 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXLUNF2_Pos               _UINT32_(12)                                         /* (I2SMCC_IDRA) I2S Transmit Left 2  or TDM Channel 2x Underrun Interrupt Disable Position */
#define I2SMCC_IDRA_TXLUNF2_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXLUNF2_Pos)           /* (I2SMCC_IDRA) I2S Transmit Left 2  or TDM Channel 2x Underrun Interrupt Disable Mask */
#define I2SMCC_IDRA_TXLUNF2(value)            (I2SMCC_IDRA_TXLUNF2_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXLUNF2_Pos)) /* Assignment of value for TXLUNF2 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXRUNF2_Pos               _UINT32_(13)                                         /* (I2SMCC_IDRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Underrun Interrupt Disable Position */
#define I2SMCC_IDRA_TXRUNF2_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXRUNF2_Pos)           /* (I2SMCC_IDRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Underrun Interrupt Disable Mask */
#define I2SMCC_IDRA_TXRUNF2(value)            (I2SMCC_IDRA_TXRUNF2_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXRUNF2_Pos)) /* Assignment of value for TXRUNF2 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXLUNF3_Pos               _UINT32_(14)                                         /* (I2SMCC_IDRA) I2S Transmit Left 3  or TDM Channel 2x Underrun Interrupt Disable Position */
#define I2SMCC_IDRA_TXLUNF3_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXLUNF3_Pos)           /* (I2SMCC_IDRA) I2S Transmit Left 3  or TDM Channel 2x Underrun Interrupt Disable Mask */
#define I2SMCC_IDRA_TXLUNF3(value)            (I2SMCC_IDRA_TXLUNF3_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXLUNF3_Pos)) /* Assignment of value for TXLUNF3 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_TXRUNF3_Pos               _UINT32_(15)                                         /* (I2SMCC_IDRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Underrun Interrupt Disable Position */
#define I2SMCC_IDRA_TXRUNF3_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_TXRUNF3_Pos)           /* (I2SMCC_IDRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Underrun Interrupt Disable Mask */
#define I2SMCC_IDRA_TXRUNF3(value)            (I2SMCC_IDRA_TXRUNF3_Msk & (_UINT32_(value) << I2SMCC_IDRA_TXRUNF3_Pos)) /* Assignment of value for TXRUNF3 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXLRDY0_Pos               _UINT32_(16)                                         /* (I2SMCC_IDRA) I2S Receive Left 0  or TDM Channel 2x Ready Interrupt Disable Position */
#define I2SMCC_IDRA_RXLRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXLRDY0_Pos)           /* (I2SMCC_IDRA) I2S Receive Left 0  or TDM Channel 2x Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_RXLRDY0(value)            (I2SMCC_IDRA_RXLRDY0_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXLRDY0_Pos)) /* Assignment of value for RXLRDY0 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXRRDY0_Pos               _UINT32_(17)                                         /* (I2SMCC_IDRA) I2S Receive Right 0  or TDM Channel [2x]+1 Ready Interrupt Disable Position */
#define I2SMCC_IDRA_RXRRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXRRDY0_Pos)           /* (I2SMCC_IDRA) I2S Receive Right 0  or TDM Channel [2x]+1 Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_RXRRDY0(value)            (I2SMCC_IDRA_RXRRDY0_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXRRDY0_Pos)) /* Assignment of value for RXRRDY0 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXLRDY1_Pos               _UINT32_(18)                                         /* (I2SMCC_IDRA) I2S Receive Left 1  or TDM Channel 2x Ready Interrupt Disable Position */
#define I2SMCC_IDRA_RXLRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXLRDY1_Pos)           /* (I2SMCC_IDRA) I2S Receive Left 1  or TDM Channel 2x Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_RXLRDY1(value)            (I2SMCC_IDRA_RXLRDY1_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXLRDY1_Pos)) /* Assignment of value for RXLRDY1 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXRRDY1_Pos               _UINT32_(19)                                         /* (I2SMCC_IDRA) I2S Receive Right 1  or TDM Channel [2x]+1 Ready Interrupt Disable Position */
#define I2SMCC_IDRA_RXRRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXRRDY1_Pos)           /* (I2SMCC_IDRA) I2S Receive Right 1  or TDM Channel [2x]+1 Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_RXRRDY1(value)            (I2SMCC_IDRA_RXRRDY1_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXRRDY1_Pos)) /* Assignment of value for RXRRDY1 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXLRDY2_Pos               _UINT32_(20)                                         /* (I2SMCC_IDRA) I2S Receive Left 2  or TDM Channel 2x Ready Interrupt Disable Position */
#define I2SMCC_IDRA_RXLRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXLRDY2_Pos)           /* (I2SMCC_IDRA) I2S Receive Left 2  or TDM Channel 2x Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_RXLRDY2(value)            (I2SMCC_IDRA_RXLRDY2_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXLRDY2_Pos)) /* Assignment of value for RXLRDY2 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXRRDY2_Pos               _UINT32_(21)                                         /* (I2SMCC_IDRA) I2S Receive Right 2  or TDM Channel [2x]+1 Ready Interrupt Disable Position */
#define I2SMCC_IDRA_RXRRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXRRDY2_Pos)           /* (I2SMCC_IDRA) I2S Receive Right 2  or TDM Channel [2x]+1 Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_RXRRDY2(value)            (I2SMCC_IDRA_RXRRDY2_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXRRDY2_Pos)) /* Assignment of value for RXRRDY2 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXLRDY3_Pos               _UINT32_(22)                                         /* (I2SMCC_IDRA) I2S Receive Left 3  or TDM Channel 2x Ready Interrupt Disable Position */
#define I2SMCC_IDRA_RXLRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXLRDY3_Pos)           /* (I2SMCC_IDRA) I2S Receive Left 3  or TDM Channel 2x Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_RXLRDY3(value)            (I2SMCC_IDRA_RXLRDY3_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXLRDY3_Pos)) /* Assignment of value for RXLRDY3 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXRRDY3_Pos               _UINT32_(23)                                         /* (I2SMCC_IDRA) I2S Receive Right 3  or TDM Channel [2x]+1 Ready Interrupt Disable Position */
#define I2SMCC_IDRA_RXRRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXRRDY3_Pos)           /* (I2SMCC_IDRA) I2S Receive Right 3  or TDM Channel [2x]+1 Ready Interrupt Disable Mask */
#define I2SMCC_IDRA_RXRRDY3(value)            (I2SMCC_IDRA_RXRRDY3_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXRRDY3_Pos)) /* Assignment of value for RXRRDY3 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXLOVF0_Pos               _UINT32_(24)                                         /* (I2SMCC_IDRA) I2S Receive Left 0  or TDM Channel 2x Overrun Interrupt Disable Position */
#define I2SMCC_IDRA_RXLOVF0_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXLOVF0_Pos)           /* (I2SMCC_IDRA) I2S Receive Left 0  or TDM Channel 2x Overrun Interrupt Disable Mask */
#define I2SMCC_IDRA_RXLOVF0(value)            (I2SMCC_IDRA_RXLOVF0_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXLOVF0_Pos)) /* Assignment of value for RXLOVF0 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXROVF0_Pos               _UINT32_(25)                                         /* (I2SMCC_IDRA) I2S Receive Right 0  or TDM Channel [2x]+1 Overrun Interrupt Disable Position */
#define I2SMCC_IDRA_RXROVF0_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXROVF0_Pos)           /* (I2SMCC_IDRA) I2S Receive Right 0  or TDM Channel [2x]+1 Overrun Interrupt Disable Mask */
#define I2SMCC_IDRA_RXROVF0(value)            (I2SMCC_IDRA_RXROVF0_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXROVF0_Pos)) /* Assignment of value for RXROVF0 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXLOVF1_Pos               _UINT32_(26)                                         /* (I2SMCC_IDRA) I2S Receive Left 1  or TDM Channel 2x Overrun Interrupt Disable Position */
#define I2SMCC_IDRA_RXLOVF1_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXLOVF1_Pos)           /* (I2SMCC_IDRA) I2S Receive Left 1  or TDM Channel 2x Overrun Interrupt Disable Mask */
#define I2SMCC_IDRA_RXLOVF1(value)            (I2SMCC_IDRA_RXLOVF1_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXLOVF1_Pos)) /* Assignment of value for RXLOVF1 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXROVF1_Pos               _UINT32_(27)                                         /* (I2SMCC_IDRA) I2S Receive Right 1  or TDM Channel [2x]+1 Overrun Interrupt Disable Position */
#define I2SMCC_IDRA_RXROVF1_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXROVF1_Pos)           /* (I2SMCC_IDRA) I2S Receive Right 1  or TDM Channel [2x]+1 Overrun Interrupt Disable Mask */
#define I2SMCC_IDRA_RXROVF1(value)            (I2SMCC_IDRA_RXROVF1_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXROVF1_Pos)) /* Assignment of value for RXROVF1 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXLOVF2_Pos               _UINT32_(28)                                         /* (I2SMCC_IDRA) I2S Receive Left 2  or TDM Channel 2x Overrun Interrupt Disable Position */
#define I2SMCC_IDRA_RXLOVF2_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXLOVF2_Pos)           /* (I2SMCC_IDRA) I2S Receive Left 2  or TDM Channel 2x Overrun Interrupt Disable Mask */
#define I2SMCC_IDRA_RXLOVF2(value)            (I2SMCC_IDRA_RXLOVF2_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXLOVF2_Pos)) /* Assignment of value for RXLOVF2 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXROVF2_Pos               _UINT32_(29)                                         /* (I2SMCC_IDRA) I2S Receive Right 2  or TDM Channel [2x]+1 Overrun Interrupt Disable Position */
#define I2SMCC_IDRA_RXROVF2_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXROVF2_Pos)           /* (I2SMCC_IDRA) I2S Receive Right 2  or TDM Channel [2x]+1 Overrun Interrupt Disable Mask */
#define I2SMCC_IDRA_RXROVF2(value)            (I2SMCC_IDRA_RXROVF2_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXROVF2_Pos)) /* Assignment of value for RXROVF2 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXLOVF3_Pos               _UINT32_(30)                                         /* (I2SMCC_IDRA) I2S Receive Left 3  or TDM Channel 2x Overrun Interrupt Disable Position */
#define I2SMCC_IDRA_RXLOVF3_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXLOVF3_Pos)           /* (I2SMCC_IDRA) I2S Receive Left 3  or TDM Channel 2x Overrun Interrupt Disable Mask */
#define I2SMCC_IDRA_RXLOVF3(value)            (I2SMCC_IDRA_RXLOVF3_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXLOVF3_Pos)) /* Assignment of value for RXLOVF3 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_RXROVF3_Pos               _UINT32_(31)                                         /* (I2SMCC_IDRA) I2S Receive Right 3  or TDM Channel [2x]+1 Overrun Interrupt Disable Position */
#define I2SMCC_IDRA_RXROVF3_Msk               (_UINT32_(0x1) << I2SMCC_IDRA_RXROVF3_Pos)           /* (I2SMCC_IDRA) I2S Receive Right 3  or TDM Channel [2x]+1 Overrun Interrupt Disable Mask */
#define I2SMCC_IDRA_RXROVF3(value)            (I2SMCC_IDRA_RXROVF3_Msk & (_UINT32_(value) << I2SMCC_IDRA_RXROVF3_Pos)) /* Assignment of value for RXROVF3 in the I2SMCC_IDRA register */
#define I2SMCC_IDRA_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_IDRA) Register Mask  */


/* -------- I2SMCC_IMRA : (I2SMCC Offset: 0x18) ( R/ 32) Interrupt Mask Register A -------- */
#define I2SMCC_IMRA_RESETVALUE                _UINT32_(0x00)                                       /*  (I2SMCC_IMRA) Interrupt Mask Register A  Reset Value */

#define I2SMCC_IMRA_TXLRDY0_Pos               _UINT32_(0)                                          /* (I2SMCC_IMRA) I2S Transmit Left 0  or TDM Channel 2x ReadyInterrupt Mask Position */
#define I2SMCC_IMRA_TXLRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXLRDY0_Pos)           /* (I2SMCC_IMRA) I2S Transmit Left 0  or TDM Channel 2x ReadyInterrupt Mask Mask */
#define I2SMCC_IMRA_TXLRDY0(value)            (I2SMCC_IMRA_TXLRDY0_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXLRDY0_Pos)) /* Assignment of value for TXLRDY0 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXRRDY0_Pos               _UINT32_(1)                                          /* (I2SMCC_IMRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Ready Interrupt Mask Position */
#define I2SMCC_IMRA_TXRRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXRRDY0_Pos)           /* (I2SMCC_IMRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_TXRRDY0(value)            (I2SMCC_IMRA_TXRRDY0_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXRRDY0_Pos)) /* Assignment of value for TXRRDY0 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXLRDY1_Pos               _UINT32_(2)                                          /* (I2SMCC_IMRA) I2S Transmit Left 1  or TDM Channel 2x ReadyInterrupt Mask Position */
#define I2SMCC_IMRA_TXLRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXLRDY1_Pos)           /* (I2SMCC_IMRA) I2S Transmit Left 1  or TDM Channel 2x ReadyInterrupt Mask Mask */
#define I2SMCC_IMRA_TXLRDY1(value)            (I2SMCC_IMRA_TXLRDY1_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXLRDY1_Pos)) /* Assignment of value for TXLRDY1 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXRRDY1_Pos               _UINT32_(3)                                          /* (I2SMCC_IMRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Ready Interrupt Mask Position */
#define I2SMCC_IMRA_TXRRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXRRDY1_Pos)           /* (I2SMCC_IMRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_TXRRDY1(value)            (I2SMCC_IMRA_TXRRDY1_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXRRDY1_Pos)) /* Assignment of value for TXRRDY1 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXLRDY2_Pos               _UINT32_(4)                                          /* (I2SMCC_IMRA) I2S Transmit Left 2  or TDM Channel 2x ReadyInterrupt Mask Position */
#define I2SMCC_IMRA_TXLRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXLRDY2_Pos)           /* (I2SMCC_IMRA) I2S Transmit Left 2  or TDM Channel 2x ReadyInterrupt Mask Mask */
#define I2SMCC_IMRA_TXLRDY2(value)            (I2SMCC_IMRA_TXLRDY2_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXLRDY2_Pos)) /* Assignment of value for TXLRDY2 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXRRDY2_Pos               _UINT32_(5)                                          /* (I2SMCC_IMRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Ready Interrupt Mask Position */
#define I2SMCC_IMRA_TXRRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXRRDY2_Pos)           /* (I2SMCC_IMRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_TXRRDY2(value)            (I2SMCC_IMRA_TXRRDY2_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXRRDY2_Pos)) /* Assignment of value for TXRRDY2 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXLRDY3_Pos               _UINT32_(6)                                          /* (I2SMCC_IMRA) I2S Transmit Left 3  or TDM Channel 2x ReadyInterrupt Mask Position */
#define I2SMCC_IMRA_TXLRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXLRDY3_Pos)           /* (I2SMCC_IMRA) I2S Transmit Left 3  or TDM Channel 2x ReadyInterrupt Mask Mask */
#define I2SMCC_IMRA_TXLRDY3(value)            (I2SMCC_IMRA_TXLRDY3_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXLRDY3_Pos)) /* Assignment of value for TXLRDY3 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXRRDY3_Pos               _UINT32_(7)                                          /* (I2SMCC_IMRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Ready Interrupt Mask Position */
#define I2SMCC_IMRA_TXRRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXRRDY3_Pos)           /* (I2SMCC_IMRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_TXRRDY3(value)            (I2SMCC_IMRA_TXRRDY3_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXRRDY3_Pos)) /* Assignment of value for TXRRDY3 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXLUNF0_Pos               _UINT32_(8)                                          /* (I2SMCC_IMRA) I2S Transmit Left 0  or TDM Channel 2x Underrun Interrupt Mask Position */
#define I2SMCC_IMRA_TXLUNF0_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXLUNF0_Pos)           /* (I2SMCC_IMRA) I2S Transmit Left 0  or TDM Channel 2x Underrun Interrupt Mask Mask */
#define I2SMCC_IMRA_TXLUNF0(value)            (I2SMCC_IMRA_TXLUNF0_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXLUNF0_Pos)) /* Assignment of value for TXLUNF0 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXRUNF0_Pos               _UINT32_(9)                                          /* (I2SMCC_IMRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Underrun Interrupt Mask Position */
#define I2SMCC_IMRA_TXRUNF0_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXRUNF0_Pos)           /* (I2SMCC_IMRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Underrun Interrupt Mask Mask */
#define I2SMCC_IMRA_TXRUNF0(value)            (I2SMCC_IMRA_TXRUNF0_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXRUNF0_Pos)) /* Assignment of value for TXRUNF0 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXLUNF1_Pos               _UINT32_(10)                                         /* (I2SMCC_IMRA) I2S Transmit Left 1  or TDM Channel 2x Underrun Interrupt Mask Position */
#define I2SMCC_IMRA_TXLUNF1_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXLUNF1_Pos)           /* (I2SMCC_IMRA) I2S Transmit Left 1  or TDM Channel 2x Underrun Interrupt Mask Mask */
#define I2SMCC_IMRA_TXLUNF1(value)            (I2SMCC_IMRA_TXLUNF1_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXLUNF1_Pos)) /* Assignment of value for TXLUNF1 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXRUNF1_Pos               _UINT32_(11)                                         /* (I2SMCC_IMRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Underrun Interrupt Mask Position */
#define I2SMCC_IMRA_TXRUNF1_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXRUNF1_Pos)           /* (I2SMCC_IMRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Underrun Interrupt Mask Mask */
#define I2SMCC_IMRA_TXRUNF1(value)            (I2SMCC_IMRA_TXRUNF1_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXRUNF1_Pos)) /* Assignment of value for TXRUNF1 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXLUNF2_Pos               _UINT32_(12)                                         /* (I2SMCC_IMRA) I2S Transmit Left 2  or TDM Channel 2x Underrun Interrupt Mask Position */
#define I2SMCC_IMRA_TXLUNF2_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXLUNF2_Pos)           /* (I2SMCC_IMRA) I2S Transmit Left 2  or TDM Channel 2x Underrun Interrupt Mask Mask */
#define I2SMCC_IMRA_TXLUNF2(value)            (I2SMCC_IMRA_TXLUNF2_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXLUNF2_Pos)) /* Assignment of value for TXLUNF2 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXRUNF2_Pos               _UINT32_(13)                                         /* (I2SMCC_IMRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Underrun Interrupt Mask Position */
#define I2SMCC_IMRA_TXRUNF2_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXRUNF2_Pos)           /* (I2SMCC_IMRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Underrun Interrupt Mask Mask */
#define I2SMCC_IMRA_TXRUNF2(value)            (I2SMCC_IMRA_TXRUNF2_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXRUNF2_Pos)) /* Assignment of value for TXRUNF2 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXLUNF3_Pos               _UINT32_(14)                                         /* (I2SMCC_IMRA) I2S Transmit Left 3  or TDM Channel 2x Underrun Interrupt Mask Position */
#define I2SMCC_IMRA_TXLUNF3_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXLUNF3_Pos)           /* (I2SMCC_IMRA) I2S Transmit Left 3  or TDM Channel 2x Underrun Interrupt Mask Mask */
#define I2SMCC_IMRA_TXLUNF3(value)            (I2SMCC_IMRA_TXLUNF3_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXLUNF3_Pos)) /* Assignment of value for TXLUNF3 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_TXRUNF3_Pos               _UINT32_(15)                                         /* (I2SMCC_IMRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Underrun Interrupt Mask Position */
#define I2SMCC_IMRA_TXRUNF3_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_TXRUNF3_Pos)           /* (I2SMCC_IMRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Underrun Interrupt Mask Mask */
#define I2SMCC_IMRA_TXRUNF3(value)            (I2SMCC_IMRA_TXRUNF3_Msk & (_UINT32_(value) << I2SMCC_IMRA_TXRUNF3_Pos)) /* Assignment of value for TXRUNF3 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXLRDY0_Pos               _UINT32_(16)                                         /* (I2SMCC_IMRA) I2S Receive Left 0  or TDM Channel 2x Ready Interrupt Mask Position */
#define I2SMCC_IMRA_RXLRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXLRDY0_Pos)           /* (I2SMCC_IMRA) I2S Receive Left 0  or TDM Channel 2x Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_RXLRDY0(value)            (I2SMCC_IMRA_RXLRDY0_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXLRDY0_Pos)) /* Assignment of value for RXLRDY0 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXRRDY0_Pos               _UINT32_(17)                                         /* (I2SMCC_IMRA) I2S Receive Right 0  or TDM Channel [2x]+1 Ready Interrupt Mask Position */
#define I2SMCC_IMRA_RXRRDY0_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXRRDY0_Pos)           /* (I2SMCC_IMRA) I2S Receive Right 0  or TDM Channel [2x]+1 Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_RXRRDY0(value)            (I2SMCC_IMRA_RXRRDY0_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXRRDY0_Pos)) /* Assignment of value for RXRRDY0 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXLRDY1_Pos               _UINT32_(18)                                         /* (I2SMCC_IMRA) I2S Receive Left 1  or TDM Channel 2x Ready Interrupt Mask Position */
#define I2SMCC_IMRA_RXLRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXLRDY1_Pos)           /* (I2SMCC_IMRA) I2S Receive Left 1  or TDM Channel 2x Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_RXLRDY1(value)            (I2SMCC_IMRA_RXLRDY1_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXLRDY1_Pos)) /* Assignment of value for RXLRDY1 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXRRDY1_Pos               _UINT32_(19)                                         /* (I2SMCC_IMRA) I2S Receive Right 1  or TDM Channel [2x]+1 Ready Interrupt Mask Position */
#define I2SMCC_IMRA_RXRRDY1_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXRRDY1_Pos)           /* (I2SMCC_IMRA) I2S Receive Right 1  or TDM Channel [2x]+1 Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_RXRRDY1(value)            (I2SMCC_IMRA_RXRRDY1_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXRRDY1_Pos)) /* Assignment of value for RXRRDY1 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXLRDY2_Pos               _UINT32_(20)                                         /* (I2SMCC_IMRA) I2S Receive Left 2  or TDM Channel 2x Ready Interrupt Mask Position */
#define I2SMCC_IMRA_RXLRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXLRDY2_Pos)           /* (I2SMCC_IMRA) I2S Receive Left 2  or TDM Channel 2x Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_RXLRDY2(value)            (I2SMCC_IMRA_RXLRDY2_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXLRDY2_Pos)) /* Assignment of value for RXLRDY2 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXRRDY2_Pos               _UINT32_(21)                                         /* (I2SMCC_IMRA) I2S Receive Right 2  or TDM Channel [2x]+1 Ready Interrupt Mask Position */
#define I2SMCC_IMRA_RXRRDY2_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXRRDY2_Pos)           /* (I2SMCC_IMRA) I2S Receive Right 2  or TDM Channel [2x]+1 Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_RXRRDY2(value)            (I2SMCC_IMRA_RXRRDY2_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXRRDY2_Pos)) /* Assignment of value for RXRRDY2 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXLRDY3_Pos               _UINT32_(22)                                         /* (I2SMCC_IMRA) I2S Receive Left 3  or TDM Channel 2x Ready Interrupt Mask Position */
#define I2SMCC_IMRA_RXLRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXLRDY3_Pos)           /* (I2SMCC_IMRA) I2S Receive Left 3  or TDM Channel 2x Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_RXLRDY3(value)            (I2SMCC_IMRA_RXLRDY3_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXLRDY3_Pos)) /* Assignment of value for RXLRDY3 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXRRDY3_Pos               _UINT32_(23)                                         /* (I2SMCC_IMRA) I2S Receive Right 3  or TDM Channel [2x]+1 Ready Interrupt Mask Position */
#define I2SMCC_IMRA_RXRRDY3_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXRRDY3_Pos)           /* (I2SMCC_IMRA) I2S Receive Right 3  or TDM Channel [2x]+1 Ready Interrupt Mask Mask */
#define I2SMCC_IMRA_RXRRDY3(value)            (I2SMCC_IMRA_RXRRDY3_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXRRDY3_Pos)) /* Assignment of value for RXRRDY3 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXLOVF0_Pos               _UINT32_(24)                                         /* (I2SMCC_IMRA) I2S Receive Left 0  or TDM Channel 2x Overrun Interrupt Mask Position */
#define I2SMCC_IMRA_RXLOVF0_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXLOVF0_Pos)           /* (I2SMCC_IMRA) I2S Receive Left 0  or TDM Channel 2x Overrun Interrupt Mask Mask */
#define I2SMCC_IMRA_RXLOVF0(value)            (I2SMCC_IMRA_RXLOVF0_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXLOVF0_Pos)) /* Assignment of value for RXLOVF0 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXROVF0_Pos               _UINT32_(25)                                         /* (I2SMCC_IMRA) I2S Receive Right 0  or TDM Channel [2x]+1 Overrun Interrupt Mask Position */
#define I2SMCC_IMRA_RXROVF0_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXROVF0_Pos)           /* (I2SMCC_IMRA) I2S Receive Right 0  or TDM Channel [2x]+1 Overrun Interrupt Mask Mask */
#define I2SMCC_IMRA_RXROVF0(value)            (I2SMCC_IMRA_RXROVF0_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXROVF0_Pos)) /* Assignment of value for RXROVF0 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXLOVF1_Pos               _UINT32_(26)                                         /* (I2SMCC_IMRA) I2S Receive Left 1  or TDM Channel 2x Overrun Interrupt Mask Position */
#define I2SMCC_IMRA_RXLOVF1_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXLOVF1_Pos)           /* (I2SMCC_IMRA) I2S Receive Left 1  or TDM Channel 2x Overrun Interrupt Mask Mask */
#define I2SMCC_IMRA_RXLOVF1(value)            (I2SMCC_IMRA_RXLOVF1_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXLOVF1_Pos)) /* Assignment of value for RXLOVF1 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXROVF1_Pos               _UINT32_(27)                                         /* (I2SMCC_IMRA) I2S Receive Right 1  or TDM Channel [2x]+1 Overrun Interrupt Mask Position */
#define I2SMCC_IMRA_RXROVF1_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXROVF1_Pos)           /* (I2SMCC_IMRA) I2S Receive Right 1  or TDM Channel [2x]+1 Overrun Interrupt Mask Mask */
#define I2SMCC_IMRA_RXROVF1(value)            (I2SMCC_IMRA_RXROVF1_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXROVF1_Pos)) /* Assignment of value for RXROVF1 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXLOVF2_Pos               _UINT32_(28)                                         /* (I2SMCC_IMRA) I2S Receive Left 2  or TDM Channel 2x Overrun Interrupt Mask Position */
#define I2SMCC_IMRA_RXLOVF2_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXLOVF2_Pos)           /* (I2SMCC_IMRA) I2S Receive Left 2  or TDM Channel 2x Overrun Interrupt Mask Mask */
#define I2SMCC_IMRA_RXLOVF2(value)            (I2SMCC_IMRA_RXLOVF2_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXLOVF2_Pos)) /* Assignment of value for RXLOVF2 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXROVF2_Pos               _UINT32_(29)                                         /* (I2SMCC_IMRA) I2S Receive Right 2  or TDM Channel [2x]+1 Overrun Interrupt Mask Position */
#define I2SMCC_IMRA_RXROVF2_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXROVF2_Pos)           /* (I2SMCC_IMRA) I2S Receive Right 2  or TDM Channel [2x]+1 Overrun Interrupt Mask Mask */
#define I2SMCC_IMRA_RXROVF2(value)            (I2SMCC_IMRA_RXROVF2_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXROVF2_Pos)) /* Assignment of value for RXROVF2 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXLOVF3_Pos               _UINT32_(30)                                         /* (I2SMCC_IMRA) I2S Receive Left 3  or TDM Channel 2x Overrun Interrupt Mask Position */
#define I2SMCC_IMRA_RXLOVF3_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXLOVF3_Pos)           /* (I2SMCC_IMRA) I2S Receive Left 3  or TDM Channel 2x Overrun Interrupt Mask Mask */
#define I2SMCC_IMRA_RXLOVF3(value)            (I2SMCC_IMRA_RXLOVF3_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXLOVF3_Pos)) /* Assignment of value for RXLOVF3 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_RXROVF3_Pos               _UINT32_(31)                                         /* (I2SMCC_IMRA) I2S Receive Right 3  or TDM Channel [2x]+1 Overrun Interrupt Mask Position */
#define I2SMCC_IMRA_RXROVF3_Msk               (_UINT32_(0x1) << I2SMCC_IMRA_RXROVF3_Pos)           /* (I2SMCC_IMRA) I2S Receive Right 3  or TDM Channel [2x]+1 Overrun Interrupt Mask Mask */
#define I2SMCC_IMRA_RXROVF3(value)            (I2SMCC_IMRA_RXROVF3_Msk & (_UINT32_(value) << I2SMCC_IMRA_RXROVF3_Pos)) /* Assignment of value for RXROVF3 in the I2SMCC_IMRA register */
#define I2SMCC_IMRA_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_IMRA) Register Mask  */


/* -------- I2SMCC_ISRA : (I2SMCC Offset: 0x1C) ( R/ 32) Interrupt Status Register A -------- */
#define I2SMCC_ISRA_RESETVALUE                _UINT32_(0x03)                                       /*  (I2SMCC_ISRA) Interrupt Status Register A  Reset Value */

#define I2SMCC_ISRA_TXLRDY0_Pos               _UINT32_(0)                                          /* (I2SMCC_ISRA) I2S Transmit Left 0  or TDM Channel 2x Ready Flag (Cleared by writing I2SMCC_THR/THLxR) Position */
#define I2SMCC_ISRA_TXLRDY0_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXLRDY0_Pos)           /* (I2SMCC_ISRA) I2S Transmit Left 0  or TDM Channel 2x Ready Flag (Cleared by writing I2SMCC_THR/THLxR) Mask */
#define I2SMCC_ISRA_TXLRDY0(value)            (I2SMCC_ISRA_TXLRDY0_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXLRDY0_Pos)) /* Assignment of value for TXLRDY0 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXLRDY0_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THLxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7.  */
#define   I2SMCC_ISRA_TXLRDY0_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THLxR is empty.  */
#define I2SMCC_ISRA_TXLRDY0_0                 (I2SMCC_ISRA_TXLRDY0_0_Val << I2SMCC_ISRA_TXLRDY0_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THLxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7. Position */
#define I2SMCC_ISRA_TXLRDY0_1                 (I2SMCC_ISRA_TXLRDY0_1_Val << I2SMCC_ISRA_TXLRDY0_Pos) /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THLxR is empty. Position */
#define I2SMCC_ISRA_TXRRDY0_Pos               _UINT32_(1)                                          /* (I2SMCC_ISRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Ready Flag (Cleared by writing I2SMCC_THR/THRxR) Position */
#define I2SMCC_ISRA_TXRRDY0_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXRRDY0_Pos)           /* (I2SMCC_ISRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Ready Flag (Cleared by writing I2SMCC_THR/THRxR) Mask */
#define I2SMCC_ISRA_TXRRDY0(value)            (I2SMCC_ISRA_TXRRDY0_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXRRDY0_Pos)) /* Assignment of value for TXRRDY0 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXRRDY0_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THRxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8.  */
#define   I2SMCC_ISRA_TXRRDY0_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THRxR is empty.  */
#define I2SMCC_ISRA_TXRRDY0_0                 (I2SMCC_ISRA_TXRRDY0_0_Val << I2SMCC_ISRA_TXRRDY0_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THRxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8. Position */
#define I2SMCC_ISRA_TXRRDY0_1                 (I2SMCC_ISRA_TXRRDY0_1_Val << I2SMCC_ISRA_TXRRDY0_Pos) /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THRxR is empty. Position */
#define I2SMCC_ISRA_TXLRDY1_Pos               _UINT32_(2)                                          /* (I2SMCC_ISRA) I2S Transmit Left 1  or TDM Channel 2x Ready Flag (Cleared by writing I2SMCC_THR/THLxR) Position */
#define I2SMCC_ISRA_TXLRDY1_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXLRDY1_Pos)           /* (I2SMCC_ISRA) I2S Transmit Left 1  or TDM Channel 2x Ready Flag (Cleared by writing I2SMCC_THR/THLxR) Mask */
#define I2SMCC_ISRA_TXLRDY1(value)            (I2SMCC_ISRA_TXLRDY1_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXLRDY1_Pos)) /* Assignment of value for TXLRDY1 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXLRDY1_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THLxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7.  */
#define   I2SMCC_ISRA_TXLRDY1_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THLxR is empty.  */
#define I2SMCC_ISRA_TXLRDY1_0                 (I2SMCC_ISRA_TXLRDY1_0_Val << I2SMCC_ISRA_TXLRDY1_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THLxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7. Position */
#define I2SMCC_ISRA_TXLRDY1_1                 (I2SMCC_ISRA_TXLRDY1_1_Val << I2SMCC_ISRA_TXLRDY1_Pos) /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THLxR is empty. Position */
#define I2SMCC_ISRA_TXRRDY1_Pos               _UINT32_(3)                                          /* (I2SMCC_ISRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Ready Flag (Cleared by writing I2SMCC_THR/THRxR) Position */
#define I2SMCC_ISRA_TXRRDY1_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXRRDY1_Pos)           /* (I2SMCC_ISRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Ready Flag (Cleared by writing I2SMCC_THR/THRxR) Mask */
#define I2SMCC_ISRA_TXRRDY1(value)            (I2SMCC_ISRA_TXRRDY1_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXRRDY1_Pos)) /* Assignment of value for TXRRDY1 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXRRDY1_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THRxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8.  */
#define   I2SMCC_ISRA_TXRRDY1_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THRxR is empty.  */
#define I2SMCC_ISRA_TXRRDY1_0                 (I2SMCC_ISRA_TXRRDY1_0_Val << I2SMCC_ISRA_TXRRDY1_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THRxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8. Position */
#define I2SMCC_ISRA_TXRRDY1_1                 (I2SMCC_ISRA_TXRRDY1_1_Val << I2SMCC_ISRA_TXRRDY1_Pos) /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THRxR is empty. Position */
#define I2SMCC_ISRA_TXLRDY2_Pos               _UINT32_(4)                                          /* (I2SMCC_ISRA) I2S Transmit Left 2  or TDM Channel 2x Ready Flag (Cleared by writing I2SMCC_THR/THLxR) Position */
#define I2SMCC_ISRA_TXLRDY2_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXLRDY2_Pos)           /* (I2SMCC_ISRA) I2S Transmit Left 2  or TDM Channel 2x Ready Flag (Cleared by writing I2SMCC_THR/THLxR) Mask */
#define I2SMCC_ISRA_TXLRDY2(value)            (I2SMCC_ISRA_TXLRDY2_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXLRDY2_Pos)) /* Assignment of value for TXLRDY2 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXLRDY2_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THLxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7.  */
#define   I2SMCC_ISRA_TXLRDY2_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THLxR is empty.  */
#define I2SMCC_ISRA_TXLRDY2_0                 (I2SMCC_ISRA_TXLRDY2_0_Val << I2SMCC_ISRA_TXLRDY2_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THLxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7. Position */
#define I2SMCC_ISRA_TXLRDY2_1                 (I2SMCC_ISRA_TXLRDY2_1_Val << I2SMCC_ISRA_TXLRDY2_Pos) /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THLxR is empty. Position */
#define I2SMCC_ISRA_TXRRDY2_Pos               _UINT32_(5)                                          /* (I2SMCC_ISRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Ready Flag (Cleared by writing I2SMCC_THR/THRxR) Position */
#define I2SMCC_ISRA_TXRRDY2_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXRRDY2_Pos)           /* (I2SMCC_ISRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Ready Flag (Cleared by writing I2SMCC_THR/THRxR) Mask */
#define I2SMCC_ISRA_TXRRDY2(value)            (I2SMCC_ISRA_TXRRDY2_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXRRDY2_Pos)) /* Assignment of value for TXRRDY2 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXRRDY2_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THRxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8.  */
#define   I2SMCC_ISRA_TXRRDY2_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THRxR is empty.  */
#define I2SMCC_ISRA_TXRRDY2_0                 (I2SMCC_ISRA_TXRRDY2_0_Val << I2SMCC_ISRA_TXRRDY2_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THRxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8. Position */
#define I2SMCC_ISRA_TXRRDY2_1                 (I2SMCC_ISRA_TXRRDY2_1_Val << I2SMCC_ISRA_TXRRDY2_Pos) /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THRxR is empty. Position */
#define I2SMCC_ISRA_TXLRDY3_Pos               _UINT32_(6)                                          /* (I2SMCC_ISRA) I2S Transmit Left 3  or TDM Channel 2x Ready Flag (Cleared by writing I2SMCC_THR/THLxR) Position */
#define I2SMCC_ISRA_TXLRDY3_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXLRDY3_Pos)           /* (I2SMCC_ISRA) I2S Transmit Left 3  or TDM Channel 2x Ready Flag (Cleared by writing I2SMCC_THR/THLxR) Mask */
#define I2SMCC_ISRA_TXLRDY3(value)            (I2SMCC_ISRA_TXLRDY3_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXLRDY3_Pos)) /* Assignment of value for TXLRDY3 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXLRDY3_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THLxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7.  */
#define   I2SMCC_ISRA_TXLRDY3_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THLxR is empty.  */
#define I2SMCC_ISRA_TXLRDY3_0                 (I2SMCC_ISRA_TXLRDY3_0_Val << I2SMCC_ISRA_TXLRDY3_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THLxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7. Position */
#define I2SMCC_ISRA_TXLRDY3_1                 (I2SMCC_ISRA_TXLRDY3_1_Val << I2SMCC_ISRA_TXLRDY3_Pos) /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THLxR is empty. Position */
#define I2SMCC_ISRA_TXRRDY3_Pos               _UINT32_(7)                                          /* (I2SMCC_ISRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Ready Flag (Cleared by writing I2SMCC_THR/THRxR) Position */
#define I2SMCC_ISRA_TXRRDY3_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXRRDY3_Pos)           /* (I2SMCC_ISRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Ready Flag (Cleared by writing I2SMCC_THR/THRxR) Mask */
#define I2SMCC_ISRA_TXRRDY3(value)            (I2SMCC_ISRA_TXRRDY3_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXRRDY3_Pos)) /* Assignment of value for TXRRDY3 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXRRDY3_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THRxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8.  */
#define   I2SMCC_ISRA_TXRRDY3_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THRxR is empty.  */
#define I2SMCC_ISRA_TXRRDY3_0                 (I2SMCC_ISRA_TXRRDY3_0_Val << I2SMCC_ISRA_TXRRDY3_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of write accesses are performed in either I2SMCC_THRxR or I2SMCC_THR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8. Position */
#define I2SMCC_ISRA_TXRRDY3_1                 (I2SMCC_ISRA_TXRRDY3_1_Val << I2SMCC_ISRA_TXRRDY3_Pos) /* (I2SMCC_ISRA) Set when I2SMCC_THR or I2SMCC_THRxR is empty. Position */
#define I2SMCC_ISRA_TXLUNF0_Pos               _UINT32_(8)                                          /* (I2SMCC_ISRA) I2S Transmit Left 0  or TDM Channel 2x Underrun (Cleared on read) Position */
#define I2SMCC_ISRA_TXLUNF0_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXLUNF0_Pos)           /* (I2SMCC_ISRA) I2S Transmit Left 0  or TDM Channel 2x Underrun (Cleared on read) Mask */
#define I2SMCC_ISRA_TXLUNF0(value)            (I2SMCC_ISRA_TXLUNF0_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXLUNF0_Pos)) /* Assignment of value for TXLUNF0 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXLUNF0_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_TXLUNF0_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THLxR.  */
#define I2SMCC_ISRA_TXLUNF0_0                 (I2SMCC_ISRA_TXLUNF0_0_Val << I2SMCC_ISRA_TXLUNF0_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_TXLUNF0_1                 (I2SMCC_ISRA_TXLUNF0_1_Val << I2SMCC_ISRA_TXLUNF0_Pos) /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THLxR. Position */
#define I2SMCC_ISRA_TXRUNF0_Pos               _UINT32_(9)                                          /* (I2SMCC_ISRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Underrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_TXRUNF0_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXRUNF0_Pos)           /* (I2SMCC_ISRA) I2S Transmit Right 0  or TDM Channel [2x]+1 Underrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_TXRUNF0(value)            (I2SMCC_ISRA_TXRUNF0_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXRUNF0_Pos)) /* Assignment of value for TXRUNF0 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXRUNF0_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when the I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_TXRUNF0_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THRxR.  */
#define I2SMCC_ISRA_TXRUNF0_0                 (I2SMCC_ISRA_TXRUNF0_0_Val << I2SMCC_ISRA_TXRUNF0_Pos) /* (I2SMCC_ISRA) Cleared when the I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_TXRUNF0_1                 (I2SMCC_ISRA_TXRUNF0_1_Val << I2SMCC_ISRA_TXRUNF0_Pos) /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THRxR. Position */
#define I2SMCC_ISRA_TXLUNF1_Pos               _UINT32_(10)                                         /* (I2SMCC_ISRA) I2S Transmit Left 1  or TDM Channel 2x Underrun (Cleared on read) Position */
#define I2SMCC_ISRA_TXLUNF1_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXLUNF1_Pos)           /* (I2SMCC_ISRA) I2S Transmit Left 1  or TDM Channel 2x Underrun (Cleared on read) Mask */
#define I2SMCC_ISRA_TXLUNF1(value)            (I2SMCC_ISRA_TXLUNF1_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXLUNF1_Pos)) /* Assignment of value for TXLUNF1 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXLUNF1_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_TXLUNF1_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THLxR.  */
#define I2SMCC_ISRA_TXLUNF1_0                 (I2SMCC_ISRA_TXLUNF1_0_Val << I2SMCC_ISRA_TXLUNF1_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_TXLUNF1_1                 (I2SMCC_ISRA_TXLUNF1_1_Val << I2SMCC_ISRA_TXLUNF1_Pos) /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THLxR. Position */
#define I2SMCC_ISRA_TXRUNF1_Pos               _UINT32_(11)                                         /* (I2SMCC_ISRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Underrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_TXRUNF1_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXRUNF1_Pos)           /* (I2SMCC_ISRA) I2S Transmit Right 1  or TDM Channel [2x]+1 Underrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_TXRUNF1(value)            (I2SMCC_ISRA_TXRUNF1_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXRUNF1_Pos)) /* Assignment of value for TXRUNF1 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXRUNF1_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when the I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_TXRUNF1_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THRxR.  */
#define I2SMCC_ISRA_TXRUNF1_0                 (I2SMCC_ISRA_TXRUNF1_0_Val << I2SMCC_ISRA_TXRUNF1_Pos) /* (I2SMCC_ISRA) Cleared when the I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_TXRUNF1_1                 (I2SMCC_ISRA_TXRUNF1_1_Val << I2SMCC_ISRA_TXRUNF1_Pos) /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THRxR. Position */
#define I2SMCC_ISRA_TXLUNF2_Pos               _UINT32_(12)                                         /* (I2SMCC_ISRA) I2S Transmit Left 2  or TDM Channel 2x Underrun (Cleared on read) Position */
#define I2SMCC_ISRA_TXLUNF2_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXLUNF2_Pos)           /* (I2SMCC_ISRA) I2S Transmit Left 2  or TDM Channel 2x Underrun (Cleared on read) Mask */
#define I2SMCC_ISRA_TXLUNF2(value)            (I2SMCC_ISRA_TXLUNF2_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXLUNF2_Pos)) /* Assignment of value for TXLUNF2 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXLUNF2_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_TXLUNF2_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THLxR.  */
#define I2SMCC_ISRA_TXLUNF2_0                 (I2SMCC_ISRA_TXLUNF2_0_Val << I2SMCC_ISRA_TXLUNF2_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_TXLUNF2_1                 (I2SMCC_ISRA_TXLUNF2_1_Val << I2SMCC_ISRA_TXLUNF2_Pos) /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THLxR. Position */
#define I2SMCC_ISRA_TXRUNF2_Pos               _UINT32_(13)                                         /* (I2SMCC_ISRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Underrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_TXRUNF2_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXRUNF2_Pos)           /* (I2SMCC_ISRA) I2S Transmit Right 2  or TDM Channel [2x]+1 Underrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_TXRUNF2(value)            (I2SMCC_ISRA_TXRUNF2_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXRUNF2_Pos)) /* Assignment of value for TXRUNF2 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXRUNF2_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when the I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_TXRUNF2_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THRxR.  */
#define I2SMCC_ISRA_TXRUNF2_0                 (I2SMCC_ISRA_TXRUNF2_0_Val << I2SMCC_ISRA_TXRUNF2_Pos) /* (I2SMCC_ISRA) Cleared when the I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_TXRUNF2_1                 (I2SMCC_ISRA_TXRUNF2_1_Val << I2SMCC_ISRA_TXRUNF2_Pos) /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THRxR. Position */
#define I2SMCC_ISRA_TXLUNF3_Pos               _UINT32_(14)                                         /* (I2SMCC_ISRA) I2S Transmit Left 3  or TDM Channel 2x Underrun (Cleared on read) Position */
#define I2SMCC_ISRA_TXLUNF3_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXLUNF3_Pos)           /* (I2SMCC_ISRA) I2S Transmit Left 3  or TDM Channel 2x Underrun (Cleared on read) Mask */
#define I2SMCC_ISRA_TXLUNF3(value)            (I2SMCC_ISRA_TXLUNF3_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXLUNF3_Pos)) /* Assignment of value for TXLUNF3 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXLUNF3_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_TXLUNF3_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THLxR.  */
#define I2SMCC_ISRA_TXLUNF3_0                 (I2SMCC_ISRA_TXLUNF3_0_Val << I2SMCC_ISRA_TXLUNF3_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_TXLUNF3_1                 (I2SMCC_ISRA_TXLUNF3_1_Val << I2SMCC_ISRA_TXLUNF3_Pos) /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THLxR. Position */
#define I2SMCC_ISRA_TXRUNF3_Pos               _UINT32_(15)                                         /* (I2SMCC_ISRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Underrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_TXRUNF3_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_TXRUNF3_Pos)           /* (I2SMCC_ISRA) I2S Transmit Right 3  or TDM Channel [2x]+1 Underrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_TXRUNF3(value)            (I2SMCC_ISRA_TXRUNF3_Msk & (_UINT32_(value) << I2SMCC_ISRA_TXRUNF3_Pos)) /* Assignment of value for TXRUNF3 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_TXRUNF3_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when the I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_TXRUNF3_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THRxR.  */
#define I2SMCC_ISRA_TXRUNF3_0                 (I2SMCC_ISRA_TXRUNF3_0_Val << I2SMCC_ISRA_TXRUNF3_Pos) /* (I2SMCC_ISRA) Cleared when the I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_TXRUNF3_1                 (I2SMCC_ISRA_TXRUNF3_1_Val << I2SMCC_ISRA_TXRUNF3_Pos) /* (I2SMCC_ISRA) Set when an underrun error occurs in either I2SMCC_THR or I2SMCC_THRxR. Position */
#define I2SMCC_ISRA_RXLRDY0_Pos               _UINT32_(16)                                         /* (I2SMCC_ISRA) I2S Receive Left 0  or TDM Channel 2x Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Position */
#define I2SMCC_ISRA_RXLRDY0_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXLRDY0_Pos)           /* (I2SMCC_ISRA) I2S Receive Left 0  or TDM Channel 2x Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Mask */
#define I2SMCC_ISRA_RXLRDY0(value)            (I2SMCC_ISRA_RXLRDY0_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXLRDY0_Pos)) /* Assignment of value for RXLRDY0 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXLRDY0_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses are performed in either I2SMCC_RHLxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7.  */
#define   I2SMCC_ISRA_RXLRDY0_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHLxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXLRDY0_0                 (I2SMCC_ISRA_RXLRDY0_0_Val << I2SMCC_ISRA_RXLRDY0_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses are performed in either I2SMCC_RHLxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7. Position */
#define I2SMCC_ISRA_RXLRDY0_1                 (I2SMCC_ISRA_RXLRDY0_1_Val << I2SMCC_ISRA_RXLRDY0_Pos) /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHLxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXRRDY0_Pos               _UINT32_(17)                                         /* (I2SMCC_ISRA) I2S Receive Right 0  or TDM Channel [2x]+1 Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Position */
#define I2SMCC_ISRA_RXRRDY0_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXRRDY0_Pos)           /* (I2SMCC_ISRA) I2S Receive Right 0  or TDM Channel [2x]+1 Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Mask */
#define I2SMCC_ISRA_RXRRDY0(value)            (I2SMCC_ISRA_RXRRDY0_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXRRDY0_Pos)) /* Assignment of value for RXRRDY0 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXRRDY0_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses is performed in I2SMCC_RHRxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8.  */
#define   I2SMCC_ISRA_RXRRDY0_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHRxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXRRDY0_0                 (I2SMCC_ISRA_RXRRDY0_0_Val << I2SMCC_ISRA_RXRRDY0_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses is performed in I2SMCC_RHRxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8. Position */
#define I2SMCC_ISRA_RXRRDY0_1                 (I2SMCC_ISRA_RXRRDY0_1_Val << I2SMCC_ISRA_RXRRDY0_Pos) /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHRxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXLRDY1_Pos               _UINT32_(18)                                         /* (I2SMCC_ISRA) I2S Receive Left 1  or TDM Channel 2x Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Position */
#define I2SMCC_ISRA_RXLRDY1_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXLRDY1_Pos)           /* (I2SMCC_ISRA) I2S Receive Left 1  or TDM Channel 2x Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Mask */
#define I2SMCC_ISRA_RXLRDY1(value)            (I2SMCC_ISRA_RXLRDY1_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXLRDY1_Pos)) /* Assignment of value for RXLRDY1 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXLRDY1_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses are performed in either I2SMCC_RHLxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7.  */
#define   I2SMCC_ISRA_RXLRDY1_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHLxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXLRDY1_0                 (I2SMCC_ISRA_RXLRDY1_0_Val << I2SMCC_ISRA_RXLRDY1_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses are performed in either I2SMCC_RHLxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7. Position */
#define I2SMCC_ISRA_RXLRDY1_1                 (I2SMCC_ISRA_RXLRDY1_1_Val << I2SMCC_ISRA_RXLRDY1_Pos) /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHLxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXRRDY1_Pos               _UINT32_(19)                                         /* (I2SMCC_ISRA) I2S Receive Right 1  or TDM Channel [2x]+1 Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Position */
#define I2SMCC_ISRA_RXRRDY1_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXRRDY1_Pos)           /* (I2SMCC_ISRA) I2S Receive Right 1  or TDM Channel [2x]+1 Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Mask */
#define I2SMCC_ISRA_RXRRDY1(value)            (I2SMCC_ISRA_RXRRDY1_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXRRDY1_Pos)) /* Assignment of value for RXRRDY1 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXRRDY1_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses is performed in I2SMCC_RHRxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8.  */
#define   I2SMCC_ISRA_RXRRDY1_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHRxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXRRDY1_0                 (I2SMCC_ISRA_RXRRDY1_0_Val << I2SMCC_ISRA_RXRRDY1_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses is performed in I2SMCC_RHRxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8. Position */
#define I2SMCC_ISRA_RXRRDY1_1                 (I2SMCC_ISRA_RXRRDY1_1_Val << I2SMCC_ISRA_RXRRDY1_Pos) /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHRxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXLRDY2_Pos               _UINT32_(20)                                         /* (I2SMCC_ISRA) I2S Receive Left 2  or TDM Channel 2x Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Position */
#define I2SMCC_ISRA_RXLRDY2_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXLRDY2_Pos)           /* (I2SMCC_ISRA) I2S Receive Left 2  or TDM Channel 2x Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Mask */
#define I2SMCC_ISRA_RXLRDY2(value)            (I2SMCC_ISRA_RXLRDY2_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXLRDY2_Pos)) /* Assignment of value for RXLRDY2 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXLRDY2_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses are performed in either I2SMCC_RHLxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7.  */
#define   I2SMCC_ISRA_RXLRDY2_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHLxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXLRDY2_0                 (I2SMCC_ISRA_RXLRDY2_0_Val << I2SMCC_ISRA_RXLRDY2_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses are performed in either I2SMCC_RHLxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7. Position */
#define I2SMCC_ISRA_RXLRDY2_1                 (I2SMCC_ISRA_RXLRDY2_1_Val << I2SMCC_ISRA_RXLRDY2_Pos) /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHLxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXRRDY2_Pos               _UINT32_(21)                                         /* (I2SMCC_ISRA) I2S Receive Right 2  or TDM Channel [2x]+1 Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Position */
#define I2SMCC_ISRA_RXRRDY2_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXRRDY2_Pos)           /* (I2SMCC_ISRA) I2S Receive Right 2  or TDM Channel [2x]+1 Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Mask */
#define I2SMCC_ISRA_RXRRDY2(value)            (I2SMCC_ISRA_RXRRDY2_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXRRDY2_Pos)) /* Assignment of value for RXRRDY2 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXRRDY2_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses is performed in I2SMCC_RHRxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8.  */
#define   I2SMCC_ISRA_RXRRDY2_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHRxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXRRDY2_0                 (I2SMCC_ISRA_RXRRDY2_0_Val << I2SMCC_ISRA_RXRRDY2_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses is performed in I2SMCC_RHRxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8. Position */
#define I2SMCC_ISRA_RXRRDY2_1                 (I2SMCC_ISRA_RXRRDY2_1_Val << I2SMCC_ISRA_RXRRDY2_Pos) /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHRxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXLRDY3_Pos               _UINT32_(22)                                         /* (I2SMCC_ISRA) I2S Receive Left 3  or TDM Channel 2x Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Position */
#define I2SMCC_ISRA_RXLRDY3_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXLRDY3_Pos)           /* (I2SMCC_ISRA) I2S Receive Left 3  or TDM Channel 2x Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Mask */
#define I2SMCC_ISRA_RXLRDY3(value)            (I2SMCC_ISRA_RXLRDY3_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXLRDY3_Pos)) /* Assignment of value for RXLRDY3 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXLRDY3_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses are performed in either I2SMCC_RHLxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7.  */
#define   I2SMCC_ISRA_RXLRDY3_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHLxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXLRDY3_0                 (I2SMCC_ISRA_RXLRDY3_0_Val << I2SMCC_ISRA_RXLRDY3_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses are performed in either I2SMCC_RHLxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 7. Position */
#define I2SMCC_ISRA_RXLRDY3_1                 (I2SMCC_ISRA_RXLRDY3_1_Val << I2SMCC_ISRA_RXLRDY3_Pos) /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHLxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXRRDY3_Pos               _UINT32_(23)                                         /* (I2SMCC_ISRA) I2S Receive Right 3  or TDM Channel [2x]+1 Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Position */
#define I2SMCC_ISRA_RXRRDY3_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXRRDY3_Pos)           /* (I2SMCC_ISRA) I2S Receive Right 3  or TDM Channel [2x]+1 Ready Flag (Cleared by reading I2SMCC_RHR/RHLxR) Mask */
#define I2SMCC_ISRA_RXRRDY3(value)            (I2SMCC_ISRA_RXRRDY3_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXRRDY3_Pos)) /* Assignment of value for RXRRDY3 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXRRDY3_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses is performed in I2SMCC_RHRxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8.  */
#define   I2SMCC_ISRA_RXRRDY3_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHRxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXRRDY3_0                 (I2SMCC_ISRA_RXRRDY3_0_Val << I2SMCC_ISRA_RXRRDY3_Pos) /* (I2SMCC_ISRA) Cleared when a predefined number of read accesses is performed in I2SMCC_RHRxR or I2SMCC_RHR. The predefined number depends on the configuration of I2SMCC_MRA.WIRECFG / FORMAT and varies from 1 to 8. Position */
#define I2SMCC_ISRA_RXRRDY3_1                 (I2SMCC_ISRA_RXRRDY3_1_Val << I2SMCC_ISRA_RXRRDY3_Pos) /* (I2SMCC_ISRA) Set when received data is available in either I2SMCC_RHRxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXLOVF0_Pos               _UINT32_(24)                                         /* (I2SMCC_ISRA) I2S Receive Left 0  or TDM Channel 2x Overrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_RXLOVF0_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXLOVF0_Pos)           /* (I2SMCC_ISRA) I2S Receive Left 0  or TDM Channel 2x Overrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_RXLOVF0(value)            (I2SMCC_ISRA_RXLOVF0_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXLOVF0_Pos)) /* Assignment of value for RXLOVF0 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXLOVF0_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_RXLOVF0_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHLxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXLOVF0_0                 (I2SMCC_ISRA_RXLOVF0_0_Val << I2SMCC_ISRA_RXLOVF0_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_RXLOVF0_1                 (I2SMCC_ISRA_RXLOVF0_1_Val << I2SMCC_ISRA_RXLOVF0_Pos) /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHLxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXROVF0_Pos               _UINT32_(25)                                         /* (I2SMCC_ISRA) I2S Receive Right 0  or TDM Channel [2x]+1 Overrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_RXROVF0_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXROVF0_Pos)           /* (I2SMCC_ISRA) I2S Receive Right 0  or TDM Channel [2x]+1 Overrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_RXROVF0(value)            (I2SMCC_ISRA_RXROVF0_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXROVF0_Pos)) /* Assignment of value for RXROVF0 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXROVF0_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_RXROVF0_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHRxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXROVF0_0                 (I2SMCC_ISRA_RXROVF0_0_Val << I2SMCC_ISRA_RXROVF0_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_RXROVF0_1                 (I2SMCC_ISRA_RXROVF0_1_Val << I2SMCC_ISRA_RXROVF0_Pos) /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHRxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXLOVF1_Pos               _UINT32_(26)                                         /* (I2SMCC_ISRA) I2S Receive Left 1  or TDM Channel 2x Overrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_RXLOVF1_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXLOVF1_Pos)           /* (I2SMCC_ISRA) I2S Receive Left 1  or TDM Channel 2x Overrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_RXLOVF1(value)            (I2SMCC_ISRA_RXLOVF1_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXLOVF1_Pos)) /* Assignment of value for RXLOVF1 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXLOVF1_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_RXLOVF1_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHLxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXLOVF1_0                 (I2SMCC_ISRA_RXLOVF1_0_Val << I2SMCC_ISRA_RXLOVF1_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_RXLOVF1_1                 (I2SMCC_ISRA_RXLOVF1_1_Val << I2SMCC_ISRA_RXLOVF1_Pos) /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHLxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXROVF1_Pos               _UINT32_(27)                                         /* (I2SMCC_ISRA) I2S Receive Right 1  or TDM Channel [2x]+1 Overrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_RXROVF1_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXROVF1_Pos)           /* (I2SMCC_ISRA) I2S Receive Right 1  or TDM Channel [2x]+1 Overrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_RXROVF1(value)            (I2SMCC_ISRA_RXROVF1_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXROVF1_Pos)) /* Assignment of value for RXROVF1 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXROVF1_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_RXROVF1_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHRxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXROVF1_0                 (I2SMCC_ISRA_RXROVF1_0_Val << I2SMCC_ISRA_RXROVF1_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_RXROVF1_1                 (I2SMCC_ISRA_RXROVF1_1_Val << I2SMCC_ISRA_RXROVF1_Pos) /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHRxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXLOVF2_Pos               _UINT32_(28)                                         /* (I2SMCC_ISRA) I2S Receive Left 2  or TDM Channel 2x Overrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_RXLOVF2_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXLOVF2_Pos)           /* (I2SMCC_ISRA) I2S Receive Left 2  or TDM Channel 2x Overrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_RXLOVF2(value)            (I2SMCC_ISRA_RXLOVF2_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXLOVF2_Pos)) /* Assignment of value for RXLOVF2 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXLOVF2_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_RXLOVF2_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHLxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXLOVF2_0                 (I2SMCC_ISRA_RXLOVF2_0_Val << I2SMCC_ISRA_RXLOVF2_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_RXLOVF2_1                 (I2SMCC_ISRA_RXLOVF2_1_Val << I2SMCC_ISRA_RXLOVF2_Pos) /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHLxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXROVF2_Pos               _UINT32_(29)                                         /* (I2SMCC_ISRA) I2S Receive Right 2  or TDM Channel [2x]+1 Overrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_RXROVF2_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXROVF2_Pos)           /* (I2SMCC_ISRA) I2S Receive Right 2  or TDM Channel [2x]+1 Overrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_RXROVF2(value)            (I2SMCC_ISRA_RXROVF2_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXROVF2_Pos)) /* Assignment of value for RXROVF2 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXROVF2_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_RXROVF2_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHRxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXROVF2_0                 (I2SMCC_ISRA_RXROVF2_0_Val << I2SMCC_ISRA_RXROVF2_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_RXROVF2_1                 (I2SMCC_ISRA_RXROVF2_1_Val << I2SMCC_ISRA_RXROVF2_Pos) /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHRxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXLOVF3_Pos               _UINT32_(30)                                         /* (I2SMCC_ISRA) I2S Receive Left 3  or TDM Channel 2x Overrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_RXLOVF3_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXLOVF3_Pos)           /* (I2SMCC_ISRA) I2S Receive Left 3  or TDM Channel 2x Overrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_RXLOVF3(value)            (I2SMCC_ISRA_RXLOVF3_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXLOVF3_Pos)) /* Assignment of value for RXLOVF3 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXLOVF3_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_RXLOVF3_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHLxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXLOVF3_0                 (I2SMCC_ISRA_RXLOVF3_0_Val << I2SMCC_ISRA_RXLOVF3_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_RXLOVF3_1                 (I2SMCC_ISRA_RXLOVF3_1_Val << I2SMCC_ISRA_RXLOVF3_Pos) /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHLxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_RXROVF3_Pos               _UINT32_(31)                                         /* (I2SMCC_ISRA) I2S Receive Right 3  or TDM Channel [2x]+1 Overrun Flag (Cleared on read) Position */
#define I2SMCC_ISRA_RXROVF3_Msk               (_UINT32_(0x1) << I2SMCC_ISRA_RXROVF3_Pos)           /* (I2SMCC_ISRA) I2S Receive Right 3  or TDM Channel [2x]+1 Overrun Flag (Cleared on read) Mask */
#define I2SMCC_ISRA_RXROVF3(value)            (I2SMCC_ISRA_RXROVF3_Msk & (_UINT32_(value) << I2SMCC_ISRA_RXROVF3_Pos)) /* Assignment of value for RXROVF3 in the I2SMCC_ISRA register */
#define   I2SMCC_ISRA_RXROVF3_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read.  */
#define   I2SMCC_ISRA_RXROVF3_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHRxR or I2SMCC_RHR.  */
#define I2SMCC_ISRA_RXROVF3_0                 (I2SMCC_ISRA_RXROVF3_0_Val << I2SMCC_ISRA_RXROVF3_Pos) /* (I2SMCC_ISRA) Cleared when I2SMCC_ISRA is read. Position */
#define I2SMCC_ISRA_RXROVF3_1                 (I2SMCC_ISRA_RXROVF3_1_Val << I2SMCC_ISRA_RXROVF3_Pos) /* (I2SMCC_ISRA) Set when an overrun error occurs in either I2SMCC_RHRxR or I2SMCC_RHR. Position */
#define I2SMCC_ISRA_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_ISRA) Register Mask  */


/* -------- I2SMCC_IERB : (I2SMCC Offset: 0x20) ( /W 32) Interrupt Enable Register B -------- */
#define I2SMCC_IERB_WERR_Pos                  _UINT32_(0)                                          /* (I2SMCC_IERB) Write Error Interrupt Enable Position */
#define I2SMCC_IERB_WERR_Msk                  (_UINT32_(0x1) << I2SMCC_IERB_WERR_Pos)              /* (I2SMCC_IERB) Write Error Interrupt Enable Mask */
#define I2SMCC_IERB_WERR(value)               (I2SMCC_IERB_WERR_Msk & (_UINT32_(value) << I2SMCC_IERB_WERR_Pos)) /* Assignment of value for WERR in the I2SMCC_IERB register */
#define I2SMCC_IERB_TXFFRDY_Pos               _UINT32_(8)                                          /* (I2SMCC_IERB) TX FIFO Ready Interrupt Enable Position */
#define I2SMCC_IERB_TXFFRDY_Msk               (_UINT32_(0x1) << I2SMCC_IERB_TXFFRDY_Pos)           /* (I2SMCC_IERB) TX FIFO Ready Interrupt Enable Mask */
#define I2SMCC_IERB_TXFFRDY(value)            (I2SMCC_IERB_TXFFRDY_Msk & (_UINT32_(value) << I2SMCC_IERB_TXFFRDY_Pos)) /* Assignment of value for TXFFRDY in the I2SMCC_IERB register */
#define I2SMCC_IERB_TXFFEMP_Pos               _UINT32_(9)                                          /* (I2SMCC_IERB) TX FIFO Empty Interrupt Enable Position */
#define I2SMCC_IERB_TXFFEMP_Msk               (_UINT32_(0x1) << I2SMCC_IERB_TXFFEMP_Pos)           /* (I2SMCC_IERB) TX FIFO Empty Interrupt Enable Mask */
#define I2SMCC_IERB_TXFFEMP(value)            (I2SMCC_IERB_TXFFEMP_Msk & (_UINT32_(value) << I2SMCC_IERB_TXFFEMP_Pos)) /* Assignment of value for TXFFEMP in the I2SMCC_IERB register */
#define I2SMCC_IERB_RXFFRDY_Pos               _UINT32_(12)                                         /* (I2SMCC_IERB) RX FIFO Ready Interrupt Enable Position */
#define I2SMCC_IERB_RXFFRDY_Msk               (_UINT32_(0x1) << I2SMCC_IERB_RXFFRDY_Pos)           /* (I2SMCC_IERB) RX FIFO Ready Interrupt Enable Mask */
#define I2SMCC_IERB_RXFFRDY(value)            (I2SMCC_IERB_RXFFRDY_Msk & (_UINT32_(value) << I2SMCC_IERB_RXFFRDY_Pos)) /* Assignment of value for RXFFRDY in the I2SMCC_IERB register */
#define I2SMCC_IERB_RXFFFUL_Pos               _UINT32_(13)                                         /* (I2SMCC_IERB) RX FIFO Full Interrupt Enable Position */
#define I2SMCC_IERB_RXFFFUL_Msk               (_UINT32_(0x1) << I2SMCC_IERB_RXFFFUL_Pos)           /* (I2SMCC_IERB) RX FIFO Full Interrupt Enable Mask */
#define I2SMCC_IERB_RXFFFUL(value)            (I2SMCC_IERB_RXFFFUL_Msk & (_UINT32_(value) << I2SMCC_IERB_RXFFFUL_Pos)) /* Assignment of value for RXFFFUL in the I2SMCC_IERB register */
#define I2SMCC_IERB_Msk                       _UINT32_(0x00003301)                                 /* (I2SMCC_IERB) Register Mask  */


/* -------- I2SMCC_IDRB : (I2SMCC Offset: 0x24) ( /W 32) Interrupt Disable Register B -------- */
#define I2SMCC_IDRB_WERR_Pos                  _UINT32_(0)                                          /* (I2SMCC_IDRB) Write Error Interrupt Disable Position */
#define I2SMCC_IDRB_WERR_Msk                  (_UINT32_(0x1) << I2SMCC_IDRB_WERR_Pos)              /* (I2SMCC_IDRB) Write Error Interrupt Disable Mask */
#define I2SMCC_IDRB_WERR(value)               (I2SMCC_IDRB_WERR_Msk & (_UINT32_(value) << I2SMCC_IDRB_WERR_Pos)) /* Assignment of value for WERR in the I2SMCC_IDRB register */
#define I2SMCC_IDRB_TXFFRDY_Pos               _UINT32_(8)                                          /* (I2SMCC_IDRB) TX FIFO Ready Interrupt Disable Position */
#define I2SMCC_IDRB_TXFFRDY_Msk               (_UINT32_(0x1) << I2SMCC_IDRB_TXFFRDY_Pos)           /* (I2SMCC_IDRB) TX FIFO Ready Interrupt Disable Mask */
#define I2SMCC_IDRB_TXFFRDY(value)            (I2SMCC_IDRB_TXFFRDY_Msk & (_UINT32_(value) << I2SMCC_IDRB_TXFFRDY_Pos)) /* Assignment of value for TXFFRDY in the I2SMCC_IDRB register */
#define I2SMCC_IDRB_TXFFEMP_Pos               _UINT32_(9)                                          /* (I2SMCC_IDRB) TX FIFO Empty Interrupt Disable Position */
#define I2SMCC_IDRB_TXFFEMP_Msk               (_UINT32_(0x1) << I2SMCC_IDRB_TXFFEMP_Pos)           /* (I2SMCC_IDRB) TX FIFO Empty Interrupt Disable Mask */
#define I2SMCC_IDRB_TXFFEMP(value)            (I2SMCC_IDRB_TXFFEMP_Msk & (_UINT32_(value) << I2SMCC_IDRB_TXFFEMP_Pos)) /* Assignment of value for TXFFEMP in the I2SMCC_IDRB register */
#define I2SMCC_IDRB_RXFFRDY_Pos               _UINT32_(12)                                         /* (I2SMCC_IDRB) RX FIFO Ready Interrupt Disable Position */
#define I2SMCC_IDRB_RXFFRDY_Msk               (_UINT32_(0x1) << I2SMCC_IDRB_RXFFRDY_Pos)           /* (I2SMCC_IDRB) RX FIFO Ready Interrupt Disable Mask */
#define I2SMCC_IDRB_RXFFRDY(value)            (I2SMCC_IDRB_RXFFRDY_Msk & (_UINT32_(value) << I2SMCC_IDRB_RXFFRDY_Pos)) /* Assignment of value for RXFFRDY in the I2SMCC_IDRB register */
#define I2SMCC_IDRB_RXFFFUL_Pos               _UINT32_(13)                                         /* (I2SMCC_IDRB) RTX FIFO Full Interrupt Disable Position */
#define I2SMCC_IDRB_RXFFFUL_Msk               (_UINT32_(0x1) << I2SMCC_IDRB_RXFFFUL_Pos)           /* (I2SMCC_IDRB) RTX FIFO Full Interrupt Disable Mask */
#define I2SMCC_IDRB_RXFFFUL(value)            (I2SMCC_IDRB_RXFFFUL_Msk & (_UINT32_(value) << I2SMCC_IDRB_RXFFFUL_Pos)) /* Assignment of value for RXFFFUL in the I2SMCC_IDRB register */
#define I2SMCC_IDRB_Msk                       _UINT32_(0x00003301)                                 /* (I2SMCC_IDRB) Register Mask  */


/* -------- I2SMCC_IMRB : (I2SMCC Offset: 0x28) ( R/ 32) Interrupt Mask Register B -------- */
#define I2SMCC_IMRB_RESETVALUE                _UINT32_(0x00)                                       /*  (I2SMCC_IMRB) Interrupt Mask Register B  Reset Value */

#define I2SMCC_IMRB_WERR_Pos                  _UINT32_(0)                                          /* (I2SMCC_IMRB) Write Error Interrupt Enable Position */
#define I2SMCC_IMRB_WERR_Msk                  (_UINT32_(0x1) << I2SMCC_IMRB_WERR_Pos)              /* (I2SMCC_IMRB) Write Error Interrupt Enable Mask */
#define I2SMCC_IMRB_WERR(value)               (I2SMCC_IMRB_WERR_Msk & (_UINT32_(value) << I2SMCC_IMRB_WERR_Pos)) /* Assignment of value for WERR in the I2SMCC_IMRB register */
#define I2SMCC_IMRB_TXFFRDY_Pos               _UINT32_(8)                                          /* (I2SMCC_IMRB) TX FIFO Ready Interrupt Mask Position */
#define I2SMCC_IMRB_TXFFRDY_Msk               (_UINT32_(0x1) << I2SMCC_IMRB_TXFFRDY_Pos)           /* (I2SMCC_IMRB) TX FIFO Ready Interrupt Mask Mask */
#define I2SMCC_IMRB_TXFFRDY(value)            (I2SMCC_IMRB_TXFFRDY_Msk & (_UINT32_(value) << I2SMCC_IMRB_TXFFRDY_Pos)) /* Assignment of value for TXFFRDY in the I2SMCC_IMRB register */
#define I2SMCC_IMRB_TXFFEMP_Pos               _UINT32_(9)                                          /* (I2SMCC_IMRB) TX FIFO Empty Interrupt Mask Position */
#define I2SMCC_IMRB_TXFFEMP_Msk               (_UINT32_(0x1) << I2SMCC_IMRB_TXFFEMP_Pos)           /* (I2SMCC_IMRB) TX FIFO Empty Interrupt Mask Mask */
#define I2SMCC_IMRB_TXFFEMP(value)            (I2SMCC_IMRB_TXFFEMP_Msk & (_UINT32_(value) << I2SMCC_IMRB_TXFFEMP_Pos)) /* Assignment of value for TXFFEMP in the I2SMCC_IMRB register */
#define I2SMCC_IMRB_RXFFRDY_Pos               _UINT32_(12)                                         /* (I2SMCC_IMRB) RX FIFO Ready Interrupt Mask Position */
#define I2SMCC_IMRB_RXFFRDY_Msk               (_UINT32_(0x1) << I2SMCC_IMRB_RXFFRDY_Pos)           /* (I2SMCC_IMRB) RX FIFO Ready Interrupt Mask Mask */
#define I2SMCC_IMRB_RXFFRDY(value)            (I2SMCC_IMRB_RXFFRDY_Msk & (_UINT32_(value) << I2SMCC_IMRB_RXFFRDY_Pos)) /* Assignment of value for RXFFRDY in the I2SMCC_IMRB register */
#define I2SMCC_IMRB_RXFFFUL_Pos               _UINT32_(13)                                         /* (I2SMCC_IMRB) RX FIFO Full Interrupt Mask Position */
#define I2SMCC_IMRB_RXFFFUL_Msk               (_UINT32_(0x1) << I2SMCC_IMRB_RXFFFUL_Pos)           /* (I2SMCC_IMRB) RX FIFO Full Interrupt Mask Mask */
#define I2SMCC_IMRB_RXFFFUL(value)            (I2SMCC_IMRB_RXFFFUL_Msk & (_UINT32_(value) << I2SMCC_IMRB_RXFFFUL_Pos)) /* Assignment of value for RXFFFUL in the I2SMCC_IMRB register */
#define I2SMCC_IMRB_Msk                       _UINT32_(0x00003301)                                 /* (I2SMCC_IMRB) Register Mask  */


/* -------- I2SMCC_ISRB : (I2SMCC Offset: 0x2C) ( R/ 32) Interrupt Status Register B -------- */
#define I2SMCC_ISRB_RESETVALUE                _UINT32_(0x00)                                       /*  (I2SMCC_ISRB) Interrupt Status Register B  Reset Value */

#define I2SMCC_ISRB_WERR_Pos                  _UINT32_(0)                                          /* (I2SMCC_ISRB) Write Error or Security Error Flag (cleared on read) Position */
#define I2SMCC_ISRB_WERR_Msk                  (_UINT32_(0x1) << I2SMCC_ISRB_WERR_Pos)              /* (I2SMCC_ISRB) Write Error or Security Error Flag (cleared on read) Mask */
#define I2SMCC_ISRB_WERR(value)               (I2SMCC_ISRB_WERR_Msk & (_UINT32_(value) << I2SMCC_ISRB_WERR_Pos)) /* Assignment of value for WERR in the I2SMCC_ISRB register */
#define   I2SMCC_ISRB_WERR_0_Val              _UINT32_(0x0)                                        /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read.  */
#define   I2SMCC_ISRB_WERR_1_Val              _UINT32_(0x1)                                        /* (I2SMCC_ISRB) Set when an error occurs in the I2SMCC_WPSR. Refer to I2SMCC_WPSR for details on the type of error.  */
#define I2SMCC_ISRB_WERR_0                    (I2SMCC_ISRB_WERR_0_Val << I2SMCC_ISRB_WERR_Pos)     /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read. Position */
#define I2SMCC_ISRB_WERR_1                    (I2SMCC_ISRB_WERR_1_Val << I2SMCC_ISRB_WERR_Pos)     /* (I2SMCC_ISRB) Set when an error occurs in the I2SMCC_WPSR. Refer to I2SMCC_WPSR for details on the type of error. Position */
#define I2SMCC_ISRB_TXFFRDY_Pos               _UINT32_(8)                                          /* (I2SMCC_ISRB) TX FIFO Ready Flag (Cleared on read) Position */
#define I2SMCC_ISRB_TXFFRDY_Msk               (_UINT32_(0x1) << I2SMCC_ISRB_TXFFRDY_Pos)           /* (I2SMCC_ISRB) TX FIFO Ready Flag (Cleared on read) Mask */
#define I2SMCC_ISRB_TXFFRDY(value)            (I2SMCC_ISRB_TXFFRDY_Msk & (_UINT32_(value) << I2SMCC_ISRB_TXFFRDY_Pos)) /* Assignment of value for TXFFRDY in the I2SMCC_ISRB register */
#define   I2SMCC_ISRB_TXFFRDY_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read.  */
#define   I2SMCC_ISRB_TXFFRDY_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRB) Set when TX FIFO is ready to be written and I2SMCC_MRB.FIFOEN = 1.  */
#define I2SMCC_ISRB_TXFFRDY_0                 (I2SMCC_ISRB_TXFFRDY_0_Val << I2SMCC_ISRB_TXFFRDY_Pos) /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read. Position */
#define I2SMCC_ISRB_TXFFRDY_1                 (I2SMCC_ISRB_TXFFRDY_1_Val << I2SMCC_ISRB_TXFFRDY_Pos) /* (I2SMCC_ISRB) Set when TX FIFO is ready to be written and I2SMCC_MRB.FIFOEN = 1. Position */
#define I2SMCC_ISRB_TXFFEMP_Pos               _UINT32_(9)                                          /* (I2SMCC_ISRB) TX FIFO Empty Flag (Cleared on read) Position */
#define I2SMCC_ISRB_TXFFEMP_Msk               (_UINT32_(0x1) << I2SMCC_ISRB_TXFFEMP_Pos)           /* (I2SMCC_ISRB) TX FIFO Empty Flag (Cleared on read) Mask */
#define I2SMCC_ISRB_TXFFEMP(value)            (I2SMCC_ISRB_TXFFEMP_Msk & (_UINT32_(value) << I2SMCC_ISRB_TXFFEMP_Pos)) /* Assignment of value for TXFFEMP in the I2SMCC_ISRB register */
#define   I2SMCC_ISRB_TXFFEMP_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read.  */
#define   I2SMCC_ISRB_TXFFEMP_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRB) Set when TX FIFO is empty and I2SMCC_MRB.FIFOEN = 1.  */
#define I2SMCC_ISRB_TXFFEMP_0                 (I2SMCC_ISRB_TXFFEMP_0_Val << I2SMCC_ISRB_TXFFEMP_Pos) /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read. Position */
#define I2SMCC_ISRB_TXFFEMP_1                 (I2SMCC_ISRB_TXFFEMP_1_Val << I2SMCC_ISRB_TXFFEMP_Pos) /* (I2SMCC_ISRB) Set when TX FIFO is empty and I2SMCC_MRB.FIFOEN = 1. Position */
#define I2SMCC_ISRB_RXFFRDY_Pos               _UINT32_(12)                                         /* (I2SMCC_ISRB) RX FIFO Ready Flag (Cleared on read) Position */
#define I2SMCC_ISRB_RXFFRDY_Msk               (_UINT32_(0x1) << I2SMCC_ISRB_RXFFRDY_Pos)           /* (I2SMCC_ISRB) RX FIFO Ready Flag (Cleared on read) Mask */
#define I2SMCC_ISRB_RXFFRDY(value)            (I2SMCC_ISRB_RXFFRDY_Msk & (_UINT32_(value) << I2SMCC_ISRB_RXFFRDY_Pos)) /* Assignment of value for RXFFRDY in the I2SMCC_ISRB register */
#define   I2SMCC_ISRB_RXFFRDY_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read.  */
#define   I2SMCC_ISRB_RXFFRDY_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRB) Set when RX FIFO is ready to be read and I2SMCC_MRB.FIFOEN = 1.  */
#define I2SMCC_ISRB_RXFFRDY_0                 (I2SMCC_ISRB_RXFFRDY_0_Val << I2SMCC_ISRB_RXFFRDY_Pos) /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read. Position */
#define I2SMCC_ISRB_RXFFRDY_1                 (I2SMCC_ISRB_RXFFRDY_1_Val << I2SMCC_ISRB_RXFFRDY_Pos) /* (I2SMCC_ISRB) Set when RX FIFO is ready to be read and I2SMCC_MRB.FIFOEN = 1. Position */
#define I2SMCC_ISRB_RXFFFUL_Pos               _UINT32_(13)                                         /* (I2SMCC_ISRB) RX FIFO Full Flag (Cleared on read) Position */
#define I2SMCC_ISRB_RXFFFUL_Msk               (_UINT32_(0x1) << I2SMCC_ISRB_RXFFFUL_Pos)           /* (I2SMCC_ISRB) RX FIFO Full Flag (Cleared on read) Mask */
#define I2SMCC_ISRB_RXFFFUL(value)            (I2SMCC_ISRB_RXFFFUL_Msk & (_UINT32_(value) << I2SMCC_ISRB_RXFFFUL_Pos)) /* Assignment of value for RXFFFUL in the I2SMCC_ISRB register */
#define   I2SMCC_ISRB_RXFFFUL_0_Val           _UINT32_(0x0)                                        /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read.  */
#define   I2SMCC_ISRB_RXFFFUL_1_Val           _UINT32_(0x1)                                        /* (I2SMCC_ISRB) Set when RX FIFO is full and I2SMCC_MRB.FIFOEN = 1.  */
#define I2SMCC_ISRB_RXFFFUL_0                 (I2SMCC_ISRB_RXFFFUL_0_Val << I2SMCC_ISRB_RXFFFUL_Pos) /* (I2SMCC_ISRB) Cleared when I2SMCC_ISRB is read. Position */
#define I2SMCC_ISRB_RXFFFUL_1                 (I2SMCC_ISRB_RXFFFUL_1_Val << I2SMCC_ISRB_RXFFFUL_Pos) /* (I2SMCC_ISRB) Set when RX FIFO is full and I2SMCC_MRB.FIFOEN = 1. Position */
#define I2SMCC_ISRB_Msk                       _UINT32_(0x00003301)                                 /* (I2SMCC_ISRB) Register Mask  */


/* -------- I2SMCC_RHR : (I2SMCC Offset: 0x30) ( R/ 32) Receiver Holding Register -------- */
#define I2SMCC_RHR_RESETVALUE                 _UINT32_(0x00)                                       /*  (I2SMCC_RHR) Receiver Holding Register  Reset Value */

#define I2SMCC_RHR_RHR_Pos                    _UINT32_(0)                                          /* (I2SMCC_RHR) Receiver Holding Register Position */
#define I2SMCC_RHR_RHR_Msk                    (_UINT32_(0xFFFFFFFF) << I2SMCC_RHR_RHR_Pos)         /* (I2SMCC_RHR) Receiver Holding Register Mask */
#define I2SMCC_RHR_RHR(value)                 (I2SMCC_RHR_RHR_Msk & (_UINT32_(value) << I2SMCC_RHR_RHR_Pos)) /* Assignment of value for RHR in the I2SMCC_RHR register */
#define I2SMCC_RHR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_RHR) Register Mask  */


/* -------- I2SMCC_THR : (I2SMCC Offset: 0x34) ( /W 32) Transmitter Holding Register -------- */
#define I2SMCC_THR_THR_Pos                    _UINT32_(0)                                          /* (I2SMCC_THR) Transmitter Holding Register Position */
#define I2SMCC_THR_THR_Msk                    (_UINT32_(0xFFFFFFFF) << I2SMCC_THR_THR_Pos)         /* (I2SMCC_THR) Transmitter Holding Register Mask */
#define I2SMCC_THR_THR(value)                 (I2SMCC_THR_THR_Msk & (_UINT32_(value) << I2SMCC_THR_THR_Pos)) /* Assignment of value for THR in the I2SMCC_THR register */
#define I2SMCC_THR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_THR) Register Mask  */


/* -------- I2SMCC_FIR : (I2SMCC Offset: 0x80) (R/W 32) Fault Injection Register -------- */
#define I2SMCC_FIR_RESETVALUE                 _UINT32_(0x00)                                       /*  (I2SMCC_FIR) Fault Injection Register  Reset Value */

#define I2SMCC_FIR_F0_Pos                     _UINT32_(0)                                          /* (I2SMCC_FIR) Single Fault for I2SMCC Receiver Enable bit (I2SMCC_CR.RXEN/RXDIS) Position */
#define I2SMCC_FIR_F0_Msk                     (_UINT32_(0x1) << I2SMCC_FIR_F0_Pos)                 /* (I2SMCC_FIR) Single Fault for I2SMCC Receiver Enable bit (I2SMCC_CR.RXEN/RXDIS) Mask */
#define I2SMCC_FIR_F0(value)                  (I2SMCC_FIR_F0_Msk & (_UINT32_(value) << I2SMCC_FIR_F0_Pos)) /* Assignment of value for F0 in the I2SMCC_FIR register */
#define   I2SMCC_FIR_F0_0_Val                 _UINT32_(0x0)                                        /* (I2SMCC_FIR) Clears the fault.  */
#define   I2SMCC_FIR_F0_1_Val                 _UINT32_(0x1)                                        /* (I2SMCC_FIR) Injects a single fault on I2SMCC_CR.RXEN/RXDIS if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1.  */
#define I2SMCC_FIR_F0_0                       (I2SMCC_FIR_F0_0_Val << I2SMCC_FIR_F0_Pos)           /* (I2SMCC_FIR) Clears the fault. Position */
#define I2SMCC_FIR_F0_1                       (I2SMCC_FIR_F0_1_Val << I2SMCC_FIR_F0_Pos)           /* (I2SMCC_FIR) Injects a single fault on I2SMCC_CR.RXEN/RXDIS if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1. Position */
#define I2SMCC_FIR_F1_Pos                     _UINT32_(1)                                          /* (I2SMCC_FIR) Single Fault for I2SMCC Clock Enable bit (I2SMCC_CR.CLKEN/CLKDIS) Position */
#define I2SMCC_FIR_F1_Msk                     (_UINT32_(0x1) << I2SMCC_FIR_F1_Pos)                 /* (I2SMCC_FIR) Single Fault for I2SMCC Clock Enable bit (I2SMCC_CR.CLKEN/CLKDIS) Mask */
#define I2SMCC_FIR_F1(value)                  (I2SMCC_FIR_F1_Msk & (_UINT32_(value) << I2SMCC_FIR_F1_Pos)) /* Assignment of value for F1 in the I2SMCC_FIR register */
#define   I2SMCC_FIR_F1_0_Val                 _UINT32_(0x0)                                        /* (I2SMCC_FIR) Clears the fault.  */
#define   I2SMCC_FIR_F1_1_Val                 _UINT32_(0x1)                                        /* (I2SMCC_FIR) Injects a single fault on I2SMCC_CR.CLKEN/CLKDIS if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1.  */
#define I2SMCC_FIR_F1_0                       (I2SMCC_FIR_F1_0_Val << I2SMCC_FIR_F1_Pos)           /* (I2SMCC_FIR) Clears the fault. Position */
#define I2SMCC_FIR_F1_1                       (I2SMCC_FIR_F1_1_Val << I2SMCC_FIR_F1_Pos)           /* (I2SMCC_FIR) Injects a single fault on I2SMCC_CR.CLKEN/CLKDIS if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1. Position */
#define I2SMCC_FIR_F2_Pos                     _UINT32_(2)                                          /* (I2SMCC_FIR) Single Fault for I2SMCC Transmitter Enable bit (I2SMCC_CR.TXEN/TXDIS) Position */
#define I2SMCC_FIR_F2_Msk                     (_UINT32_(0x1) << I2SMCC_FIR_F2_Pos)                 /* (I2SMCC_FIR) Single Fault for I2SMCC Transmitter Enable bit (I2SMCC_CR.TXEN/TXDIS) Mask */
#define I2SMCC_FIR_F2(value)                  (I2SMCC_FIR_F2_Msk & (_UINT32_(value) << I2SMCC_FIR_F2_Pos)) /* Assignment of value for F2 in the I2SMCC_FIR register */
#define   I2SMCC_FIR_F2_0_Val                 _UINT32_(0x0)                                        /* (I2SMCC_FIR) Clears the fault.  */
#define   I2SMCC_FIR_F2_1_Val                 _UINT32_(0x1)                                        /* (I2SMCC_FIR) Injects a single fault I2SMCC_CR.TXEN/TXDIS if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1.  */
#define I2SMCC_FIR_F2_0                       (I2SMCC_FIR_F2_0_Val << I2SMCC_FIR_F2_Pos)           /* (I2SMCC_FIR) Clears the fault. Position */
#define I2SMCC_FIR_F2_1                       (I2SMCC_FIR_F2_1_Val << I2SMCC_FIR_F2_Pos)           /* (I2SMCC_FIR) Injects a single fault I2SMCC_CR.TXEN/TXDIS if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1. Position */
#define I2SMCC_FIR_F3_Pos                     _UINT32_(3)                                          /* (I2SMCC_FIR) Single Fault for I2SMCC Receiver Direct Access Enable bit (I2SMCC_CR.RXDIRECT) Position */
#define I2SMCC_FIR_F3_Msk                     (_UINT32_(0x1) << I2SMCC_FIR_F3_Pos)                 /* (I2SMCC_FIR) Single Fault for I2SMCC Receiver Direct Access Enable bit (I2SMCC_CR.RXDIRECT) Mask */
#define I2SMCC_FIR_F3(value)                  (I2SMCC_FIR_F3_Msk & (_UINT32_(value) << I2SMCC_FIR_F3_Pos)) /* Assignment of value for F3 in the I2SMCC_FIR register */
#define   I2SMCC_FIR_F3_0_Val                 _UINT32_(0x0)                                        /* (I2SMCC_FIR) Clears the fault.  */
#define   I2SMCC_FIR_F3_1_Val                 _UINT32_(0x1)                                        /* (I2SMCC_FIR) Injects a single fault I2SMCC_CR.RXDIRECT if 0x494649 ("IFI" in ASCIIis written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1.  */
#define I2SMCC_FIR_F3_0                       (I2SMCC_FIR_F3_0_Val << I2SMCC_FIR_F3_Pos)           /* (I2SMCC_FIR) Clears the fault. Position */
#define I2SMCC_FIR_F3_1                       (I2SMCC_FIR_F3_1_Val << I2SMCC_FIR_F3_Pos)           /* (I2SMCC_FIR) Injects a single fault I2SMCC_CR.RXDIRECT if 0x494649 ("IFI" in ASCIIis written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1. Position */
#define I2SMCC_FIR_F4_Pos                     _UINT32_(4)                                          /* (I2SMCC_FIR) Single Fault for I2SMCC Transmitter Direct Access Enable bit (I2SMCC_CR.TXDIRECT) Position */
#define I2SMCC_FIR_F4_Msk                     (_UINT32_(0x1) << I2SMCC_FIR_F4_Pos)                 /* (I2SMCC_FIR) Single Fault for I2SMCC Transmitter Direct Access Enable bit (I2SMCC_CR.TXDIRECT) Mask */
#define I2SMCC_FIR_F4(value)                  (I2SMCC_FIR_F4_Msk & (_UINT32_(value) << I2SMCC_FIR_F4_Pos)) /* Assignment of value for F4 in the I2SMCC_FIR register */
#define   I2SMCC_FIR_F4_0_Val                 _UINT32_(0x0)                                        /* (I2SMCC_FIR) Clears the fault.  */
#define   I2SMCC_FIR_F4_1_Val                 _UINT32_(0x1)                                        /* (I2SMCC_FIR) Injects a single fault I2SMCC_CR.TXDIRECT if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1.  */
#define I2SMCC_FIR_F4_0                       (I2SMCC_FIR_F4_0_Val << I2SMCC_FIR_F4_Pos)           /* (I2SMCC_FIR) Clears the fault. Position */
#define I2SMCC_FIR_F4_1                       (I2SMCC_FIR_F4_1_Val << I2SMCC_FIR_F4_Pos)           /* (I2SMCC_FIR) Injects a single fault I2SMCC_CR.TXDIRECT if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1. Position */
#define I2SMCC_FIR_F5_Pos                     _UINT32_(5)                                          /* (I2SMCC_FIR) Single Fault for I2SMCC Write Protection Enable bit (I2SMCC_WPMR.WPCFEN) Position */
#define I2SMCC_FIR_F5_Msk                     (_UINT32_(0x1) << I2SMCC_FIR_F5_Pos)                 /* (I2SMCC_FIR) Single Fault for I2SMCC Write Protection Enable bit (I2SMCC_WPMR.WPCFEN) Mask */
#define I2SMCC_FIR_F5(value)                  (I2SMCC_FIR_F5_Msk & (_UINT32_(value) << I2SMCC_FIR_F5_Pos)) /* Assignment of value for F5 in the I2SMCC_FIR register */
#define   I2SMCC_FIR_F5_0_Val                 _UINT32_(0x0)                                        /* (I2SMCC_FIR) Clears the fault.  */
#define   I2SMCC_FIR_F5_1_Val                 _UINT32_(0x1)                                        /* (I2SMCC_FIR) Injects a single fault I2SMCC_CR.WPCFEN if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1.  */
#define I2SMCC_FIR_F5_0                       (I2SMCC_FIR_F5_0_Val << I2SMCC_FIR_F5_Pos)           /* (I2SMCC_FIR) Clears the fault. Position */
#define I2SMCC_FIR_F5_1                       (I2SMCC_FIR_F5_1_Val << I2SMCC_FIR_F5_Pos)           /* (I2SMCC_FIR) Injects a single fault I2SMCC_CR.WPCFEN if 0x494649 ("IFI" in ASCII) is written in the FIKEY field at the same time and if the flag I2SMCC_FIR.FIRDIS=0. The I2SMCC remains in the same state, the flag I2SMCC_ISRB.WERR=1 and the flag I2SMCC_WPSR.SDEE=1. Position */
#define I2SMCC_FIR_FPARE_Pos                  _UINT32_(6)                                          /* (I2SMCC_FIR) Single Fault for I2SMCC Configuration Register Position */
#define I2SMCC_FIR_FPARE_Msk                  (_UINT32_(0x1) << I2SMCC_FIR_FPARE_Pos)              /* (I2SMCC_FIR) Single Fault for I2SMCC Configuration Register Mask */
#define I2SMCC_FIR_FPARE(value)               (I2SMCC_FIR_FPARE_Msk & (_UINT32_(value) << I2SMCC_FIR_FPARE_Pos)) /* Assignment of value for FPARE in the I2SMCC_FIR register */
#define   I2SMCC_FIR_FPARE_NO_EFFECT_Val      _UINT32_(0x0)                                        /* (I2SMCC_FIR) No effect.  */
#define   I2SMCC_FIR_FPARE_INJECT_Val         _UINT32_(0x1)                                        /* (I2SMCC_FIR) Injects a single fault on configuration register if the I2SMCC receiver and transmitter are both disabled (for security reasons), the flag I2SMCC_WPSR.PARE rises and the flag I2SMCC_ISRB.WERR =1. To clear the fault, all the fields of the corresponding Configuration registers must be reconfigured. For I2SMCC_IMR, the clear is performed by writing a '1' into all the fields of I2SMCC_IDR. Thus the functional value must be reloaded by writing in I2SMCC_IER.  */
#define I2SMCC_FIR_FPARE_NO_EFFECT            (I2SMCC_FIR_FPARE_NO_EFFECT_Val << I2SMCC_FIR_FPARE_Pos) /* (I2SMCC_FIR) No effect. Position */
#define I2SMCC_FIR_FPARE_INJECT               (I2SMCC_FIR_FPARE_INJECT_Val << I2SMCC_FIR_FPARE_Pos) /* (I2SMCC_FIR) Injects a single fault on configuration register if the I2SMCC receiver and transmitter are both disabled (for security reasons), the flag I2SMCC_WPSR.PARE rises and the flag I2SMCC_ISRB.WERR =1. To clear the fault, all the fields of the corresponding Configuration registers must be reconfigured. For I2SMCC_IMR, the clear is performed by writing a '1' into all the fields of I2SMCC_IDR. Thus the functional value must be reloaded by writing in I2SMCC_IER. Position */
#define I2SMCC_FIR_FIRDIS_Pos                 _UINT32_(7)                                          /* (I2SMCC_FIR) Fault Injection Register Disable Position */
#define I2SMCC_FIR_FIRDIS_Msk                 (_UINT32_(0x1) << I2SMCC_FIR_FIRDIS_Pos)             /* (I2SMCC_FIR) Fault Injection Register Disable Mask */
#define I2SMCC_FIR_FIRDIS(value)              (I2SMCC_FIR_FIRDIS_Msk & (_UINT32_(value) << I2SMCC_FIR_FIRDIS_Pos)) /* Assignment of value for FIRDIS in the I2SMCC_FIR register */
#define   I2SMCC_FIR_FIRDIS_NO_EFFECT_Val     _UINT32_(0x0)                                        /* (I2SMCC_FIR) No effect.  */
#define   I2SMCC_FIR_FIRDIS_ACTIVE_Val        _UINT32_(0x1)                                        /* (I2SMCC_FIR) Disables the fault injection until the next hardware reset. The command is valid only if the I2SMCC_WPSR.PARE=0 and the other bits are cleared (F0=F1=F2=F3=F4=FPARE=0).  */
#define I2SMCC_FIR_FIRDIS_NO_EFFECT           (I2SMCC_FIR_FIRDIS_NO_EFFECT_Val << I2SMCC_FIR_FIRDIS_Pos) /* (I2SMCC_FIR) No effect. Position */
#define I2SMCC_FIR_FIRDIS_ACTIVE              (I2SMCC_FIR_FIRDIS_ACTIVE_Val << I2SMCC_FIR_FIRDIS_Pos) /* (I2SMCC_FIR) Disables the fault injection until the next hardware reset. The command is valid only if the I2SMCC_WPSR.PARE=0 and the other bits are cleared (F0=F1=F2=F3=F4=FPARE=0). Position */
#define I2SMCC_FIR_FIKEY_Pos                  _UINT32_(8)                                          /* (I2SMCC_FIR) Fault Injection Access Key Position */
#define I2SMCC_FIR_FIKEY_Msk                  (_UINT32_(0xFFFFFF) << I2SMCC_FIR_FIKEY_Pos)         /* (I2SMCC_FIR) Fault Injection Access Key Mask */
#define I2SMCC_FIR_FIKEY(value)               (I2SMCC_FIR_FIKEY_Msk & (_UINT32_(value) << I2SMCC_FIR_FIKEY_Pos)) /* Assignment of value for FIKEY in the I2SMCC_FIR register */
#define   I2SMCC_FIR_FIKEY_PASSWD_Val         _UINT32_(0x494649)                                   /* (I2SMCC_FIR) Writing any other value in this field aborts the write operation.  */
#define I2SMCC_FIR_FIKEY_PASSWD               (I2SMCC_FIR_FIKEY_PASSWD_Val << I2SMCC_FIR_FIKEY_Pos) /* (I2SMCC_FIR) Writing any other value in this field aborts the write operation. Position */
#define I2SMCC_FIR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (I2SMCC_FIR) Register Mask  */

#define I2SMCC_FIR_F_Pos                      _UINT32_(0)                                          /* (I2SMCC_FIR Position) Single Fault for I2SMCC Receiver Enable bit (I2SMCC_CR.RXEN/RXDIS) */
#define I2SMCC_FIR_F_Msk                      (_UINT32_(0x3F) << I2SMCC_FIR_F_Pos)                 /* (I2SMCC_FIR Mask) F */
#define I2SMCC_FIR_F(value)                   (I2SMCC_FIR_F_Msk & (_UINT32_(value) << I2SMCC_FIR_F_Pos)) 

/* -------- I2SMCC_WPMR : (I2SMCC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define I2SMCC_WPMR_RESETVALUE                _UINT32_(0x00)                                       /*  (I2SMCC_WPMR) Write Protection Mode Register  Reset Value */

#define I2SMCC_WPMR_WPCFEN_Pos                _UINT32_(0)                                          /* (I2SMCC_WPMR) Write Protection Configuration Enable Position */
#define I2SMCC_WPMR_WPCFEN_Msk                (_UINT32_(0x1) << I2SMCC_WPMR_WPCFEN_Pos)            /* (I2SMCC_WPMR) Write Protection Configuration Enable Mask */
#define I2SMCC_WPMR_WPCFEN(value)             (I2SMCC_WPMR_WPCFEN_Msk & (_UINT32_(value) << I2SMCC_WPMR_WPCFEN_Pos)) /* Assignment of value for WPCFEN in the I2SMCC_WPMR register */
#define   I2SMCC_WPMR_WPCFEN_0_Val            _UINT32_(0x0)                                        /* (I2SMCC_WPMR) Disables the write protection of the configuration if WPKEY matches to 0x493253 (I2S in ASCII).  */
#define   I2SMCC_WPMR_WPCFEN_1_Val            _UINT32_(0x1)                                        /* (I2SMCC_WPMR) Enables the write protection of the configuration if WPKEY matches to 0x493253 (I2S in ASCII).  */
#define I2SMCC_WPMR_WPCFEN_0                  (I2SMCC_WPMR_WPCFEN_0_Val << I2SMCC_WPMR_WPCFEN_Pos) /* (I2SMCC_WPMR) Disables the write protection of the configuration if WPKEY matches to 0x493253 (I2S in ASCII). Position */
#define I2SMCC_WPMR_WPCFEN_1                  (I2SMCC_WPMR_WPCFEN_1_Val << I2SMCC_WPMR_WPCFEN_Pos) /* (I2SMCC_WPMR) Enables the write protection of the configuration if WPKEY matches to 0x493253 (I2S in ASCII). Position */
#define I2SMCC_WPMR_WPITEN_Pos                _UINT32_(1)                                          /* (I2SMCC_WPMR) Write Protection Interrupt Enable Position */
#define I2SMCC_WPMR_WPITEN_Msk                (_UINT32_(0x1) << I2SMCC_WPMR_WPITEN_Pos)            /* (I2SMCC_WPMR) Write Protection Interrupt Enable Mask */
#define I2SMCC_WPMR_WPITEN(value)             (I2SMCC_WPMR_WPITEN_Msk & (_UINT32_(value) << I2SMCC_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the I2SMCC_WPMR register */
#define   I2SMCC_WPMR_WPITEN_0_Val            _UINT32_(0x0)                                        /* (I2SMCC_WPMR) Disables the write protection of the interruption if WPKEY matches to 0x493253 (I2S in ASCII).  */
#define   I2SMCC_WPMR_WPITEN_1_Val            _UINT32_(0x1)                                        /* (I2SMCC_WPMR) Enables the write protection of the interruption if WPKEY matches to 0x493253 (I2S in ASCII).  */
#define I2SMCC_WPMR_WPITEN_0                  (I2SMCC_WPMR_WPITEN_0_Val << I2SMCC_WPMR_WPITEN_Pos) /* (I2SMCC_WPMR) Disables the write protection of the interruption if WPKEY matches to 0x493253 (I2S in ASCII). Position */
#define I2SMCC_WPMR_WPITEN_1                  (I2SMCC_WPMR_WPITEN_1_Val << I2SMCC_WPMR_WPITEN_Pos) /* (I2SMCC_WPMR) Enables the write protection of the interruption if WPKEY matches to 0x493253 (I2S in ASCII). Position */
#define I2SMCC_WPMR_WPCTEN_Pos                _UINT32_(2)                                          /* (I2SMCC_WPMR) Write Protection Control Enable Position */
#define I2SMCC_WPMR_WPCTEN_Msk                (_UINT32_(0x1) << I2SMCC_WPMR_WPCTEN_Pos)            /* (I2SMCC_WPMR) Write Protection Control Enable Mask */
#define I2SMCC_WPMR_WPCTEN(value)             (I2SMCC_WPMR_WPCTEN_Msk & (_UINT32_(value) << I2SMCC_WPMR_WPCTEN_Pos)) /* Assignment of value for WPCTEN in the I2SMCC_WPMR register */
#define   I2SMCC_WPMR_WPCTEN_0_Val            _UINT32_(0x0)                                        /* (I2SMCC_WPMR) Disables the write protection of the control if WPKEY matches to 0x493253 (I2S in ASCII).  */
#define   I2SMCC_WPMR_WPCTEN_1_Val            _UINT32_(0x1)                                        /* (I2SMCC_WPMR) Enables the write protection of the control if WPKEY matches to 0x493253 (I2S in ASCII).  */
#define I2SMCC_WPMR_WPCTEN_0                  (I2SMCC_WPMR_WPCTEN_0_Val << I2SMCC_WPMR_WPCTEN_Pos) /* (I2SMCC_WPMR) Disables the write protection of the control if WPKEY matches to 0x493253 (I2S in ASCII). Position */
#define I2SMCC_WPMR_WPCTEN_1                  (I2SMCC_WPMR_WPCTEN_1_Val << I2SMCC_WPMR_WPCTEN_Pos) /* (I2SMCC_WPMR) Enables the write protection of the control if WPKEY matches to 0x493253 (I2S in ASCII). Position */
#define I2SMCC_WPMR_FIRSTE_Pos                _UINT32_(4)                                          /* (I2SMCC_WPMR) First Error Report Enable Position */
#define I2SMCC_WPMR_FIRSTE_Msk                (_UINT32_(0x1) << I2SMCC_WPMR_FIRSTE_Pos)            /* (I2SMCC_WPMR) First Error Report Enable Mask */
#define I2SMCC_WPMR_FIRSTE(value)             (I2SMCC_WPMR_FIRSTE_Msk & (_UINT32_(value) << I2SMCC_WPMR_FIRSTE_Pos)) /* Assignment of value for FIRSTE in the I2SMCC_WPMR register */
#define   I2SMCC_WPMR_FIRSTE_0_Val            _UINT32_(0x0)                                        /* (I2SMCC_WPMR) The last write protection violation source is reported in I2SMCC_WPSR.WPVSRC and the last software control error type is reported in I2SMCC_WPSR.SWETYP. The I2SMCC_ISRB.WERR flag is set at the first error occurrence within a series.  */
#define   I2SMCC_WPMR_FIRSTE_1_Val            _UINT32_(0x1)                                        /* (I2SMCC_WPMR) Only the first write protection violation source is reported in I2SMCC_WPSR.WPVSRC and only the first software control error type is reported in I2SMCC_WPSR.SWETYP. The I2SMCC_ISRB.WERR flag is set at the first error occurrence within a series.  */
#define I2SMCC_WPMR_FIRSTE_0                  (I2SMCC_WPMR_FIRSTE_0_Val << I2SMCC_WPMR_FIRSTE_Pos) /* (I2SMCC_WPMR) The last write protection violation source is reported in I2SMCC_WPSR.WPVSRC and the last software control error type is reported in I2SMCC_WPSR.SWETYP. The I2SMCC_ISRB.WERR flag is set at the first error occurrence within a series. Position */
#define I2SMCC_WPMR_FIRSTE_1                  (I2SMCC_WPMR_FIRSTE_1_Val << I2SMCC_WPMR_FIRSTE_Pos) /* (I2SMCC_WPMR) Only the first write protection violation source is reported in I2SMCC_WPSR.WPVSRC and only the first software control error type is reported in I2SMCC_WPSR.SWETYP. The I2SMCC_ISRB.WERR flag is set at the first error occurrence within a series. Position */
#define I2SMCC_WPMR_WPKEY_Pos                 _UINT32_(8)                                          /* (I2SMCC_WPMR) Write Protection Key Position */
#define I2SMCC_WPMR_WPKEY_Msk                 (_UINT32_(0xFFFFFF) << I2SMCC_WPMR_WPKEY_Pos)        /* (I2SMCC_WPMR) Write Protection Key Mask */
#define I2SMCC_WPMR_WPKEY(value)              (I2SMCC_WPMR_WPKEY_Msk & (_UINT32_(value) << I2SMCC_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the I2SMCC_WPMR register */
#define   I2SMCC_WPMR_WPKEY_PASSWD_Val        _UINT32_(0x493253)                                   /* (I2SMCC_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define I2SMCC_WPMR_WPKEY_PASSWD              (I2SMCC_WPMR_WPKEY_PASSWD_Val << I2SMCC_WPMR_WPKEY_Pos) /* (I2SMCC_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position */
#define I2SMCC_WPMR_Msk                       _UINT32_(0xFFFFFF17)                                 /* (I2SMCC_WPMR) Register Mask  */


/* -------- I2SMCC_WPSR : (I2SMCC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define I2SMCC_WPSR_RESETVALUE                _UINT32_(0x00)                                       /*  (I2SMCC_WPSR) Write Protection Status Register  Reset Value */

#define I2SMCC_WPSR_WPVS_Pos                  _UINT32_(0)                                          /* (I2SMCC_WPSR) Write Protection Violation Status (cleared on read) Position */
#define I2SMCC_WPSR_WPVS_Msk                  (_UINT32_(0x1) << I2SMCC_WPSR_WPVS_Pos)              /* (I2SMCC_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define I2SMCC_WPSR_WPVS(value)               (I2SMCC_WPSR_WPVS_Msk & (_UINT32_(value) << I2SMCC_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the I2SMCC_WPSR register */
#define   I2SMCC_WPSR_WPVS_0_Val              _UINT32_(0x0)                                        /* (I2SMCC_WPSR) No write protection violation has occurred since the last read of the I2SMCC_WPSR.  */
#define   I2SMCC_WPSR_WPVS_1_Val              _UINT32_(0x1)                                        /* (I2SMCC_WPSR) A write protection violation has occurred since the last read of the I2SMCC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define I2SMCC_WPSR_WPVS_0                    (I2SMCC_WPSR_WPVS_0_Val << I2SMCC_WPSR_WPVS_Pos)     /* (I2SMCC_WPSR) No write protection violation has occurred since the last read of the I2SMCC_WPSR. Position */
#define I2SMCC_WPSR_WPVS_1                    (I2SMCC_WPSR_WPVS_1_Val << I2SMCC_WPSR_WPVS_Pos)     /* (I2SMCC_WPSR) A write protection violation has occurred since the last read of the I2SMCC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position */
#define I2SMCC_WPSR_PADERR_Pos                _UINT32_(1)                                          /* (I2SMCC_WPSR) WS or CK Pad Error (cleared on read) Position */
#define I2SMCC_WPSR_PADERR_Msk                (_UINT32_(0x1) << I2SMCC_WPSR_PADERR_Pos)            /* (I2SMCC_WPSR) WS or CK Pad Error (cleared on read) Mask */
#define I2SMCC_WPSR_PADERR(value)             (I2SMCC_WPSR_PADERR_Msk & (_UINT32_(value) << I2SMCC_WPSR_PADERR_Pos)) /* Assignment of value for PADERR in the I2SMCC_WPSR register */
#define   I2SMCC_WPSR_PADERR_0_Val            _UINT32_(0x0)                                        /* (I2SMCC_WPSR) No error has been detected on I2SMCC_WS and I2SMCC_CK pad outputs since the last read of I2SMCC_WPSR.  */
#define   I2SMCC_WPSR_PADERR_1_Val            _UINT32_(0x1)                                        /* (I2SMCC_WPSR) Two successive erroneous samplings of WS pad output or abnormal number of clock edges have been detected on I2SMCC_CK pad output during the transmission of 1 audio sample. The event occurred since the last read of I2SMCC_WPSR.  */
#define I2SMCC_WPSR_PADERR_0                  (I2SMCC_WPSR_PADERR_0_Val << I2SMCC_WPSR_PADERR_Pos) /* (I2SMCC_WPSR) No error has been detected on I2SMCC_WS and I2SMCC_CK pad outputs since the last read of I2SMCC_WPSR. Position */
#define I2SMCC_WPSR_PADERR_1                  (I2SMCC_WPSR_PADERR_1_Val << I2SMCC_WPSR_PADERR_Pos) /* (I2SMCC_WPSR) Two successive erroneous samplings of WS pad output or abnormal number of clock edges have been detected on I2SMCC_CK pad output during the transmission of 1 audio sample. The event occurred since the last read of I2SMCC_WPSR. Position */
#define I2SMCC_WPSR_PARE_Pos                  _UINT32_(2)                                          /* (I2SMCC_WPSR) Internal Single Error Detection Configuration Registers Position */
#define I2SMCC_WPSR_PARE_Msk                  (_UINT32_(0x1) << I2SMCC_WPSR_PARE_Pos)              /* (I2SMCC_WPSR) Internal Single Error Detection Configuration Registers Mask */
#define I2SMCC_WPSR_PARE(value)               (I2SMCC_WPSR_PARE_Msk & (_UINT32_(value) << I2SMCC_WPSR_PARE_Pos)) /* Assignment of value for PARE in the I2SMCC_WPSR register */
#define   I2SMCC_WPSR_PARE_0_Val              _UINT32_(0x0)                                        /* (I2SMCC_WPSR) No internal single error has been detected on configuration registers since the last read of I2SMCC_WPSR.  */
#define   I2SMCC_WPSR_PARE_1_Val              _UINT32_(0x1)                                        /* (I2SMCC_WPSR) An internal single error has been detected. This flag is set under abnormal operating conditions or if the fault injection I2SMCC_FIR.FPARE is performed (only available if I2SMCC RX and TX are both disabled). I2SMCC_MRA/MRB/IMRA/IMRB and WPMR registers are monitored with a single error detection for each register.  */
#define I2SMCC_WPSR_PARE_0                    (I2SMCC_WPSR_PARE_0_Val << I2SMCC_WPSR_PARE_Pos)     /* (I2SMCC_WPSR) No internal single error has been detected on configuration registers since the last read of I2SMCC_WPSR. Position */
#define I2SMCC_WPSR_PARE_1                    (I2SMCC_WPSR_PARE_1_Val << I2SMCC_WPSR_PARE_Pos)     /* (I2SMCC_WPSR) An internal single error has been detected. This flag is set under abnormal operating conditions or if the fault injection I2SMCC_FIR.FPARE is performed (only available if I2SMCC RX and TX are both disabled). I2SMCC_MRA/MRB/IMRA/IMRB and WPMR registers are monitored with a single error detection for each register. Position */
#define I2SMCC_WPSR_SWE_Pos                   _UINT32_(3)                                          /* (I2SMCC_WPSR) Software Control Error (cleared on read) Position */
#define I2SMCC_WPSR_SWE_Msk                   (_UINT32_(0x1) << I2SMCC_WPSR_SWE_Pos)               /* (I2SMCC_WPSR) Software Control Error (cleared on read) Mask */
#define I2SMCC_WPSR_SWE(value)                (I2SMCC_WPSR_SWE_Msk & (_UINT32_(value) << I2SMCC_WPSR_SWE_Pos)) /* Assignment of value for SWE in the I2SMCC_WPSR register */
#define   I2SMCC_WPSR_SWE_0_Val               _UINT32_(0x0)                                        /* (I2SMCC_WPSR) No software error has occurred since the last read of I2SMCC_WPSR.  */
#define   I2SMCC_WPSR_SWE_1_Val               _UINT32_(0x1)                                        /* (I2SMCC_WPSR) A software error has occurred since the last read of I2SMCC_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0).  */
#define I2SMCC_WPSR_SWE_0                     (I2SMCC_WPSR_SWE_0_Val << I2SMCC_WPSR_SWE_Pos)       /* (I2SMCC_WPSR) No software error has occurred since the last read of I2SMCC_WPSR. Position */
#define I2SMCC_WPSR_SWE_1                     (I2SMCC_WPSR_SWE_1_Val << I2SMCC_WPSR_SWE_Pos)       /* (I2SMCC_WPSR) A software error has occurred since the last read of I2SMCC_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0). Position */
#define I2SMCC_WPSR_SDEE_Pos                  _UINT32_(4)                                          /* (I2SMCC_WPSR) Single or Dual Event Error (cleared by reconfiguring the faulty registers or by clearing the error via I2SMCC_FIR) Position */
#define I2SMCC_WPSR_SDEE_Msk                  (_UINT32_(0x1) << I2SMCC_WPSR_SDEE_Pos)              /* (I2SMCC_WPSR) Single or Dual Event Error (cleared by reconfiguring the faulty registers or by clearing the error via I2SMCC_FIR) Mask */
#define I2SMCC_WPSR_SDEE(value)               (I2SMCC_WPSR_SDEE_Msk & (_UINT32_(value) << I2SMCC_WPSR_SDEE_Pos)) /* Assignment of value for SDEE in the I2SMCC_WPSR register */
#define   I2SMCC_WPSR_SDEE_0_Val              _UINT32_(0x0)                                        /* (I2SMCC_WPSR) No single or dual error detected in I2SMCC_CR.RXEN/RXDIS, I2SMCC_CR.TXEN/TXDIS, I2SMCC_CR.CLKEN/CLKDIS, I2SMCC_MRB.RXDIRECT/TXDIRECT, I2SMCC_WPMR.WPCFEN, I2SMCC_WPMR.WPITEN, I2SMCC_WPMR.WPCTEN bits.  */
#define   I2SMCC_WPSR_SDEE_1_Val              _UINT32_(0x1)                                        /* (I2SMCC_WPSR) Single or dual error detected in I2SMCC_MRA.I2SMCC_CR.RXEN/RXDIS, I2SMCC_CR.TXEN/TXDIS, I2SMCC_CR.CLKEN/CLKDIS, I2SMCC_MRB.RXDIRECT/TXDIRECT, I2SMCC_WPMR.WPCFEN, I2SMCC_WPMR.WPITEN, I2SMCC_WPMR.WPCTEN bits.  */
#define I2SMCC_WPSR_SDEE_0                    (I2SMCC_WPSR_SDEE_0_Val << I2SMCC_WPSR_SDEE_Pos)     /* (I2SMCC_WPSR) No single or dual error detected in I2SMCC_CR.RXEN/RXDIS, I2SMCC_CR.TXEN/TXDIS, I2SMCC_CR.CLKEN/CLKDIS, I2SMCC_MRB.RXDIRECT/TXDIRECT, I2SMCC_WPMR.WPCFEN, I2SMCC_WPMR.WPITEN, I2SMCC_WPMR.WPCTEN bits. Position */
#define I2SMCC_WPSR_SDEE_1                    (I2SMCC_WPSR_SDEE_1_Val << I2SMCC_WPSR_SDEE_Pos)     /* (I2SMCC_WPSR) Single or dual error detected in I2SMCC_MRA.I2SMCC_CR.RXEN/RXDIS, I2SMCC_CR.TXEN/TXDIS, I2SMCC_CR.CLKEN/CLKDIS, I2SMCC_MRB.RXDIRECT/TXDIRECT, I2SMCC_WPMR.WPCFEN, I2SMCC_WPMR.WPITEN, I2SMCC_WPMR.WPCTEN bits. Position */
#define I2SMCC_WPSR_WSALIGNERR_Pos            _UINT32_(5)                                          /* (I2SMCC_WPSR) WS Alignment Error (cleared on read) Position */
#define I2SMCC_WPSR_WSALIGNERR_Msk            (_UINT32_(0x1) << I2SMCC_WPSR_WSALIGNERR_Pos)        /* (I2SMCC_WPSR) WS Alignment Error (cleared on read) Mask */
#define I2SMCC_WPSR_WSALIGNERR(value)         (I2SMCC_WPSR_WSALIGNERR_Msk & (_UINT32_(value) << I2SMCC_WPSR_WSALIGNERR_Pos)) /* Assignment of value for WSALIGNERR in the I2SMCC_WPSR register */
#define   I2SMCC_WPSR_WSALIGNERR_0_Val        _UINT32_(0x0)                                        /* (I2SMCC_WPSR) No internal nonalignment that could result from abnormal conditions on I2SMCC_WS/CK input pins.  */
#define   I2SMCC_WPSR_WSALIGNERR_1_Val        _UINT32_(0x1)                                        /* (I2SMCC_WPSR) In Client mode (I2SMCC_WS/CK are inputs), an abnormal alignment has been detected between internal WS and CK signals. This may result from a glitch on I2SMCC_CK or I2SMCC_WS drivers or the absence of voltage hysteresis management on the pad buffer driving the internal CK clock pin. This flag may also be asserted when the audio codec providing WS/CK generates an unexpected misalignment.  */
#define I2SMCC_WPSR_WSALIGNERR_0              (I2SMCC_WPSR_WSALIGNERR_0_Val << I2SMCC_WPSR_WSALIGNERR_Pos) /* (I2SMCC_WPSR) No internal nonalignment that could result from abnormal conditions on I2SMCC_WS/CK input pins. Position */
#define I2SMCC_WPSR_WSALIGNERR_1              (I2SMCC_WPSR_WSALIGNERR_1_Val << I2SMCC_WPSR_WSALIGNERR_Pos) /* (I2SMCC_WPSR) In Client mode (I2SMCC_WS/CK are inputs), an abnormal alignment has been detected between internal WS and CK signals. This may result from a glitch on I2SMCC_CK or I2SMCC_WS drivers or the absence of voltage hysteresis management on the pad buffer driving the internal CK clock pin. This flag may also be asserted when the audio codec providing WS/CK generates an unexpected misalignment. Position */
#define I2SMCC_WPSR_HWERR_Pos                 _UINT32_(6)                                          /* (I2SMCC_WPSR) Hardware Error in Client Mode and Direct Access Transfer Position */
#define I2SMCC_WPSR_HWERR_Msk                 (_UINT32_(0x1) << I2SMCC_WPSR_HWERR_Pos)             /* (I2SMCC_WPSR) Hardware Error in Client Mode and Direct Access Transfer Mask */
#define I2SMCC_WPSR_HWERR(value)              (I2SMCC_WPSR_HWERR_Msk & (_UINT32_(value) << I2SMCC_WPSR_HWERR_Pos)) /* Assignment of value for HWERR in the I2SMCC_WPSR register */
#define   I2SMCC_WPSR_HWERR_0_Val             _UINT32_(0x0)                                        /* (I2SMCC_WPSR) No abnormal underflow in transmitter detected In Client mode and direct access with ASRC.  */
#define   I2SMCC_WPSR_HWERR_1_Val             _UINT32_(0x1)                                        /* (I2SMCC_WPSR) Abnormal underflow detected in transmitter when configured in Client mode and direct access with ASRC. The transmitter is automatically re-initialized to continue streaming the audio samples from ASRC. The error may be created from an unexpected disable of the direct access mode in ASRC or from an abnormal condition on the I2SMCC_CK/WS pins.  */
#define I2SMCC_WPSR_HWERR_0                   (I2SMCC_WPSR_HWERR_0_Val << I2SMCC_WPSR_HWERR_Pos)   /* (I2SMCC_WPSR) No abnormal underflow in transmitter detected In Client mode and direct access with ASRC. Position */
#define I2SMCC_WPSR_HWERR_1                   (I2SMCC_WPSR_HWERR_1_Val << I2SMCC_WPSR_HWERR_Pos)   /* (I2SMCC_WPSR) Abnormal underflow detected in transmitter when configured in Client mode and direct access with ASRC. The transmitter is automatically re-initialized to continue streaming the audio samples from ASRC. The error may be created from an unexpected disable of the direct access mode in ASRC or from an abnormal condition on the I2SMCC_CK/WS pins. Position */
#define I2SMCC_WPSR_WPVSRC_Pos                _UINT32_(8)                                          /* (I2SMCC_WPSR) Write Protection Violation Source Position */
#define I2SMCC_WPSR_WPVSRC_Msk                (_UINT32_(0xFFFF) << I2SMCC_WPSR_WPVSRC_Pos)         /* (I2SMCC_WPSR) Write Protection Violation Source Mask */
#define I2SMCC_WPSR_WPVSRC(value)             (I2SMCC_WPSR_WPVSRC_Msk & (_UINT32_(value) << I2SMCC_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the I2SMCC_WPSR register */
#define I2SMCC_WPSR_SWETYP_Pos                _UINT32_(24)                                         /* (I2SMCC_WPSR) Software Error Type (cleared on read) Position */
#define I2SMCC_WPSR_SWETYP_Msk                (_UINT32_(0x3) << I2SMCC_WPSR_SWETYP_Pos)            /* (I2SMCC_WPSR) Software Error Type (cleared on read) Mask */
#define I2SMCC_WPSR_SWETYP(value)             (I2SMCC_WPSR_SWETYP_Msk & (_UINT32_(value) << I2SMCC_WPSR_SWETYP_Pos)) /* Assignment of value for SWETYP in the I2SMCC_WPSR register */
#define   I2SMCC_WPSR_SWETYP_READ_WO_Val      _UINT32_(0x0)                                        /* (I2SMCC_WPSR) A write-only register has been read.  */
#define   I2SMCC_WPSR_SWETYP_WRITE_RO_Val     _UINT32_(0x1)                                        /* (I2SMCC_WPSR) A write access has been performed on a read-only register.  */
#define   I2SMCC_WPSR_SWETYP_UNDEF_RW_Val     _UINT32_(0x2)                                        /* (I2SMCC_WPSR) Access to an undefined address.  */
#define I2SMCC_WPSR_SWETYP_READ_WO            (I2SMCC_WPSR_SWETYP_READ_WO_Val << I2SMCC_WPSR_SWETYP_Pos) /* (I2SMCC_WPSR) A write-only register has been read. Position */
#define I2SMCC_WPSR_SWETYP_WRITE_RO           (I2SMCC_WPSR_SWETYP_WRITE_RO_Val << I2SMCC_WPSR_SWETYP_Pos) /* (I2SMCC_WPSR) A write access has been performed on a read-only register. Position */
#define I2SMCC_WPSR_SWETYP_UNDEF_RW           (I2SMCC_WPSR_SWETYP_UNDEF_RW_Val << I2SMCC_WPSR_SWETYP_Pos) /* (I2SMCC_WPSR) Access to an undefined address. Position */
#define I2SMCC_WPSR_Msk                       _UINT32_(0x03FFFF7F)                                 /* (I2SMCC_WPSR) Register Mask  */


/* I2SMCC register offsets definitions */
#define I2SMCC_RHLxR_REG_OFST          _UINT32_(0x00)      /* (I2SMCC_RHLxR) Receiver Holding Left x Register Offset */
#define I2SMCC_RHRxR_REG_OFST          _UINT32_(0x04)      /* (I2SMCC_RHRxR) Receiver Holding Right x Register Offset */
#define I2SMCC_THLxR_REG_OFST          _UINT32_(0x00)      /* (I2SMCC_THLxR) Transmitter Holding Left x Register Offset */
#define I2SMCC_THRxR_REG_OFST          _UINT32_(0x04)      /* (I2SMCC_THRxR) Transmitter Holding Right x Register Offset */
#define I2SMCC_CR_REG_OFST             _UINT32_(0x00)      /* (I2SMCC_CR) Control Register Offset */
#define I2SMCC_MRA_REG_OFST            _UINT32_(0x04)      /* (I2SMCC_MRA) Mode Register A Offset */
#define I2SMCC_MRB_REG_OFST            _UINT32_(0x08)      /* (I2SMCC_MRB) Mode Register B Offset */
#define I2SMCC_SR_REG_OFST             _UINT32_(0x0C)      /* (I2SMCC_SR) Status Register Offset */
#define I2SMCC_IERA_REG_OFST           _UINT32_(0x10)      /* (I2SMCC_IERA) Interrupt Enable Register A Offset */
#define I2SMCC_IDRA_REG_OFST           _UINT32_(0x14)      /* (I2SMCC_IDRA) Interrupt Disable Register A Offset */
#define I2SMCC_IMRA_REG_OFST           _UINT32_(0x18)      /* (I2SMCC_IMRA) Interrupt Mask Register A Offset */
#define I2SMCC_ISRA_REG_OFST           _UINT32_(0x1C)      /* (I2SMCC_ISRA) Interrupt Status Register A Offset */
#define I2SMCC_IERB_REG_OFST           _UINT32_(0x20)      /* (I2SMCC_IERB) Interrupt Enable Register B Offset */
#define I2SMCC_IDRB_REG_OFST           _UINT32_(0x24)      /* (I2SMCC_IDRB) Interrupt Disable Register B Offset */
#define I2SMCC_IMRB_REG_OFST           _UINT32_(0x28)      /* (I2SMCC_IMRB) Interrupt Mask Register B Offset */
#define I2SMCC_ISRB_REG_OFST           _UINT32_(0x2C)      /* (I2SMCC_ISRB) Interrupt Status Register B Offset */
#define I2SMCC_RHR_REG_OFST            _UINT32_(0x30)      /* (I2SMCC_RHR) Receiver Holding Register Offset */
#define I2SMCC_THR_REG_OFST            _UINT32_(0x34)      /* (I2SMCC_THR) Transmitter Holding Register Offset */
#define I2SMCC_FIR_REG_OFST            _UINT32_(0x80)      /* (I2SMCC_FIR) Fault Injection Register Offset */
#define I2SMCC_WPMR_REG_OFST           _UINT32_(0xE4)      /* (I2SMCC_WPMR) Write Protection Mode Register Offset */
#define I2SMCC_WPSR_REG_OFST           _UINT32_(0xE8)      /* (I2SMCC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* I2SMCC_RH register API structure */
typedef struct
{
  __I   uint32_t                       I2SMCC_RHLxR;       /* Offset: 0x00 (R/   32) Receiver Holding Left x Register */
  __I   uint32_t                       I2SMCC_RHRxR;       /* Offset: 0x04 (R/   32) Receiver Holding Right x Register */
} i2smcc_rh_registers_t;

/* I2SMCC_TH register API structure */
typedef struct
{
  __O   uint32_t                       I2SMCC_THLxR;       /* Offset: 0x00 ( /W  32) Transmitter Holding Left x Register */
  __O   uint32_t                       I2SMCC_THRxR;       /* Offset: 0x04 ( /W  32) Transmitter Holding Right x Register */
} i2smcc_th_registers_t;

#define I2SMCC_RH_NUMBER 4

#define I2SMCC_TH_NUMBER 4

/* I2SMCC register API structure */
typedef struct
{  /* Inter-IC Sound Multi Channel Controller */
  __O   uint32_t                       I2SMCC_CR;          /* Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       I2SMCC_MRA;         /* Offset: 0x04 (R/W  32) Mode Register A */
  __IO  uint32_t                       I2SMCC_MRB;         /* Offset: 0x08 (R/W  32) Mode Register B */
  __I   uint32_t                       I2SMCC_SR;          /* Offset: 0x0C (R/   32) Status Register */
  __O   uint32_t                       I2SMCC_IERA;        /* Offset: 0x10 ( /W  32) Interrupt Enable Register A */
  __O   uint32_t                       I2SMCC_IDRA;        /* Offset: 0x14 ( /W  32) Interrupt Disable Register A */
  __I   uint32_t                       I2SMCC_IMRA;        /* Offset: 0x18 (R/   32) Interrupt Mask Register A */
  __I   uint32_t                       I2SMCC_ISRA;        /* Offset: 0x1C (R/   32) Interrupt Status Register A */
  __O   uint32_t                       I2SMCC_IERB;        /* Offset: 0x20 ( /W  32) Interrupt Enable Register B */
  __O   uint32_t                       I2SMCC_IDRB;        /* Offset: 0x24 ( /W  32) Interrupt Disable Register B */
  __I   uint32_t                       I2SMCC_IMRB;        /* Offset: 0x28 (R/   32) Interrupt Mask Register B */
  __I   uint32_t                       I2SMCC_ISRB;        /* Offset: 0x2C (R/   32) Interrupt Status Register B */
  __I   uint32_t                       I2SMCC_RHR;         /* Offset: 0x30 (R/   32) Receiver Holding Register */
  __O   uint32_t                       I2SMCC_THR;         /* Offset: 0x34 ( /W  32) Transmitter Holding Register */
  __I   uint8_t                        Reserved1[0x08];
        i2smcc_rh_registers_t          I2SMCC_RH[I2SMCC_RH_NUMBER]; /* Offset: 0x40  */
        i2smcc_th_registers_t          I2SMCC_TH[I2SMCC_TH_NUMBER]; /* Offset: 0x60  */
  __IO  uint32_t                       I2SMCC_FIR;         /* Offset: 0x80 (R/W  32) Fault Injection Register */
  __I   uint8_t                        Reserved2[0x60];
  __IO  uint32_t                       I2SMCC_WPMR;        /* Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       I2SMCC_WPSR;        /* Offset: 0xE8 (R/   32) Write Protection Status Register */
} i2smcc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D_I2SMCC_COMPONENT_H_ */
