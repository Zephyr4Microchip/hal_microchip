/*
 * Component description for SPDIFTX
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
#ifndef _SAMA7D_SPDIFTX_COMPONENT_H_
#define _SAMA7D_SPDIFTX_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR SPDIFTX                     */
/* ************************************************************************** */

/* -------- SPDIFTX_CR : (SPDIFTX Offset: 0x00) ( /W 32) SPDIF Transmitter Control Register -------- */
#define SPDIFTX_CR_SWRST_Pos                  _UINT32_(0)                                          /* (SPDIFTX_CR) Software Reset Position */
#define SPDIFTX_CR_SWRST_Msk                  (_UINT32_(0x1) << SPDIFTX_CR_SWRST_Pos)              /* (SPDIFTX_CR) Software Reset Mask */
#define SPDIFTX_CR_SWRST(value)               (SPDIFTX_CR_SWRST_Msk & (_UINT32_(value) << SPDIFTX_CR_SWRST_Pos)) /* Assignment of value for SWRST in the SPDIFTX_CR register */
#define   SPDIFTX_CR_SWRST_0_Val              _UINT32_(0x0)                                        /* (SPDIFTX_CR) No effect.  */
#define   SPDIFTX_CR_SWRST_1_Val              _UINT32_(0x1)                                        /* (SPDIFTX_CR) Resets the SPDIFTX interface.  */
#define SPDIFTX_CR_SWRST_0                    (SPDIFTX_CR_SWRST_0_Val << SPDIFTX_CR_SWRST_Pos)     /* (SPDIFTX_CR) No effect. Position */
#define SPDIFTX_CR_SWRST_1                    (SPDIFTX_CR_SWRST_1_Val << SPDIFTX_CR_SWRST_Pos)     /* (SPDIFTX_CR) Resets the SPDIFTX interface. Position */
#define SPDIFTX_CR_FCLR_Pos                   _UINT32_(1)                                          /* (SPDIFTX_CR) FIFO clear Position */
#define SPDIFTX_CR_FCLR_Msk                   (_UINT32_(0x1) << SPDIFTX_CR_FCLR_Pos)               /* (SPDIFTX_CR) FIFO clear Mask */
#define SPDIFTX_CR_FCLR(value)                (SPDIFTX_CR_FCLR_Msk & (_UINT32_(value) << SPDIFTX_CR_FCLR_Pos)) /* Assignment of value for FCLR in the SPDIFTX_CR register */
#define   SPDIFTX_CR_FCLR_0_Val               _UINT32_(0x0)                                        /* (SPDIFTX_CR) No effect.  */
#define   SPDIFTX_CR_FCLR_1_Val               _UINT32_(0x1)                                        /* (SPDIFTX_CR) Empties Channel 1 and Channel 2 FIFOs  */
#define SPDIFTX_CR_FCLR_0                     (SPDIFTX_CR_FCLR_0_Val << SPDIFTX_CR_FCLR_Pos)       /* (SPDIFTX_CR) No effect. Position */
#define SPDIFTX_CR_FCLR_1                     (SPDIFTX_CR_FCLR_1_Val << SPDIFTX_CR_FCLR_Pos)       /* (SPDIFTX_CR) Empties Channel 1 and Channel 2 FIFOs Position */
#define SPDIFTX_CR_Msk                        _UINT32_(0x00000003)                                 /* (SPDIFTX_CR) Register Mask  */


/* -------- SPDIFTX_MR : (SPDIFTX Offset: 0x04) (R/W 32) SPDIF Transmitter Mode Register -------- */
#define SPDIFTX_MR_RESETVALUE                 _UINT32_(0x23011806)                                 /*  (SPDIFTX_MR) SPDIF Transmitter Mode Register  Reset Value */

#define SPDIFTX_MR_TXEN_Pos                   _UINT32_(0)                                          /* (SPDIFTX_MR) SPDIFTX Transmit Enable Position */
#define SPDIFTX_MR_TXEN_Msk                   (_UINT32_(0x1) << SPDIFTX_MR_TXEN_Pos)               /* (SPDIFTX_MR) SPDIFTX Transmit Enable Mask */
#define SPDIFTX_MR_TXEN(value)                (SPDIFTX_MR_TXEN_Msk & (_UINT32_(value) << SPDIFTX_MR_TXEN_Pos)) /* Assignment of value for TXEN in the SPDIFTX_MR register */
#define   SPDIFTX_MR_TXEN_DISABLE_Val         _UINT32_(0x0)                                        /* (SPDIFTX_MR) SPDIFTX transmission is disabled.  */
#define   SPDIFTX_MR_TXEN_ENABLE_Val          _UINT32_(0x1)                                        /* (SPDIFTX_MR) SPDIFTX transmission is enabled.  */
#define SPDIFTX_MR_TXEN_DISABLE               (SPDIFTX_MR_TXEN_DISABLE_Val << SPDIFTX_MR_TXEN_Pos) /* (SPDIFTX_MR) SPDIFTX transmission is disabled. Position */
#define SPDIFTX_MR_TXEN_ENABLE                (SPDIFTX_MR_TXEN_ENABLE_Val << SPDIFTX_MR_TXEN_Pos)  /* (SPDIFTX_MR) SPDIFTX transmission is enabled. Position */
#define SPDIFTX_MR_MULTICH_Pos                _UINT32_(1)                                          /* (SPDIFTX_MR) Multichannel Transfer Position */
#define SPDIFTX_MR_MULTICH_Msk                (_UINT32_(0x1) << SPDIFTX_MR_MULTICH_Pos)            /* (SPDIFTX_MR) Multichannel Transfer Mask */
#define SPDIFTX_MR_MULTICH(value)             (SPDIFTX_MR_MULTICH_Msk & (_UINT32_(value) << SPDIFTX_MR_MULTICH_Pos)) /* Assignment of value for MULTICH in the SPDIFTX_MR register */
#define   SPDIFTX_MR_MULTICH_MONO_Val         _UINT32_(0x0)                                        /* (SPDIFTX_MR) One channel is sent on channel 1 to SPDIFTX_TX and is copied on channel 2.  */
#define   SPDIFTX_MR_MULTICH_DUAL_Val         _UINT32_(0x1)                                        /* (SPDIFTX_MR) Two separate channels are sent to SPDIFTX_TX.  */
#define SPDIFTX_MR_MULTICH_MONO               (SPDIFTX_MR_MULTICH_MONO_Val << SPDIFTX_MR_MULTICH_Pos) /* (SPDIFTX_MR) One channel is sent on channel 1 to SPDIFTX_TX and is copied on channel 2. Position */
#define SPDIFTX_MR_MULTICH_DUAL               (SPDIFTX_MR_MULTICH_DUAL_Val << SPDIFTX_MR_MULTICH_Pos) /* (SPDIFTX_MR) Two separate channels are sent to SPDIFTX_TX. Position */
#define SPDIFTX_MR_ENDIAN_Pos                 _UINT32_(2)                                          /* (SPDIFTX_MR) Data Word Endian Mode Position */
#define SPDIFTX_MR_ENDIAN_Msk                 (_UINT32_(0x1) << SPDIFTX_MR_ENDIAN_Pos)             /* (SPDIFTX_MR) Data Word Endian Mode Mask */
#define SPDIFTX_MR_ENDIAN(value)              (SPDIFTX_MR_ENDIAN_Msk & (_UINT32_(value) << SPDIFTX_MR_ENDIAN_Pos)) /* Assignment of value for ENDIAN in the SPDIFTX_MR register */
#define   SPDIFTX_MR_ENDIAN_LITTLE_Val        _UINT32_(0x0)                                        /* (SPDIFTX_MR) Little-endian mode.  */
#define   SPDIFTX_MR_ENDIAN_BIG_Val           _UINT32_(0x1)                                        /* (SPDIFTX_MR) Big-endian mode.  */
#define SPDIFTX_MR_ENDIAN_LITTLE              (SPDIFTX_MR_ENDIAN_LITTLE_Val << SPDIFTX_MR_ENDIAN_Pos) /* (SPDIFTX_MR) Little-endian mode. Position */
#define SPDIFTX_MR_ENDIAN_BIG                 (SPDIFTX_MR_ENDIAN_BIG_Val << SPDIFTX_MR_ENDIAN_Pos) /* (SPDIFTX_MR) Big-endian mode. Position */
#define SPDIFTX_MR_JUSTIFY_Pos                _UINT32_(3)                                          /* (SPDIFTX_MR) Data Justification Position */
#define SPDIFTX_MR_JUSTIFY_Msk                (_UINT32_(0x1) << SPDIFTX_MR_JUSTIFY_Pos)            /* (SPDIFTX_MR) Data Justification Mask */
#define SPDIFTX_MR_JUSTIFY(value)             (SPDIFTX_MR_JUSTIFY_Msk & (_UINT32_(value) << SPDIFTX_MR_JUSTIFY_Pos)) /* Assignment of value for JUSTIFY in the SPDIFTX_MR register */
#define   SPDIFTX_MR_JUSTIFY_LSB_Val          _UINT32_(0x0)                                        /* (SPDIFTX_MR) Least Significant Bit justification. The valid bits of the signal are aligned on the least-significant bits of the container.  */
#define   SPDIFTX_MR_JUSTIFY_MSB_Val          _UINT32_(0x1)                                        /* (SPDIFTX_MR) Most Significant Bit justification. The valid bits of the signal are aligned on the most-significant bits of the container.  */
#define SPDIFTX_MR_JUSTIFY_LSB                (SPDIFTX_MR_JUSTIFY_LSB_Val << SPDIFTX_MR_JUSTIFY_Pos) /* (SPDIFTX_MR) Least Significant Bit justification. The valid bits of the signal are aligned on the least-significant bits of the container. Position */
#define SPDIFTX_MR_JUSTIFY_MSB                (SPDIFTX_MR_JUSTIFY_MSB_Val << SPDIFTX_MR_JUSTIFY_Pos) /* (SPDIFTX_MR) Most Significant Bit justification. The valid bits of the signal are aligned on the most-significant bits of the container. Position */
#define SPDIFTX_MR_CMODE_Pos                  _UINT32_(4)                                          /* (SPDIFTX_MR) Common Audio Register Transfer Mode (if BPS=2) Position */
#define SPDIFTX_MR_CMODE_Msk                  (_UINT32_(0x3) << SPDIFTX_MR_CMODE_Pos)              /* (SPDIFTX_MR) Common Audio Register Transfer Mode (if BPS=2) Mask */
#define SPDIFTX_MR_CMODE(value)               (SPDIFTX_MR_CMODE_Msk & (_UINT32_(value) << SPDIFTX_MR_CMODE_Pos)) /* Assignment of value for CMODE in the SPDIFTX_MR register */
#define   SPDIFTX_MR_CMODE_CHANNEL_INDEX_Val  _UINT32_(0x0)                                        /* (SPDIFTX_MR) SPDIFTX_CDR.CDR[25:24] indicates the channel on which the data CDR[23:0] will be transmitted (1 for channel 1, 2 for channel 2).Transmitted data are located on SPDIFTX_CDR.CDR[23:0].  */
#define   SPDIFTX_MR_CMODE_CHANNELS_TOGGLING_Val _UINT32_(0x1)                                        /* (SPDIFTX_MR) The data are stored alternately in the FIFO of channel 1 and channel 2. The first sent data after a software or hardware reset is stored in the FIFO of channel 1. Transmitted data are located on SPDIFTX_CDR.CDR[23:0].  */
#define   SPDIFTX_MR_CMODE_COMPACT_24BIT_Val  _UINT32_(0x2)                                        /* (SPDIFTX_MR) This mode is optimized for 24-bit data compacted on 32-bit memory space. Transmitted data are located on SPDIFTX_CDR.CDR[31:0]. The 32 bits of SPDIFTX_CDR are used and contains one or more channel data.  */
#define   SPDIFTX_MR_CMODE_CONTROL_BITS_Val   _UINT32_(0x3)                                        /* (SPDIFTX_MR) Control bits (preamble, validity, user data, channel status, parity) can be managed by writing SPDIFTX_CDR.CDR[31:24] depending on SPDIFTX_EMR configuration. The data are stored alternately in the FIFO of channel 1 and channel 2. The first data sent after a software or hardware reset is stored in the FIFO of channel 1. Transmitted data are located on SPDIFTX_CDR.CDR[23:0].  */
#define SPDIFTX_MR_CMODE_CHANNEL_INDEX        (SPDIFTX_MR_CMODE_CHANNEL_INDEX_Val << SPDIFTX_MR_CMODE_Pos) /* (SPDIFTX_MR) SPDIFTX_CDR.CDR[25:24] indicates the channel on which the data CDR[23:0] will be transmitted (1 for channel 1, 2 for channel 2).Transmitted data are located on SPDIFTX_CDR.CDR[23:0]. Position */
#define SPDIFTX_MR_CMODE_CHANNELS_TOGGLING    (SPDIFTX_MR_CMODE_CHANNELS_TOGGLING_Val << SPDIFTX_MR_CMODE_Pos) /* (SPDIFTX_MR) The data are stored alternately in the FIFO of channel 1 and channel 2. The first sent data after a software or hardware reset is stored in the FIFO of channel 1. Transmitted data are located on SPDIFTX_CDR.CDR[23:0]. Position */
#define SPDIFTX_MR_CMODE_COMPACT_24BIT        (SPDIFTX_MR_CMODE_COMPACT_24BIT_Val << SPDIFTX_MR_CMODE_Pos) /* (SPDIFTX_MR) This mode is optimized for 24-bit data compacted on 32-bit memory space. Transmitted data are located on SPDIFTX_CDR.CDR[31:0]. The 32 bits of SPDIFTX_CDR are used and contains one or more channel data. Position */
#define SPDIFTX_MR_CMODE_CONTROL_BITS         (SPDIFTX_MR_CMODE_CONTROL_BITS_Val << SPDIFTX_MR_CMODE_Pos) /* (SPDIFTX_MR) Control bits (preamble, validity, user data, channel status, parity) can be managed by writing SPDIFTX_CDR.CDR[31:24] depending on SPDIFTX_EMR configuration. The data are stored alternately in the FIFO of channel 1 and channel 2. The first data sent after a software or hardware reset is stored in the FIFO of channel 1. Transmitted data are located on SPDIFTX_CDR.CDR[23:0]. Position */
#define SPDIFTX_MR_TXDIRECT_Pos               _UINT32_(6)                                          /* (SPDIFTX_MR) Transmitter Direct Access Enable Position */
#define SPDIFTX_MR_TXDIRECT_Msk               (_UINT32_(0x1) << SPDIFTX_MR_TXDIRECT_Pos)           /* (SPDIFTX_MR) Transmitter Direct Access Enable Mask */
#define SPDIFTX_MR_TXDIRECT(value)            (SPDIFTX_MR_TXDIRECT_Msk & (_UINT32_(value) << SPDIFTX_MR_TXDIRECT_Pos)) /* Assignment of value for TXDIRECT in the SPDIFTX_MR register */
#define   SPDIFTX_MR_TXDIRECT_0_Val           _UINT32_(0x0)                                        /* (SPDIFTX_MR) The SPDIFTX holding register must be written by software or DMA to transmit audio samples on the SPDIF line.  */
#define   SPDIFTX_MR_TXDIRECT_1_Val           _UINT32_(0x1)                                        /* (SPDIFTX_MR) Asynchronous Sample Rate Converter (ASRC) can directly transfer the audio samples on the SPDIF line without software or DMA intervention.  */
#define SPDIFTX_MR_TXDIRECT_0                 (SPDIFTX_MR_TXDIRECT_0_Val << SPDIFTX_MR_TXDIRECT_Pos) /* (SPDIFTX_MR) The SPDIFTX holding register must be written by software or DMA to transmit audio samples on the SPDIF line. Position */
#define SPDIFTX_MR_TXDIRECT_1                 (SPDIFTX_MR_TXDIRECT_1_Val << SPDIFTX_MR_TXDIRECT_Pos) /* (SPDIFTX_MR) Asynchronous Sample Rate Converter (ASRC) can directly transfer the audio samples on the SPDIF line without software or DMA intervention. Position */
#define SPDIFTX_MR_VBPS_Pos                   _UINT32_(8)                                          /* (SPDIFTX_MR) Valid Bits Per Sample Position */
#define SPDIFTX_MR_VBPS_Msk                   (_UINT32_(0x3F) << SPDIFTX_MR_VBPS_Pos)              /* (SPDIFTX_MR) Valid Bits Per Sample Mask */
#define SPDIFTX_MR_VBPS(value)                (SPDIFTX_MR_VBPS_Msk & (_UINT32_(value) << SPDIFTX_MR_VBPS_Pos)) /* Assignment of value for VBPS in the SPDIFTX_MR register */
#define SPDIFTX_MR_CHUNK_Pos                  _UINT32_(16)                                         /* (SPDIFTX_MR) DMA Chunk Size Position */
#define SPDIFTX_MR_CHUNK_Msk                  (_UINT32_(0x1F) << SPDIFTX_MR_CHUNK_Pos)             /* (SPDIFTX_MR) DMA Chunk Size Mask */
#define SPDIFTX_MR_CHUNK(value)               (SPDIFTX_MR_CHUNK_Msk & (_UINT32_(value) << SPDIFTX_MR_CHUNK_Pos)) /* Assignment of value for CHUNK in the SPDIFTX_MR register */
#define SPDIFTX_MR_VALID1_Pos                 _UINT32_(24)                                         /* (SPDIFTX_MR) Validity Bit Channel 1 Position */
#define SPDIFTX_MR_VALID1_Msk                 (_UINT32_(0x1) << SPDIFTX_MR_VALID1_Pos)             /* (SPDIFTX_MR) Validity Bit Channel 1 Mask */
#define SPDIFTX_MR_VALID1(value)              (SPDIFTX_MR_VALID1_Msk & (_UINT32_(value) << SPDIFTX_MR_VALID1_Pos)) /* Assignment of value for VALID1 in the SPDIFTX_MR register */
#define SPDIFTX_MR_VALID2_Pos                 _UINT32_(25)                                         /* (SPDIFTX_MR) Validity Bit Channel 2 Position */
#define SPDIFTX_MR_VALID2_Msk                 (_UINT32_(0x1) << SPDIFTX_MR_VALID2_Pos)             /* (SPDIFTX_MR) Validity Bit Channel 2 Mask */
#define SPDIFTX_MR_VALID2(value)              (SPDIFTX_MR_VALID2_Msk & (_UINT32_(value) << SPDIFTX_MR_VALID2_Pos)) /* Assignment of value for VALID2 in the SPDIFTX_MR register */
#define SPDIFTX_MR_DNFR_Pos                   _UINT32_(27)                                         /* (SPDIFTX_MR) Disable Null Frame on underrrun Position */
#define SPDIFTX_MR_DNFR_Msk                   (_UINT32_(0x1) << SPDIFTX_MR_DNFR_Pos)               /* (SPDIFTX_MR) Disable Null Frame on underrrun Mask */
#define SPDIFTX_MR_DNFR(value)                (SPDIFTX_MR_DNFR_Msk & (_UINT32_(value) << SPDIFTX_MR_DNFR_Pos)) /* Assignment of value for DNFR in the SPDIFTX_MR register */
#define   SPDIFTX_MR_DNFR_0_Val               _UINT32_(0x0)                                        /* (SPDIFTX_MR) In case of Underrun (SPDIFTX_ISR.TXEMPTY flag is set and IP need a data) invalid frames are sent (validity bit at level '1').  */
#define   SPDIFTX_MR_DNFR_1_Val               _UINT32_(0x1)                                        /* (SPDIFTX_MR) In case of Underrun (SPDIFTX_ISR.TXEMPTY flag is set and IP need a data) valid frames are sent.  */
#define SPDIFTX_MR_DNFR_0                     (SPDIFTX_MR_DNFR_0_Val << SPDIFTX_MR_DNFR_Pos)       /* (SPDIFTX_MR) In case of Underrun (SPDIFTX_ISR.TXEMPTY flag is set and IP need a data) invalid frames are sent (validity bit at level '1'). Position */
#define SPDIFTX_MR_DNFR_1                     (SPDIFTX_MR_DNFR_1_Val << SPDIFTX_MR_DNFR_Pos)       /* (SPDIFTX_MR) In case of Underrun (SPDIFTX_ISR.TXEMPTY flag is set and IP need a data) valid frames are sent. Position */
#define SPDIFTX_MR_BPS_Pos                    _UINT32_(28)                                         /* (SPDIFTX_MR) Bytes Per Sample Position */
#define SPDIFTX_MR_BPS_Msk                    (_UINT32_(0x3) << SPDIFTX_MR_BPS_Pos)                /* (SPDIFTX_MR) Bytes Per Sample Mask */
#define SPDIFTX_MR_BPS(value)                 (SPDIFTX_MR_BPS_Msk & (_UINT32_(value) << SPDIFTX_MR_BPS_Pos)) /* Assignment of value for BPS in the SPDIFTX_MR register */
#define   SPDIFTX_MR_BPS_BYTE1_Val            _UINT32_(0x0)                                        /* (SPDIFTX_MR) SPDIFTX_CDR data holding operating mode is optimized for data size up to 8 bits.  */
#define   SPDIFTX_MR_BPS_BYTE2_Val            _UINT32_(0x1)                                        /* (SPDIFTX_MR) SPDIFTX_CDR data holding operating mode is optimized for data size in range 9 to 16 bits.  */
#define   SPDIFTX_MR_BPS_BYTE3_Val            _UINT32_(0x2)                                        /* (SPDIFTX_MR) SPDIFTX_CDR data holding operating mode is optimized for data size in range 17 to 24 bits.  */
#define   SPDIFTX_MR_BPS_BYTE4_Val            _UINT32_(0x3)                                        /* (SPDIFTX_MR) SPDIFTX_CDR data holding operating mode is optimized for data size in range 25 to 32 bits.  */
#define SPDIFTX_MR_BPS_BYTE1                  (SPDIFTX_MR_BPS_BYTE1_Val << SPDIFTX_MR_BPS_Pos)     /* (SPDIFTX_MR) SPDIFTX_CDR data holding operating mode is optimized for data size up to 8 bits. Position */
#define SPDIFTX_MR_BPS_BYTE2                  (SPDIFTX_MR_BPS_BYTE2_Val << SPDIFTX_MR_BPS_Pos)     /* (SPDIFTX_MR) SPDIFTX_CDR data holding operating mode is optimized for data size in range 9 to 16 bits. Position */
#define SPDIFTX_MR_BPS_BYTE3                  (SPDIFTX_MR_BPS_BYTE3_Val << SPDIFTX_MR_BPS_Pos)     /* (SPDIFTX_MR) SPDIFTX_CDR data holding operating mode is optimized for data size in range 17 to 24 bits. Position */
#define SPDIFTX_MR_BPS_BYTE4                  (SPDIFTX_MR_BPS_BYTE4_Val << SPDIFTX_MR_BPS_Pos)     /* (SPDIFTX_MR) SPDIFTX_CDR data holding operating mode is optimized for data size in range 25 to 32 bits. Position */
#define SPDIFTX_MR_DCSCPY_Pos                 _UINT32_(30)                                         /* (SPDIFTX_MR) Disable Channel Status Copy Position */
#define SPDIFTX_MR_DCSCPY_Msk                 (_UINT32_(0x1) << SPDIFTX_MR_DCSCPY_Pos)             /* (SPDIFTX_MR) Disable Channel Status Copy Mask */
#define SPDIFTX_MR_DCSCPY(value)              (SPDIFTX_MR_DCSCPY_Msk & (_UINT32_(value) << SPDIFTX_MR_DCSCPY_Pos)) /* Assignment of value for DCSCPY in the SPDIFTX_MR register */
#define   SPDIFTX_MR_DCSCPY_0_Val             _UINT32_(0x0)                                        /* (SPDIFTX_MR) Any data written in SPDDIFTX_CH1Sx registers is copied to SPDDIFTX_CH2Sx.  */
#define   SPDIFTX_MR_DCSCPY_1_Val             _UINT32_(0x1)                                        /* (SPDIFTX_MR) SPDDIFTX_CH1Sx and SPDDIFTX_CH2Sx are independent.  */
#define SPDIFTX_MR_DCSCPY_0                   (SPDIFTX_MR_DCSCPY_0_Val << SPDIFTX_MR_DCSCPY_Pos)   /* (SPDIFTX_MR) Any data written in SPDDIFTX_CH1Sx registers is copied to SPDDIFTX_CH2Sx. Position */
#define SPDIFTX_MR_DCSCPY_1                   (SPDIFTX_MR_DCSCPY_1_Val << SPDIFTX_MR_DCSCPY_Pos)   /* (SPDIFTX_MR) SPDDIFTX_CH1Sx and SPDDIFTX_CH2Sx are independent. Position */
#define SPDIFTX_MR_DUDCPY_Pos                 _UINT32_(31)                                         /* (SPDIFTX_MR) Disable User Data Copy Position */
#define SPDIFTX_MR_DUDCPY_Msk                 (_UINT32_(0x1) << SPDIFTX_MR_DUDCPY_Pos)             /* (SPDIFTX_MR) Disable User Data Copy Mask */
#define SPDIFTX_MR_DUDCPY(value)              (SPDIFTX_MR_DUDCPY_Msk & (_UINT32_(value) << SPDIFTX_MR_DUDCPY_Pos)) /* Assignment of value for DUDCPY in the SPDIFTX_MR register */
#define   SPDIFTX_MR_DUDCPY_0_Val             _UINT32_(0x0)                                        /* (SPDIFTX_MR) Any data written in SPDDIFTX_CH1UDx registers is copied to SPDDIFTX_CH2UDx.  */
#define   SPDIFTX_MR_DUDCPY_1_Val             _UINT32_(0x1)                                        /* (SPDIFTX_MR) SPDDIFTX_CH1UDx and SPDDIFTX_CH2UDx are independent.  */
#define SPDIFTX_MR_DUDCPY_0                   (SPDIFTX_MR_DUDCPY_0_Val << SPDIFTX_MR_DUDCPY_Pos)   /* (SPDIFTX_MR) Any data written in SPDDIFTX_CH1UDx registers is copied to SPDDIFTX_CH2UDx. Position */
#define SPDIFTX_MR_DUDCPY_1                   (SPDIFTX_MR_DUDCPY_1_Val << SPDIFTX_MR_DUDCPY_Pos)   /* (SPDIFTX_MR) SPDDIFTX_CH1UDx and SPDDIFTX_CH2UDx are independent. Position */
#define SPDIFTX_MR_Msk                        _UINT32_(0xFB1F3F7F)                                 /* (SPDIFTX_MR) Register Mask  */

