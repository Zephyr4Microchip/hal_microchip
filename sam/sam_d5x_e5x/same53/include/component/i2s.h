/*
 * Component description for I2S
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

/*  file generated from device description file (ATDF) version 2023-03-17T09:50:04Z  */
#ifndef _SAME53_I2S_COMPONENT_H_
#define _SAME53_I2S_COMPONENT_H_

#include "core_cm4.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR I2S                       */
/* ************************************************************************** */

/* -------- I2S_CTRLA : (I2S Offset: 0x00) (R/W 8) Control A -------- */
#define I2S_CTRLA_RESETVALUE                  _UINT8_(0x00)                                        /*  (I2S_CTRLA) Control A  Reset Value */

#define I2S_CTRLA_SWRST_Pos                   _UINT8_(0)                                           /* (I2S_CTRLA) Software Reset Position */
#define I2S_CTRLA_SWRST_Msk                   (_UINT8_(0x1) << I2S_CTRLA_SWRST_Pos)                /* (I2S_CTRLA) Software Reset Mask */
#define I2S_CTRLA_SWRST(value)                (I2S_CTRLA_SWRST_Msk & (_UINT8_(value) << I2S_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the I2S_CTRLA register */
#define I2S_CTRLA_ENABLE_Pos                  _UINT8_(1)                                           /* (I2S_CTRLA) Enable Position */
#define I2S_CTRLA_ENABLE_Msk                  (_UINT8_(0x1) << I2S_CTRLA_ENABLE_Pos)               /* (I2S_CTRLA) Enable Mask */
#define I2S_CTRLA_ENABLE(value)               (I2S_CTRLA_ENABLE_Msk & (_UINT8_(value) << I2S_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the I2S_CTRLA register */
#define I2S_CTRLA_CKEN0_Pos                   _UINT8_(2)                                           /* (I2S_CTRLA) Clock Unit 0 Enable Position */
#define I2S_CTRLA_CKEN0_Msk                   (_UINT8_(0x1) << I2S_CTRLA_CKEN0_Pos)                /* (I2S_CTRLA) Clock Unit 0 Enable Mask */
#define I2S_CTRLA_CKEN0(value)                (I2S_CTRLA_CKEN0_Msk & (_UINT8_(value) << I2S_CTRLA_CKEN0_Pos)) /* Assignment of value for CKEN0 in the I2S_CTRLA register */
#define I2S_CTRLA_CKEN1_Pos                   _UINT8_(3)                                           /* (I2S_CTRLA) Clock Unit 1 Enable Position */
#define I2S_CTRLA_CKEN1_Msk                   (_UINT8_(0x1) << I2S_CTRLA_CKEN1_Pos)                /* (I2S_CTRLA) Clock Unit 1 Enable Mask */
#define I2S_CTRLA_CKEN1(value)                (I2S_CTRLA_CKEN1_Msk & (_UINT8_(value) << I2S_CTRLA_CKEN1_Pos)) /* Assignment of value for CKEN1 in the I2S_CTRLA register */
#define I2S_CTRLA_TXEN_Pos                    _UINT8_(4)                                           /* (I2S_CTRLA) Tx Serializer Enable Position */
#define I2S_CTRLA_TXEN_Msk                    (_UINT8_(0x1) << I2S_CTRLA_TXEN_Pos)                 /* (I2S_CTRLA) Tx Serializer Enable Mask */
#define I2S_CTRLA_TXEN(value)                 (I2S_CTRLA_TXEN_Msk & (_UINT8_(value) << I2S_CTRLA_TXEN_Pos)) /* Assignment of value for TXEN in the I2S_CTRLA register */
#define I2S_CTRLA_RXEN_Pos                    _UINT8_(5)                                           /* (I2S_CTRLA) Rx Serializer Enable Position */
#define I2S_CTRLA_RXEN_Msk                    (_UINT8_(0x1) << I2S_CTRLA_RXEN_Pos)                 /* (I2S_CTRLA) Rx Serializer Enable Mask */
#define I2S_CTRLA_RXEN(value)                 (I2S_CTRLA_RXEN_Msk & (_UINT8_(value) << I2S_CTRLA_RXEN_Pos)) /* Assignment of value for RXEN in the I2S_CTRLA register */
#define I2S_CTRLA_Msk                         _UINT8_(0x3F)                                        /* (I2S_CTRLA) Register Mask  */

#define I2S_CTRLA_CKEN_Pos                    _UINT8_(2)                                           /* (I2S_CTRLA Position) Clock Unit x Enable */
#define I2S_CTRLA_CKEN_Msk                    (_UINT8_(0x3) << I2S_CTRLA_CKEN_Pos)                 /* (I2S_CTRLA Mask) CKEN */
#define I2S_CTRLA_CKEN(value)                 (I2S_CTRLA_CKEN_Msk & (_UINT8_(value) << I2S_CTRLA_CKEN_Pos)) 

/* -------- I2S_CLKCTRL : (I2S Offset: 0x04) (R/W 32) Clock Unit n Control -------- */
#define I2S_CLKCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (I2S_CLKCTRL) Clock Unit n Control  Reset Value */