#define SPDIFTX_MR_VALID_Pos                  _UINT32_(24)                                         /* (SPDIFTX_MR Position) Validity Bit Channel x */
#define SPDIFTX_MR_VALID_Msk                  (_UINT32_(0x3) << SPDIFTX_MR_VALID_Pos)              /* (SPDIFTX_MR Mask) VALID */
#define SPDIFTX_MR_VALID(value)               (SPDIFTX_MR_VALID_Msk & (_UINT32_(value) << SPDIFTX_MR_VALID_Pos)) 

/* -------- SPDIFTX_EMR : (SPDIFTX Offset: 0x08) (R/W 32) SPDIF Transmitter Extended Mode Register -------- */
#define SPDIFTX_EMR_RESETVALUE                _UINT32_(0x3000000)                                  /*  (SPDIFTX_EMR) SPDIF Transmitter Extended Mode Register  Reset Value */

#define SPDIFTX_EMR_PCM_Pos                   _UINT32_(0)                                          /* (SPDIFTX_EMR) Preamble Code Mode Position */
#define SPDIFTX_EMR_PCM_Msk                   (_UINT32_(0x1) << SPDIFTX_EMR_PCM_Pos)               /* (SPDIFTX_EMR) Preamble Code Mode Mask */
#define SPDIFTX_EMR_PCM(value)                (SPDIFTX_EMR_PCM_Msk & (_UINT32_(value) << SPDIFTX_EMR_PCM_Pos)) /* Assignment of value for PCM in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_PCM_0_Val               _UINT32_(0x0)                                        /* (SPDIFTX_EMR) Preamble code is generated automatically by the SPDIFTX.  */
#define   SPDIFTX_EMR_PCM_1_Val               _UINT32_(0x1)                                        /* (SPDIFTX_EMR) Preamble code is defined by SPDIFTX_CDR.PC field.  */
#define SPDIFTX_EMR_PCM_0                     (SPDIFTX_EMR_PCM_0_Val << SPDIFTX_EMR_PCM_Pos)       /* (SPDIFTX_EMR) Preamble code is generated automatically by the SPDIFTX. Position */
#define SPDIFTX_EMR_PCM_1                     (SPDIFTX_EMR_PCM_1_Val << SPDIFTX_EMR_PCM_Pos)       /* (SPDIFTX_EMR) Preamble code is defined by SPDIFTX_CDR.PC field. Position */
#define SPDIFTX_EMR_UDM_Pos                   _UINT32_(1)                                          /* (SPDIFTX_EMR) User Data Mode Position */
#define SPDIFTX_EMR_UDM_Msk                   (_UINT32_(0x1) << SPDIFTX_EMR_UDM_Pos)               /* (SPDIFTX_EMR) User Data Mode Mask */
#define SPDIFTX_EMR_UDM(value)                (SPDIFTX_EMR_UDM_Msk & (_UINT32_(value) << SPDIFTX_EMR_UDM_Pos)) /* Assignment of value for UDM in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_UDM_0_Val               _UINT32_(0x0)                                        /* (SPDIFTX_EMR) User data is defined by SPDIFTX_CHxUDx registers.  */
#define   SPDIFTX_EMR_UDM_1_Val               _UINT32_(0x1)                                        /* (SPDIFTX_EMR) User data is defined by SPDIFTX_CDR.UD bit.  */
#define SPDIFTX_EMR_UDM_0                     (SPDIFTX_EMR_UDM_0_Val << SPDIFTX_EMR_UDM_Pos)       /* (SPDIFTX_EMR) User data is defined by SPDIFTX_CHxUDx registers. Position */
#define SPDIFTX_EMR_UDM_1                     (SPDIFTX_EMR_UDM_1_Val << SPDIFTX_EMR_UDM_Pos)       /* (SPDIFTX_EMR) User data is defined by SPDIFTX_CDR.UD bit. Position */
#define SPDIFTX_EMR_CSM_Pos                   _UINT32_(2)                                          /* (SPDIFTX_EMR) Channel Status Mode Position */
#define SPDIFTX_EMR_CSM_Msk                   (_UINT32_(0x1) << SPDIFTX_EMR_CSM_Pos)               /* (SPDIFTX_EMR) Channel Status Mode Mask */
#define SPDIFTX_EMR_CSM(value)                (SPDIFTX_EMR_CSM_Msk & (_UINT32_(value) << SPDIFTX_EMR_CSM_Pos)) /* Assignment of value for CSM in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_CSM_0_Val               _UINT32_(0x0)                                        /* (SPDIFTX_EMR) Channel status is defined by SPDIFTX_CHxCSx registers.  */
#define   SPDIFTX_EMR_CSM_1_Val               _UINT32_(0x1)                                        /* (SPDIFTX_EMR) Channel status is defined by SPDIFTX_CDR.CS bit.  */
#define SPDIFTX_EMR_CSM_0                     (SPDIFTX_EMR_CSM_0_Val << SPDIFTX_EMR_CSM_Pos)       /* (SPDIFTX_EMR) Channel status is defined by SPDIFTX_CHxCSx registers. Position */
#define SPDIFTX_EMR_CSM_1                     (SPDIFTX_EMR_CSM_1_Val << SPDIFTX_EMR_CSM_Pos)       /* (SPDIFTX_EMR) Channel status is defined by SPDIFTX_CDR.CS bit. Position */
#define SPDIFTX_EMR_PARM_Pos                  _UINT32_(3)                                          /* (SPDIFTX_EMR) Parity Mode Position */
#define SPDIFTX_EMR_PARM_Msk                  (_UINT32_(0x1) << SPDIFTX_EMR_PARM_Pos)              /* (SPDIFTX_EMR) Parity Mode Mask */
#define SPDIFTX_EMR_PARM(value)               (SPDIFTX_EMR_PARM_Msk & (_UINT32_(value) << SPDIFTX_EMR_PARM_Pos)) /* Assignment of value for PARM in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_PARM_0_Val              _UINT32_(0x0)                                        /* (SPDIFTX_EMR) Parity bit is automatically set by the SPDIFTX.  */
#define   SPDIFTX_EMR_PARM_1_Val              _UINT32_(0x1)                                        /* (SPDIFTX_EMR) Parity bit sent is defined by SPDIFTX_CDR.PAR bit.  */
#define SPDIFTX_EMR_PARM_0                    (SPDIFTX_EMR_PARM_0_Val << SPDIFTX_EMR_PARM_Pos)     /* (SPDIFTX_EMR) Parity bit is automatically set by the SPDIFTX. Position */
#define SPDIFTX_EMR_PARM_1                    (SPDIFTX_EMR_PARM_1_Val << SPDIFTX_EMR_PARM_Pos)     /* (SPDIFTX_EMR) Parity bit sent is defined by SPDIFTX_CDR.PAR bit. Position */
#define SPDIFTX_EMR_VALIDM_Pos                _UINT32_(4)                                          /* (SPDIFTX_EMR) Validity Bit Mode Position */
#define SPDIFTX_EMR_VALIDM_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_VALIDM_Pos)            /* (SPDIFTX_EMR) Validity Bit Mode Mask */
#define SPDIFTX_EMR_VALIDM(value)             (SPDIFTX_EMR_VALIDM_Msk & (_UINT32_(value) << SPDIFTX_EMR_VALIDM_Pos)) /* Assignment of value for VALIDM in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_VALIDM_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) Validity bit is defined by SPDIFTX_MR.VALID1 and SPDIFTX_MR.VALID2 values.  */
#define   SPDIFTX_EMR_VALIDM_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) Validity bit is defined by the SPDIFTX_CDR.VALID bit.  */
#define SPDIFTX_EMR_VALIDM_0                  (SPDIFTX_EMR_VALIDM_0_Val << SPDIFTX_EMR_VALIDM_Pos) /* (SPDIFTX_EMR) Validity bit is defined by SPDIFTX_MR.VALID1 and SPDIFTX_MR.VALID2 values. Position */
#define SPDIFTX_EMR_VALIDM_1                  (SPDIFTX_EMR_VALIDM_1_Val << SPDIFTX_EMR_VALIDM_Pos) /* (SPDIFTX_EMR) Validity bit is defined by the SPDIFTX_CDR.VALID bit. Position */
#define SPDIFTX_EMR_DTCEN0_Pos                _UINT32_(24)                                         /* (SPDIFTX_EMR) Direct Audio Transmit Channel 0 Enable Position */
#define SPDIFTX_EMR_DTCEN0_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_DTCEN0_Pos)            /* (SPDIFTX_EMR) Direct Audio Transmit Channel 0 Enable Mask */
#define SPDIFTX_EMR_DTCEN0(value)             (SPDIFTX_EMR_DTCEN0_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN0_Pos)) /* Assignment of value for DTCEN0 in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_DTCEN0_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line.  */
#define   SPDIFTX_EMR_DTCEN0_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line.  */
#define SPDIFTX_EMR_DTCEN0_0                  (SPDIFTX_EMR_DTCEN0_0_Val << SPDIFTX_EMR_DTCEN0_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN0_1                  (SPDIFTX_EMR_DTCEN0_1_Val << SPDIFTX_EMR_DTCEN0_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN1_Pos                _UINT32_(25)                                         /* (SPDIFTX_EMR) Direct Audio Transmit Channel 1 Enable Position */
#define SPDIFTX_EMR_DTCEN1_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_DTCEN1_Pos)            /* (SPDIFTX_EMR) Direct Audio Transmit Channel 1 Enable Mask */
#define SPDIFTX_EMR_DTCEN1(value)             (SPDIFTX_EMR_DTCEN1_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN1_Pos)) /* Assignment of value for DTCEN1 in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_DTCEN1_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line.  */
#define   SPDIFTX_EMR_DTCEN1_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line.  */
#define SPDIFTX_EMR_DTCEN1_0                  (SPDIFTX_EMR_DTCEN1_0_Val << SPDIFTX_EMR_DTCEN1_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN1_1                  (SPDIFTX_EMR_DTCEN1_1_Val << SPDIFTX_EMR_DTCEN1_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN2_Pos                _UINT32_(26)                                         /* (SPDIFTX_EMR) Direct Audio Transmit Channel 2 Enable Position */
#define SPDIFTX_EMR_DTCEN2_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_DTCEN2_Pos)            /* (SPDIFTX_EMR) Direct Audio Transmit Channel 2 Enable Mask */
#define SPDIFTX_EMR_DTCEN2(value)             (SPDIFTX_EMR_DTCEN2_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN2_Pos)) /* Assignment of value for DTCEN2 in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_DTCEN2_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line.  */
#define   SPDIFTX_EMR_DTCEN2_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line.  */
#define SPDIFTX_EMR_DTCEN2_0                  (SPDIFTX_EMR_DTCEN2_0_Val << SPDIFTX_EMR_DTCEN2_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN2_1                  (SPDIFTX_EMR_DTCEN2_1_Val << SPDIFTX_EMR_DTCEN2_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN3_Pos                _UINT32_(27)                                         /* (SPDIFTX_EMR) Direct Audio Transmit Channel 3 Enable Position */
#define SPDIFTX_EMR_DTCEN3_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_DTCEN3_Pos)            /* (SPDIFTX_EMR) Direct Audio Transmit Channel 3 Enable Mask */
#define SPDIFTX_EMR_DTCEN3(value)             (SPDIFTX_EMR_DTCEN3_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN3_Pos)) /* Assignment of value for DTCEN3 in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_DTCEN3_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line.  */
#define   SPDIFTX_EMR_DTCEN3_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line.  */
#define SPDIFTX_EMR_DTCEN3_0                  (SPDIFTX_EMR_DTCEN3_0_Val << SPDIFTX_EMR_DTCEN3_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN3_1                  (SPDIFTX_EMR_DTCEN3_1_Val << SPDIFTX_EMR_DTCEN3_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN4_Pos                _UINT32_(28)                                         /* (SPDIFTX_EMR) Direct Audio Transmit Channel 4 Enable Position */
#define SPDIFTX_EMR_DTCEN4_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_DTCEN4_Pos)            /* (SPDIFTX_EMR) Direct Audio Transmit Channel 4 Enable Mask */
#define SPDIFTX_EMR_DTCEN4(value)             (SPDIFTX_EMR_DTCEN4_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN4_Pos)) /* Assignment of value for DTCEN4 in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_DTCEN4_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line.  */
#define   SPDIFTX_EMR_DTCEN4_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line.  */
#define SPDIFTX_EMR_DTCEN4_0                  (SPDIFTX_EMR_DTCEN4_0_Val << SPDIFTX_EMR_DTCEN4_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN4_1                  (SPDIFTX_EMR_DTCEN4_1_Val << SPDIFTX_EMR_DTCEN4_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN5_Pos                _UINT32_(29)                                         /* (SPDIFTX_EMR) Direct Audio Transmit Channel 5 Enable Position */
#define SPDIFTX_EMR_DTCEN5_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_DTCEN5_Pos)            /* (SPDIFTX_EMR) Direct Audio Transmit Channel 5 Enable Mask */
#define SPDIFTX_EMR_DTCEN5(value)             (SPDIFTX_EMR_DTCEN5_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN5_Pos)) /* Assignment of value for DTCEN5 in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_DTCEN5_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line.  */
#define   SPDIFTX_EMR_DTCEN5_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line.  */
#define SPDIFTX_EMR_DTCEN5_0                  (SPDIFTX_EMR_DTCEN5_0_Val << SPDIFTX_EMR_DTCEN5_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN5_1                  (SPDIFTX_EMR_DTCEN5_1_Val << SPDIFTX_EMR_DTCEN5_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN6_Pos                _UINT32_(30)                                         /* (SPDIFTX_EMR) Direct Audio Transmit Channel 6 Enable Position */
#define SPDIFTX_EMR_DTCEN6_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_DTCEN6_Pos)            /* (SPDIFTX_EMR) Direct Audio Transmit Channel 6 Enable Mask */
#define SPDIFTX_EMR_DTCEN6(value)             (SPDIFTX_EMR_DTCEN6_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN6_Pos)) /* Assignment of value for DTCEN6 in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_DTCEN6_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line.  */
#define   SPDIFTX_EMR_DTCEN6_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line.  */
#define SPDIFTX_EMR_DTCEN6_0                  (SPDIFTX_EMR_DTCEN6_0_Val << SPDIFTX_EMR_DTCEN6_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN6_1                  (SPDIFTX_EMR_DTCEN6_1_Val << SPDIFTX_EMR_DTCEN6_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN7_Pos                _UINT32_(31)                                         /* (SPDIFTX_EMR) Direct Audio Transmit Channel 7 Enable Position */
#define SPDIFTX_EMR_DTCEN7_Msk                (_UINT32_(0x1) << SPDIFTX_EMR_DTCEN7_Pos)            /* (SPDIFTX_EMR) Direct Audio Transmit Channel 7 Enable Mask */
#define SPDIFTX_EMR_DTCEN7(value)             (SPDIFTX_EMR_DTCEN7_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN7_Pos)) /* Assignment of value for DTCEN7 in the SPDIFTX_EMR register */
#define   SPDIFTX_EMR_DTCEN7_0_Val            _UINT32_(0x0)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line.  */
#define   SPDIFTX_EMR_DTCEN7_1_Val            _UINT32_(0x1)                                        /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line.  */
#define SPDIFTX_EMR_DTCEN7_0                  (SPDIFTX_EMR_DTCEN7_0_Val << SPDIFTX_EMR_DTCEN7_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is not transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_DTCEN7_1                  (SPDIFTX_EMR_DTCEN7_1_Val << SPDIFTX_EMR_DTCEN7_Pos) /* (SPDIFTX_EMR) The channel x from the direct audio stream is transmitted on the SPDIF line. Position */
#define SPDIFTX_EMR_Msk                       _UINT32_(0xFF00001F)                                 /* (SPDIFTX_EMR) Register Mask  */

#define SPDIFTX_EMR_DTCEN_Pos                 _UINT32_(24)                                         /* (SPDIFTX_EMR Position) Direct Audio Transmit Channel 7 Enable */
#define SPDIFTX_EMR_DTCEN_Msk                 (_UINT32_(0xFF) << SPDIFTX_EMR_DTCEN_Pos)            /* (SPDIFTX_EMR Mask) DTCEN */
#define SPDIFTX_EMR_DTCEN(value)              (SPDIFTX_EMR_DTCEN_Msk & (_UINT32_(value) << SPDIFTX_EMR_DTCEN_Pos)) 

/* -------- SPDIFTX_CDR : (SPDIFTX Offset: 0x0C) ( /W 32) SPDIF Transmitter Common Data Register -------- */
#define SPDIFTX_CDR_CDR_Pos                   _UINT32_(0)                                          /* (SPDIFTX_CDR) Common Data Register Position */
#define SPDIFTX_CDR_CDR_Msk                   (_UINT32_(0xFFFFFFFF) << SPDIFTX_CDR_CDR_Pos)        /* (SPDIFTX_CDR) Common Data Register Mask */
#define SPDIFTX_CDR_CDR(value)                (SPDIFTX_CDR_CDR_Msk & (_UINT32_(value) << SPDIFTX_CDR_CDR_Pos)) /* Assignment of value for CDR in the SPDIFTX_CDR register */
#define SPDIFTX_CDR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (SPDIFTX_CDR) Register Mask  */

/* CONTROL_BITS mode */
#define SPDIFTX_CDR_CONTROL_BITS_CDR_Pos      _UINT32_(0)                                          /* (SPDIFTX_CDR) Common Data Register Position */
#define SPDIFTX_CDR_CONTROL_BITS_CDR_Msk      (_UINT32_(0xFFFFFF) << SPDIFTX_CDR_CONTROL_BITS_CDR_Pos) /* (SPDIFTX_CDR) Common Data Register Mask */
#define SPDIFTX_CDR_CONTROL_BITS_CDR(value)   (SPDIFTX_CDR_CONTROL_BITS_CDR_Msk & (_UINT32_(value) << SPDIFTX_CDR_CONTROL_BITS_CDR_Pos))
#define SPDIFTX_CDR_CONTROL_BITS_VALID_Pos    _UINT32_(24)                                         /* (SPDIFTX_CDR) Validity Bit Position */
#define SPDIFTX_CDR_CONTROL_BITS_VALID_Msk    (_UINT32_(0x1) << SPDIFTX_CDR_CONTROL_BITS_VALID_Pos) /* (SPDIFTX_CDR) Validity Bit Mask */
#define SPDIFTX_CDR_CONTROL_BITS_VALID(value) (SPDIFTX_CDR_CONTROL_BITS_VALID_Msk & (_UINT32_(value) << SPDIFTX_CDR_CONTROL_BITS_VALID_Pos))
#define   SPDIFTX_CDR_CONTROL_BITS_VALID_0_Val _UINT32_(0x0)                                        /* (SPDIFTX_CDR) Sample is valid for analog conversion.  */
#define   SPDIFTX_CDR_CONTROL_BITS_VALID_1_Val _UINT32_(0x1)                                        /* (SPDIFTX_CDR) Sample is not valid for analog conversion.  */
#define SPDIFTX_CDR_CONTROL_BITS_VALID_0      (SPDIFTX_CDR_CONTROL_BITS_VALID_0_Val << SPDIFTX_CDR_CONTROL_BITS_VALID_Pos) /* (SPDIFTX_CDR) Sample is valid for analog conversion. Position */
#define SPDIFTX_CDR_CONTROL_BITS_VALID_1      (SPDIFTX_CDR_CONTROL_BITS_VALID_1_Val << SPDIFTX_CDR_CONTROL_BITS_VALID_Pos) /* (SPDIFTX_CDR) Sample is not valid for analog conversion. Position */
#define SPDIFTX_CDR_CONTROL_BITS_UD_Pos       _UINT32_(25)                                         /* (SPDIFTX_CDR) User Data Position */
#define SPDIFTX_CDR_CONTROL_BITS_UD_Msk       (_UINT32_(0x1) << SPDIFTX_CDR_CONTROL_BITS_UD_Pos)   /* (SPDIFTX_CDR) User Data Mask */
#define SPDIFTX_CDR_CONTROL_BITS_UD(value)    (SPDIFTX_CDR_CONTROL_BITS_UD_Msk & (_UINT32_(value) << SPDIFTX_CDR_CONTROL_BITS_UD_Pos))
#define SPDIFTX_CDR_CONTROL_BITS_CS_Pos       _UINT32_(26)                                         /* (SPDIFTX_CDR) Channel Status Position */
#define SPDIFTX_CDR_CONTROL_BITS_CS_Msk       (_UINT32_(0x1) << SPDIFTX_CDR_CONTROL_BITS_CS_Pos)   /* (SPDIFTX_CDR) Channel Status Mask */
#define SPDIFTX_CDR_CONTROL_BITS_CS(value)    (SPDIFTX_CDR_CONTROL_BITS_CS_Msk & (_UINT32_(value) << SPDIFTX_CDR_CONTROL_BITS_CS_Pos))
#define SPDIFTX_CDR_CONTROL_BITS_PAR_Pos      _UINT32_(27)                                         /* (SPDIFTX_CDR) Parity Position */
#define SPDIFTX_CDR_CONTROL_BITS_PAR_Msk      (_UINT32_(0x1) << SPDIFTX_CDR_CONTROL_BITS_PAR_Pos)  /* (SPDIFTX_CDR) Parity Mask */
#define SPDIFTX_CDR_CONTROL_BITS_PAR(value)   (SPDIFTX_CDR_CONTROL_BITS_PAR_Msk & (_UINT32_(value) << SPDIFTX_CDR_CONTROL_BITS_PAR_Pos))
#define   SPDIFTX_CDR_CONTROL_BITS_PAR_0_Val  _UINT32_(0x0)                                        /* (SPDIFTX_CDR) Correct parity bit will be sent.  */
#define   SPDIFTX_CDR_CONTROL_BITS_PAR_1_Val  _UINT32_(0x1)                                        /* (SPDIFTX_CDR) Wrong parity bit will be sent.  */
#define SPDIFTX_CDR_CONTROL_BITS_PAR_0        (SPDIFTX_CDR_CONTROL_BITS_PAR_0_Val << SPDIFTX_CDR_CONTROL_BITS_PAR_Pos) /* (SPDIFTX_CDR) Correct parity bit will be sent. Position */
#define SPDIFTX_CDR_CONTROL_BITS_PAR_1        (SPDIFTX_CDR_CONTROL_BITS_PAR_1_Val << SPDIFTX_CDR_CONTROL_BITS_PAR_Pos) /* (SPDIFTX_CDR) Wrong parity bit will be sent. Position */
#define SPDIFTX_CDR_CONTROL_BITS_PC_Pos       _UINT32_(28)                                         /* (SPDIFTX_CDR) Preamble Code Position */
#define SPDIFTX_CDR_CONTROL_BITS_PC_Msk       (_UINT32_(0x3) << SPDIFTX_CDR_CONTROL_BITS_PC_Pos)   /* (SPDIFTX_CDR) Preamble Code Mask */
#define SPDIFTX_CDR_CONTROL_BITS_PC(value)    (SPDIFTX_CDR_CONTROL_BITS_PC_Msk & (_UINT32_(value) << SPDIFTX_CDR_CONTROL_BITS_PC_Pos))
#define   SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_B_Val _UINT32_(0x0)                                        /* (SPDIFTX_CDR) Preamble "B" will be sent.  */
#define   SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_M_Val _UINT32_(0x1)                                        /* (SPDIFTX_CDR) Preamble "M" will be sent.  */
#define   SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_W_Val _UINT32_(0x2)                                        /* (SPDIFTX_CDR) Preamble "W" will be sent.  */
#define SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_B (SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_B_Val << SPDIFTX_CDR_CONTROL_BITS_PC_Pos) /* (SPDIFTX_CDR) Preamble "B" will be sent. Position */
#define SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_M (SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_M_Val << SPDIFTX_CDR_CONTROL_BITS_PC_Pos) /* (SPDIFTX_CDR) Preamble "M" will be sent. Position */
#define SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_W (SPDIFTX_CDR_CONTROL_BITS_PC_PREAMBLE_W_Val << SPDIFTX_CDR_CONTROL_BITS_PC_Pos) /* (SPDIFTX_CDR) Preamble "W" will be sent. Position */
#define SPDIFTX_CDR_CONTROL_BITS_Msk          _UINT32_(0x3FFFFFFF)                                 /* (SPDIFTX_CDR_CONTROL_BITS) Register Mask  */