#define I2S_CLKCTRL_SLOTSIZE_Pos              _UINT32_(0)                                          /* (I2S_CLKCTRL) Slot Size Position */
#define I2S_CLKCTRL_SLOTSIZE_Msk              (_UINT32_(0x3) << I2S_CLKCTRL_SLOTSIZE_Pos)          /* (I2S_CLKCTRL) Slot Size Mask */
#define I2S_CLKCTRL_SLOTSIZE(value)           (I2S_CLKCTRL_SLOTSIZE_Msk & (_UINT32_(value) << I2S_CLKCTRL_SLOTSIZE_Pos)) /* Assignment of value for SLOTSIZE in the I2S_CLKCTRL register */
#define   I2S_CLKCTRL_SLOTSIZE_8_Val          _UINT32_(0x0)                                        /* (I2S_CLKCTRL) 8-bit Slot for Clock Unit n  */
#define   I2S_CLKCTRL_SLOTSIZE_16_Val         _UINT32_(0x1)                                        /* (I2S_CLKCTRL) 16-bit Slot for Clock Unit n  */
#define   I2S_CLKCTRL_SLOTSIZE_24_Val         _UINT32_(0x2)                                        /* (I2S_CLKCTRL) 24-bit Slot for Clock Unit n  */
#define   I2S_CLKCTRL_SLOTSIZE_32_Val         _UINT32_(0x3)                                        /* (I2S_CLKCTRL) 32-bit Slot for Clock Unit n  */
#define I2S_CLKCTRL_SLOTSIZE_8                (I2S_CLKCTRL_SLOTSIZE_8_Val << I2S_CLKCTRL_SLOTSIZE_Pos) /* (I2S_CLKCTRL) 8-bit Slot for Clock Unit n Position */
#define I2S_CLKCTRL_SLOTSIZE_16               (I2S_CLKCTRL_SLOTSIZE_16_Val << I2S_CLKCTRL_SLOTSIZE_Pos) /* (I2S_CLKCTRL) 16-bit Slot for Clock Unit n Position */
#define I2S_CLKCTRL_SLOTSIZE_24               (I2S_CLKCTRL_SLOTSIZE_24_Val << I2S_CLKCTRL_SLOTSIZE_Pos) /* (I2S_CLKCTRL) 24-bit Slot for Clock Unit n Position */
#define I2S_CLKCTRL_SLOTSIZE_32               (I2S_CLKCTRL_SLOTSIZE_32_Val << I2S_CLKCTRL_SLOTSIZE_Pos) /* (I2S_CLKCTRL) 32-bit Slot for Clock Unit n Position */
#define I2S_CLKCTRL_NBSLOTS_Pos               _UINT32_(2)                                          /* (I2S_CLKCTRL) Number of Slots in Frame Position */
#define I2S_CLKCTRL_NBSLOTS_Msk               (_UINT32_(0x7) << I2S_CLKCTRL_NBSLOTS_Pos)           /* (I2S_CLKCTRL) Number of Slots in Frame Mask */
#define I2S_CLKCTRL_NBSLOTS(value)            (I2S_CLKCTRL_NBSLOTS_Msk & (_UINT32_(value) << I2S_CLKCTRL_NBSLOTS_Pos)) /* Assignment of value for NBSLOTS in the I2S_CLKCTRL register */
#define I2S_CLKCTRL_FSWIDTH_Pos               _UINT32_(5)                                          /* (I2S_CLKCTRL) Frame Sync Width Position */
#define I2S_CLKCTRL_FSWIDTH_Msk               (_UINT32_(0x3) << I2S_CLKCTRL_FSWIDTH_Pos)           /* (I2S_CLKCTRL) Frame Sync Width Mask */
#define I2S_CLKCTRL_FSWIDTH(value)            (I2S_CLKCTRL_FSWIDTH_Msk & (_UINT32_(value) << I2S_CLKCTRL_FSWIDTH_Pos)) /* Assignment of value for FSWIDTH in the I2S_CLKCTRL register */
#define   I2S_CLKCTRL_FSWIDTH_SLOT_Val        _UINT32_(0x0)                                        /* (I2S_CLKCTRL) Frame Sync Pulse is 1 Slot wide (default for I2S protocol)  */
#define   I2S_CLKCTRL_FSWIDTH_HALF_Val        _UINT32_(0x1)                                        /* (I2S_CLKCTRL) Frame Sync Pulse is half a Frame wide  */
#define   I2S_CLKCTRL_FSWIDTH_BIT_Val         _UINT32_(0x2)                                        /* (I2S_CLKCTRL) Frame Sync Pulse is 1 Bit wide  */
#define   I2S_CLKCTRL_FSWIDTH_BURST_Val       _UINT32_(0x3)                                        /* (I2S_CLKCTRL) Clock Unit n operates in Burst mode, with a 1-bit wide Frame Sync pulse per Data sample, only when Data transfer is requested  */
#define I2S_CLKCTRL_FSWIDTH_SLOT              (I2S_CLKCTRL_FSWIDTH_SLOT_Val << I2S_CLKCTRL_FSWIDTH_Pos) /* (I2S_CLKCTRL) Frame Sync Pulse is 1 Slot wide (default for I2S protocol) Position */
#define I2S_CLKCTRL_FSWIDTH_HALF              (I2S_CLKCTRL_FSWIDTH_HALF_Val << I2S_CLKCTRL_FSWIDTH_Pos) /* (I2S_CLKCTRL) Frame Sync Pulse is half a Frame wide Position */
#define I2S_CLKCTRL_FSWIDTH_BIT               (I2S_CLKCTRL_FSWIDTH_BIT_Val << I2S_CLKCTRL_FSWIDTH_Pos) /* (I2S_CLKCTRL) Frame Sync Pulse is 1 Bit wide Position */
#define I2S_CLKCTRL_FSWIDTH_BURST             (I2S_CLKCTRL_FSWIDTH_BURST_Val << I2S_CLKCTRL_FSWIDTH_Pos) /* (I2S_CLKCTRL) Clock Unit n operates in Burst mode, with a 1-bit wide Frame Sync pulse per Data sample, only when Data transfer is requested Position */
#define I2S_CLKCTRL_BITDELAY_Pos              _UINT32_(7)                                          /* (I2S_CLKCTRL) Data Delay from Frame Sync Position */
#define I2S_CLKCTRL_BITDELAY_Msk              (_UINT32_(0x1) << I2S_CLKCTRL_BITDELAY_Pos)          /* (I2S_CLKCTRL) Data Delay from Frame Sync Mask */
#define I2S_CLKCTRL_BITDELAY(value)           (I2S_CLKCTRL_BITDELAY_Msk & (_UINT32_(value) << I2S_CLKCTRL_BITDELAY_Pos)) /* Assignment of value for BITDELAY in the I2S_CLKCTRL register */
#define   I2S_CLKCTRL_BITDELAY_LJ_Val         _UINT32_(0x0)                                        /* (I2S_CLKCTRL) Left Justified (0 Bit Delay)  */
#define   I2S_CLKCTRL_BITDELAY_I2S_Val        _UINT32_(0x1)                                        /* (I2S_CLKCTRL) I2S (1 Bit Delay)  */
#define I2S_CLKCTRL_BITDELAY_LJ               (I2S_CLKCTRL_BITDELAY_LJ_Val << I2S_CLKCTRL_BITDELAY_Pos) /* (I2S_CLKCTRL) Left Justified (0 Bit Delay) Position */
#define I2S_CLKCTRL_BITDELAY_I2S              (I2S_CLKCTRL_BITDELAY_I2S_Val << I2S_CLKCTRL_BITDELAY_Pos) /* (I2S_CLKCTRL) I2S (1 Bit Delay) Position */
#define I2S_CLKCTRL_FSSEL_Pos                 _UINT32_(8)                                          /* (I2S_CLKCTRL) Frame Sync Select Position */
#define I2S_CLKCTRL_FSSEL_Msk                 (_UINT32_(0x1) << I2S_CLKCTRL_FSSEL_Pos)             /* (I2S_CLKCTRL) Frame Sync Select Mask */
#define I2S_CLKCTRL_FSSEL(value)              (I2S_CLKCTRL_FSSEL_Msk & (_UINT32_(value) << I2S_CLKCTRL_FSSEL_Pos)) /* Assignment of value for FSSEL in the I2S_CLKCTRL register */
#define   I2S_CLKCTRL_FSSEL_SCKDIV_Val        _UINT32_(0x0)                                        /* (I2S_CLKCTRL) Divided Serial Clock n is used as Frame Sync n source  */
#define   I2S_CLKCTRL_FSSEL_FSPIN_Val         _UINT32_(0x1)                                        /* (I2S_CLKCTRL) FSn input pin is used as Frame Sync n source  */
#define I2S_CLKCTRL_FSSEL_SCKDIV              (I2S_CLKCTRL_FSSEL_SCKDIV_Val << I2S_CLKCTRL_FSSEL_Pos) /* (I2S_CLKCTRL) Divided Serial Clock n is used as Frame Sync n source Position */
#define I2S_CLKCTRL_FSSEL_FSPIN               (I2S_CLKCTRL_FSSEL_FSPIN_Val << I2S_CLKCTRL_FSSEL_Pos) /* (I2S_CLKCTRL) FSn input pin is used as Frame Sync n source Position */
#define I2S_CLKCTRL_FSINV_Pos                 _UINT32_(9)                                          /* (I2S_CLKCTRL) Frame Sync Invert Position */
#define I2S_CLKCTRL_FSINV_Msk                 (_UINT32_(0x1) << I2S_CLKCTRL_FSINV_Pos)             /* (I2S_CLKCTRL) Frame Sync Invert Mask */
#define I2S_CLKCTRL_FSINV(value)              (I2S_CLKCTRL_FSINV_Msk & (_UINT32_(value) << I2S_CLKCTRL_FSINV_Pos)) /* Assignment of value for FSINV in the I2S_CLKCTRL register */
#define I2S_CLKCTRL_FSOUTINV_Pos              _UINT32_(10)                                         /* (I2S_CLKCTRL) Frame Sync Output Invert Position */
#define I2S_CLKCTRL_FSOUTINV_Msk              (_UINT32_(0x1) << I2S_CLKCTRL_FSOUTINV_Pos)          /* (I2S_CLKCTRL) Frame Sync Output Invert Mask */
#define I2S_CLKCTRL_FSOUTINV(value)           (I2S_CLKCTRL_FSOUTINV_Msk & (_UINT32_(value) << I2S_CLKCTRL_FSOUTINV_Pos)) /* Assignment of value for FSOUTINV in the I2S_CLKCTRL register */
#define I2S_CLKCTRL_SCKSEL_Pos                _UINT32_(11)                                         /* (I2S_CLKCTRL) Serial Clock Select Position */
#define I2S_CLKCTRL_SCKSEL_Msk                (_UINT32_(0x1) << I2S_CLKCTRL_SCKSEL_Pos)            /* (I2S_CLKCTRL) Serial Clock Select Mask */
#define I2S_CLKCTRL_SCKSEL(value)             (I2S_CLKCTRL_SCKSEL_Msk & (_UINT32_(value) << I2S_CLKCTRL_SCKSEL_Pos)) /* Assignment of value for SCKSEL in the I2S_CLKCTRL register */
#define   I2S_CLKCTRL_SCKSEL_MCKDIV_Val       _UINT32_(0x0)                                        /* (I2S_CLKCTRL) Divided Master Clock n is used as Serial Clock n source  */
#define   I2S_CLKCTRL_SCKSEL_SCKPIN_Val       _UINT32_(0x1)                                        /* (I2S_CLKCTRL) SCKn input pin is used as Serial Clock n source  */
#define I2S_CLKCTRL_SCKSEL_MCKDIV             (I2S_CLKCTRL_SCKSEL_MCKDIV_Val << I2S_CLKCTRL_SCKSEL_Pos) /* (I2S_CLKCTRL) Divided Master Clock n is used as Serial Clock n source Position */
#define I2S_CLKCTRL_SCKSEL_SCKPIN             (I2S_CLKCTRL_SCKSEL_SCKPIN_Val << I2S_CLKCTRL_SCKSEL_Pos) /* (I2S_CLKCTRL) SCKn input pin is used as Serial Clock n source Position */
#define I2S_CLKCTRL_SCKOUTINV_Pos             _UINT32_(12)                                         /* (I2S_CLKCTRL) Serial Clock Output Invert Position */
#define I2S_CLKCTRL_SCKOUTINV_Msk             (_UINT32_(0x1) << I2S_CLKCTRL_SCKOUTINV_Pos)         /* (I2S_CLKCTRL) Serial Clock Output Invert Mask */
#define I2S_CLKCTRL_SCKOUTINV(value)          (I2S_CLKCTRL_SCKOUTINV_Msk & (_UINT32_(value) << I2S_CLKCTRL_SCKOUTINV_Pos)) /* Assignment of value for SCKOUTINV in the I2S_CLKCTRL register */
#define I2S_CLKCTRL_MCKSEL_Pos                _UINT32_(13)                                         /* (I2S_CLKCTRL) Master Clock Select Position */
#define I2S_CLKCTRL_MCKSEL_Msk                (_UINT32_(0x1) << I2S_CLKCTRL_MCKSEL_Pos)            /* (I2S_CLKCTRL) Master Clock Select Mask */
#define I2S_CLKCTRL_MCKSEL(value)             (I2S_CLKCTRL_MCKSEL_Msk & (_UINT32_(value) << I2S_CLKCTRL_MCKSEL_Pos)) /* Assignment of value for MCKSEL in the I2S_CLKCTRL register */
#define   I2S_CLKCTRL_MCKSEL_GCLK_Val         _UINT32_(0x0)                                        /* (I2S_CLKCTRL) GCLK_I2S_n is used as Master Clock n source  */
#define   I2S_CLKCTRL_MCKSEL_MCKPIN_Val       _UINT32_(0x1)                                        /* (I2S_CLKCTRL) MCKn input pin is used as Master Clock n source  */
#define I2S_CLKCTRL_MCKSEL_GCLK               (I2S_CLKCTRL_MCKSEL_GCLK_Val << I2S_CLKCTRL_MCKSEL_Pos) /* (I2S_CLKCTRL) GCLK_I2S_n is used as Master Clock n source Position */
#define I2S_CLKCTRL_MCKSEL_MCKPIN             (I2S_CLKCTRL_MCKSEL_MCKPIN_Val << I2S_CLKCTRL_MCKSEL_Pos) /* (I2S_CLKCTRL) MCKn input pin is used as Master Clock n source Position */
#define I2S_CLKCTRL_MCKEN_Pos                 _UINT32_(14)                                         /* (I2S_CLKCTRL) Master Clock Enable Position */
#define I2S_CLKCTRL_MCKEN_Msk                 (_UINT32_(0x1) << I2S_CLKCTRL_MCKEN_Pos)             /* (I2S_CLKCTRL) Master Clock Enable Mask */
#define I2S_CLKCTRL_MCKEN(value)              (I2S_CLKCTRL_MCKEN_Msk & (_UINT32_(value) << I2S_CLKCTRL_MCKEN_Pos)) /* Assignment of value for MCKEN in the I2S_CLKCTRL register */
#define I2S_CLKCTRL_MCKOUTINV_Pos             _UINT32_(15)                                         /* (I2S_CLKCTRL) Master Clock Output Invert Position */
#define I2S_CLKCTRL_MCKOUTINV_Msk             (_UINT32_(0x1) << I2S_CLKCTRL_MCKOUTINV_Pos)         /* (I2S_CLKCTRL) Master Clock Output Invert Mask */
#define I2S_CLKCTRL_MCKOUTINV(value)          (I2S_CLKCTRL_MCKOUTINV_Msk & (_UINT32_(value) << I2S_CLKCTRL_MCKOUTINV_Pos)) /* Assignment of value for MCKOUTINV in the I2S_CLKCTRL register */
#define I2S_CLKCTRL_MCKDIV_Pos                _UINT32_(16)                                         /* (I2S_CLKCTRL) Master Clock Division Factor Position */
#define I2S_CLKCTRL_MCKDIV_Msk                (_UINT32_(0x3F) << I2S_CLKCTRL_MCKDIV_Pos)           /* (I2S_CLKCTRL) Master Clock Division Factor Mask */
#define I2S_CLKCTRL_MCKDIV(value)             (I2S_CLKCTRL_MCKDIV_Msk & (_UINT32_(value) << I2S_CLKCTRL_MCKDIV_Pos)) /* Assignment of value for MCKDIV in the I2S_CLKCTRL register */
#define I2S_CLKCTRL_MCKOUTDIV_Pos             _UINT32_(24)                                         /* (I2S_CLKCTRL) Master Clock Output Division Factor Position */
#define I2S_CLKCTRL_MCKOUTDIV_Msk             (_UINT32_(0x3F) << I2S_CLKCTRL_MCKOUTDIV_Pos)        /* (I2S_CLKCTRL) Master Clock Output Division Factor Mask */
#define I2S_CLKCTRL_MCKOUTDIV(value)          (I2S_CLKCTRL_MCKOUTDIV_Msk & (_UINT32_(value) << I2S_CLKCTRL_MCKOUTDIV_Pos)) /* Assignment of value for MCKOUTDIV in the I2S_CLKCTRL register */
#define I2S_CLKCTRL_Msk                       _UINT32_(0x3F3FFFFF)                                 /* (I2S_CLKCTRL) Register Mask  */


/* -------- I2S_INTENCLR : (I2S Offset: 0x0C) (R/W 16) Interrupt Enable Clear -------- */
#define I2S_INTENCLR_RESETVALUE               _UINT16_(0x00)                                       /*  (I2S_INTENCLR) Interrupt Enable Clear  Reset Value */

#define I2S_INTENCLR_RXRDY0_Pos               _UINT16_(0)                                          /* (I2S_INTENCLR) Receive Ready 0 Interrupt Enable Position */
#define I2S_INTENCLR_RXRDY0_Msk               (_UINT16_(0x1) << I2S_INTENCLR_RXRDY0_Pos)           /* (I2S_INTENCLR) Receive Ready 0 Interrupt Enable Mask */
#define I2S_INTENCLR_RXRDY0(value)            (I2S_INTENCLR_RXRDY0_Msk & (_UINT16_(value) << I2S_INTENCLR_RXRDY0_Pos)) /* Assignment of value for RXRDY0 in the I2S_INTENCLR register */
#define I2S_INTENCLR_RXRDY1_Pos               _UINT16_(1)                                          /* (I2S_INTENCLR) Receive Ready 1 Interrupt Enable Position */
#define I2S_INTENCLR_RXRDY1_Msk               (_UINT16_(0x1) << I2S_INTENCLR_RXRDY1_Pos)           /* (I2S_INTENCLR) Receive Ready 1 Interrupt Enable Mask */
#define I2S_INTENCLR_RXRDY1(value)            (I2S_INTENCLR_RXRDY1_Msk & (_UINT16_(value) << I2S_INTENCLR_RXRDY1_Pos)) /* Assignment of value for RXRDY1 in the I2S_INTENCLR register */
#define I2S_INTENCLR_RXOR0_Pos                _UINT16_(4)                                          /* (I2S_INTENCLR) Receive Overrun 0 Interrupt Enable Position */
#define I2S_INTENCLR_RXOR0_Msk                (_UINT16_(0x1) << I2S_INTENCLR_RXOR0_Pos)            /* (I2S_INTENCLR) Receive Overrun 0 Interrupt Enable Mask */
#define I2S_INTENCLR_RXOR0(value)             (I2S_INTENCLR_RXOR0_Msk & (_UINT16_(value) << I2S_INTENCLR_RXOR0_Pos)) /* Assignment of value for RXOR0 in the I2S_INTENCLR register */
#define I2S_INTENCLR_RXOR1_Pos                _UINT16_(5)                                          /* (I2S_INTENCLR) Receive Overrun 1 Interrupt Enable Position */
#define I2S_INTENCLR_RXOR1_Msk                (_UINT16_(0x1) << I2S_INTENCLR_RXOR1_Pos)            /* (I2S_INTENCLR) Receive Overrun 1 Interrupt Enable Mask */
#define I2S_INTENCLR_RXOR1(value)             (I2S_INTENCLR_RXOR1_Msk & (_UINT16_(value) << I2S_INTENCLR_RXOR1_Pos)) /* Assignment of value for RXOR1 in the I2S_INTENCLR register */
#define I2S_INTENCLR_TXRDY0_Pos               _UINT16_(8)                                          /* (I2S_INTENCLR) Transmit Ready 0 Interrupt Enable Position */
#define I2S_INTENCLR_TXRDY0_Msk               (_UINT16_(0x1) << I2S_INTENCLR_TXRDY0_Pos)           /* (I2S_INTENCLR) Transmit Ready 0 Interrupt Enable Mask */
#define I2S_INTENCLR_TXRDY0(value)            (I2S_INTENCLR_TXRDY0_Msk & (_UINT16_(value) << I2S_INTENCLR_TXRDY0_Pos)) /* Assignment of value for TXRDY0 in the I2S_INTENCLR register */
#define I2S_INTENCLR_TXRDY1_Pos               _UINT16_(9)                                          /* (I2S_INTENCLR) Transmit Ready 1 Interrupt Enable Position */
#define I2S_INTENCLR_TXRDY1_Msk               (_UINT16_(0x1) << I2S_INTENCLR_TXRDY1_Pos)           /* (I2S_INTENCLR) Transmit Ready 1 Interrupt Enable Mask */
#define I2S_INTENCLR_TXRDY1(value)            (I2S_INTENCLR_TXRDY1_Msk & (_UINT16_(value) << I2S_INTENCLR_TXRDY1_Pos)) /* Assignment of value for TXRDY1 in the I2S_INTENCLR register */
#define I2S_INTENCLR_TXUR0_Pos                _UINT16_(12)                                         /* (I2S_INTENCLR) Transmit Underrun 0 Interrupt Enable Position */
#define I2S_INTENCLR_TXUR0_Msk                (_UINT16_(0x1) << I2S_INTENCLR_TXUR0_Pos)            /* (I2S_INTENCLR) Transmit Underrun 0 Interrupt Enable Mask */
#define I2S_INTENCLR_TXUR0(value)             (I2S_INTENCLR_TXUR0_Msk & (_UINT16_(value) << I2S_INTENCLR_TXUR0_Pos)) /* Assignment of value for TXUR0 in the I2S_INTENCLR register */
#define I2S_INTENCLR_TXUR1_Pos                _UINT16_(13)                                         /* (I2S_INTENCLR) Transmit Underrun 1 Interrupt Enable Position */
#define I2S_INTENCLR_TXUR1_Msk                (_UINT16_(0x1) << I2S_INTENCLR_TXUR1_Pos)            /* (I2S_INTENCLR) Transmit Underrun 1 Interrupt Enable Mask */
#define I2S_INTENCLR_TXUR1(value)             (I2S_INTENCLR_TXUR1_Msk & (_UINT16_(value) << I2S_INTENCLR_TXUR1_Pos)) /* Assignment of value for TXUR1 in the I2S_INTENCLR register */
#define I2S_INTENCLR_Msk                      _UINT16_(0x3333)                                     /* (I2S_INTENCLR) Register Mask  */