/* -------- SPDIFTX_SR : (SPDIFTX Offset: 0x10) ( R/ 32) SPDIF Transmitter Status Register -------- */
#define SPDIFTX_SR_ENS_Pos                    _UINT32_(0)                                          /* (SPDIFTX_SR) Enable Status Position */
#define SPDIFTX_SR_ENS_Msk                    (_UINT32_(0x1) << SPDIFTX_SR_ENS_Pos)                /* (SPDIFTX_SR) Enable Status Mask */
#define SPDIFTX_SR_ENS(value)                 (SPDIFTX_SR_ENS_Msk & (_UINT32_(value) << SPDIFTX_SR_ENS_Pos)) /* Assignment of value for ENS in the SPDIFTX_SR register */
#define   SPDIFTX_SR_ENS_0_Val                _UINT32_(0x0)                                        /* (SPDIFTX_SR) SPDIF core is disabled.  */
#define   SPDIFTX_SR_ENS_1_Val                _UINT32_(0x1)                                        /* (SPDIFTX_SR) SPDIF core is enabled.  */
#define SPDIFTX_SR_ENS_0                      (SPDIFTX_SR_ENS_0_Val << SPDIFTX_SR_ENS_Pos)         /* (SPDIFTX_SR) SPDIF core is disabled. Position */
#define SPDIFTX_SR_ENS_1                      (SPDIFTX_SR_ENS_1_Val << SPDIFTX_SR_ENS_Pos)         /* (SPDIFTX_SR) SPDIF core is enabled. Position */
#define SPDIFTX_SR_Msk                        _UINT32_(0x00000001)                                 /* (SPDIFTX_SR) Register Mask  */


/* -------- SPDIFTX_IER : (SPDIFTX Offset: 0x14) ( /W 32) SPDIF Transmitter Interrupt Enable Register -------- */
#define SPDIFTX_IER_TXRDY_Pos                 _UINT32_(0)                                          /* (SPDIFTX_IER) Transmit Ready Interrupt Enable Position */
#define SPDIFTX_IER_TXRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IER_TXRDY_Pos)             /* (SPDIFTX_IER) Transmit Ready Interrupt Enable Mask */
#define SPDIFTX_IER_TXRDY(value)              (SPDIFTX_IER_TXRDY_Msk & (_UINT32_(value) << SPDIFTX_IER_TXRDY_Pos)) /* Assignment of value for TXRDY in the SPDIFTX_IER register */
#define SPDIFTX_IER_TXEMPTY_Pos               _UINT32_(1)                                          /* (SPDIFTX_IER) Transmit FIFO Empty Interrupt Enable Position */
#define SPDIFTX_IER_TXEMPTY_Msk               (_UINT32_(0x1) << SPDIFTX_IER_TXEMPTY_Pos)           /* (SPDIFTX_IER) Transmit FIFO Empty Interrupt Enable Mask */
#define SPDIFTX_IER_TXEMPTY(value)            (SPDIFTX_IER_TXEMPTY_Msk & (_UINT32_(value) << SPDIFTX_IER_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the SPDIFTX_IER register */
#define SPDIFTX_IER_TXFULL_Pos                _UINT32_(2)                                          /* (SPDIFTX_IER) Transmit FIFO Full Interrupt Enable Position */
#define SPDIFTX_IER_TXFULL_Msk                (_UINT32_(0x1) << SPDIFTX_IER_TXFULL_Pos)            /* (SPDIFTX_IER) Transmit FIFO Full Interrupt Enable Mask */
#define SPDIFTX_IER_TXFULL(value)             (SPDIFTX_IER_TXFULL_Msk & (_UINT32_(value) << SPDIFTX_IER_TXFULL_Pos)) /* Assignment of value for TXFULL in the SPDIFTX_IER register */
#define SPDIFTX_IER_TXCHUNK_Pos               _UINT32_(3)                                          /* (SPDIFTX_IER) Transmit FIFO Chunk Size Empty Interrupt Enable Position */
#define SPDIFTX_IER_TXCHUNK_Msk               (_UINT32_(0x1) << SPDIFTX_IER_TXCHUNK_Pos)           /* (SPDIFTX_IER) Transmit FIFO Chunk Size Empty Interrupt Enable Mask */
#define SPDIFTX_IER_TXCHUNK(value)            (SPDIFTX_IER_TXCHUNK_Msk & (_UINT32_(value) << SPDIFTX_IER_TXCHUNK_Pos)) /* Assignment of value for TXCHUNK in the SPDIFTX_IER register */
#define SPDIFTX_IER_TXUDR_Pos                 _UINT32_(4)                                          /* (SPDIFTX_IER) Transmit Under Flow Interrupt Enable Position */
#define SPDIFTX_IER_TXUDR_Msk                 (_UINT32_(0x1) << SPDIFTX_IER_TXUDR_Pos)             /* (SPDIFTX_IER) Transmit Under Flow Interrupt Enable Mask */
#define SPDIFTX_IER_TXUDR(value)              (SPDIFTX_IER_TXUDR_Msk & (_UINT32_(value) << SPDIFTX_IER_TXUDR_Pos)) /* Assignment of value for TXUDR in the SPDIFTX_IER register */
#define SPDIFTX_IER_TXOVR_Pos                 _UINT32_(5)                                          /* (SPDIFTX_IER) Transmit Over Flow Interrupt Enable Position */
#define SPDIFTX_IER_TXOVR_Msk                 (_UINT32_(0x1) << SPDIFTX_IER_TXOVR_Pos)             /* (SPDIFTX_IER) Transmit Over Flow Interrupt Enable Mask */
#define SPDIFTX_IER_TXOVR(value)              (SPDIFTX_IER_TXOVR_Msk & (_UINT32_(value) << SPDIFTX_IER_TXOVR_Pos)) /* Assignment of value for TXOVR in the SPDIFTX_IER register */
#define SPDIFTX_IER_CSRDY_Pos                 _UINT32_(6)                                          /* (SPDIFTX_IER) Channel Status Ready Interrupt Enable Position */
#define SPDIFTX_IER_CSRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IER_CSRDY_Pos)             /* (SPDIFTX_IER) Channel Status Ready Interrupt Enable Mask */
#define SPDIFTX_IER_CSRDY(value)              (SPDIFTX_IER_CSRDY_Msk & (_UINT32_(value) << SPDIFTX_IER_CSRDY_Pos)) /* Assignment of value for CSRDY in the SPDIFTX_IER register */
#define SPDIFTX_IER_UDRDY_Pos                 _UINT32_(7)                                          /* (SPDIFTX_IER) User Data Ready Interrupt Enable Position */
#define SPDIFTX_IER_UDRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IER_UDRDY_Pos)             /* (SPDIFTX_IER) User Data Ready Interrupt Enable Mask */
#define SPDIFTX_IER_UDRDY(value)              (SPDIFTX_IER_UDRDY_Msk & (_UINT32_(value) << SPDIFTX_IER_UDRDY_Pos)) /* Assignment of value for UDRDY in the SPDIFTX_IER register */
#define SPDIFTX_IER_SECE_Pos                  _UINT32_(10)                                         /* (SPDIFTX_IER) Security Report Interrupt Enable Position */
#define SPDIFTX_IER_SECE_Msk                  (_UINT32_(0x1) << SPDIFTX_IER_SECE_Pos)              /* (SPDIFTX_IER) Security Report Interrupt Enable Mask */
#define SPDIFTX_IER_SECE(value)               (SPDIFTX_IER_SECE_Msk & (_UINT32_(value) << SPDIFTX_IER_SECE_Pos)) /* Assignment of value for SECE in the SPDIFTX_IER register */
#define SPDIFTX_IER_BEND_Pos                  _UINT32_(13)                                         /* (SPDIFTX_IER) Block End Interrupt Enable Position */
#define SPDIFTX_IER_BEND_Msk                  (_UINT32_(0x1) << SPDIFTX_IER_BEND_Pos)              /* (SPDIFTX_IER) Block End Interrupt Enable Mask */
#define SPDIFTX_IER_BEND(value)               (SPDIFTX_IER_BEND_Msk & (_UINT32_(value) << SPDIFTX_IER_BEND_Pos)) /* Assignment of value for BEND in the SPDIFTX_IER register */
#define SPDIFTX_IER_Msk                       _UINT32_(0x000024FF)                                 /* (SPDIFTX_IER) Register Mask  */


/* -------- SPDIFTX_IDR : (SPDIFTX Offset: 0x18) ( /W 32) SPDIF Transmitter Interrupt Disable Register -------- */
#define SPDIFTX_IDR_TXRDY_Pos                 _UINT32_(0)                                          /* (SPDIFTX_IDR) Transmit Ready Interrupt Disable Position */
#define SPDIFTX_IDR_TXRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IDR_TXRDY_Pos)             /* (SPDIFTX_IDR) Transmit Ready Interrupt Disable Mask */
#define SPDIFTX_IDR_TXRDY(value)              (SPDIFTX_IDR_TXRDY_Msk & (_UINT32_(value) << SPDIFTX_IDR_TXRDY_Pos)) /* Assignment of value for TXRDY in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_TXEMPTY_Pos               _UINT32_(1)                                          /* (SPDIFTX_IDR) Transmit FIFO Empty Interrupt Disable Position */
#define SPDIFTX_IDR_TXEMPTY_Msk               (_UINT32_(0x1) << SPDIFTX_IDR_TXEMPTY_Pos)           /* (SPDIFTX_IDR) Transmit FIFO Empty Interrupt Disable Mask */
#define SPDIFTX_IDR_TXEMPTY(value)            (SPDIFTX_IDR_TXEMPTY_Msk & (_UINT32_(value) << SPDIFTX_IDR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_TXFULL_Pos                _UINT32_(2)                                          /* (SPDIFTX_IDR) Transmit FIFO Full Interrupt Disable Position */
#define SPDIFTX_IDR_TXFULL_Msk                (_UINT32_(0x1) << SPDIFTX_IDR_TXFULL_Pos)            /* (SPDIFTX_IDR) Transmit FIFO Full Interrupt Disable Mask */
#define SPDIFTX_IDR_TXFULL(value)             (SPDIFTX_IDR_TXFULL_Msk & (_UINT32_(value) << SPDIFTX_IDR_TXFULL_Pos)) /* Assignment of value for TXFULL in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_TXCHUNK_Pos               _UINT32_(3)                                          /* (SPDIFTX_IDR) Transmit FIFO Chunk Size Empty Interrupt Disable Position */
#define SPDIFTX_IDR_TXCHUNK_Msk               (_UINT32_(0x1) << SPDIFTX_IDR_TXCHUNK_Pos)           /* (SPDIFTX_IDR) Transmit FIFO Chunk Size Empty Interrupt Disable Mask */
#define SPDIFTX_IDR_TXCHUNK(value)            (SPDIFTX_IDR_TXCHUNK_Msk & (_UINT32_(value) << SPDIFTX_IDR_TXCHUNK_Pos)) /* Assignment of value for TXCHUNK in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_TXUDR_Pos                 _UINT32_(4)                                          /* (SPDIFTX_IDR) Transmit Under Flow Interrupt Disable Position */
#define SPDIFTX_IDR_TXUDR_Msk                 (_UINT32_(0x1) << SPDIFTX_IDR_TXUDR_Pos)             /* (SPDIFTX_IDR) Transmit Under Flow Interrupt Disable Mask */
#define SPDIFTX_IDR_TXUDR(value)              (SPDIFTX_IDR_TXUDR_Msk & (_UINT32_(value) << SPDIFTX_IDR_TXUDR_Pos)) /* Assignment of value for TXUDR in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_TXOVR_Pos                 _UINT32_(5)                                          /* (SPDIFTX_IDR) Transmit Over Flow Interrupt Disable Position */
#define SPDIFTX_IDR_TXOVR_Msk                 (_UINT32_(0x1) << SPDIFTX_IDR_TXOVR_Pos)             /* (SPDIFTX_IDR) Transmit Over Flow Interrupt Disable Mask */
#define SPDIFTX_IDR_TXOVR(value)              (SPDIFTX_IDR_TXOVR_Msk & (_UINT32_(value) << SPDIFTX_IDR_TXOVR_Pos)) /* Assignment of value for TXOVR in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_CSRDY_Pos                 _UINT32_(6)                                          /* (SPDIFTX_IDR) Channel Status Ready Interrupt Disable Position */
#define SPDIFTX_IDR_CSRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IDR_CSRDY_Pos)             /* (SPDIFTX_IDR) Channel Status Ready Interrupt Disable Mask */
#define SPDIFTX_IDR_CSRDY(value)              (SPDIFTX_IDR_CSRDY_Msk & (_UINT32_(value) << SPDIFTX_IDR_CSRDY_Pos)) /* Assignment of value for CSRDY in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_UDRDY_Pos                 _UINT32_(7)                                          /* (SPDIFTX_IDR) User Data Ready Interrupt Disable Position */
#define SPDIFTX_IDR_UDRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IDR_UDRDY_Pos)             /* (SPDIFTX_IDR) User Data Ready Interrupt Disable Mask */
#define SPDIFTX_IDR_UDRDY(value)              (SPDIFTX_IDR_UDRDY_Msk & (_UINT32_(value) << SPDIFTX_IDR_UDRDY_Pos)) /* Assignment of value for UDRDY in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_SECE_Pos                  _UINT32_(10)                                         /* (SPDIFTX_IDR) Security Report Interrupt Disable Position */
#define SPDIFTX_IDR_SECE_Msk                  (_UINT32_(0x1) << SPDIFTX_IDR_SECE_Pos)              /* (SPDIFTX_IDR) Security Report Interrupt Disable Mask */
#define SPDIFTX_IDR_SECE(value)               (SPDIFTX_IDR_SECE_Msk & (_UINT32_(value) << SPDIFTX_IDR_SECE_Pos)) /* Assignment of value for SECE in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_BEND_Pos                  _UINT32_(13)                                         /* (SPDIFTX_IDR) Block End Interrupt Disable Position */
#define SPDIFTX_IDR_BEND_Msk                  (_UINT32_(0x1) << SPDIFTX_IDR_BEND_Pos)              /* (SPDIFTX_IDR) Block End Interrupt Disable Mask */
#define SPDIFTX_IDR_BEND(value)               (SPDIFTX_IDR_BEND_Msk & (_UINT32_(value) << SPDIFTX_IDR_BEND_Pos)) /* Assignment of value for BEND in the SPDIFTX_IDR register */
#define SPDIFTX_IDR_Msk                       _UINT32_(0x000024FF)                                 /* (SPDIFTX_IDR) Register Mask  */