#define I2S_INTENCLR_RXRDY_Pos                _UINT16_(0)                                          /* (I2S_INTENCLR Position) Receive Ready x Interrupt Enable */
#define I2S_INTENCLR_RXRDY_Msk                (_UINT16_(0x3) << I2S_INTENCLR_RXRDY_Pos)            /* (I2S_INTENCLR Mask) RXRDY */
#define I2S_INTENCLR_RXRDY(value)             (I2S_INTENCLR_RXRDY_Msk & (_UINT16_(value) << I2S_INTENCLR_RXRDY_Pos)) 
#define I2S_INTENCLR_RXOR_Pos                 _UINT16_(4)                                          /* (I2S_INTENCLR Position) Receive Overrun x Interrupt Enable */
#define I2S_INTENCLR_RXOR_Msk                 (_UINT16_(0x3) << I2S_INTENCLR_RXOR_Pos)             /* (I2S_INTENCLR Mask) RXOR */
#define I2S_INTENCLR_RXOR(value)              (I2S_INTENCLR_RXOR_Msk & (_UINT16_(value) << I2S_INTENCLR_RXOR_Pos)) 
#define I2S_INTENCLR_TXRDY_Pos                _UINT16_(8)                                          /* (I2S_INTENCLR Position) Transmit Ready x Interrupt Enable */
#define I2S_INTENCLR_TXRDY_Msk                (_UINT16_(0x3) << I2S_INTENCLR_TXRDY_Pos)            /* (I2S_INTENCLR Mask) TXRDY */
#define I2S_INTENCLR_TXRDY(value)             (I2S_INTENCLR_TXRDY_Msk & (_UINT16_(value) << I2S_INTENCLR_TXRDY_Pos)) 
#define I2S_INTENCLR_TXUR_Pos                 _UINT16_(12)                                         /* (I2S_INTENCLR Position) Transmit Underrun x Interrupt Enable */
#define I2S_INTENCLR_TXUR_Msk                 (_UINT16_(0x3) << I2S_INTENCLR_TXUR_Pos)             /* (I2S_INTENCLR Mask) TXUR */
#define I2S_INTENCLR_TXUR(value)              (I2S_INTENCLR_TXUR_Msk & (_UINT16_(value) << I2S_INTENCLR_TXUR_Pos)) 

/* -------- I2S_INTENSET : (I2S Offset: 0x10) (R/W 16) Interrupt Enable Set -------- */
#define I2S_INTENSET_RESETVALUE               _UINT16_(0x00)                                       /*  (I2S_INTENSET) Interrupt Enable Set  Reset Value */

#define I2S_INTENSET_RXRDY0_Pos               _UINT16_(0)                                          /* (I2S_INTENSET) Receive Ready 0 Interrupt Enable Position */
#define I2S_INTENSET_RXRDY0_Msk               (_UINT16_(0x1) << I2S_INTENSET_RXRDY0_Pos)           /* (I2S_INTENSET) Receive Ready 0 Interrupt Enable Mask */
#define I2S_INTENSET_RXRDY0(value)            (I2S_INTENSET_RXRDY0_Msk & (_UINT16_(value) << I2S_INTENSET_RXRDY0_Pos)) /* Assignment of value for RXRDY0 in the I2S_INTENSET register */
#define I2S_INTENSET_RXRDY1_Pos               _UINT16_(1)                                          /* (I2S_INTENSET) Receive Ready 1 Interrupt Enable Position */
#define I2S_INTENSET_RXRDY1_Msk               (_UINT16_(0x1) << I2S_INTENSET_RXRDY1_Pos)           /* (I2S_INTENSET) Receive Ready 1 Interrupt Enable Mask */
#define I2S_INTENSET_RXRDY1(value)            (I2S_INTENSET_RXRDY1_Msk & (_UINT16_(value) << I2S_INTENSET_RXRDY1_Pos)) /* Assignment of value for RXRDY1 in the I2S_INTENSET register */
#define I2S_INTENSET_RXOR0_Pos                _UINT16_(4)                                          /* (I2S_INTENSET) Receive Overrun 0 Interrupt Enable Position */
#define I2S_INTENSET_RXOR0_Msk                (_UINT16_(0x1) << I2S_INTENSET_RXOR0_Pos)            /* (I2S_INTENSET) Receive Overrun 0 Interrupt Enable Mask */
#define I2S_INTENSET_RXOR0(value)             (I2S_INTENSET_RXOR0_Msk & (_UINT16_(value) << I2S_INTENSET_RXOR0_Pos)) /* Assignment of value for RXOR0 in the I2S_INTENSET register */
#define I2S_INTENSET_RXOR1_Pos                _UINT16_(5)                                          /* (I2S_INTENSET) Receive Overrun 1 Interrupt Enable Position */
#define I2S_INTENSET_RXOR1_Msk                (_UINT16_(0x1) << I2S_INTENSET_RXOR1_Pos)            /* (I2S_INTENSET) Receive Overrun 1 Interrupt Enable Mask */
#define I2S_INTENSET_RXOR1(value)             (I2S_INTENSET_RXOR1_Msk & (_UINT16_(value) << I2S_INTENSET_RXOR1_Pos)) /* Assignment of value for RXOR1 in the I2S_INTENSET register */
#define I2S_INTENSET_TXRDY0_Pos               _UINT16_(8)                                          /* (I2S_INTENSET) Transmit Ready 0 Interrupt Enable Position */
#define I2S_INTENSET_TXRDY0_Msk               (_UINT16_(0x1) << I2S_INTENSET_TXRDY0_Pos)           /* (I2S_INTENSET) Transmit Ready 0 Interrupt Enable Mask */
#define I2S_INTENSET_TXRDY0(value)            (I2S_INTENSET_TXRDY0_Msk & (_UINT16_(value) << I2S_INTENSET_TXRDY0_Pos)) /* Assignment of value for TXRDY0 in the I2S_INTENSET register */
#define I2S_INTENSET_TXRDY1_Pos               _UINT16_(9)                                          /* (I2S_INTENSET) Transmit Ready 1 Interrupt Enable Position */
#define I2S_INTENSET_TXRDY1_Msk               (_UINT16_(0x1) << I2S_INTENSET_TXRDY1_Pos)           /* (I2S_INTENSET) Transmit Ready 1 Interrupt Enable Mask */
#define I2S_INTENSET_TXRDY1(value)            (I2S_INTENSET_TXRDY1_Msk & (_UINT16_(value) << I2S_INTENSET_TXRDY1_Pos)) /* Assignment of value for TXRDY1 in the I2S_INTENSET register */
#define I2S_INTENSET_TXUR0_Pos                _UINT16_(12)                                         /* (I2S_INTENSET) Transmit Underrun 0 Interrupt Enable Position */
#define I2S_INTENSET_TXUR0_Msk                (_UINT16_(0x1) << I2S_INTENSET_TXUR0_Pos)            /* (I2S_INTENSET) Transmit Underrun 0 Interrupt Enable Mask */
#define I2S_INTENSET_TXUR0(value)             (I2S_INTENSET_TXUR0_Msk & (_UINT16_(value) << I2S_INTENSET_TXUR0_Pos)) /* Assignment of value for TXUR0 in the I2S_INTENSET register */
#define I2S_INTENSET_TXUR1_Pos                _UINT16_(13)                                         /* (I2S_INTENSET) Transmit Underrun 1 Interrupt Enable Position */
#define I2S_INTENSET_TXUR1_Msk                (_UINT16_(0x1) << I2S_INTENSET_TXUR1_Pos)            /* (I2S_INTENSET) Transmit Underrun 1 Interrupt Enable Mask */
#define I2S_INTENSET_TXUR1(value)             (I2S_INTENSET_TXUR1_Msk & (_UINT16_(value) << I2S_INTENSET_TXUR1_Pos)) /* Assignment of value for TXUR1 in the I2S_INTENSET register */
#define I2S_INTENSET_Msk                      _UINT16_(0x3333)                                     /* (I2S_INTENSET) Register Mask  */

#define I2S_INTENSET_RXRDY_Pos                _UINT16_(0)                                          /* (I2S_INTENSET Position) Receive Ready x Interrupt Enable */
#define I2S_INTENSET_RXRDY_Msk                (_UINT16_(0x3) << I2S_INTENSET_RXRDY_Pos)            /* (I2S_INTENSET Mask) RXRDY */
#define I2S_INTENSET_RXRDY(value)             (I2S_INTENSET_RXRDY_Msk & (_UINT16_(value) << I2S_INTENSET_RXRDY_Pos)) 
#define I2S_INTENSET_RXOR_Pos                 _UINT16_(4)                                          /* (I2S_INTENSET Position) Receive Overrun x Interrupt Enable */
#define I2S_INTENSET_RXOR_Msk                 (_UINT16_(0x3) << I2S_INTENSET_RXOR_Pos)             /* (I2S_INTENSET Mask) RXOR */
#define I2S_INTENSET_RXOR(value)              (I2S_INTENSET_RXOR_Msk & (_UINT16_(value) << I2S_INTENSET_RXOR_Pos)) 
#define I2S_INTENSET_TXRDY_Pos                _UINT16_(8)                                          /* (I2S_INTENSET Position) Transmit Ready x Interrupt Enable */
#define I2S_INTENSET_TXRDY_Msk                (_UINT16_(0x3) << I2S_INTENSET_TXRDY_Pos)            /* (I2S_INTENSET Mask) TXRDY */
#define I2S_INTENSET_TXRDY(value)             (I2S_INTENSET_TXRDY_Msk & (_UINT16_(value) << I2S_INTENSET_TXRDY_Pos)) 
#define I2S_INTENSET_TXUR_Pos                 _UINT16_(12)                                         /* (I2S_INTENSET Position) Transmit Underrun x Interrupt Enable */
#define I2S_INTENSET_TXUR_Msk                 (_UINT16_(0x3) << I2S_INTENSET_TXUR_Pos)             /* (I2S_INTENSET Mask) TXUR */
#define I2S_INTENSET_TXUR(value)              (I2S_INTENSET_TXUR_Msk & (_UINT16_(value) << I2S_INTENSET_TXUR_Pos)) 