/* -------- SPDIFTX_IMR : (SPDIFTX Offset: 0x1C) ( R/ 32) SPDIF Transmitter Interrupt Mask Register -------- */
#define SPDIFTX_IMR_RESETVALUE                _UINT32_(0x00)                                       /*  (SPDIFTX_IMR) SPDIF Transmitter Interrupt Mask Register  Reset Value */

#define SPDIFTX_IMR_TXRDY_Pos                 _UINT32_(0)                                          /* (SPDIFTX_IMR) Transmit Ready Interrupt Mask Position */
#define SPDIFTX_IMR_TXRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IMR_TXRDY_Pos)             /* (SPDIFTX_IMR) Transmit Ready Interrupt Mask Mask */
#define SPDIFTX_IMR_TXRDY(value)              (SPDIFTX_IMR_TXRDY_Msk & (_UINT32_(value) << SPDIFTX_IMR_TXRDY_Pos)) /* Assignment of value for TXRDY in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_TXEMPTY_Pos               _UINT32_(1)                                          /* (SPDIFTX_IMR) Transmit FIFO Empty Interrupt Mask Position */
#define SPDIFTX_IMR_TXEMPTY_Msk               (_UINT32_(0x1) << SPDIFTX_IMR_TXEMPTY_Pos)           /* (SPDIFTX_IMR) Transmit FIFO Empty Interrupt Mask Mask */
#define SPDIFTX_IMR_TXEMPTY(value)            (SPDIFTX_IMR_TXEMPTY_Msk & (_UINT32_(value) << SPDIFTX_IMR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_TXFULL_Pos                _UINT32_(2)                                          /* (SPDIFTX_IMR) Transmit FIFO Full Interrupt Mask Position */
#define SPDIFTX_IMR_TXFULL_Msk                (_UINT32_(0x1) << SPDIFTX_IMR_TXFULL_Pos)            /* (SPDIFTX_IMR) Transmit FIFO Full Interrupt Mask Mask */
#define SPDIFTX_IMR_TXFULL(value)             (SPDIFTX_IMR_TXFULL_Msk & (_UINT32_(value) << SPDIFTX_IMR_TXFULL_Pos)) /* Assignment of value for TXFULL in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_TXCHUNK_Pos               _UINT32_(3)                                          /* (SPDIFTX_IMR) Transmit FIFO Chunk Size Empty Interrupt Mask Position */
#define SPDIFTX_IMR_TXCHUNK_Msk               (_UINT32_(0x1) << SPDIFTX_IMR_TXCHUNK_Pos)           /* (SPDIFTX_IMR) Transmit FIFO Chunk Size Empty Interrupt Mask Mask */
#define SPDIFTX_IMR_TXCHUNK(value)            (SPDIFTX_IMR_TXCHUNK_Msk & (_UINT32_(value) << SPDIFTX_IMR_TXCHUNK_Pos)) /* Assignment of value for TXCHUNK in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_TXUDR_Pos                 _UINT32_(4)                                          /* (SPDIFTX_IMR) Transmit Under Flow Interrupt Mask Position */
#define SPDIFTX_IMR_TXUDR_Msk                 (_UINT32_(0x1) << SPDIFTX_IMR_TXUDR_Pos)             /* (SPDIFTX_IMR) Transmit Under Flow Interrupt Mask Mask */
#define SPDIFTX_IMR_TXUDR(value)              (SPDIFTX_IMR_TXUDR_Msk & (_UINT32_(value) << SPDIFTX_IMR_TXUDR_Pos)) /* Assignment of value for TXUDR in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_TXOVR_Pos                 _UINT32_(5)                                          /* (SPDIFTX_IMR) Transmit Over Flow Interrupt Mask Position */
#define SPDIFTX_IMR_TXOVR_Msk                 (_UINT32_(0x1) << SPDIFTX_IMR_TXOVR_Pos)             /* (SPDIFTX_IMR) Transmit Over Flow Interrupt Mask Mask */
#define SPDIFTX_IMR_TXOVR(value)              (SPDIFTX_IMR_TXOVR_Msk & (_UINT32_(value) << SPDIFTX_IMR_TXOVR_Pos)) /* Assignment of value for TXOVR in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_CSRDY_Pos                 _UINT32_(6)                                          /* (SPDIFTX_IMR) Channel Status Ready Interrupt Mask Position */
#define SPDIFTX_IMR_CSRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IMR_CSRDY_Pos)             /* (SPDIFTX_IMR) Channel Status Ready Interrupt Mask Mask */
#define SPDIFTX_IMR_CSRDY(value)              (SPDIFTX_IMR_CSRDY_Msk & (_UINT32_(value) << SPDIFTX_IMR_CSRDY_Pos)) /* Assignment of value for CSRDY in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_UDRDY_Pos                 _UINT32_(7)                                          /* (SPDIFTX_IMR) User Data Ready Interrupt Mask Position */
#define SPDIFTX_IMR_UDRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_IMR_UDRDY_Pos)             /* (SPDIFTX_IMR) User Data Ready Interrupt Mask Mask */
#define SPDIFTX_IMR_UDRDY(value)              (SPDIFTX_IMR_UDRDY_Msk & (_UINT32_(value) << SPDIFTX_IMR_UDRDY_Pos)) /* Assignment of value for UDRDY in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_SECE_Pos                  _UINT32_(10)                                         /* (SPDIFTX_IMR) Security Report Interrupt Mask Position */
#define SPDIFTX_IMR_SECE_Msk                  (_UINT32_(0x1) << SPDIFTX_IMR_SECE_Pos)              /* (SPDIFTX_IMR) Security Report Interrupt Mask Mask */
#define SPDIFTX_IMR_SECE(value)               (SPDIFTX_IMR_SECE_Msk & (_UINT32_(value) << SPDIFTX_IMR_SECE_Pos)) /* Assignment of value for SECE in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_BEND_Pos                  _UINT32_(13)                                         /* (SPDIFTX_IMR) Block End Interrupt Mask Position */
#define SPDIFTX_IMR_BEND_Msk                  (_UINT32_(0x1) << SPDIFTX_IMR_BEND_Pos)              /* (SPDIFTX_IMR) Block End Interrupt Mask Mask */
#define SPDIFTX_IMR_BEND(value)               (SPDIFTX_IMR_BEND_Msk & (_UINT32_(value) << SPDIFTX_IMR_BEND_Pos)) /* Assignment of value for BEND in the SPDIFTX_IMR register */
#define SPDIFTX_IMR_Msk                       _UINT32_(0x000024FF)                                 /* (SPDIFTX_IMR) Register Mask  */


/* -------- SPDIFTX_ISR : (SPDIFTX Offset: 0x20) ( R/ 32) SPDIF Transmitter Interrupt Status Register -------- */
#define SPDIFTX_ISR_RESETVALUE                _UINT32_(0xCB)                                       /*  (SPDIFTX_ISR) SPDIF Transmitter Interrupt Status Register  Reset Value */

#define SPDIFTX_ISR_TXRDY_Pos                 _UINT32_(0)                                          /* (SPDIFTX_ISR) Transmit Ready Status (cleared when both channel 1 and 2 FIFOs are full) Position */
#define SPDIFTX_ISR_TXRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_ISR_TXRDY_Pos)             /* (SPDIFTX_ISR) Transmit Ready Status (cleared when both channel 1 and 2 FIFOs are full) Mask */
#define SPDIFTX_ISR_TXRDY(value)              (SPDIFTX_ISR_TXRDY_Msk & (_UINT32_(value) << SPDIFTX_ISR_TXRDY_Pos)) /* Assignment of value for TXRDY in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_TXEMPTY_Pos               _UINT32_(1)                                          /* (SPDIFTX_ISR) Transmit FIFO Empty Status (cleared by writing SPDIFTX_CDR register) Position */
#define SPDIFTX_ISR_TXEMPTY_Msk               (_UINT32_(0x1) << SPDIFTX_ISR_TXEMPTY_Pos)           /* (SPDIFTX_ISR) Transmit FIFO Empty Status (cleared by writing SPDIFTX_CDR register) Mask */
#define SPDIFTX_ISR_TXEMPTY(value)            (SPDIFTX_ISR_TXEMPTY_Msk & (_UINT32_(value) << SPDIFTX_ISR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_TXFULL_Pos                _UINT32_(2)                                          /* (SPDIFTX_ISR) Transmit FIFO Full Status (cleared when data are sent or writing the SPDIFTX_CR.FCLR bit) Position */
#define SPDIFTX_ISR_TXFULL_Msk                (_UINT32_(0x1) << SPDIFTX_ISR_TXFULL_Pos)            /* (SPDIFTX_ISR) Transmit FIFO Full Status (cleared when data are sent or writing the SPDIFTX_CR.FCLR bit) Mask */
#define SPDIFTX_ISR_TXFULL(value)             (SPDIFTX_ISR_TXFULL_Msk & (_UINT32_(value) << SPDIFTX_ISR_TXFULL_Pos)) /* Assignment of value for TXFULL in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_TXCHUNK_Pos               _UINT32_(3)                                          /* (SPDIFTX_ISR) Transmit FIFO Chunk Size Empty Status (cleared by writing CHUNK data in SPDIFTX_CDR) Position */
#define SPDIFTX_ISR_TXCHUNK_Msk               (_UINT32_(0x1) << SPDIFTX_ISR_TXCHUNK_Pos)           /* (SPDIFTX_ISR) Transmit FIFO Chunk Size Empty Status (cleared by writing CHUNK data in SPDIFTX_CDR) Mask */
#define SPDIFTX_ISR_TXCHUNK(value)            (SPDIFTX_ISR_TXCHUNK_Msk & (_UINT32_(value) << SPDIFTX_ISR_TXCHUNK_Pos)) /* Assignment of value for TXCHUNK in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_TXUDR_Pos                 _UINT32_(4)                                          /* (SPDIFTX_ISR) Transmit Under Flow Status (cleared on read) Position */
#define SPDIFTX_ISR_TXUDR_Msk                 (_UINT32_(0x1) << SPDIFTX_ISR_TXUDR_Pos)             /* (SPDIFTX_ISR) Transmit Under Flow Status (cleared on read) Mask */
#define SPDIFTX_ISR_TXUDR(value)              (SPDIFTX_ISR_TXUDR_Msk & (_UINT32_(value) << SPDIFTX_ISR_TXUDR_Pos)) /* Assignment of value for TXUDR in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_TXOVR_Pos                 _UINT32_(5)                                          /* (SPDIFTX_ISR) Transmit Over Flow Status (cleared on read) Position */
#define SPDIFTX_ISR_TXOVR_Msk                 (_UINT32_(0x1) << SPDIFTX_ISR_TXOVR_Pos)             /* (SPDIFTX_ISR) Transmit Over Flow Status (cleared on read) Mask */
#define SPDIFTX_ISR_TXOVR(value)              (SPDIFTX_ISR_TXOVR_Msk & (_UINT32_(value) << SPDIFTX_ISR_TXOVR_Pos)) /* Assignment of value for TXOVR in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_CSRDY_Pos                 _UINT32_(6)                                          /* (SPDIFTX_ISR) Channel Status Ready Status (cleared writing SPDIFTX_CHxSR0 register) Position */
#define SPDIFTX_ISR_CSRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_ISR_CSRDY_Pos)             /* (SPDIFTX_ISR) Channel Status Ready Status (cleared writing SPDIFTX_CHxSR0 register) Mask */
#define SPDIFTX_ISR_CSRDY(value)              (SPDIFTX_ISR_CSRDY_Msk & (_UINT32_(value) << SPDIFTX_ISR_CSRDY_Pos)) /* Assignment of value for CSRDY in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_UDRDY_Pos                 _UINT32_(7)                                          /* (SPDIFTX_ISR) User Data Ready Status (cleared writing SPDIFTX_CHxUDR0 register) Position */
#define SPDIFTX_ISR_UDRDY_Msk                 (_UINT32_(0x1) << SPDIFTX_ISR_UDRDY_Pos)             /* (SPDIFTX_ISR) User Data Ready Status (cleared writing SPDIFTX_CHxUDR0 register) Mask */
#define SPDIFTX_ISR_UDRDY(value)              (SPDIFTX_ISR_UDRDY_Msk & (_UINT32_(value) << SPDIFTX_ISR_UDRDY_Pos)) /* Assignment of value for UDRDY in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_SECE_Pos                  _UINT32_(10)                                         /* (SPDIFTX_ISR) Security Report Status (cleared on read) Position */
#define SPDIFTX_ISR_SECE_Msk                  (_UINT32_(0x1) << SPDIFTX_ISR_SECE_Pos)              /* (SPDIFTX_ISR) Security Report Status (cleared on read) Mask */
#define SPDIFTX_ISR_SECE(value)               (SPDIFTX_ISR_SECE_Msk & (_UINT32_(value) << SPDIFTX_ISR_SECE_Pos)) /* Assignment of value for SECE in the SPDIFTX_ISR register */
#define SPDIFTX_ISR_BEND_Pos                  _UINT32_(13)                                         /* (SPDIFTX_ISR) Block End Status (cleared on read) Position */
#define SPDIFTX_ISR_BEND_Msk                  (_UINT32_(0x1) << SPDIFTX_ISR_BEND_Pos)              /* (SPDIFTX_ISR) Block End Status (cleared on read) Mask */
#define SPDIFTX_ISR_BEND(value)               (SPDIFTX_ISR_BEND_Msk & (_UINT32_(value) << SPDIFTX_ISR_BEND_Pos)) /* Assignment of value for BEND in the SPDIFTX_ISR register */
#define   SPDIFTX_ISR_BEND_0_Val              _UINT32_(0x0)                                        /* (SPDIFTX_ISR) No Block End event occurred since last SPDIFTX_ISR read.  */
#define   SPDIFTX_ISR_BEND_1_Val              _UINT32_(0x1)                                        /* (SPDIFTX_ISR) At least one Block End event occurred since last SPDIFTX_ISR read.  */
#define SPDIFTX_ISR_BEND_0                    (SPDIFTX_ISR_BEND_0_Val << SPDIFTX_ISR_BEND_Pos)     /* (SPDIFTX_ISR) No Block End event occurred since last SPDIFTX_ISR read. Position */
#define SPDIFTX_ISR_BEND_1                    (SPDIFTX_ISR_BEND_1_Val << SPDIFTX_ISR_BEND_Pos)     /* (SPDIFTX_ISR) At least one Block End event occurred since last SPDIFTX_ISR read. Position */
#define SPDIFTX_ISR_Msk                       _UINT32_(0x000024FF)                                 /* (SPDIFTX_ISR) Register Mask  */


/* -------- SPDIFTX_SFI : (SPDIFTX Offset: 0x24) ( R/ 32) SPDIF Transmitter Subframe Index Register -------- */
#define SPDIFTX_SFI_RESETVALUE                _UINT32_(0x17F)                                      /*  (SPDIFTX_SFI) SPDIF Transmitter Subframe Index Register  Reset Value */