/* -------- I2S_INTFLAG : (I2S Offset: 0x14) (R/W 16) Interrupt Flag Status and Clear -------- */
#define I2S_INTFLAG_RESETVALUE                _UINT16_(0x00)                                       /*  (I2S_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define I2S_INTFLAG_RXRDY0_Pos                _UINT16_(0)                                          /* (I2S_INTFLAG) Receive Ready 0 Position */
#define I2S_INTFLAG_RXRDY0_Msk                (_UINT16_(0x1) << I2S_INTFLAG_RXRDY0_Pos)            /* (I2S_INTFLAG) Receive Ready 0 Mask */
#define I2S_INTFLAG_RXRDY0(value)             (I2S_INTFLAG_RXRDY0_Msk & (_UINT16_(value) << I2S_INTFLAG_RXRDY0_Pos)) /* Assignment of value for RXRDY0 in the I2S_INTFLAG register */
#define I2S_INTFLAG_RXRDY1_Pos                _UINT16_(1)                                          /* (I2S_INTFLAG) Receive Ready 1 Position */
#define I2S_INTFLAG_RXRDY1_Msk                (_UINT16_(0x1) << I2S_INTFLAG_RXRDY1_Pos)            /* (I2S_INTFLAG) Receive Ready 1 Mask */
#define I2S_INTFLAG_RXRDY1(value)             (I2S_INTFLAG_RXRDY1_Msk & (_UINT16_(value) << I2S_INTFLAG_RXRDY1_Pos)) /* Assignment of value for RXRDY1 in the I2S_INTFLAG register */
#define I2S_INTFLAG_RXOR0_Pos                 _UINT16_(4)                                          /* (I2S_INTFLAG) Receive Overrun 0 Position */
#define I2S_INTFLAG_RXOR0_Msk                 (_UINT16_(0x1) << I2S_INTFLAG_RXOR0_Pos)             /* (I2S_INTFLAG) Receive Overrun 0 Mask */
#define I2S_INTFLAG_RXOR0(value)              (I2S_INTFLAG_RXOR0_Msk & (_UINT16_(value) << I2S_INTFLAG_RXOR0_Pos)) /* Assignment of value for RXOR0 in the I2S_INTFLAG register */
#define I2S_INTFLAG_RXOR1_Pos                 _UINT16_(5)                                          /* (I2S_INTFLAG) Receive Overrun 1 Position */
#define I2S_INTFLAG_RXOR1_Msk                 (_UINT16_(0x1) << I2S_INTFLAG_RXOR1_Pos)             /* (I2S_INTFLAG) Receive Overrun 1 Mask */
#define I2S_INTFLAG_RXOR1(value)              (I2S_INTFLAG_RXOR1_Msk & (_UINT16_(value) << I2S_INTFLAG_RXOR1_Pos)) /* Assignment of value for RXOR1 in the I2S_INTFLAG register */
#define I2S_INTFLAG_TXRDY0_Pos                _UINT16_(8)                                          /* (I2S_INTFLAG) Transmit Ready 0 Position */
#define I2S_INTFLAG_TXRDY0_Msk                (_UINT16_(0x1) << I2S_INTFLAG_TXRDY0_Pos)            /* (I2S_INTFLAG) Transmit Ready 0 Mask */
#define I2S_INTFLAG_TXRDY0(value)             (I2S_INTFLAG_TXRDY0_Msk & (_UINT16_(value) << I2S_INTFLAG_TXRDY0_Pos)) /* Assignment of value for TXRDY0 in the I2S_INTFLAG register */
#define I2S_INTFLAG_TXRDY1_Pos                _UINT16_(9)                                          /* (I2S_INTFLAG) Transmit Ready 1 Position */
#define I2S_INTFLAG_TXRDY1_Msk                (_UINT16_(0x1) << I2S_INTFLAG_TXRDY1_Pos)            /* (I2S_INTFLAG) Transmit Ready 1 Mask */
#define I2S_INTFLAG_TXRDY1(value)             (I2S_INTFLAG_TXRDY1_Msk & (_UINT16_(value) << I2S_INTFLAG_TXRDY1_Pos)) /* Assignment of value for TXRDY1 in the I2S_INTFLAG register */
#define I2S_INTFLAG_TXUR0_Pos                 _UINT16_(12)                                         /* (I2S_INTFLAG) Transmit Underrun 0 Position */
#define I2S_INTFLAG_TXUR0_Msk                 (_UINT16_(0x1) << I2S_INTFLAG_TXUR0_Pos)             /* (I2S_INTFLAG) Transmit Underrun 0 Mask */
#define I2S_INTFLAG_TXUR0(value)              (I2S_INTFLAG_TXUR0_Msk & (_UINT16_(value) << I2S_INTFLAG_TXUR0_Pos)) /* Assignment of value for TXUR0 in the I2S_INTFLAG register */
#define I2S_INTFLAG_TXUR1_Pos                 _UINT16_(13)                                         /* (I2S_INTFLAG) Transmit Underrun 1 Position */
#define I2S_INTFLAG_TXUR1_Msk                 (_UINT16_(0x1) << I2S_INTFLAG_TXUR1_Pos)             /* (I2S_INTFLAG) Transmit Underrun 1 Mask */
#define I2S_INTFLAG_TXUR1(value)              (I2S_INTFLAG_TXUR1_Msk & (_UINT16_(value) << I2S_INTFLAG_TXUR1_Pos)) /* Assignment of value for TXUR1 in the I2S_INTFLAG register */
#define I2S_INTFLAG_Msk                       _UINT16_(0x3333)                                     /* (I2S_INTFLAG) Register Mask  */

#define I2S_INTFLAG_RXRDY_Pos                 _UINT16_(0)                                          /* (I2S_INTFLAG Position) Receive Ready x */
#define I2S_INTFLAG_RXRDY_Msk                 (_UINT16_(0x3) << I2S_INTFLAG_RXRDY_Pos)             /* (I2S_INTFLAG Mask) RXRDY */
#define I2S_INTFLAG_RXRDY(value)              (I2S_INTFLAG_RXRDY_Msk & (_UINT16_(value) << I2S_INTFLAG_RXRDY_Pos)) 
#define I2S_INTFLAG_RXOR_Pos                  _UINT16_(4)                                          /* (I2S_INTFLAG Position) Receive Overrun x */
#define I2S_INTFLAG_RXOR_Msk                  (_UINT16_(0x3) << I2S_INTFLAG_RXOR_Pos)              /* (I2S_INTFLAG Mask) RXOR */
#define I2S_INTFLAG_RXOR(value)               (I2S_INTFLAG_RXOR_Msk & (_UINT16_(value) << I2S_INTFLAG_RXOR_Pos)) 
#define I2S_INTFLAG_TXRDY_Pos                 _UINT16_(8)                                          /* (I2S_INTFLAG Position) Transmit Ready x */
#define I2S_INTFLAG_TXRDY_Msk                 (_UINT16_(0x3) << I2S_INTFLAG_TXRDY_Pos)             /* (I2S_INTFLAG Mask) TXRDY */
#define I2S_INTFLAG_TXRDY(value)              (I2S_INTFLAG_TXRDY_Msk & (_UINT16_(value) << I2S_INTFLAG_TXRDY_Pos)) 
#define I2S_INTFLAG_TXUR_Pos                  _UINT16_(12)                                         /* (I2S_INTFLAG Position) Transmit Underrun x */
#define I2S_INTFLAG_TXUR_Msk                  (_UINT16_(0x3) << I2S_INTFLAG_TXUR_Pos)              /* (I2S_INTFLAG Mask) TXUR */
#define I2S_INTFLAG_TXUR(value)               (I2S_INTFLAG_TXUR_Msk & (_UINT16_(value) << I2S_INTFLAG_TXUR_Pos)) 

/* -------- I2S_SYNCBUSY : (I2S Offset: 0x18) ( R/ 16) Synchronization Status -------- */
#define I2S_SYNCBUSY_RESETVALUE               _UINT16_(0x00)                                       /*  (I2S_SYNCBUSY) Synchronization Status  Reset Value */

#define I2S_SYNCBUSY_SWRST_Pos                _UINT16_(0)                                          /* (I2S_SYNCBUSY) Software Reset Synchronization Status Position */
#define I2S_SYNCBUSY_SWRST_Msk                (_UINT16_(0x1) << I2S_SYNCBUSY_SWRST_Pos)            /* (I2S_SYNCBUSY) Software Reset Synchronization Status Mask */
#define I2S_SYNCBUSY_SWRST(value)             (I2S_SYNCBUSY_SWRST_Msk & (_UINT16_(value) << I2S_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the I2S_SYNCBUSY register */
#define I2S_SYNCBUSY_ENABLE_Pos               _UINT16_(1)                                          /* (I2S_SYNCBUSY) Enable Synchronization Status Position */
#define I2S_SYNCBUSY_ENABLE_Msk               (_UINT16_(0x1) << I2S_SYNCBUSY_ENABLE_Pos)           /* (I2S_SYNCBUSY) Enable Synchronization Status Mask */
#define I2S_SYNCBUSY_ENABLE(value)            (I2S_SYNCBUSY_ENABLE_Msk & (_UINT16_(value) << I2S_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the I2S_SYNCBUSY register */
#define I2S_SYNCBUSY_CKEN0_Pos                _UINT16_(2)                                          /* (I2S_SYNCBUSY) Clock Unit 0 Enable Synchronization Status Position */
#define I2S_SYNCBUSY_CKEN0_Msk                (_UINT16_(0x1) << I2S_SYNCBUSY_CKEN0_Pos)            /* (I2S_SYNCBUSY) Clock Unit 0 Enable Synchronization Status Mask */
#define I2S_SYNCBUSY_CKEN0(value)             (I2S_SYNCBUSY_CKEN0_Msk & (_UINT16_(value) << I2S_SYNCBUSY_CKEN0_Pos)) /* Assignment of value for CKEN0 in the I2S_SYNCBUSY register */
#define I2S_SYNCBUSY_CKEN1_Pos                _UINT16_(3)                                          /* (I2S_SYNCBUSY) Clock Unit 1 Enable Synchronization Status Position */
#define I2S_SYNCBUSY_CKEN1_Msk                (_UINT16_(0x1) << I2S_SYNCBUSY_CKEN1_Pos)            /* (I2S_SYNCBUSY) Clock Unit 1 Enable Synchronization Status Mask */
#define I2S_SYNCBUSY_CKEN1(value)             (I2S_SYNCBUSY_CKEN1_Msk & (_UINT16_(value) << I2S_SYNCBUSY_CKEN1_Pos)) /* Assignment of value for CKEN1 in the I2S_SYNCBUSY register */
#define I2S_SYNCBUSY_TXEN_Pos                 _UINT16_(4)                                          /* (I2S_SYNCBUSY) Tx Serializer Enable Synchronization Status Position */
#define I2S_SYNCBUSY_TXEN_Msk                 (_UINT16_(0x1) << I2S_SYNCBUSY_TXEN_Pos)             /* (I2S_SYNCBUSY) Tx Serializer Enable Synchronization Status Mask */
#define I2S_SYNCBUSY_TXEN(value)              (I2S_SYNCBUSY_TXEN_Msk & (_UINT16_(value) << I2S_SYNCBUSY_TXEN_Pos)) /* Assignment of value for TXEN in the I2S_SYNCBUSY register */
#define I2S_SYNCBUSY_RXEN_Pos                 _UINT16_(5)                                          /* (I2S_SYNCBUSY) Rx Serializer Enable Synchronization Status Position */
#define I2S_SYNCBUSY_RXEN_Msk                 (_UINT16_(0x1) << I2S_SYNCBUSY_RXEN_Pos)             /* (I2S_SYNCBUSY) Rx Serializer Enable Synchronization Status Mask */
#define I2S_SYNCBUSY_RXEN(value)              (I2S_SYNCBUSY_RXEN_Msk & (_UINT16_(value) << I2S_SYNCBUSY_RXEN_Pos)) /* Assignment of value for RXEN in the I2S_SYNCBUSY register */
#define I2S_SYNCBUSY_TXDATA_Pos               _UINT16_(8)                                          /* (I2S_SYNCBUSY) Tx Data Synchronization Status Position */
#define I2S_SYNCBUSY_TXDATA_Msk               (_UINT16_(0x1) << I2S_SYNCBUSY_TXDATA_Pos)           /* (I2S_SYNCBUSY) Tx Data Synchronization Status Mask */
#define I2S_SYNCBUSY_TXDATA(value)            (I2S_SYNCBUSY_TXDATA_Msk & (_UINT16_(value) << I2S_SYNCBUSY_TXDATA_Pos)) /* Assignment of value for TXDATA in the I2S_SYNCBUSY register */
#define I2S_SYNCBUSY_RXDATA_Pos               _UINT16_(9)                                          /* (I2S_SYNCBUSY) Rx Data Synchronization Status Position */
#define I2S_SYNCBUSY_RXDATA_Msk               (_UINT16_(0x1) << I2S_SYNCBUSY_RXDATA_Pos)           /* (I2S_SYNCBUSY) Rx Data Synchronization Status Mask */
#define I2S_SYNCBUSY_RXDATA(value)            (I2S_SYNCBUSY_RXDATA_Msk & (_UINT16_(value) << I2S_SYNCBUSY_RXDATA_Pos)) /* Assignment of value for RXDATA in the I2S_SYNCBUSY register */
#define I2S_SYNCBUSY_Msk                      _UINT16_(0x033F)                                     /* (I2S_SYNCBUSY) Register Mask  */