#define SPDIFTX_SFI_SFI_Pos                   _UINT32_(0)                                          /* (SPDIFTX_SFI) Transmit Subframe Index Position */
#define SPDIFTX_SFI_SFI_Msk                   (_UINT32_(0x3FF) << SPDIFTX_SFI_SFI_Pos)             /* (SPDIFTX_SFI) Transmit Subframe Index Mask */
#define SPDIFTX_SFI_SFI(value)                (SPDIFTX_SFI_SFI_Msk & (_UINT32_(value) << SPDIFTX_SFI_SFI_Pos)) /* Assignment of value for SFI in the SPDIFTX_SFI register */
#define SPDIFTX_SFI_Msk                       _UINT32_(0x000003FF)                                 /* (SPDIFTX_SFI) Register Mask  */


/* -------- SPDIFTX_CH1UD : (SPDIFTX Offset: 0x50) (R/W 32) SPDIF Transmitter User Data 1 Register x -------- */
#define SPDIFTX_CH1UD_RESETVALUE              _UINT32_(0x00)                                       /*  (SPDIFTX_CH1UD) SPDIF Transmitter User Data 1 Register x  Reset Value */

#define SPDIFTX_CH1UD_CHUD_Pos                _UINT32_(0)                                          /* (SPDIFTX_CH1UD) Channel 1 User Data Word Position */
#define SPDIFTX_CH1UD_CHUD_Msk                (_UINT32_(0xFFFFFFFF) << SPDIFTX_CH1UD_CHUD_Pos)     /* (SPDIFTX_CH1UD) Channel 1 User Data Word Mask */
#define SPDIFTX_CH1UD_CHUD(value)             (SPDIFTX_CH1UD_CHUD_Msk & (_UINT32_(value) << SPDIFTX_CH1UD_CHUD_Pos)) /* Assignment of value for CHUD in the SPDIFTX_CH1UD register */
#define SPDIFTX_CH1UD_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (SPDIFTX_CH1UD) Register Mask  */


/* -------- SPDIFTX_CH2UD : (SPDIFTX Offset: 0x68) (R/W 32) SPDIF Transmitter User Data 2 Register x -------- */
#define SPDIFTX_CH2UD_RESETVALUE              _UINT32_(0x00)                                       /*  (SPDIFTX_CH2UD) SPDIF Transmitter User Data 2 Register x  Reset Value */

#define SPDIFTX_CH2UD_CHUD_Pos                _UINT32_(0)                                          /* (SPDIFTX_CH2UD) Channel 2 User Data Word Position */
#define SPDIFTX_CH2UD_CHUD_Msk                (_UINT32_(0xFFFFFFFF) << SPDIFTX_CH2UD_CHUD_Pos)     /* (SPDIFTX_CH2UD) Channel 2 User Data Word Mask */
#define SPDIFTX_CH2UD_CHUD(value)             (SPDIFTX_CH2UD_CHUD_Msk & (_UINT32_(value) << SPDIFTX_CH2UD_CHUD_Pos)) /* Assignment of value for CHUD in the SPDIFTX_CH2UD register */
#define SPDIFTX_CH2UD_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (SPDIFTX_CH2UD) Register Mask  */


/* -------- SPDIFTX_CH1S : (SPDIFTX Offset: 0x80) (R/W 32) SPDIF Transmitter Channel Status 1 Register x -------- */
#define SPDIFTX_CH1S_RESETVALUE               _UINT32_(0x00)                                       /*  (SPDIFTX_CH1S) SPDIF Transmitter Channel Status 1 Register x  Reset Value */

#define SPDIFTX_CH1S_CHS_Pos                  _UINT32_(0)                                          /* (SPDIFTX_CH1S) Channel 1 Status Word Position */
#define SPDIFTX_CH1S_CHS_Msk                  (_UINT32_(0xFFFFFFFF) << SPDIFTX_CH1S_CHS_Pos)       /* (SPDIFTX_CH1S) Channel 1 Status Word Mask */
#define SPDIFTX_CH1S_CHS(value)               (SPDIFTX_CH1S_CHS_Msk & (_UINT32_(value) << SPDIFTX_CH1S_CHS_Pos)) /* Assignment of value for CHS in the SPDIFTX_CH1S register */
#define SPDIFTX_CH1S_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SPDIFTX_CH1S) Register Mask  */


/* -------- SPDIFTX_CH2S : (SPDIFTX Offset: 0x98) (R/W 32) SPDIF Transmitter Channel Status 2 Register x -------- */
#define SPDIFTX_CH2S_RESETVALUE               _UINT32_(0x00)                                       /*  (SPDIFTX_CH2S) SPDIF Transmitter Channel Status 2 Register x  Reset Value */

#define SPDIFTX_CH2S_CHS_Pos                  _UINT32_(0)                                          /* (SPDIFTX_CH2S) Channel 2 Status Word Position */
#define SPDIFTX_CH2S_CHS_Msk                  (_UINT32_(0xFFFFFFFF) << SPDIFTX_CH2S_CHS_Pos)       /* (SPDIFTX_CH2S) Channel 2 Status Word Mask */
#define SPDIFTX_CH2S_CHS(value)               (SPDIFTX_CH2S_CHS_Msk & (_UINT32_(value) << SPDIFTX_CH2S_CHS_Pos)) /* Assignment of value for CHS in the SPDIFTX_CH2S register */
#define SPDIFTX_CH2S_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SPDIFTX_CH2S) Register Mask  */


/* -------- SPDIFTX_FIR : (SPDIFTX Offset: 0xB8) (R/W 32) SPDIF Transmitter Fault Injection Register -------- */
#define SPDIFTX_FIR_RESETVALUE                _UINT32_(0x00)                                       /*  (SPDIFTX_FIR) SPDIF Transmitter Fault Injection Register  Reset Value */

#define SPDIFTX_FIR_F0_Pos                    _UINT32_(0)                                          /* (SPDIFTX_FIR) Single Fault for Mode Registers (SPDIFTX_MR and SPDIFTX_EMR) Position */
#define SPDIFTX_FIR_F0_Msk                    (_UINT32_(0x1) << SPDIFTX_FIR_F0_Pos)                /* (SPDIFTX_FIR) Single Fault for Mode Registers (SPDIFTX_MR and SPDIFTX_EMR) Mask */
#define SPDIFTX_FIR_F0(value)                 (SPDIFTX_FIR_F0_Msk & (_UINT32_(value) << SPDIFTX_FIR_F0_Pos)) /* Assignment of value for F0 in the SPDIFTX_FIR register */
#define   SPDIFTX_FIR_F0_0_Val                _UINT32_(0x0)                                        /* (SPDIFTX_FIR) No effect.  */
#define   SPDIFTX_FIR_F0_1_Val                _UINT32_(0x1)                                        /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_MR and SPDIFTX_EMR if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flags SPDIFTX_ISR.SECE=1, SPDIFTX_WPSR.SDEE=1. If DUAL=1, the flag SPDIFTX_WPSR.NCE=1.  */
#define SPDIFTX_FIR_F0_0                      (SPDIFTX_FIR_F0_0_Val << SPDIFTX_FIR_F0_Pos)         /* (SPDIFTX_FIR) No effect. Position */
#define SPDIFTX_FIR_F0_1                      (SPDIFTX_FIR_F0_1_Val << SPDIFTX_FIR_F0_Pos)         /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_MR and SPDIFTX_EMR if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flags SPDIFTX_ISR.SECE=1, SPDIFTX_WPSR.SDEE=1. If DUAL=1, the flag SPDIFTX_WPSR.NCE=1. Position */
#define SPDIFTX_FIR_F1_Pos                    _UINT32_(1)                                          /* (SPDIFTX_FIR) Single Fault for Interrupt Mask Register (SPDIFTX_IMR) Position */
#define SPDIFTX_FIR_F1_Msk                    (_UINT32_(0x1) << SPDIFTX_FIR_F1_Pos)                /* (SPDIFTX_FIR) Single Fault for Interrupt Mask Register (SPDIFTX_IMR) Mask */
#define SPDIFTX_FIR_F1(value)                 (SPDIFTX_FIR_F1_Msk & (_UINT32_(value) << SPDIFTX_FIR_F1_Pos)) /* Assignment of value for F1 in the SPDIFTX_FIR register */
#define   SPDIFTX_FIR_F1_0_Val                _UINT32_(0x0)                                        /* (SPDIFTX_FIR) No effect.  */
#define   SPDIFTX_FIR_F1_1_Val                _UINT32_(0x1)                                        /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_IMR if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flag SPDIFTX_ISR.SECE=1, SPDIFTX_WPSR.SDEE=1 and SPDIFTX_WPSR.NCE=1.  */
#define SPDIFTX_FIR_F1_0                      (SPDIFTX_FIR_F1_0_Val << SPDIFTX_FIR_F1_Pos)         /* (SPDIFTX_FIR) No effect. Position */
#define SPDIFTX_FIR_F1_1                      (SPDIFTX_FIR_F1_1_Val << SPDIFTX_FIR_F1_Pos)         /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_IMR if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flag SPDIFTX_ISR.SECE=1, SPDIFTX_WPSR.SDEE=1 and SPDIFTX_WPSR.NCE=1. Position */
#define SPDIFTX_FIR_F2_Pos                    _UINT32_(2)                                          /* (SPDIFTX_FIR) Single Fault for User Data Registers (SPDIFTX_CH1UDx/CH2UDx) Position */
#define SPDIFTX_FIR_F2_Msk                    (_UINT32_(0x1) << SPDIFTX_FIR_F2_Pos)                /* (SPDIFTX_FIR) Single Fault for User Data Registers (SPDIFTX_CH1UDx/CH2UDx) Mask */
#define SPDIFTX_FIR_F2(value)                 (SPDIFTX_FIR_F2_Msk & (_UINT32_(value) << SPDIFTX_FIR_F2_Pos)) /* Assignment of value for F2 in the SPDIFTX_FIR register */
#define   SPDIFTX_FIR_F2_0_Val                _UINT32_(0x0)                                        /* (SPDIFTX_FIR) No effect.  */
#define   SPDIFTX_FIR_F2_1_Val                _UINT32_(0x1)                                        /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_CH1/2UDx if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flags SPDIFTX_ISR.SECE=1 , SPDIFTX_WPSR.SDEE=1 and SPDIFTX_WPSR.NCE=1.  */
#define SPDIFTX_FIR_F2_0                      (SPDIFTX_FIR_F2_0_Val << SPDIFTX_FIR_F2_Pos)         /* (SPDIFTX_FIR) No effect. Position */
#define SPDIFTX_FIR_F2_1                      (SPDIFTX_FIR_F2_1_Val << SPDIFTX_FIR_F2_Pos)         /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_CH1/2UDx if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flags SPDIFTX_ISR.SECE=1 , SPDIFTX_WPSR.SDEE=1 and SPDIFTX_WPSR.NCE=1. Position */
#define SPDIFTX_FIR_F3_Pos                    _UINT32_(3)                                          /* (SPDIFTX_FIR) Single Fault for Channel Status Registers (SPDIFTX_CH1Sx/CH2Sx) Position */
#define SPDIFTX_FIR_F3_Msk                    (_UINT32_(0x1) << SPDIFTX_FIR_F3_Pos)                /* (SPDIFTX_FIR) Single Fault for Channel Status Registers (SPDIFTX_CH1Sx/CH2Sx) Mask */
#define SPDIFTX_FIR_F3(value)                 (SPDIFTX_FIR_F3_Msk & (_UINT32_(value) << SPDIFTX_FIR_F3_Pos)) /* Assignment of value for F3 in the SPDIFTX_FIR register */
#define   SPDIFTX_FIR_F3_0_Val                _UINT32_(0x0)                                        /* (SPDIFTX_FIR) No effect.  */
#define   SPDIFTX_FIR_F3_1_Val                _UINT32_(0x1)                                        /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_CH1Sx/CH2Sx if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flags SPDIFTX_ISR.SECE=1, SPDIFTX_WPSR.SDEE=1 and SPDIFTX_WPSR.NCE=1.  */
#define SPDIFTX_FIR_F3_0                      (SPDIFTX_FIR_F3_0_Val << SPDIFTX_FIR_F3_Pos)         /* (SPDIFTX_FIR) No effect. Position */
#define SPDIFTX_FIR_F3_1                      (SPDIFTX_FIR_F3_1_Val << SPDIFTX_FIR_F3_Pos)         /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_CH1Sx/CH2Sx if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flags SPDIFTX_ISR.SECE=1, SPDIFTX_WPSR.SDEE=1 and SPDIFTX_WPSR.NCE=1. Position */
#define SPDIFTX_FIR_F4_Pos                    _UINT32_(4)                                          /* (SPDIFTX_FIR) Single Fault for Write Protection Mode Register (SPDIFTX_WPMR) Position */
#define SPDIFTX_FIR_F4_Msk                    (_UINT32_(0x1) << SPDIFTX_FIR_F4_Pos)                /* (SPDIFTX_FIR) Single Fault for Write Protection Mode Register (SPDIFTX_WPMR) Mask */
#define SPDIFTX_FIR_F4(value)                 (SPDIFTX_FIR_F4_Msk & (_UINT32_(value) << SPDIFTX_FIR_F4_Pos)) /* Assignment of value for F4 in the SPDIFTX_FIR register */
#define   SPDIFTX_FIR_F4_0_Val                _UINT32_(0x0)                                        /* (SPDIFTX_FIR) No effect.  */
#define   SPDIFTX_FIR_F4_1_Val                _UINT32_(0x1)                                        /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_WPMR if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flags SPDIFTX_ISR.SECE=1, SPDIFTX_WPSR.SDEE=1. If DUAL=1, the flag SPDIFTX_WPSR.NCE=1.  */
#define SPDIFTX_FIR_F4_0                      (SPDIFTX_FIR_F4_0_Val << SPDIFTX_FIR_F4_Pos)         /* (SPDIFTX_FIR) No effect. Position */
#define SPDIFTX_FIR_F4_1                      (SPDIFTX_FIR_F4_1_Val << SPDIFTX_FIR_F4_Pos)         /* (SPDIFTX_FIR) Injects a single fault in the reinforced safety for the SPDIFTX_WPMR if 0x534649 ("SFI" in ASCII) is written in the FIKEY field at the same time. The flags SPDIFTX_ISR.SECE=1, SPDIFTX_WPSR.SDEE=1. If DUAL=1, the flag SPDIFTX_WPSR.NCE=1. Position */
#define SPDIFTX_FIR_FNBR_Pos                  _UINT32_(5)                                          /* (SPDIFTX_FIR) Fault Number Position */
#define SPDIFTX_FIR_FNBR_Msk                  (_UINT32_(0x1) << SPDIFTX_FIR_FNBR_Pos)              /* (SPDIFTX_FIR) Fault Number Mask */
#define SPDIFTX_FIR_FNBR(value)               (SPDIFTX_FIR_FNBR_Msk & (_UINT32_(value) << SPDIFTX_FIR_FNBR_Pos)) /* Assignment of value for FNBR in the SPDIFTX_FIR register */
#define   SPDIFTX_FIR_FNBR_SINGLE_Val         _UINT32_(0x0)                                        /* (SPDIFTX_FIR) One error is injected in the selected register.  */
#define   SPDIFTX_FIR_FNBR_DOUBLE_Val         _UINT32_(0x1)                                        /* (SPDIFTX_FIR) Two errors are injected in the selected register.  */
#define SPDIFTX_FIR_FNBR_SINGLE               (SPDIFTX_FIR_FNBR_SINGLE_Val << SPDIFTX_FIR_FNBR_Pos) /* (SPDIFTX_FIR) One error is injected in the selected register. Position */
#define SPDIFTX_FIR_FNBR_DOUBLE               (SPDIFTX_FIR_FNBR_DOUBLE_Val << SPDIFTX_FIR_FNBR_Pos) /* (SPDIFTX_FIR) Two errors are injected in the selected register. Position */
#define SPDIFTX_FIR_FIRDIS_Pos                _UINT32_(7)                                          /* (SPDIFTX_FIR) Fault Injection Register Disable Position */
#define SPDIFTX_FIR_FIRDIS_Msk                (_UINT32_(0x1) << SPDIFTX_FIR_FIRDIS_Pos)            /* (SPDIFTX_FIR) Fault Injection Register Disable Mask */
#define SPDIFTX_FIR_FIRDIS(value)             (SPDIFTX_FIR_FIRDIS_Msk & (_UINT32_(value) << SPDIFTX_FIR_FIRDIS_Pos)) /* Assignment of value for FIRDIS in the SPDIFTX_FIR register */
#define   SPDIFTX_FIR_FIRDIS_NO_EFFECT_Val    _UINT32_(0x0)                                        /* (SPDIFTX_FIR) No effect.  */
#define   SPDIFTX_FIR_FIRDIS_ACTIVE_Val       _UINT32_(0x1)                                        /* (SPDIFTX_FIR) Disables the fault injection until the next hardware reset. The command is valid only if the flags SPDIFTX_WPSR.SDEE=0 and SPDIFTX_WPSR.NCE=0 and the other bits are cleared (F0=F1=F2=F3=F4=0).  */
#define SPDIFTX_FIR_FIRDIS_NO_EFFECT          (SPDIFTX_FIR_FIRDIS_NO_EFFECT_Val << SPDIFTX_FIR_FIRDIS_Pos) /* (SPDIFTX_FIR) No effect. Position */
#define SPDIFTX_FIR_FIRDIS_ACTIVE             (SPDIFTX_FIR_FIRDIS_ACTIVE_Val << SPDIFTX_FIR_FIRDIS_Pos) /* (SPDIFTX_FIR) Disables the fault injection until the next hardware reset. The command is valid only if the flags SPDIFTX_WPSR.SDEE=0 and SPDIFTX_WPSR.NCE=0 and the other bits are cleared (F0=F1=F2=F3=F4=0). Position */
#define SPDIFTX_FIR_FIKEY_Pos                 _UINT32_(8)                                          /* (SPDIFTX_FIR) Fault Injection Key Position */
#define SPDIFTX_FIR_FIKEY_Msk                 (_UINT32_(0xFFFFFF) << SPDIFTX_FIR_FIKEY_Pos)        /* (SPDIFTX_FIR) Fault Injection Key Mask */
#define SPDIFTX_FIR_FIKEY(value)              (SPDIFTX_FIR_FIKEY_Msk & (_UINT32_(value) << SPDIFTX_FIR_FIKEY_Pos)) /* Assignment of value for FIKEY in the SPDIFTX_FIR register */
#define   SPDIFTX_FIR_FIKEY_PASSWD_Val        _UINT32_(0x534649)                                   /* (SPDIFTX_FIR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define SPDIFTX_FIR_FIKEY_PASSWD              (SPDIFTX_FIR_FIKEY_PASSWD_Val << SPDIFTX_FIR_FIKEY_Pos) /* (SPDIFTX_FIR) Writing any other value in this field aborts the write operation. Always reads as 0. Position */
#define SPDIFTX_FIR_Msk                       _UINT32_(0xFFFFFFBF)                                 /* (SPDIFTX_FIR) Register Mask  */