#define I2S_SYNCBUSY_CKEN_Pos                 _UINT16_(2)                                          /* (I2S_SYNCBUSY Position) Clock Unit x Enable Synchronization Status */
#define I2S_SYNCBUSY_CKEN_Msk                 (_UINT16_(0x3) << I2S_SYNCBUSY_CKEN_Pos)             /* (I2S_SYNCBUSY Mask) CKEN */
#define I2S_SYNCBUSY_CKEN(value)              (I2S_SYNCBUSY_CKEN_Msk & (_UINT16_(value) << I2S_SYNCBUSY_CKEN_Pos)) 

/* -------- I2S_TXCTRL : (I2S Offset: 0x20) (R/W 32) Tx Serializer Control -------- */
#define I2S_TXCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (I2S_TXCTRL) Tx Serializer Control  Reset Value */

#define I2S_TXCTRL_TXDEFAULT_Pos              _UINT32_(2)                                          /* (I2S_TXCTRL) Line Default Line when Slot Disabled Position */
#define I2S_TXCTRL_TXDEFAULT_Msk              (_UINT32_(0x3) << I2S_TXCTRL_TXDEFAULT_Pos)          /* (I2S_TXCTRL) Line Default Line when Slot Disabled Mask */
#define I2S_TXCTRL_TXDEFAULT(value)           (I2S_TXCTRL_TXDEFAULT_Msk & (_UINT32_(value) << I2S_TXCTRL_TXDEFAULT_Pos)) /* Assignment of value for TXDEFAULT in the I2S_TXCTRL register */
#define   I2S_TXCTRL_TXDEFAULT_ZERO_Val       _UINT32_(0x0)                                        /* (I2S_TXCTRL) Output Default Value is 0  */
#define   I2S_TXCTRL_TXDEFAULT_ONE_Val        _UINT32_(0x1)                                        /* (I2S_TXCTRL) Output Default Value is 1  */
#define   I2S_TXCTRL_TXDEFAULT_HIZ_Val        _UINT32_(0x3)                                        /* (I2S_TXCTRL) Output Default Value is high impedance  */
#define I2S_TXCTRL_TXDEFAULT_ZERO             (I2S_TXCTRL_TXDEFAULT_ZERO_Val << I2S_TXCTRL_TXDEFAULT_Pos) /* (I2S_TXCTRL) Output Default Value is 0 Position */
#define I2S_TXCTRL_TXDEFAULT_ONE              (I2S_TXCTRL_TXDEFAULT_ONE_Val << I2S_TXCTRL_TXDEFAULT_Pos) /* (I2S_TXCTRL) Output Default Value is 1 Position */
#define I2S_TXCTRL_TXDEFAULT_HIZ              (I2S_TXCTRL_TXDEFAULT_HIZ_Val << I2S_TXCTRL_TXDEFAULT_Pos) /* (I2S_TXCTRL) Output Default Value is high impedance Position */
#define I2S_TXCTRL_TXSAME_Pos                 _UINT32_(4)                                          /* (I2S_TXCTRL) Transmit Data when Underrun Position */
#define I2S_TXCTRL_TXSAME_Msk                 (_UINT32_(0x1) << I2S_TXCTRL_TXSAME_Pos)             /* (I2S_TXCTRL) Transmit Data when Underrun Mask */
#define I2S_TXCTRL_TXSAME(value)              (I2S_TXCTRL_TXSAME_Msk & (_UINT32_(value) << I2S_TXCTRL_TXSAME_Pos)) /* Assignment of value for TXSAME in the I2S_TXCTRL register */
#define   I2S_TXCTRL_TXSAME_ZERO_Val          _UINT32_(0x0)                                        /* (I2S_TXCTRL) Zero data transmitted in case of underrun  */
#define   I2S_TXCTRL_TXSAME_SAME_Val          _UINT32_(0x1)                                        /* (I2S_TXCTRL) Last data transmitted in case of underrun  */
#define I2S_TXCTRL_TXSAME_ZERO                (I2S_TXCTRL_TXSAME_ZERO_Val << I2S_TXCTRL_TXSAME_Pos) /* (I2S_TXCTRL) Zero data transmitted in case of underrun Position */
#define I2S_TXCTRL_TXSAME_SAME                (I2S_TXCTRL_TXSAME_SAME_Val << I2S_TXCTRL_TXSAME_Pos) /* (I2S_TXCTRL) Last data transmitted in case of underrun Position */
#define I2S_TXCTRL_SLOTADJ_Pos                _UINT32_(7)                                          /* (I2S_TXCTRL) Data Slot Formatting Adjust Position */
#define I2S_TXCTRL_SLOTADJ_Msk                (_UINT32_(0x1) << I2S_TXCTRL_SLOTADJ_Pos)            /* (I2S_TXCTRL) Data Slot Formatting Adjust Mask */
#define I2S_TXCTRL_SLOTADJ(value)             (I2S_TXCTRL_SLOTADJ_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTADJ_Pos)) /* Assignment of value for SLOTADJ in the I2S_TXCTRL register */
#define   I2S_TXCTRL_SLOTADJ_RIGHT_Val        _UINT32_(0x0)                                        /* (I2S_TXCTRL) Data is right adjusted in slot  */
#define   I2S_TXCTRL_SLOTADJ_LEFT_Val         _UINT32_(0x1)                                        /* (I2S_TXCTRL) Data is left adjusted in slot  */
#define I2S_TXCTRL_SLOTADJ_RIGHT              (I2S_TXCTRL_SLOTADJ_RIGHT_Val << I2S_TXCTRL_SLOTADJ_Pos) /* (I2S_TXCTRL) Data is right adjusted in slot Position */
#define I2S_TXCTRL_SLOTADJ_LEFT               (I2S_TXCTRL_SLOTADJ_LEFT_Val << I2S_TXCTRL_SLOTADJ_Pos) /* (I2S_TXCTRL) Data is left adjusted in slot Position */
#define I2S_TXCTRL_DATASIZE_Pos               _UINT32_(8)                                          /* (I2S_TXCTRL) Data Word Size Position */
#define I2S_TXCTRL_DATASIZE_Msk               (_UINT32_(0x7) << I2S_TXCTRL_DATASIZE_Pos)           /* (I2S_TXCTRL) Data Word Size Mask */
#define I2S_TXCTRL_DATASIZE(value)            (I2S_TXCTRL_DATASIZE_Msk & (_UINT32_(value) << I2S_TXCTRL_DATASIZE_Pos)) /* Assignment of value for DATASIZE in the I2S_TXCTRL register */
#define   I2S_TXCTRL_DATASIZE_32_Val          _UINT32_(0x0)                                        /* (I2S_TXCTRL) 32 bits  */
#define   I2S_TXCTRL_DATASIZE_24_Val          _UINT32_(0x1)                                        /* (I2S_TXCTRL) 24 bits  */
#define   I2S_TXCTRL_DATASIZE_20_Val          _UINT32_(0x2)                                        /* (I2S_TXCTRL) 20 bits  */
#define   I2S_TXCTRL_DATASIZE_18_Val          _UINT32_(0x3)                                        /* (I2S_TXCTRL) 18 bits  */
#define   I2S_TXCTRL_DATASIZE_16_Val          _UINT32_(0x4)                                        /* (I2S_TXCTRL) 16 bits  */
#define   I2S_TXCTRL_DATASIZE_16C_Val         _UINT32_(0x5)                                        /* (I2S_TXCTRL) 16 bits compact stereo  */
#define   I2S_TXCTRL_DATASIZE_8_Val           _UINT32_(0x6)                                        /* (I2S_TXCTRL) 8 bits  */
#define   I2S_TXCTRL_DATASIZE_8C_Val          _UINT32_(0x7)                                        /* (I2S_TXCTRL) 8 bits compact stereo  */
#define I2S_TXCTRL_DATASIZE_32                (I2S_TXCTRL_DATASIZE_32_Val << I2S_TXCTRL_DATASIZE_Pos) /* (I2S_TXCTRL) 32 bits Position */
#define I2S_TXCTRL_DATASIZE_24                (I2S_TXCTRL_DATASIZE_24_Val << I2S_TXCTRL_DATASIZE_Pos) /* (I2S_TXCTRL) 24 bits Position */
#define I2S_TXCTRL_DATASIZE_20                (I2S_TXCTRL_DATASIZE_20_Val << I2S_TXCTRL_DATASIZE_Pos) /* (I2S_TXCTRL) 20 bits Position */
#define I2S_TXCTRL_DATASIZE_18                (I2S_TXCTRL_DATASIZE_18_Val << I2S_TXCTRL_DATASIZE_Pos) /* (I2S_TXCTRL) 18 bits Position */
#define I2S_TXCTRL_DATASIZE_16                (I2S_TXCTRL_DATASIZE_16_Val << I2S_TXCTRL_DATASIZE_Pos) /* (I2S_TXCTRL) 16 bits Position */
#define I2S_TXCTRL_DATASIZE_16C               (I2S_TXCTRL_DATASIZE_16C_Val << I2S_TXCTRL_DATASIZE_Pos) /* (I2S_TXCTRL) 16 bits compact stereo Position */
#define I2S_TXCTRL_DATASIZE_8                 (I2S_TXCTRL_DATASIZE_8_Val << I2S_TXCTRL_DATASIZE_Pos) /* (I2S_TXCTRL) 8 bits Position */
#define I2S_TXCTRL_DATASIZE_8C                (I2S_TXCTRL_DATASIZE_8C_Val << I2S_TXCTRL_DATASIZE_Pos) /* (I2S_TXCTRL) 8 bits compact stereo Position */
#define I2S_TXCTRL_WORDADJ_Pos                _UINT32_(12)                                         /* (I2S_TXCTRL) Data Word Formatting Adjust Position */
#define I2S_TXCTRL_WORDADJ_Msk                (_UINT32_(0x1) << I2S_TXCTRL_WORDADJ_Pos)            /* (I2S_TXCTRL) Data Word Formatting Adjust Mask */
#define I2S_TXCTRL_WORDADJ(value)             (I2S_TXCTRL_WORDADJ_Msk & (_UINT32_(value) << I2S_TXCTRL_WORDADJ_Pos)) /* Assignment of value for WORDADJ in the I2S_TXCTRL register */
#define   I2S_TXCTRL_WORDADJ_RIGHT_Val        _UINT32_(0x0)                                        /* (I2S_TXCTRL) Data is right adjusted in word  */
#define   I2S_TXCTRL_WORDADJ_LEFT_Val         _UINT32_(0x1)                                        /* (I2S_TXCTRL) Data is left adjusted in word  */
#define I2S_TXCTRL_WORDADJ_RIGHT              (I2S_TXCTRL_WORDADJ_RIGHT_Val << I2S_TXCTRL_WORDADJ_Pos) /* (I2S_TXCTRL) Data is right adjusted in word Position */
#define I2S_TXCTRL_WORDADJ_LEFT               (I2S_TXCTRL_WORDADJ_LEFT_Val << I2S_TXCTRL_WORDADJ_Pos) /* (I2S_TXCTRL) Data is left adjusted in word Position */
#define I2S_TXCTRL_EXTEND_Pos                 _UINT32_(13)                                         /* (I2S_TXCTRL) Data Formatting Bit Extension Position */
#define I2S_TXCTRL_EXTEND_Msk                 (_UINT32_(0x3) << I2S_TXCTRL_EXTEND_Pos)             /* (I2S_TXCTRL) Data Formatting Bit Extension Mask */
#define I2S_TXCTRL_EXTEND(value)              (I2S_TXCTRL_EXTEND_Msk & (_UINT32_(value) << I2S_TXCTRL_EXTEND_Pos)) /* Assignment of value for EXTEND in the I2S_TXCTRL register */
#define   I2S_TXCTRL_EXTEND_ZERO_Val          _UINT32_(0x0)                                        /* (I2S_TXCTRL) Extend with zeroes  */
#define   I2S_TXCTRL_EXTEND_ONE_Val           _UINT32_(0x1)                                        /* (I2S_TXCTRL) Extend with ones  */
#define   I2S_TXCTRL_EXTEND_MSBIT_Val         _UINT32_(0x2)                                        /* (I2S_TXCTRL) Extend with Most Significant Bit  */
#define   I2S_TXCTRL_EXTEND_LSBIT_Val         _UINT32_(0x3)                                        /* (I2S_TXCTRL) Extend with Least Significant Bit  */
#define I2S_TXCTRL_EXTEND_ZERO                (I2S_TXCTRL_EXTEND_ZERO_Val << I2S_TXCTRL_EXTEND_Pos) /* (I2S_TXCTRL) Extend with zeroes Position */
#define I2S_TXCTRL_EXTEND_ONE                 (I2S_TXCTRL_EXTEND_ONE_Val << I2S_TXCTRL_EXTEND_Pos) /* (I2S_TXCTRL) Extend with ones Position */
#define I2S_TXCTRL_EXTEND_MSBIT               (I2S_TXCTRL_EXTEND_MSBIT_Val << I2S_TXCTRL_EXTEND_Pos) /* (I2S_TXCTRL) Extend with Most Significant Bit Position */
#define I2S_TXCTRL_EXTEND_LSBIT               (I2S_TXCTRL_EXTEND_LSBIT_Val << I2S_TXCTRL_EXTEND_Pos) /* (I2S_TXCTRL) Extend with Least Significant Bit Position */
#define I2S_TXCTRL_BITREV_Pos                 _UINT32_(15)                                         /* (I2S_TXCTRL) Data Formatting Bit Reverse Position */
#define I2S_TXCTRL_BITREV_Msk                 (_UINT32_(0x1) << I2S_TXCTRL_BITREV_Pos)             /* (I2S_TXCTRL) Data Formatting Bit Reverse Mask */
#define I2S_TXCTRL_BITREV(value)              (I2S_TXCTRL_BITREV_Msk & (_UINT32_(value) << I2S_TXCTRL_BITREV_Pos)) /* Assignment of value for BITREV in the I2S_TXCTRL register */
#define   I2S_TXCTRL_BITREV_MSBIT_Val         _UINT32_(0x0)                                        /* (I2S_TXCTRL) Transfer Data Most Significant Bit (MSB) first (default for I2S protocol)  */
#define   I2S_TXCTRL_BITREV_LSBIT_Val         _UINT32_(0x1)                                        /* (I2S_TXCTRL) Transfer Data Least Significant Bit (LSB) first  */
#define I2S_TXCTRL_BITREV_MSBIT               (I2S_TXCTRL_BITREV_MSBIT_Val << I2S_TXCTRL_BITREV_Pos) /* (I2S_TXCTRL) Transfer Data Most Significant Bit (MSB) first (default for I2S protocol) Position */
#define I2S_TXCTRL_BITREV_LSBIT               (I2S_TXCTRL_BITREV_LSBIT_Val << I2S_TXCTRL_BITREV_Pos) /* (I2S_TXCTRL) Transfer Data Least Significant Bit (LSB) first Position */
#define I2S_TXCTRL_SLOTDIS0_Pos               _UINT32_(16)                                         /* (I2S_TXCTRL) Slot 0 Disabled for this Serializer Position */
#define I2S_TXCTRL_SLOTDIS0_Msk               (_UINT32_(0x1) << I2S_TXCTRL_SLOTDIS0_Pos)           /* (I2S_TXCTRL) Slot 0 Disabled for this Serializer Mask */
#define I2S_TXCTRL_SLOTDIS0(value)            (I2S_TXCTRL_SLOTDIS0_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS0_Pos)) /* Assignment of value for SLOTDIS0 in the I2S_TXCTRL register */
#define I2S_TXCTRL_SLOTDIS1_Pos               _UINT32_(17)                                         /* (I2S_TXCTRL) Slot 1 Disabled for this Serializer Position */
#define I2S_TXCTRL_SLOTDIS1_Msk               (_UINT32_(0x1) << I2S_TXCTRL_SLOTDIS1_Pos)           /* (I2S_TXCTRL) Slot 1 Disabled for this Serializer Mask */
#define I2S_TXCTRL_SLOTDIS1(value)            (I2S_TXCTRL_SLOTDIS1_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS1_Pos)) /* Assignment of value for SLOTDIS1 in the I2S_TXCTRL register */
#define I2S_TXCTRL_SLOTDIS2_Pos               _UINT32_(18)                                         /* (I2S_TXCTRL) Slot 2 Disabled for this Serializer Position */
#define I2S_TXCTRL_SLOTDIS2_Msk               (_UINT32_(0x1) << I2S_TXCTRL_SLOTDIS2_Pos)           /* (I2S_TXCTRL) Slot 2 Disabled for this Serializer Mask */
#define I2S_TXCTRL_SLOTDIS2(value)            (I2S_TXCTRL_SLOTDIS2_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS2_Pos)) /* Assignment of value for SLOTDIS2 in the I2S_TXCTRL register */
#define I2S_TXCTRL_SLOTDIS3_Pos               _UINT32_(19)                                         /* (I2S_TXCTRL) Slot 3 Disabled for this Serializer Position */
#define I2S_TXCTRL_SLOTDIS3_Msk               (_UINT32_(0x1) << I2S_TXCTRL_SLOTDIS3_Pos)           /* (I2S_TXCTRL) Slot 3 Disabled for this Serializer Mask */
#define I2S_TXCTRL_SLOTDIS3(value)            (I2S_TXCTRL_SLOTDIS3_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS3_Pos)) /* Assignment of value for SLOTDIS3 in the I2S_TXCTRL register */
#define I2S_TXCTRL_SLOTDIS4_Pos               _UINT32_(20)                                         /* (I2S_TXCTRL) Slot 4 Disabled for this Serializer Position */
#define I2S_TXCTRL_SLOTDIS4_Msk               (_UINT32_(0x1) << I2S_TXCTRL_SLOTDIS4_Pos)           /* (I2S_TXCTRL) Slot 4 Disabled for this Serializer Mask */
#define I2S_TXCTRL_SLOTDIS4(value)            (I2S_TXCTRL_SLOTDIS4_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS4_Pos)) /* Assignment of value for SLOTDIS4 in the I2S_TXCTRL register */
#define I2S_TXCTRL_SLOTDIS5_Pos               _UINT32_(21)                                         /* (I2S_TXCTRL) Slot 5 Disabled for this Serializer Position */
#define I2S_TXCTRL_SLOTDIS5_Msk               (_UINT32_(0x1) << I2S_TXCTRL_SLOTDIS5_Pos)           /* (I2S_TXCTRL) Slot 5 Disabled for this Serializer Mask */
#define I2S_TXCTRL_SLOTDIS5(value)            (I2S_TXCTRL_SLOTDIS5_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS5_Pos)) /* Assignment of value for SLOTDIS5 in the I2S_TXCTRL register */
#define I2S_TXCTRL_SLOTDIS6_Pos               _UINT32_(22)                                         /* (I2S_TXCTRL) Slot 6 Disabled for this Serializer Position */
#define I2S_TXCTRL_SLOTDIS6_Msk               (_UINT32_(0x1) << I2S_TXCTRL_SLOTDIS6_Pos)           /* (I2S_TXCTRL) Slot 6 Disabled for this Serializer Mask */
#define I2S_TXCTRL_SLOTDIS6(value)            (I2S_TXCTRL_SLOTDIS6_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS6_Pos)) /* Assignment of value for SLOTDIS6 in the I2S_TXCTRL register */
#define I2S_TXCTRL_SLOTDIS7_Pos               _UINT32_(23)                                         /* (I2S_TXCTRL) Slot 7 Disabled for this Serializer Position */
#define I2S_TXCTRL_SLOTDIS7_Msk               (_UINT32_(0x1) << I2S_TXCTRL_SLOTDIS7_Pos)           /* (I2S_TXCTRL) Slot 7 Disabled for this Serializer Mask */
#define I2S_TXCTRL_SLOTDIS7(value)            (I2S_TXCTRL_SLOTDIS7_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS7_Pos)) /* Assignment of value for SLOTDIS7 in the I2S_TXCTRL register */
#define I2S_TXCTRL_MONO_Pos                   _UINT32_(24)                                         /* (I2S_TXCTRL) Mono Mode Position */
#define I2S_TXCTRL_MONO_Msk                   (_UINT32_(0x1) << I2S_TXCTRL_MONO_Pos)               /* (I2S_TXCTRL) Mono Mode Mask */
#define I2S_TXCTRL_MONO(value)                (I2S_TXCTRL_MONO_Msk & (_UINT32_(value) << I2S_TXCTRL_MONO_Pos)) /* Assignment of value for MONO in the I2S_TXCTRL register */
#define   I2S_TXCTRL_MONO_STEREO_Val          _UINT32_(0x0)                                        /* (I2S_TXCTRL) Normal mode  */
#define   I2S_TXCTRL_MONO_MONO_Val            _UINT32_(0x1)                                        /* (I2S_TXCTRL) Left channel data is duplicated to right channel  */
#define I2S_TXCTRL_MONO_STEREO                (I2S_TXCTRL_MONO_STEREO_Val << I2S_TXCTRL_MONO_Pos)  /* (I2S_TXCTRL) Normal mode Position */
#define I2S_TXCTRL_MONO_MONO                  (I2S_TXCTRL_MONO_MONO_Val << I2S_TXCTRL_MONO_Pos)    /* (I2S_TXCTRL) Left channel data is duplicated to right channel Position */
#define I2S_TXCTRL_DMA_Pos                    _UINT32_(25)                                         /* (I2S_TXCTRL) Single or Multiple DMA Channels Position */
#define I2S_TXCTRL_DMA_Msk                    (_UINT32_(0x1) << I2S_TXCTRL_DMA_Pos)                /* (I2S_TXCTRL) Single or Multiple DMA Channels Mask */
#define I2S_TXCTRL_DMA(value)                 (I2S_TXCTRL_DMA_Msk & (_UINT32_(value) << I2S_TXCTRL_DMA_Pos)) /* Assignment of value for DMA in the I2S_TXCTRL register */
#define   I2S_TXCTRL_DMA_SINGLE_Val           _UINT32_(0x0)                                        /* (I2S_TXCTRL) Single DMA channel  */
#define   I2S_TXCTRL_DMA_MULTIPLE_Val         _UINT32_(0x1)                                        /* (I2S_TXCTRL) One DMA channel per data channel  */
#define I2S_TXCTRL_DMA_SINGLE                 (I2S_TXCTRL_DMA_SINGLE_Val << I2S_TXCTRL_DMA_Pos)    /* (I2S_TXCTRL) Single DMA channel Position */
#define I2S_TXCTRL_DMA_MULTIPLE               (I2S_TXCTRL_DMA_MULTIPLE_Val << I2S_TXCTRL_DMA_Pos)  /* (I2S_TXCTRL) One DMA channel per data channel Position */
#define I2S_TXCTRL_Msk                        _UINT32_(0x03FFF79C)                                 /* (I2S_TXCTRL) Register Mask  */