#define SPDIFTX_FIR_F_Pos                     _UINT32_(0)                                          /* (SPDIFTX_FIR Position) Single Fault for Mode Registers (SPDIFTX_MR and SPDIFTX_EMR) */
#define SPDIFTX_FIR_F_Msk                     (_UINT32_(0x1F) << SPDIFTX_FIR_F_Pos)                /* (SPDIFTX_FIR Mask) F */
#define SPDIFTX_FIR_F(value)                  (SPDIFTX_FIR_F_Msk & (_UINT32_(value) << SPDIFTX_FIR_F_Pos)) 

/* -------- SPDIFTX_WPMR : (SPDIFTX Offset: 0xE0) (R/W 32) SPDIF Transmitter Write Protection Mode Register -------- */
#define SPDIFTX_WPMR_RESETVALUE               _UINT32_(0x00)                                       /*  (SPDIFTX_WPMR) SPDIF Transmitter Write Protection Mode Register  Reset Value */

#define SPDIFTX_WPMR_WPEN_Pos                 _UINT32_(0)                                          /* (SPDIFTX_WPMR) Write Protection Enable Position */
#define SPDIFTX_WPMR_WPEN_Msk                 (_UINT32_(0x1) << SPDIFTX_WPMR_WPEN_Pos)             /* (SPDIFTX_WPMR) Write Protection Enable Mask */
#define SPDIFTX_WPMR_WPEN(value)              (SPDIFTX_WPMR_WPEN_Msk & (_UINT32_(value) << SPDIFTX_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the SPDIFTX_WPMR register */
#define   SPDIFTX_WPMR_WPEN_0_Val             _UINT32_(0x0)                                        /* (SPDIFTX_WPMR) Disables the write protection if WPKEY corresponds to 0x444946 (DIF in ASCII)  */
#define   SPDIFTX_WPMR_WPEN_1_Val             _UINT32_(0x1)                                        /* (SPDIFTX_WPMR) Enables the write protection if WPKEY corresponds to 0x444946 (DIF in ASCII)  */
#define SPDIFTX_WPMR_WPEN_0                   (SPDIFTX_WPMR_WPEN_0_Val << SPDIFTX_WPMR_WPEN_Pos)   /* (SPDIFTX_WPMR) Disables the write protection if WPKEY corresponds to 0x444946 (DIF in ASCII) Position */
#define SPDIFTX_WPMR_WPEN_1                   (SPDIFTX_WPMR_WPEN_1_Val << SPDIFTX_WPMR_WPEN_Pos)   /* (SPDIFTX_WPMR) Enables the write protection if WPKEY corresponds to 0x444946 (DIF in ASCII) Position */
#define SPDIFTX_WPMR_WPITEN_Pos               _UINT32_(1)                                          /* (SPDIFTX_WPMR) Write Protection Interrupt Enable Position */
#define SPDIFTX_WPMR_WPITEN_Msk               (_UINT32_(0x1) << SPDIFTX_WPMR_WPITEN_Pos)           /* (SPDIFTX_WPMR) Write Protection Interrupt Enable Mask */
#define SPDIFTX_WPMR_WPITEN(value)            (SPDIFTX_WPMR_WPITEN_Msk & (_UINT32_(value) << SPDIFTX_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the SPDIFTX_WPMR register */
#define   SPDIFTX_WPMR_WPITEN_0_Val           _UINT32_(0x0)                                        /* (SPDIFTX_WPMR) Disables the write protection on Interrupt registers if WPKEY corresponds to 0x444946.  */
#define   SPDIFTX_WPMR_WPITEN_1_Val           _UINT32_(0x1)                                        /* (SPDIFTX_WPMR) Enables the write protection on Interrupt registers if WPKEY corresponds to 0x444946.  */
#define SPDIFTX_WPMR_WPITEN_0                 (SPDIFTX_WPMR_WPITEN_0_Val << SPDIFTX_WPMR_WPITEN_Pos) /* (SPDIFTX_WPMR) Disables the write protection on Interrupt registers if WPKEY corresponds to 0x444946. Position */
#define SPDIFTX_WPMR_WPITEN_1                 (SPDIFTX_WPMR_WPITEN_1_Val << SPDIFTX_WPMR_WPITEN_Pos) /* (SPDIFTX_WPMR) Enables the write protection on Interrupt registers if WPKEY corresponds to 0x444946. Position */
#define SPDIFTX_WPMR_WPCREN_Pos               _UINT32_(2)                                          /* (SPDIFTX_WPMR) Write Protection Control Register Enable Position */
#define SPDIFTX_WPMR_WPCREN_Msk               (_UINT32_(0x1) << SPDIFTX_WPMR_WPCREN_Pos)           /* (SPDIFTX_WPMR) Write Protection Control Register Enable Mask */
#define SPDIFTX_WPMR_WPCREN(value)            (SPDIFTX_WPMR_WPCREN_Msk & (_UINT32_(value) << SPDIFTX_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the SPDIFTX_WPMR register */
#define   SPDIFTX_WPMR_WPCREN_0_Val           _UINT32_(0x0)                                        /* (SPDIFTX_WPMR) Disables the write protection on the Control register if WPKEY corresponds to 0x444946.  */
#define   SPDIFTX_WPMR_WPCREN_1_Val           _UINT32_(0x1)                                        /* (SPDIFTX_WPMR) Enables the write protection on the Control register if WPKEY corresponds to 0x444946.  */
#define SPDIFTX_WPMR_WPCREN_0                 (SPDIFTX_WPMR_WPCREN_0_Val << SPDIFTX_WPMR_WPCREN_Pos) /* (SPDIFTX_WPMR) Disables the write protection on the Control register if WPKEY corresponds to 0x444946. Position */
#define SPDIFTX_WPMR_WPCREN_1                 (SPDIFTX_WPMR_WPCREN_1_Val << SPDIFTX_WPMR_WPCREN_Pos) /* (SPDIFTX_WPMR) Enables the write protection on the Control register if WPKEY corresponds to 0x444946. Position */
#define SPDIFTX_WPMR_FIRSTE_Pos               _UINT32_(4)                                          /* (SPDIFTX_WPMR) First Error Report Enable Position */
#define SPDIFTX_WPMR_FIRSTE_Msk               (_UINT32_(0x1) << SPDIFTX_WPMR_FIRSTE_Pos)           /* (SPDIFTX_WPMR) First Error Report Enable Mask */
#define SPDIFTX_WPMR_FIRSTE(value)            (SPDIFTX_WPMR_FIRSTE_Msk & (_UINT32_(value) << SPDIFTX_WPMR_FIRSTE_Pos)) /* Assignment of value for FIRSTE in the SPDIFTX_WPMR register */
#define   SPDIFTX_WPMR_FIRSTE_0_Val           _UINT32_(0x0)                                        /* (SPDIFTX_WPMR) The last write protection violation source is reported in SPDIFTX_WPSR.WPVSRC and the last software control error type is reported in SPDIFTX_WPSR.SWETYP. The SPDIFTX_ISR.SECE flag is set at the first error occurrence within a series.  */
#define   SPDIFTX_WPMR_FIRSTE_1_Val           _UINT32_(0x1)                                        /* (SPDIFTX_WPMR) Only the first write protection violation source is reported in SPDIFTX_WPSR.WPVSRC and only the first software control error type is reported in SPDIFTX_WPSR.SWETYP. The SPDIFTX_ISR.SECE flag is set at the first error occurrence within a series.  */
#define SPDIFTX_WPMR_FIRSTE_0                 (SPDIFTX_WPMR_FIRSTE_0_Val << SPDIFTX_WPMR_FIRSTE_Pos) /* (SPDIFTX_WPMR) The last write protection violation source is reported in SPDIFTX_WPSR.WPVSRC and the last software control error type is reported in SPDIFTX_WPSR.SWETYP. The SPDIFTX_ISR.SECE flag is set at the first error occurrence within a series. Position */
#define SPDIFTX_WPMR_FIRSTE_1                 (SPDIFTX_WPMR_FIRSTE_1_Val << SPDIFTX_WPMR_FIRSTE_Pos) /* (SPDIFTX_WPMR) Only the first write protection violation source is reported in SPDIFTX_WPSR.WPVSRC and only the first software control error type is reported in SPDIFTX_WPSR.SWETYP. The SPDIFTX_ISR.SECE flag is set at the first error occurrence within a series. Position */
#define SPDIFTX_WPMR_WPKEY_Pos                _UINT32_(8)                                          /* (SPDIFTX_WPMR) Write Protection Key Position */
#define SPDIFTX_WPMR_WPKEY_Msk                (_UINT32_(0xFFFFFF) << SPDIFTX_WPMR_WPKEY_Pos)       /* (SPDIFTX_WPMR) Write Protection Key Mask */
#define SPDIFTX_WPMR_WPKEY(value)             (SPDIFTX_WPMR_WPKEY_Msk & (_UINT32_(value) << SPDIFTX_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the SPDIFTX_WPMR register */
#define   SPDIFTX_WPMR_WPKEY_PASSWD_Val       _UINT32_(0x444946)                                   /* (SPDIFTX_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SPDIFTX_WPMR_WPKEY_PASSWD             (SPDIFTX_WPMR_WPKEY_PASSWD_Val << SPDIFTX_WPMR_WPKEY_Pos) /* (SPDIFTX_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position */
#define SPDIFTX_WPMR_Msk                      _UINT32_(0xFFFFFF17)                                 /* (SPDIFTX_WPMR) Register Mask  */


/* -------- SPDIFTX_WPSR : (SPDIFTX Offset: 0xE4) ( R/ 32) SPDIF Transmitter Write Protection Status Register -------- */
#define SPDIFTX_WPSR_RESETVALUE               _UINT32_(0x00)                                       /*  (SPDIFTX_WPSR) SPDIF Transmitter Write Protection Status Register  Reset Value */