#define I2S_TXCTRL_SLOTDIS_Pos                _UINT32_(16)                                         /* (I2S_TXCTRL Position) Slot x Disabled for this Serializer */
#define I2S_TXCTRL_SLOTDIS_Msk                (_UINT32_(0xFF) << I2S_TXCTRL_SLOTDIS_Pos)           /* (I2S_TXCTRL Mask) SLOTDIS */
#define I2S_TXCTRL_SLOTDIS(value)             (I2S_TXCTRL_SLOTDIS_Msk & (_UINT32_(value) << I2S_TXCTRL_SLOTDIS_Pos)) 

/* -------- I2S_RXCTRL : (I2S Offset: 0x24) (R/W 32) Rx Serializer Control -------- */
#define I2S_RXCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (I2S_RXCTRL) Rx Serializer Control  Reset Value */

#define I2S_RXCTRL_SERMODE_Pos                _UINT32_(0)                                          /* (I2S_RXCTRL) Serializer Mode Position */
#define I2S_RXCTRL_SERMODE_Msk                (_UINT32_(0x3) << I2S_RXCTRL_SERMODE_Pos)            /* (I2S_RXCTRL) Serializer Mode Mask */
#define I2S_RXCTRL_SERMODE(value)             (I2S_RXCTRL_SERMODE_Msk & (_UINT32_(value) << I2S_RXCTRL_SERMODE_Pos)) /* Assignment of value for SERMODE in the I2S_RXCTRL register */
#define   I2S_RXCTRL_SERMODE_RX_Val           _UINT32_(0x0)                                        /* (I2S_RXCTRL) Receive  */
#define   I2S_RXCTRL_SERMODE_PDM2_Val         _UINT32_(0x2)                                        /* (I2S_RXCTRL) Receive one PDM data on each serial clock edge  */
#define I2S_RXCTRL_SERMODE_RX                 (I2S_RXCTRL_SERMODE_RX_Val << I2S_RXCTRL_SERMODE_Pos) /* (I2S_RXCTRL) Receive Position */
#define I2S_RXCTRL_SERMODE_PDM2               (I2S_RXCTRL_SERMODE_PDM2_Val << I2S_RXCTRL_SERMODE_Pos) /* (I2S_RXCTRL) Receive one PDM data on each serial clock edge Position */
#define I2S_RXCTRL_CLKSEL_Pos                 _UINT32_(5)                                          /* (I2S_RXCTRL) Clock Unit Selection Position */
#define I2S_RXCTRL_CLKSEL_Msk                 (_UINT32_(0x1) << I2S_RXCTRL_CLKSEL_Pos)             /* (I2S_RXCTRL) Clock Unit Selection Mask */
#define I2S_RXCTRL_CLKSEL(value)              (I2S_RXCTRL_CLKSEL_Msk & (_UINT32_(value) << I2S_RXCTRL_CLKSEL_Pos)) /* Assignment of value for CLKSEL in the I2S_RXCTRL register */
#define   I2S_RXCTRL_CLKSEL_CLK0_Val          _UINT32_(0x0)                                        /* (I2S_RXCTRL) Use Clock Unit 0  */
#define   I2S_RXCTRL_CLKSEL_CLK1_Val          _UINT32_(0x1)                                        /* (I2S_RXCTRL) Use Clock Unit 1  */
#define I2S_RXCTRL_CLKSEL_CLK0                (I2S_RXCTRL_CLKSEL_CLK0_Val << I2S_RXCTRL_CLKSEL_Pos) /* (I2S_RXCTRL) Use Clock Unit 0 Position */
#define I2S_RXCTRL_CLKSEL_CLK1                (I2S_RXCTRL_CLKSEL_CLK1_Val << I2S_RXCTRL_CLKSEL_Pos) /* (I2S_RXCTRL) Use Clock Unit 1 Position */
#define I2S_RXCTRL_SLOTADJ_Pos                _UINT32_(7)                                          /* (I2S_RXCTRL) Data Slot Formatting Adjust Position */
#define I2S_RXCTRL_SLOTADJ_Msk                (_UINT32_(0x1) << I2S_RXCTRL_SLOTADJ_Pos)            /* (I2S_RXCTRL) Data Slot Formatting Adjust Mask */
#define I2S_RXCTRL_SLOTADJ(value)             (I2S_RXCTRL_SLOTADJ_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTADJ_Pos)) /* Assignment of value for SLOTADJ in the I2S_RXCTRL register */
#define   I2S_RXCTRL_SLOTADJ_RIGHT_Val        _UINT32_(0x0)                                        /* (I2S_RXCTRL) Data is right adjusted in slot  */
#define   I2S_RXCTRL_SLOTADJ_LEFT_Val         _UINT32_(0x1)                                        /* (I2S_RXCTRL) Data is left adjusted in slot  */
#define I2S_RXCTRL_SLOTADJ_RIGHT              (I2S_RXCTRL_SLOTADJ_RIGHT_Val << I2S_RXCTRL_SLOTADJ_Pos) /* (I2S_RXCTRL) Data is right adjusted in slot Position */
#define I2S_RXCTRL_SLOTADJ_LEFT               (I2S_RXCTRL_SLOTADJ_LEFT_Val << I2S_RXCTRL_SLOTADJ_Pos) /* (I2S_RXCTRL) Data is left adjusted in slot Position */
#define I2S_RXCTRL_DATASIZE_Pos               _UINT32_(8)                                          /* (I2S_RXCTRL) Data Word Size Position */
#define I2S_RXCTRL_DATASIZE_Msk               (_UINT32_(0x7) << I2S_RXCTRL_DATASIZE_Pos)           /* (I2S_RXCTRL) Data Word Size Mask */
#define I2S_RXCTRL_DATASIZE(value)            (I2S_RXCTRL_DATASIZE_Msk & (_UINT32_(value) << I2S_RXCTRL_DATASIZE_Pos)) /* Assignment of value for DATASIZE in the I2S_RXCTRL register */
#define   I2S_RXCTRL_DATASIZE_32_Val          _UINT32_(0x0)                                        /* (I2S_RXCTRL) 32 bits  */
#define   I2S_RXCTRL_DATASIZE_24_Val          _UINT32_(0x1)                                        /* (I2S_RXCTRL) 24 bits  */
#define   I2S_RXCTRL_DATASIZE_20_Val          _UINT32_(0x2)                                        /* (I2S_RXCTRL) 20 bits  */
#define   I2S_RXCTRL_DATASIZE_18_Val          _UINT32_(0x3)                                        /* (I2S_RXCTRL) 18 bits  */
#define   I2S_RXCTRL_DATASIZE_16_Val          _UINT32_(0x4)                                        /* (I2S_RXCTRL) 16 bits  */
#define   I2S_RXCTRL_DATASIZE_16C_Val         _UINT32_(0x5)                                        /* (I2S_RXCTRL) 16 bits compact stereo  */
#define   I2S_RXCTRL_DATASIZE_8_Val           _UINT32_(0x6)                                        /* (I2S_RXCTRL) 8 bits  */
#define   I2S_RXCTRL_DATASIZE_8C_Val          _UINT32_(0x7)                                        /* (I2S_RXCTRL) 8 bits compact stereo  */
#define I2S_RXCTRL_DATASIZE_32                (I2S_RXCTRL_DATASIZE_32_Val << I2S_RXCTRL_DATASIZE_Pos) /* (I2S_RXCTRL) 32 bits Position */
#define I2S_RXCTRL_DATASIZE_24                (I2S_RXCTRL_DATASIZE_24_Val << I2S_RXCTRL_DATASIZE_Pos) /* (I2S_RXCTRL) 24 bits Position */
#define I2S_RXCTRL_DATASIZE_20                (I2S_RXCTRL_DATASIZE_20_Val << I2S_RXCTRL_DATASIZE_Pos) /* (I2S_RXCTRL) 20 bits Position */
#define I2S_RXCTRL_DATASIZE_18                (I2S_RXCTRL_DATASIZE_18_Val << I2S_RXCTRL_DATASIZE_Pos) /* (I2S_RXCTRL) 18 bits Position */
#define I2S_RXCTRL_DATASIZE_16                (I2S_RXCTRL_DATASIZE_16_Val << I2S_RXCTRL_DATASIZE_Pos) /* (I2S_RXCTRL) 16 bits Position */
#define I2S_RXCTRL_DATASIZE_16C               (I2S_RXCTRL_DATASIZE_16C_Val << I2S_RXCTRL_DATASIZE_Pos) /* (I2S_RXCTRL) 16 bits compact stereo Position */
#define I2S_RXCTRL_DATASIZE_8                 (I2S_RXCTRL_DATASIZE_8_Val << I2S_RXCTRL_DATASIZE_Pos) /* (I2S_RXCTRL) 8 bits Position */
#define I2S_RXCTRL_DATASIZE_8C                (I2S_RXCTRL_DATASIZE_8C_Val << I2S_RXCTRL_DATASIZE_Pos) /* (I2S_RXCTRL) 8 bits compact stereo Position */
#define I2S_RXCTRL_WORDADJ_Pos                _UINT32_(12)                                         /* (I2S_RXCTRL) Data Word Formatting Adjust Position */
#define I2S_RXCTRL_WORDADJ_Msk                (_UINT32_(0x1) << I2S_RXCTRL_WORDADJ_Pos)            /* (I2S_RXCTRL) Data Word Formatting Adjust Mask */
#define I2S_RXCTRL_WORDADJ(value)             (I2S_RXCTRL_WORDADJ_Msk & (_UINT32_(value) << I2S_RXCTRL_WORDADJ_Pos)) /* Assignment of value for WORDADJ in the I2S_RXCTRL register */
#define   I2S_RXCTRL_WORDADJ_RIGHT_Val        _UINT32_(0x0)                                        /* (I2S_RXCTRL) Data is right adjusted in word  */
#define   I2S_RXCTRL_WORDADJ_LEFT_Val         _UINT32_(0x1)                                        /* (I2S_RXCTRL) Data is left adjusted in word  */
#define I2S_RXCTRL_WORDADJ_RIGHT              (I2S_RXCTRL_WORDADJ_RIGHT_Val << I2S_RXCTRL_WORDADJ_Pos) /* (I2S_RXCTRL) Data is right adjusted in word Position */
#define I2S_RXCTRL_WORDADJ_LEFT               (I2S_RXCTRL_WORDADJ_LEFT_Val << I2S_RXCTRL_WORDADJ_Pos) /* (I2S_RXCTRL) Data is left adjusted in word Position */
#define I2S_RXCTRL_EXTEND_Pos                 _UINT32_(13)                                         /* (I2S_RXCTRL) Data Formatting Bit Extension Position */
#define I2S_RXCTRL_EXTEND_Msk                 (_UINT32_(0x3) << I2S_RXCTRL_EXTEND_Pos)             /* (I2S_RXCTRL) Data Formatting Bit Extension Mask */
#define I2S_RXCTRL_EXTEND(value)              (I2S_RXCTRL_EXTEND_Msk & (_UINT32_(value) << I2S_RXCTRL_EXTEND_Pos)) /* Assignment of value for EXTEND in the I2S_RXCTRL register */
#define   I2S_RXCTRL_EXTEND_ZERO_Val          _UINT32_(0x0)                                        /* (I2S_RXCTRL) Extend with zeroes  */
#define   I2S_RXCTRL_EXTEND_ONE_Val           _UINT32_(0x1)                                        /* (I2S_RXCTRL) Extend with ones  */
#define   I2S_RXCTRL_EXTEND_MSBIT_Val         _UINT32_(0x2)                                        /* (I2S_RXCTRL) Extend with Most Significant Bit  */
#define   I2S_RXCTRL_EXTEND_LSBIT_Val         _UINT32_(0x3)                                        /* (I2S_RXCTRL) Extend with Least Significant Bit  */
#define I2S_RXCTRL_EXTEND_ZERO                (I2S_RXCTRL_EXTEND_ZERO_Val << I2S_RXCTRL_EXTEND_Pos) /* (I2S_RXCTRL) Extend with zeroes Position */
#define I2S_RXCTRL_EXTEND_ONE                 (I2S_RXCTRL_EXTEND_ONE_Val << I2S_RXCTRL_EXTEND_Pos) /* (I2S_RXCTRL) Extend with ones Position */
#define I2S_RXCTRL_EXTEND_MSBIT               (I2S_RXCTRL_EXTEND_MSBIT_Val << I2S_RXCTRL_EXTEND_Pos) /* (I2S_RXCTRL) Extend with Most Significant Bit Position */
#define I2S_RXCTRL_EXTEND_LSBIT               (I2S_RXCTRL_EXTEND_LSBIT_Val << I2S_RXCTRL_EXTEND_Pos) /* (I2S_RXCTRL) Extend with Least Significant Bit Position */
#define I2S_RXCTRL_BITREV_Pos                 _UINT32_(15)                                         /* (I2S_RXCTRL) Data Formatting Bit Reverse Position */
#define I2S_RXCTRL_BITREV_Msk                 (_UINT32_(0x1) << I2S_RXCTRL_BITREV_Pos)             /* (I2S_RXCTRL) Data Formatting Bit Reverse Mask */
#define I2S_RXCTRL_BITREV(value)              (I2S_RXCTRL_BITREV_Msk & (_UINT32_(value) << I2S_RXCTRL_BITREV_Pos)) /* Assignment of value for BITREV in the I2S_RXCTRL register */
#define   I2S_RXCTRL_BITREV_MSBIT_Val         _UINT32_(0x0)                                        /* (I2S_RXCTRL) Transfer Data Most Significant Bit (MSB) first (default for I2S protocol)  */
#define   I2S_RXCTRL_BITREV_LSBIT_Val         _UINT32_(0x1)                                        /* (I2S_RXCTRL) Transfer Data Least Significant Bit (LSB) first  */
#define I2S_RXCTRL_BITREV_MSBIT               (I2S_RXCTRL_BITREV_MSBIT_Val << I2S_RXCTRL_BITREV_Pos) /* (I2S_RXCTRL) Transfer Data Most Significant Bit (MSB) first (default for I2S protocol) Position */
#define I2S_RXCTRL_BITREV_LSBIT               (I2S_RXCTRL_BITREV_LSBIT_Val << I2S_RXCTRL_BITREV_Pos) /* (I2S_RXCTRL) Transfer Data Least Significant Bit (LSB) first Position */
#define I2S_RXCTRL_SLOTDIS0_Pos               _UINT32_(16)                                         /* (I2S_RXCTRL) Slot 0 Disabled for this Serializer Position */
#define I2S_RXCTRL_SLOTDIS0_Msk               (_UINT32_(0x1) << I2S_RXCTRL_SLOTDIS0_Pos)           /* (I2S_RXCTRL) Slot 0 Disabled for this Serializer Mask */
#define I2S_RXCTRL_SLOTDIS0(value)            (I2S_RXCTRL_SLOTDIS0_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS0_Pos)) /* Assignment of value for SLOTDIS0 in the I2S_RXCTRL register */
#define I2S_RXCTRL_SLOTDIS1_Pos               _UINT32_(17)                                         /* (I2S_RXCTRL) Slot 1 Disabled for this Serializer Position */
#define I2S_RXCTRL_SLOTDIS1_Msk               (_UINT32_(0x1) << I2S_RXCTRL_SLOTDIS1_Pos)           /* (I2S_RXCTRL) Slot 1 Disabled for this Serializer Mask */
#define I2S_RXCTRL_SLOTDIS1(value)            (I2S_RXCTRL_SLOTDIS1_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS1_Pos)) /* Assignment of value for SLOTDIS1 in the I2S_RXCTRL register */
#define I2S_RXCTRL_SLOTDIS2_Pos               _UINT32_(18)                                         /* (I2S_RXCTRL) Slot 2 Disabled for this Serializer Position */
#define I2S_RXCTRL_SLOTDIS2_Msk               (_UINT32_(0x1) << I2S_RXCTRL_SLOTDIS2_Pos)           /* (I2S_RXCTRL) Slot 2 Disabled for this Serializer Mask */
#define I2S_RXCTRL_SLOTDIS2(value)            (I2S_RXCTRL_SLOTDIS2_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS2_Pos)) /* Assignment of value for SLOTDIS2 in the I2S_RXCTRL register */
#define I2S_RXCTRL_SLOTDIS3_Pos               _UINT32_(19)                                         /* (I2S_RXCTRL) Slot 3 Disabled for this Serializer Position */
#define I2S_RXCTRL_SLOTDIS3_Msk               (_UINT32_(0x1) << I2S_RXCTRL_SLOTDIS3_Pos)           /* (I2S_RXCTRL) Slot 3 Disabled for this Serializer Mask */
#define I2S_RXCTRL_SLOTDIS3(value)            (I2S_RXCTRL_SLOTDIS3_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS3_Pos)) /* Assignment of value for SLOTDIS3 in the I2S_RXCTRL register */
#define I2S_RXCTRL_SLOTDIS4_Pos               _UINT32_(20)                                         /* (I2S_RXCTRL) Slot 4 Disabled for this Serializer Position */
#define I2S_RXCTRL_SLOTDIS4_Msk               (_UINT32_(0x1) << I2S_RXCTRL_SLOTDIS4_Pos)           /* (I2S_RXCTRL) Slot 4 Disabled for this Serializer Mask */
#define I2S_RXCTRL_SLOTDIS4(value)            (I2S_RXCTRL_SLOTDIS4_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS4_Pos)) /* Assignment of value for SLOTDIS4 in the I2S_RXCTRL register */
#define I2S_RXCTRL_SLOTDIS5_Pos               _UINT32_(21)                                         /* (I2S_RXCTRL) Slot 5 Disabled for this Serializer Position */
#define I2S_RXCTRL_SLOTDIS5_Msk               (_UINT32_(0x1) << I2S_RXCTRL_SLOTDIS5_Pos)           /* (I2S_RXCTRL) Slot 5 Disabled for this Serializer Mask */
#define I2S_RXCTRL_SLOTDIS5(value)            (I2S_RXCTRL_SLOTDIS5_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS5_Pos)) /* Assignment of value for SLOTDIS5 in the I2S_RXCTRL register */
#define I2S_RXCTRL_SLOTDIS6_Pos               _UINT32_(22)                                         /* (I2S_RXCTRL) Slot 6 Disabled for this Serializer Position */
#define I2S_RXCTRL_SLOTDIS6_Msk               (_UINT32_(0x1) << I2S_RXCTRL_SLOTDIS6_Pos)           /* (I2S_RXCTRL) Slot 6 Disabled for this Serializer Mask */
#define I2S_RXCTRL_SLOTDIS6(value)            (I2S_RXCTRL_SLOTDIS6_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS6_Pos)) /* Assignment of value for SLOTDIS6 in the I2S_RXCTRL register */
#define I2S_RXCTRL_SLOTDIS7_Pos               _UINT32_(23)                                         /* (I2S_RXCTRL) Slot 7 Disabled for this Serializer Position */
#define I2S_RXCTRL_SLOTDIS7_Msk               (_UINT32_(0x1) << I2S_RXCTRL_SLOTDIS7_Pos)           /* (I2S_RXCTRL) Slot 7 Disabled for this Serializer Mask */
#define I2S_RXCTRL_SLOTDIS7(value)            (I2S_RXCTRL_SLOTDIS7_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS7_Pos)) /* Assignment of value for SLOTDIS7 in the I2S_RXCTRL register */
#define I2S_RXCTRL_MONO_Pos                   _UINT32_(24)                                         /* (I2S_RXCTRL) Mono Mode Position */
#define I2S_RXCTRL_MONO_Msk                   (_UINT32_(0x1) << I2S_RXCTRL_MONO_Pos)               /* (I2S_RXCTRL) Mono Mode Mask */
#define I2S_RXCTRL_MONO(value)                (I2S_RXCTRL_MONO_Msk & (_UINT32_(value) << I2S_RXCTRL_MONO_Pos)) /* Assignment of value for MONO in the I2S_RXCTRL register */
#define   I2S_RXCTRL_MONO_STEREO_Val          _UINT32_(0x0)                                        /* (I2S_RXCTRL) Normal mode  */
#define   I2S_RXCTRL_MONO_MONO_Val            _UINT32_(0x1)                                        /* (I2S_RXCTRL) Left channel data is duplicated to right channel  */
#define I2S_RXCTRL_MONO_STEREO                (I2S_RXCTRL_MONO_STEREO_Val << I2S_RXCTRL_MONO_Pos)  /* (I2S_RXCTRL) Normal mode Position */
#define I2S_RXCTRL_MONO_MONO                  (I2S_RXCTRL_MONO_MONO_Val << I2S_RXCTRL_MONO_Pos)    /* (I2S_RXCTRL) Left channel data is duplicated to right channel Position */
#define I2S_RXCTRL_DMA_Pos                    _UINT32_(25)                                         /* (I2S_RXCTRL) Single or Multiple DMA Channels Position */
#define I2S_RXCTRL_DMA_Msk                    (_UINT32_(0x1) << I2S_RXCTRL_DMA_Pos)                /* (I2S_RXCTRL) Single or Multiple DMA Channels Mask */
#define I2S_RXCTRL_DMA(value)                 (I2S_RXCTRL_DMA_Msk & (_UINT32_(value) << I2S_RXCTRL_DMA_Pos)) /* Assignment of value for DMA in the I2S_RXCTRL register */
#define   I2S_RXCTRL_DMA_SINGLE_Val           _UINT32_(0x0)                                        /* (I2S_RXCTRL) Single DMA channel  */
#define   I2S_RXCTRL_DMA_MULTIPLE_Val         _UINT32_(0x1)                                        /* (I2S_RXCTRL) One DMA channel per data channel  */
#define I2S_RXCTRL_DMA_SINGLE                 (I2S_RXCTRL_DMA_SINGLE_Val << I2S_RXCTRL_DMA_Pos)    /* (I2S_RXCTRL) Single DMA channel Position */
#define I2S_RXCTRL_DMA_MULTIPLE               (I2S_RXCTRL_DMA_MULTIPLE_Val << I2S_RXCTRL_DMA_Pos)  /* (I2S_RXCTRL) One DMA channel per data channel Position */
#define I2S_RXCTRL_RXLOOP_Pos                 _UINT32_(26)                                         /* (I2S_RXCTRL) Loop-back Test Mode Position */
#define I2S_RXCTRL_RXLOOP_Msk                 (_UINT32_(0x1) << I2S_RXCTRL_RXLOOP_Pos)             /* (I2S_RXCTRL) Loop-back Test Mode Mask */
#define I2S_RXCTRL_RXLOOP(value)              (I2S_RXCTRL_RXLOOP_Msk & (_UINT32_(value) << I2S_RXCTRL_RXLOOP_Pos)) /* Assignment of value for RXLOOP in the I2S_RXCTRL register */
#define I2S_RXCTRL_Msk                        _UINT32_(0x07FFF7A3)                                 /* (I2S_RXCTRL) Register Mask  */

#define I2S_RXCTRL_SLOTDIS_Pos                _UINT32_(16)                                         /* (I2S_RXCTRL Position) Slot x Disabled for this Serializer */
#define I2S_RXCTRL_SLOTDIS_Msk                (_UINT32_(0xFF) << I2S_RXCTRL_SLOTDIS_Pos)           /* (I2S_RXCTRL Mask) SLOTDIS */
#define I2S_RXCTRL_SLOTDIS(value)             (I2S_RXCTRL_SLOTDIS_Msk & (_UINT32_(value) << I2S_RXCTRL_SLOTDIS_Pos)) 

/* -------- I2S_TXDATA : (I2S Offset: 0x30) ( /W 32) Tx Data -------- */
#define I2S_TXDATA_RESETVALUE                 _UINT32_(0x00)                                       /*  (I2S_TXDATA) Tx Data  Reset Value */

#define I2S_TXDATA_DATA_Pos                   _UINT32_(0)                                          /* (I2S_TXDATA) Sample Data Position */
#define I2S_TXDATA_DATA_Msk                   (_UINT32_(0xFFFFFFFF) << I2S_TXDATA_DATA_Pos)        /* (I2S_TXDATA) Sample Data Mask */
#define I2S_TXDATA_DATA(value)                (I2S_TXDATA_DATA_Msk & (_UINT32_(value) << I2S_TXDATA_DATA_Pos)) /* Assignment of value for DATA in the I2S_TXDATA register */
#define I2S_TXDATA_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (I2S_TXDATA) Register Mask  */