#define SPDIFTX_WPSR_WPVS_Pos                 _UINT32_(0)                                          /* (SPDIFTX_WPSR) Write Protection Violation Status (cleared on read) Position */
#define SPDIFTX_WPSR_WPVS_Msk                 (_UINT32_(0x1) << SPDIFTX_WPSR_WPVS_Pos)             /* (SPDIFTX_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define SPDIFTX_WPSR_WPVS(value)              (SPDIFTX_WPSR_WPVS_Msk & (_UINT32_(value) << SPDIFTX_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the SPDIFTX_WPSR register */
#define   SPDIFTX_WPSR_WPVS_0_Val             _UINT32_(0x0)                                        /* (SPDIFTX_WPSR) No write protection violation has occurred since the last read of the QSPI_WPSR.  */
#define   SPDIFTX_WPSR_WPVS_1_Val             _UINT32_(0x1)                                        /* (SPDIFTX_WPSR) A write protection violation has occurred since the last read of the QSPI_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported in the field WPVSRC.  */
#define SPDIFTX_WPSR_WPVS_0                   (SPDIFTX_WPSR_WPVS_0_Val << SPDIFTX_WPSR_WPVS_Pos)   /* (SPDIFTX_WPSR) No write protection violation has occurred since the last read of the QSPI_WPSR. Position */
#define SPDIFTX_WPSR_WPVS_1                   (SPDIFTX_WPSR_WPVS_1_Val << SPDIFTX_WPSR_WPVS_Pos)   /* (SPDIFTX_WPSR) A write protection violation has occurred since the last read of the QSPI_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported in the field WPVSRC. Position */
#define SPDIFTX_WPSR_SWE_Pos                  _UINT32_(3)                                          /* (SPDIFTX_WPSR) Software Control Error (cleared on read) Position */
#define SPDIFTX_WPSR_SWE_Msk                  (_UINT32_(0x1) << SPDIFTX_WPSR_SWE_Pos)              /* (SPDIFTX_WPSR) Software Control Error (cleared on read) Mask */
#define SPDIFTX_WPSR_SWE(value)               (SPDIFTX_WPSR_SWE_Msk & (_UINT32_(value) << SPDIFTX_WPSR_SWE_Pos)) /* Assignment of value for SWE in the SPDIFTX_WPSR register */
#define   SPDIFTX_WPSR_SWE_0_Val              _UINT32_(0x0)                                        /* (SPDIFTX_WPSR) No software error has occurred since the last read of SPDIFTX_WPSR.  */
#define   SPDIFTX_WPSR_SWE_1_Val              _UINT32_(0x1)                                        /* (SPDIFTX_WPSR) A software error has occurred since the last read of SPDIFTX_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0).  */
#define SPDIFTX_WPSR_SWE_0                    (SPDIFTX_WPSR_SWE_0_Val << SPDIFTX_WPSR_SWE_Pos)     /* (SPDIFTX_WPSR) No software error has occurred since the last read of SPDIFTX_WPSR. Position */
#define SPDIFTX_WPSR_SWE_1                    (SPDIFTX_WPSR_SWE_1_Val << SPDIFTX_WPSR_SWE_Pos)     /* (SPDIFTX_WPSR) A software error has occurred since the last read of SPDIFTX_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0). Position */
#define SPDIFTX_WPSR_SDEE_Pos                 _UINT32_(4)                                          /* (SPDIFTX_WPSR) Single or Dual Event Error (cleared by reconfiguring the faulty registers or by clearing the error via SPDIFTX_FIR) Position */
#define SPDIFTX_WPSR_SDEE_Msk                 (_UINT32_(0x1) << SPDIFTX_WPSR_SDEE_Pos)             /* (SPDIFTX_WPSR) Single or Dual Event Error (cleared by reconfiguring the faulty registers or by clearing the error via SPDIFTX_FIR) Mask */
#define SPDIFTX_WPSR_SDEE(value)              (SPDIFTX_WPSR_SDEE_Msk & (_UINT32_(value) << SPDIFTX_WPSR_SDEE_Pos)) /* Assignment of value for SDEE in the SPDIFTX_WPSR register */
#define   SPDIFTX_WPSR_SDEE_0_Val             _UINT32_(0x0)                                        /* (SPDIFTX_WPSR) No single or dual error detected.  */
#define   SPDIFTX_WPSR_SDEE_1_Val             _UINT32_(0x1)                                        /* (SPDIFTX_WPSR) Single or dual error detected in configuration registers. If a single error event occurred, the error is corrected (NCE=0).  */
#define SPDIFTX_WPSR_SDEE_0                   (SPDIFTX_WPSR_SDEE_0_Val << SPDIFTX_WPSR_SDEE_Pos)   /* (SPDIFTX_WPSR) No single or dual error detected. Position */
#define SPDIFTX_WPSR_SDEE_1                   (SPDIFTX_WPSR_SDEE_1_Val << SPDIFTX_WPSR_SDEE_Pos)   /* (SPDIFTX_WPSR) Single or dual error detected in configuration registers. If a single error event occurred, the error is corrected (NCE=0). Position */
#define SPDIFTX_WPSR_NCE_Pos                  _UINT32_(5)                                          /* (SPDIFTX_WPSR) Non Corrected Error (cleared by reconfiguring the faulty registers or by clearing the error via SPDIFTX_FIR) Position */
#define SPDIFTX_WPSR_NCE_Msk                  (_UINT32_(0x1) << SPDIFTX_WPSR_NCE_Pos)              /* (SPDIFTX_WPSR) Non Corrected Error (cleared by reconfiguring the faulty registers or by clearing the error via SPDIFTX_FIR) Mask */
#define SPDIFTX_WPSR_NCE(value)               (SPDIFTX_WPSR_NCE_Msk & (_UINT32_(value) << SPDIFTX_WPSR_NCE_Pos)) /* Assignment of value for NCE in the SPDIFTX_WPSR register */
#define   SPDIFTX_WPSR_NCE_0_Val              _UINT32_(0x0)                                        /* (SPDIFTX_WPSR) A single error is detected (SDEE=1) or no error (SDEE=0).  */
#define   SPDIFTX_WPSR_NCE_1_Val              _UINT32_(0x1)                                        /* (SPDIFTX_WPSR) A double error is detected in some configuration registers (SDEE=1).  */
#define SPDIFTX_WPSR_NCE_0                    (SPDIFTX_WPSR_NCE_0_Val << SPDIFTX_WPSR_NCE_Pos)     /* (SPDIFTX_WPSR) A single error is detected (SDEE=1) or no error (SDEE=0). Position */
#define SPDIFTX_WPSR_NCE_1                    (SPDIFTX_WPSR_NCE_1_Val << SPDIFTX_WPSR_NCE_Pos)     /* (SPDIFTX_WPSR) A double error is detected in some configuration registers (SDEE=1). Position */
#define SPDIFTX_WPSR_WPVSRC_Pos               _UINT32_(8)                                          /* (SPDIFTX_WPSR) Write Protection Violation Source Position */
#define SPDIFTX_WPSR_WPVSRC_Msk               (_UINT32_(0xFFFF) << SPDIFTX_WPSR_WPVSRC_Pos)        /* (SPDIFTX_WPSR) Write Protection Violation Source Mask */
#define SPDIFTX_WPSR_WPVSRC(value)            (SPDIFTX_WPSR_WPVSRC_Msk & (_UINT32_(value) << SPDIFTX_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the SPDIFTX_WPSR register */
#define SPDIFTX_WPSR_SWETYP_Pos               _UINT32_(24)                                         /* (SPDIFTX_WPSR) Software Error Type (cleared on read) Position */
#define SPDIFTX_WPSR_SWETYP_Msk               (_UINT32_(0x3) << SPDIFTX_WPSR_SWETYP_Pos)           /* (SPDIFTX_WPSR) Software Error Type (cleared on read) Mask */
#define SPDIFTX_WPSR_SWETYP(value)            (SPDIFTX_WPSR_SWETYP_Msk & (_UINT32_(value) << SPDIFTX_WPSR_SWETYP_Pos)) /* Assignment of value for SWETYP in the SPDIFTX_WPSR register */
#define   SPDIFTX_WPSR_SWETYP_READ_WO_Val     _UINT32_(0x0)                                        /* (SPDIFTX_WPSR) A write-only register has been read (warning).  */
#define   SPDIFTX_WPSR_SWETYP_WRITE_RO_Val    _UINT32_(0x1)                                        /* (SPDIFTX_WPSR) A write access has been performed on a read-only register (warning).  */
#define   SPDIFTX_WPSR_SWETYP_UNDEF_RW_Val    _UINT32_(0x2)                                        /* (SPDIFTX_WPSR) Access to an undefined address (warning).  */
#define SPDIFTX_WPSR_SWETYP_READ_WO           (SPDIFTX_WPSR_SWETYP_READ_WO_Val << SPDIFTX_WPSR_SWETYP_Pos) /* (SPDIFTX_WPSR) A write-only register has been read (warning). Position */
#define SPDIFTX_WPSR_SWETYP_WRITE_RO          (SPDIFTX_WPSR_SWETYP_WRITE_RO_Val << SPDIFTX_WPSR_SWETYP_Pos) /* (SPDIFTX_WPSR) A write access has been performed on a read-only register (warning). Position */
#define SPDIFTX_WPSR_SWETYP_UNDEF_RW          (SPDIFTX_WPSR_SWETYP_UNDEF_RW_Val << SPDIFTX_WPSR_SWETYP_Pos) /* (SPDIFTX_WPSR) Access to an undefined address (warning). Position */
#define SPDIFTX_WPSR_Msk                      _UINT32_(0x03FFFF39)                                 /* (SPDIFTX_WPSR) Register Mask  */


/* SPDIFTX register offsets definitions */
#define SPDIFTX_CR_REG_OFST            _UINT32_(0x00)      /* (SPDIFTX_CR) SPDIF Transmitter Control Register Offset */
#define SPDIFTX_MR_REG_OFST            _UINT32_(0x04)      /* (SPDIFTX_MR) SPDIF Transmitter Mode Register Offset */
#define SPDIFTX_EMR_REG_OFST           _UINT32_(0x08)      /* (SPDIFTX_EMR) SPDIF Transmitter Extended Mode Register Offset */
#define SPDIFTX_CDR_REG_OFST           _UINT32_(0x0C)      /* (SPDIFTX_CDR) SPDIF Transmitter Common Data Register Offset */
#define SPDIFTX_SR_REG_OFST            _UINT32_(0x10)      /* (SPDIFTX_SR) SPDIF Transmitter Status Register Offset */
#define SPDIFTX_IER_REG_OFST           _UINT32_(0x14)      /* (SPDIFTX_IER) SPDIF Transmitter Interrupt Enable Register Offset */
#define SPDIFTX_IDR_REG_OFST           _UINT32_(0x18)      /* (SPDIFTX_IDR) SPDIF Transmitter Interrupt Disable Register Offset */
#define SPDIFTX_IMR_REG_OFST           _UINT32_(0x1C)      /* (SPDIFTX_IMR) SPDIF Transmitter Interrupt Mask Register Offset */
#define SPDIFTX_ISR_REG_OFST           _UINT32_(0x20)      /* (SPDIFTX_ISR) SPDIF Transmitter Interrupt Status Register Offset */
#define SPDIFTX_SFI_REG_OFST           _UINT32_(0x24)      /* (SPDIFTX_SFI) SPDIF Transmitter Subframe Index Register Offset */
#define SPDIFTX_CH1UD_REG_OFST         _UINT32_(0x50)      /* (SPDIFTX_CH1UD) SPDIF Transmitter User Data 1 Register x Offset */
#define SPDIFTX_CH1UD0_REG_OFST        _UINT32_(0x50)      /* (SPDIFTX_CH1UD0) SPDIF Transmitter User Data 1 Register x Offset */
#define SPDIFTX_CH1UD1_REG_OFST        _UINT32_(0x54)      /* (SPDIFTX_CH1UD1) SPDIF Transmitter User Data 1 Register x Offset */
#define SPDIFTX_CH1UD2_REG_OFST        _UINT32_(0x58)      /* (SPDIFTX_CH1UD2) SPDIF Transmitter User Data 1 Register x Offset */
#define SPDIFTX_CH1UD3_REG_OFST        _UINT32_(0x5C)      /* (SPDIFTX_CH1UD3) SPDIF Transmitter User Data 1 Register x Offset */
#define SPDIFTX_CH1UD4_REG_OFST        _UINT32_(0x60)      /* (SPDIFTX_CH1UD4) SPDIF Transmitter User Data 1 Register x Offset */
#define SPDIFTX_CH1UD5_REG_OFST        _UINT32_(0x64)      /* (SPDIFTX_CH1UD5) SPDIF Transmitter User Data 1 Register x Offset */
#define SPDIFTX_CH2UD_REG_OFST         _UINT32_(0x68)      /* (SPDIFTX_CH2UD) SPDIF Transmitter User Data 2 Register x Offset */
#define SPDIFTX_CH2UD0_REG_OFST        _UINT32_(0x68)      /* (SPDIFTX_CH2UD0) SPDIF Transmitter User Data 2 Register x Offset */
#define SPDIFTX_CH2UD1_REG_OFST        _UINT32_(0x6C)      /* (SPDIFTX_CH2UD1) SPDIF Transmitter User Data 2 Register x Offset */
#define SPDIFTX_CH2UD2_REG_OFST        _UINT32_(0x70)      /* (SPDIFTX_CH2UD2) SPDIF Transmitter User Data 2 Register x Offset */
#define SPDIFTX_CH2UD3_REG_OFST        _UINT32_(0x74)      /* (SPDIFTX_CH2UD3) SPDIF Transmitter User Data 2 Register x Offset */
#define SPDIFTX_CH2UD4_REG_OFST        _UINT32_(0x78)      /* (SPDIFTX_CH2UD4) SPDIF Transmitter User Data 2 Register x Offset */
#define SPDIFTX_CH2UD5_REG_OFST        _UINT32_(0x7C)      /* (SPDIFTX_CH2UD5) SPDIF Transmitter User Data 2 Register x Offset */
#define SPDIFTX_CH1S_REG_OFST          _UINT32_(0x80)      /* (SPDIFTX_CH1S) SPDIF Transmitter Channel Status 1 Register x Offset */
#define SPDIFTX_CH1S0_REG_OFST         _UINT32_(0x80)      /* (SPDIFTX_CH1S0) SPDIF Transmitter Channel Status 1 Register x Offset */
#define SPDIFTX_CH1S1_REG_OFST         _UINT32_(0x84)      /* (SPDIFTX_CH1S1) SPDIF Transmitter Channel Status 1 Register x Offset */
#define SPDIFTX_CH1S2_REG_OFST         _UINT32_(0x88)      /* (SPDIFTX_CH1S2) SPDIF Transmitter Channel Status 1 Register x Offset */
#define SPDIFTX_CH1S3_REG_OFST         _UINT32_(0x8C)      /* (SPDIFTX_CH1S3) SPDIF Transmitter Channel Status 1 Register x Offset */
#define SPDIFTX_CH1S4_REG_OFST         _UINT32_(0x90)      /* (SPDIFTX_CH1S4) SPDIF Transmitter Channel Status 1 Register x Offset */
#define SPDIFTX_CH1S5_REG_OFST         _UINT32_(0x94)      /* (SPDIFTX_CH1S5) SPDIF Transmitter Channel Status 1 Register x Offset */
#define SPDIFTX_CH2S_REG_OFST          _UINT32_(0x98)      /* (SPDIFTX_CH2S) SPDIF Transmitter Channel Status 2 Register x Offset */
#define SPDIFTX_CH2S0_REG_OFST         _UINT32_(0x98)      /* (SPDIFTX_CH2S0) SPDIF Transmitter Channel Status 2 Register x Offset */
#define SPDIFTX_CH2S1_REG_OFST         _UINT32_(0x9C)      /* (SPDIFTX_CH2S1) SPDIF Transmitter Channel Status 2 Register x Offset */
#define SPDIFTX_CH2S2_REG_OFST         _UINT32_(0xA0)      /* (SPDIFTX_CH2S2) SPDIF Transmitter Channel Status 2 Register x Offset */
#define SPDIFTX_CH2S3_REG_OFST         _UINT32_(0xA4)      /* (SPDIFTX_CH2S3) SPDIF Transmitter Channel Status 2 Register x Offset */
#define SPDIFTX_CH2S4_REG_OFST         _UINT32_(0xA8)      /* (SPDIFTX_CH2S4) SPDIF Transmitter Channel Status 2 Register x Offset */
#define SPDIFTX_CH2S5_REG_OFST         _UINT32_(0xAC)      /* (SPDIFTX_CH2S5) SPDIF Transmitter Channel Status 2 Register x Offset */
#define SPDIFTX_FIR_REG_OFST           _UINT32_(0xB8)      /* (SPDIFTX_FIR) SPDIF Transmitter Fault Injection Register Offset */
#define SPDIFTX_WPMR_REG_OFST          _UINT32_(0xE0)      /* (SPDIFTX_WPMR) SPDIF Transmitter Write Protection Mode Register Offset */
#define SPDIFTX_WPSR_REG_OFST          _UINT32_(0xE4)      /* (SPDIFTX_WPSR) SPDIF Transmitter Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SPDIFTX register API structure */
typedef struct
{  /* Sony/Philips Digital Interface */
  __O   uint32_t                       SPDIFTX_CR;         /* Offset: 0x00 ( /W  32) SPDIF Transmitter Control Register */
  __IO  uint32_t                       SPDIFTX_MR;         /* Offset: 0x04 (R/W  32) SPDIF Transmitter Mode Register */
  __IO  uint32_t                       SPDIFTX_EMR;        /* Offset: 0x08 (R/W  32) SPDIF Transmitter Extended Mode Register */
  __O   uint32_t                       SPDIFTX_CDR;        /* Offset: 0x0C ( /W  32) SPDIF Transmitter Common Data Register */
  __I   uint32_t                       SPDIFTX_SR;         /* Offset: 0x10 (R/   32) SPDIF Transmitter Status Register */
  __O   uint32_t                       SPDIFTX_IER;        /* Offset: 0x14 ( /W  32) SPDIF Transmitter Interrupt Enable Register */
  __O   uint32_t                       SPDIFTX_IDR;        /* Offset: 0x18 ( /W  32) SPDIF Transmitter Interrupt Disable Register */
  __I   uint32_t                       SPDIFTX_IMR;        /* Offset: 0x1C (R/   32) SPDIF Transmitter Interrupt Mask Register */
  __I   uint32_t                       SPDIFTX_ISR;        /* Offset: 0x20 (R/   32) SPDIF Transmitter Interrupt Status Register */
  __I   uint32_t                       SPDIFTX_SFI;        /* Offset: 0x24 (R/   32) SPDIF Transmitter Subframe Index Register */
  __I   uint8_t                        Reserved1[0x28];
  __IO  uint32_t                       SPDIFTX_CH1UD[6];   /* Offset: 0x50 (R/W  32) SPDIF Transmitter User Data 1 Register x */
  __IO  uint32_t                       SPDIFTX_CH2UD[6];   /* Offset: 0x68 (R/W  32) SPDIF Transmitter User Data 2 Register x */
  __IO  uint32_t                       SPDIFTX_CH1S[6];    /* Offset: 0x80 (R/W  32) SPDIF Transmitter Channel Status 1 Register x */
  __IO  uint32_t                       SPDIFTX_CH2S[6];    /* Offset: 0x98 (R/W  32) SPDIF Transmitter Channel Status 2 Register x */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint32_t                       SPDIFTX_FIR;        /* Offset: 0xB8 (R/W  32) SPDIF Transmitter Fault Injection Register */
  __I   uint8_t                        Reserved3[0x24];
  __IO  uint32_t                       SPDIFTX_WPMR;       /* Offset: 0xE0 (R/W  32) SPDIF Transmitter Write Protection Mode Register */
  __I   uint32_t                       SPDIFTX_WPSR;       /* Offset: 0xE4 (R/   32) SPDIF Transmitter Write Protection Status Register */
} spdiftx_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D_SPDIFTX_COMPONENT_H_ */