/* -------- I2S_RXDATA : (I2S Offset: 0x34) ( R/ 32) Rx Data -------- */
#define I2S_RXDATA_RESETVALUE                 _UINT32_(0x00)                                       /*  (I2S_RXDATA) Rx Data  Reset Value */

#define I2S_RXDATA_DATA_Pos                   _UINT32_(0)                                          /* (I2S_RXDATA) Sample Data Position */
#define I2S_RXDATA_DATA_Msk                   (_UINT32_(0xFFFFFFFF) << I2S_RXDATA_DATA_Pos)        /* (I2S_RXDATA) Sample Data Mask */
#define I2S_RXDATA_DATA(value)                (I2S_RXDATA_DATA_Msk & (_UINT32_(value) << I2S_RXDATA_DATA_Pos)) /* Assignment of value for DATA in the I2S_RXDATA register */
#define I2S_RXDATA_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (I2S_RXDATA) Register Mask  */


/* I2S register offsets definitions */
#define I2S_CTRLA_REG_OFST             _UINT32_(0x00)      /* (I2S_CTRLA) Control A Offset */
#define I2S_CLKCTRL_REG_OFST           _UINT32_(0x04)      /* (I2S_CLKCTRL) Clock Unit n Control Offset */
#define I2S_CLKCTRL0_REG_OFST          _UINT32_(0x04)      /* (I2S_CLKCTRL0) Clock Unit n Control Offset */
#define I2S_CLKCTRL1_REG_OFST          _UINT32_(0x08)      /* (I2S_CLKCTRL1) Clock Unit n Control Offset */
#define I2S_INTENCLR_REG_OFST          _UINT32_(0x0C)      /* (I2S_INTENCLR) Interrupt Enable Clear Offset */
#define I2S_INTENSET_REG_OFST          _UINT32_(0x10)      /* (I2S_INTENSET) Interrupt Enable Set Offset */
#define I2S_INTFLAG_REG_OFST           _UINT32_(0x14)      /* (I2S_INTFLAG) Interrupt Flag Status and Clear Offset */
#define I2S_SYNCBUSY_REG_OFST          _UINT32_(0x18)      /* (I2S_SYNCBUSY) Synchronization Status Offset */
#define I2S_TXCTRL_REG_OFST            _UINT32_(0x20)      /* (I2S_TXCTRL) Tx Serializer Control Offset */
#define I2S_RXCTRL_REG_OFST            _UINT32_(0x24)      /* (I2S_RXCTRL) Rx Serializer Control Offset */
#define I2S_TXDATA_REG_OFST            _UINT32_(0x30)      /* (I2S_TXDATA) Tx Data Offset */
#define I2S_RXDATA_REG_OFST            _UINT32_(0x34)      /* (I2S_RXDATA) Rx Data Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* I2S register API structure */
typedef struct
{  /* Inter-IC Sound Interface */
  __IO  uint8_t                        I2S_CTRLA;          /* Offset: 0x00 (R/W  8) Control A */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint32_t                       I2S_CLKCTRL[2];     /* Offset: 0x04 (R/W  32) Clock Unit n Control */
  __IO  uint16_t                       I2S_INTENCLR;       /* Offset: 0x0C (R/W  16) Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x02];
  __IO  uint16_t                       I2S_INTENSET;       /* Offset: 0x10 (R/W  16) Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x02];
  __IO  uint16_t                       I2S_INTFLAG;        /* Offset: 0x14 (R/W  16) Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x02];
  __I   uint16_t                       I2S_SYNCBUSY;       /* Offset: 0x18 (R/   16) Synchronization Status */
  __I   uint8_t                        Reserved5[0x06];
  __IO  uint32_t                       I2S_TXCTRL;         /* Offset: 0x20 (R/W  32) Tx Serializer Control */
  __IO  uint32_t                       I2S_RXCTRL;         /* Offset: 0x24 (R/W  32) Rx Serializer Control */
  __I   uint8_t                        Reserved6[0x08];
  __O   uint32_t                       I2S_TXDATA;         /* Offset: 0x30 ( /W  32) Tx Data */
  __I   uint32_t                       I2S_RXDATA;         /* Offset: 0x34 (R/   32) Rx Data */
} i2s_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAME53_I2S_COMPONENT_H_ */
