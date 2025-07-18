/*
 * Component description for TC
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
#ifndef _SAMA7D_TC_COMPONENT_H_
#define _SAMA7D_TC_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                       SOFTWARE API DEFINITION FOR TC                       */
/* ************************************************************************** */

/* -------- TC_CCR : (TC Offset: 0x00) ( /W 32) Channel Control Register  -------- */
#define TC_CCR_CLKEN_Pos                      _UINT32_(0)                                          /* (TC_CCR) Counter Clock Enable Command Position */
#define TC_CCR_CLKEN_Msk                      (_UINT32_(0x1) << TC_CCR_CLKEN_Pos)                  /* (TC_CCR) Counter Clock Enable Command Mask */
#define TC_CCR_CLKEN(value)                   (TC_CCR_CLKEN_Msk & (_UINT32_(value) << TC_CCR_CLKEN_Pos)) /* Assignment of value for CLKEN in the TC_CCR register */
#define   TC_CCR_CLKEN_0_Val                  _UINT32_(0x0)                                        /* (TC_CCR) No effect.  */
#define   TC_CCR_CLKEN_1_Val                  _UINT32_(0x1)                                        /* (TC_CCR) Enables the clock if CLKDIS is not 1.  */
#define TC_CCR_CLKEN_0                        (TC_CCR_CLKEN_0_Val << TC_CCR_CLKEN_Pos)             /* (TC_CCR) No effect. Position */
#define TC_CCR_CLKEN_1                        (TC_CCR_CLKEN_1_Val << TC_CCR_CLKEN_Pos)             /* (TC_CCR) Enables the clock if CLKDIS is not 1. Position */
#define TC_CCR_CLKDIS_Pos                     _UINT32_(1)                                          /* (TC_CCR) Counter Clock Disable Command Position */
#define TC_CCR_CLKDIS_Msk                     (_UINT32_(0x1) << TC_CCR_CLKDIS_Pos)                 /* (TC_CCR) Counter Clock Disable Command Mask */
#define TC_CCR_CLKDIS(value)                  (TC_CCR_CLKDIS_Msk & (_UINT32_(value) << TC_CCR_CLKDIS_Pos)) /* Assignment of value for CLKDIS in the TC_CCR register */
#define   TC_CCR_CLKDIS_0_Val                 _UINT32_(0x0)                                        /* (TC_CCR) No effect.  */
#define   TC_CCR_CLKDIS_1_Val                 _UINT32_(0x1)                                        /* (TC_CCR) Disables the clock.  */
#define TC_CCR_CLKDIS_0                       (TC_CCR_CLKDIS_0_Val << TC_CCR_CLKDIS_Pos)           /* (TC_CCR) No effect. Position */
#define TC_CCR_CLKDIS_1                       (TC_CCR_CLKDIS_1_Val << TC_CCR_CLKDIS_Pos)           /* (TC_CCR) Disables the clock. Position */
#define TC_CCR_SWTRG_Pos                      _UINT32_(2)                                          /* (TC_CCR) Software Trigger Command Position */
#define TC_CCR_SWTRG_Msk                      (_UINT32_(0x1) << TC_CCR_SWTRG_Pos)                  /* (TC_CCR) Software Trigger Command Mask */
#define TC_CCR_SWTRG(value)                   (TC_CCR_SWTRG_Msk & (_UINT32_(value) << TC_CCR_SWTRG_Pos)) /* Assignment of value for SWTRG in the TC_CCR register */
#define   TC_CCR_SWTRG_0_Val                  _UINT32_(0x0)                                        /* (TC_CCR) No effect.  */
#define   TC_CCR_SWTRG_1_Val                  _UINT32_(0x1)                                        /* (TC_CCR) A software trigger is performed: the counter is reset and the clock is started.  */
#define TC_CCR_SWTRG_0                        (TC_CCR_SWTRG_0_Val << TC_CCR_SWTRG_Pos)             /* (TC_CCR) No effect. Position */
#define TC_CCR_SWTRG_1                        (TC_CCR_SWTRG_1_Val << TC_CCR_SWTRG_Pos)             /* (TC_CCR) A software trigger is performed: the counter is reset and the clock is started. Position */
#define TC_CCR_Msk                            _UINT32_(0x00000007)                                 /* (TC_CCR) Register Mask  */


/* -------- TC_CMR : (TC Offset: 0x04) (R/W 32) Channel Mode Register  -------- */
#define TC_CMR_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_CMR) Channel Mode Register   Reset Value */

#define TC_CMR_TCCLKS_Pos                     _UINT32_(0)                                          /* (TC_CMR) Clock Selection Position */
#define TC_CMR_TCCLKS_Msk                     (_UINT32_(0x7) << TC_CMR_TCCLKS_Pos)                 /* (TC_CMR) Clock Selection Mask */
#define TC_CMR_TCCLKS(value)                  (TC_CMR_TCCLKS_Msk & (_UINT32_(value) << TC_CMR_TCCLKS_Pos)) /* Assignment of value for TCCLKS in the TC_CMR register */
#define   TC_CMR_TCCLKS_TIMER_CLOCK1_Val      _UINT32_(0x0)                                        /* (TC_CMR) Clock selected: internal GCLK [TC_ID] clock signal (from PMC)  */
#define   TC_CMR_TCCLKS_TIMER_CLOCK2_Val      _UINT32_(0x1)                                        /* (TC_CMR) Clock selected: internal MCK0/8 clock signal (from PMC)  */
#define   TC_CMR_TCCLKS_TIMER_CLOCK3_Val      _UINT32_(0x2)                                        /* (TC_CMR) Clock selected: internal MCK0/32 clock signal (from PMC)  */
#define   TC_CMR_TCCLKS_TIMER_CLOCK4_Val      _UINT32_(0x3)                                        /* (TC_CMR) Clock selected: internal MCK0/128 clock signal (from PMC)  */
#define   TC_CMR_TCCLKS_TIMER_CLOCK5_Val      _UINT32_(0x4)                                        /* (TC_CMR) Clock selected: internal TD_SLCK clock signal (from PMC)  */
#define   TC_CMR_TCCLKS_XC0_Val               _UINT32_(0x5)                                        /* (TC_CMR) Clock selected: XC0  */
#define   TC_CMR_TCCLKS_XC1_Val               _UINT32_(0x6)                                        /* (TC_CMR) Clock selected: XC1  */
#define   TC_CMR_TCCLKS_XC2_Val               _UINT32_(0x7)                                        /* (TC_CMR) Clock selected: XC2  */
#define TC_CMR_TCCLKS_TIMER_CLOCK1            (TC_CMR_TCCLKS_TIMER_CLOCK1_Val << TC_CMR_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal GCLK [TC_ID] clock signal (from PMC) Position */
#define TC_CMR_TCCLKS_TIMER_CLOCK2            (TC_CMR_TCCLKS_TIMER_CLOCK2_Val << TC_CMR_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/8 clock signal (from PMC) Position */
#define TC_CMR_TCCLKS_TIMER_CLOCK3            (TC_CMR_TCCLKS_TIMER_CLOCK3_Val << TC_CMR_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/32 clock signal (from PMC) Position */
#define TC_CMR_TCCLKS_TIMER_CLOCK4            (TC_CMR_TCCLKS_TIMER_CLOCK4_Val << TC_CMR_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/128 clock signal (from PMC) Position */
#define TC_CMR_TCCLKS_TIMER_CLOCK5            (TC_CMR_TCCLKS_TIMER_CLOCK5_Val << TC_CMR_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal TD_SLCK clock signal (from PMC) Position */
#define TC_CMR_TCCLKS_XC0                     (TC_CMR_TCCLKS_XC0_Val << TC_CMR_TCCLKS_Pos)         /* (TC_CMR) Clock selected: XC0 Position */
#define TC_CMR_TCCLKS_XC1                     (TC_CMR_TCCLKS_XC1_Val << TC_CMR_TCCLKS_Pos)         /* (TC_CMR) Clock selected: XC1 Position */
#define TC_CMR_TCCLKS_XC2                     (TC_CMR_TCCLKS_XC2_Val << TC_CMR_TCCLKS_Pos)         /* (TC_CMR) Clock selected: XC2 Position */
#define TC_CMR_CLKI_Pos                       _UINT32_(3)                                          /* (TC_CMR) Clock Invert Position */
#define TC_CMR_CLKI_Msk                       (_UINT32_(0x1) << TC_CMR_CLKI_Pos)                   /* (TC_CMR) Clock Invert Mask */
#define TC_CMR_CLKI(value)                    (TC_CMR_CLKI_Msk & (_UINT32_(value) << TC_CMR_CLKI_Pos)) /* Assignment of value for CLKI in the TC_CMR register */
#define   TC_CMR_CLKI_0_Val                   _UINT32_(0x0)                                        /* (TC_CMR) Counter is incremented on rising edge of the clock.  */
#define   TC_CMR_CLKI_1_Val                   _UINT32_(0x1)                                        /* (TC_CMR) Counter is incremented on falling edge of the clock.  */
#define TC_CMR_CLKI_0                         (TC_CMR_CLKI_0_Val << TC_CMR_CLKI_Pos)               /* (TC_CMR) Counter is incremented on rising edge of the clock. Position */
#define TC_CMR_CLKI_1                         (TC_CMR_CLKI_1_Val << TC_CMR_CLKI_Pos)               /* (TC_CMR) Counter is incremented on falling edge of the clock. Position */
#define TC_CMR_BURST_Pos                      _UINT32_(4)                                          /* (TC_CMR) Burst Signal Selection Position */
#define TC_CMR_BURST_Msk                      (_UINT32_(0x3) << TC_CMR_BURST_Pos)                  /* (TC_CMR) Burst Signal Selection Mask */
#define TC_CMR_BURST(value)                   (TC_CMR_BURST_Msk & (_UINT32_(value) << TC_CMR_BURST_Pos)) /* Assignment of value for BURST in the TC_CMR register */
#define   TC_CMR_BURST_NONE_Val               _UINT32_(0x0)                                        /* (TC_CMR) The clock is not gated by an external signal.  */
#define   TC_CMR_BURST_XC0_Val                _UINT32_(0x1)                                        /* (TC_CMR) XC0 is ANDed with the selected clock.  */
#define   TC_CMR_BURST_XC1_Val                _UINT32_(0x2)                                        /* (TC_CMR) XC1 is ANDed with the selected clock.  */
#define   TC_CMR_BURST_XC2_Val                _UINT32_(0x3)                                        /* (TC_CMR) XC2 is ANDed with the selected clock.  */
#define TC_CMR_BURST_NONE                     (TC_CMR_BURST_NONE_Val << TC_CMR_BURST_Pos)          /* (TC_CMR) The clock is not gated by an external signal. Position */
#define TC_CMR_BURST_XC0                      (TC_CMR_BURST_XC0_Val << TC_CMR_BURST_Pos)           /* (TC_CMR) XC0 is ANDed with the selected clock. Position */
#define TC_CMR_BURST_XC1                      (TC_CMR_BURST_XC1_Val << TC_CMR_BURST_Pos)           /* (TC_CMR) XC1 is ANDed with the selected clock. Position */
#define TC_CMR_BURST_XC2                      (TC_CMR_BURST_XC2_Val << TC_CMR_BURST_Pos)           /* (TC_CMR) XC2 is ANDed with the selected clock. Position */
#define TC_CMR_Msk                            _UINT32_(0x0000003F)                                 /* (TC_CMR) Register Mask  */

/* CAPTURE mode */
#define TC_CMR_CAPTURE_TCCLKS_Pos             _UINT32_(0)                                          /* (TC_CMR) Clock Selection Position */
#define TC_CMR_CAPTURE_TCCLKS_Msk             (_UINT32_(0x7) << TC_CMR_CAPTURE_TCCLKS_Pos)         /* (TC_CMR) Clock Selection Mask */
#define TC_CMR_CAPTURE_TCCLKS(value)          (TC_CMR_CAPTURE_TCCLKS_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_TCCLKS_Pos))
#define   TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK1_Val _UINT32_(0x0)                                        /* (TC_CMR) Clock selected: internal GCLK [TC_ID] clock signal (from PMC)  */
#define   TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK2_Val _UINT32_(0x1)                                        /* (TC_CMR) Clock selected: internal MCK0/8 clock signal (from PMC)  */
#define   TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK3_Val _UINT32_(0x2)                                        /* (TC_CMR) Clock selected: internal MCK0/32 clock signal (from PMC)  */
#define   TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK4_Val _UINT32_(0x3)                                        /* (TC_CMR) Clock selected: internal MCK0/128 clock signal (from PMC)  */
#define   TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK5_Val _UINT32_(0x4)                                        /* (TC_CMR) Clock selected: internal TD_SLCK clock signal (from PMC)  */
#define   TC_CMR_CAPTURE_TCCLKS_XC0_Val       _UINT32_(0x5)                                        /* (TC_CMR) Clock selected: XC0  */
#define   TC_CMR_CAPTURE_TCCLKS_XC1_Val       _UINT32_(0x6)                                        /* (TC_CMR) Clock selected: XC1  */
#define   TC_CMR_CAPTURE_TCCLKS_XC2_Val       _UINT32_(0x7)                                        /* (TC_CMR) Clock selected: XC2  */
#define TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK1    (TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK1_Val << TC_CMR_CAPTURE_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal GCLK [TC_ID] clock signal (from PMC) Position */
#define TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK2    (TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK2_Val << TC_CMR_CAPTURE_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/8 clock signal (from PMC) Position */
#define TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK3    (TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK3_Val << TC_CMR_CAPTURE_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/32 clock signal (from PMC) Position */
#define TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK4    (TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK4_Val << TC_CMR_CAPTURE_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/128 clock signal (from PMC) Position */
#define TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK5    (TC_CMR_CAPTURE_TCCLKS_TIMER_CLOCK5_Val << TC_CMR_CAPTURE_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal TD_SLCK clock signal (from PMC) Position */
#define TC_CMR_CAPTURE_TCCLKS_XC0             (TC_CMR_CAPTURE_TCCLKS_XC0_Val << TC_CMR_CAPTURE_TCCLKS_Pos) /* (TC_CMR) Clock selected: XC0 Position */
#define TC_CMR_CAPTURE_TCCLKS_XC1             (TC_CMR_CAPTURE_TCCLKS_XC1_Val << TC_CMR_CAPTURE_TCCLKS_Pos) /* (TC_CMR) Clock selected: XC1 Position */
#define TC_CMR_CAPTURE_TCCLKS_XC2             (TC_CMR_CAPTURE_TCCLKS_XC2_Val << TC_CMR_CAPTURE_TCCLKS_Pos) /* (TC_CMR) Clock selected: XC2 Position */
#define TC_CMR_CAPTURE_CLKI_Pos               _UINT32_(3)                                          /* (TC_CMR) Clock Invert Position */
#define TC_CMR_CAPTURE_CLKI_Msk               (_UINT32_(0x1) << TC_CMR_CAPTURE_CLKI_Pos)           /* (TC_CMR) Clock Invert Mask */
#define TC_CMR_CAPTURE_CLKI(value)            (TC_CMR_CAPTURE_CLKI_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_CLKI_Pos))
#define   TC_CMR_CAPTURE_CLKI_0_Val           _UINT32_(0x0)                                        /* (TC_CMR) Counter is incremented on rising edge of the clock.  */
#define   TC_CMR_CAPTURE_CLKI_1_Val           _UINT32_(0x1)                                        /* (TC_CMR) Counter is incremented on falling edge of the clock.  */
#define TC_CMR_CAPTURE_CLKI_0                 (TC_CMR_CAPTURE_CLKI_0_Val << TC_CMR_CAPTURE_CLKI_Pos) /* (TC_CMR) Counter is incremented on rising edge of the clock. Position */
#define TC_CMR_CAPTURE_CLKI_1                 (TC_CMR_CAPTURE_CLKI_1_Val << TC_CMR_CAPTURE_CLKI_Pos) /* (TC_CMR) Counter is incremented on falling edge of the clock. Position */
#define TC_CMR_CAPTURE_BURST_Pos              _UINT32_(4)                                          /* (TC_CMR) Burst Signal Selection Position */
#define TC_CMR_CAPTURE_BURST_Msk              (_UINT32_(0x3) << TC_CMR_CAPTURE_BURST_Pos)          /* (TC_CMR) Burst Signal Selection Mask */
#define TC_CMR_CAPTURE_BURST(value)           (TC_CMR_CAPTURE_BURST_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_BURST_Pos))
#define   TC_CMR_CAPTURE_BURST_NONE_Val       _UINT32_(0x0)                                        /* (TC_CMR) The clock is not gated by an external signal.  */
#define   TC_CMR_CAPTURE_BURST_XC0_Val        _UINT32_(0x1)                                        /* (TC_CMR) XC0 is ANDed with the selected clock.  */
#define   TC_CMR_CAPTURE_BURST_XC1_Val        _UINT32_(0x2)                                        /* (TC_CMR) XC1 is ANDed with the selected clock.  */
#define   TC_CMR_CAPTURE_BURST_XC2_Val        _UINT32_(0x3)                                        /* (TC_CMR) XC2 is ANDed with the selected clock.  */
#define TC_CMR_CAPTURE_BURST_NONE             (TC_CMR_CAPTURE_BURST_NONE_Val << TC_CMR_CAPTURE_BURST_Pos) /* (TC_CMR) The clock is not gated by an external signal. Position */
#define TC_CMR_CAPTURE_BURST_XC0              (TC_CMR_CAPTURE_BURST_XC0_Val << TC_CMR_CAPTURE_BURST_Pos) /* (TC_CMR) XC0 is ANDed with the selected clock. Position */
#define TC_CMR_CAPTURE_BURST_XC1              (TC_CMR_CAPTURE_BURST_XC1_Val << TC_CMR_CAPTURE_BURST_Pos) /* (TC_CMR) XC1 is ANDed with the selected clock. Position */
#define TC_CMR_CAPTURE_BURST_XC2              (TC_CMR_CAPTURE_BURST_XC2_Val << TC_CMR_CAPTURE_BURST_Pos) /* (TC_CMR) XC2 is ANDed with the selected clock. Position */
#define TC_CMR_CAPTURE_LDBSTOP_Pos            _UINT32_(6)                                          /* (TC_CMR) Counter Clock Stopped with RB Loading Position */
#define TC_CMR_CAPTURE_LDBSTOP_Msk            (_UINT32_(0x1) << TC_CMR_CAPTURE_LDBSTOP_Pos)        /* (TC_CMR) Counter Clock Stopped with RB Loading Mask */
#define TC_CMR_CAPTURE_LDBSTOP(value)         (TC_CMR_CAPTURE_LDBSTOP_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_LDBSTOP_Pos))
#define   TC_CMR_CAPTURE_LDBSTOP_0_Val        _UINT32_(0x0)                                        /* (TC_CMR) Counter clock is not stopped when RB loading occurs.  */
#define   TC_CMR_CAPTURE_LDBSTOP_1_Val        _UINT32_(0x1)                                        /* (TC_CMR) Counter clock is stopped when RB loading occurs.  */
#define TC_CMR_CAPTURE_LDBSTOP_0              (TC_CMR_CAPTURE_LDBSTOP_0_Val << TC_CMR_CAPTURE_LDBSTOP_Pos) /* (TC_CMR) Counter clock is not stopped when RB loading occurs. Position */
#define TC_CMR_CAPTURE_LDBSTOP_1              (TC_CMR_CAPTURE_LDBSTOP_1_Val << TC_CMR_CAPTURE_LDBSTOP_Pos) /* (TC_CMR) Counter clock is stopped when RB loading occurs. Position */
#define TC_CMR_CAPTURE_LDBDIS_Pos             _UINT32_(7)                                          /* (TC_CMR) Counter Clock Disable with RB Loading Position */
#define TC_CMR_CAPTURE_LDBDIS_Msk             (_UINT32_(0x1) << TC_CMR_CAPTURE_LDBDIS_Pos)         /* (TC_CMR) Counter Clock Disable with RB Loading Mask */
#define TC_CMR_CAPTURE_LDBDIS(value)          (TC_CMR_CAPTURE_LDBDIS_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_LDBDIS_Pos))
#define   TC_CMR_CAPTURE_LDBDIS_0_Val         _UINT32_(0x0)                                        /* (TC_CMR) Counter clock is not disabled when RB loading occurs.  */
#define   TC_CMR_CAPTURE_LDBDIS_1_Val         _UINT32_(0x1)                                        /* (TC_CMR) Counter clock is disabled when RB loading occurs.  */
#define TC_CMR_CAPTURE_LDBDIS_0               (TC_CMR_CAPTURE_LDBDIS_0_Val << TC_CMR_CAPTURE_LDBDIS_Pos) /* (TC_CMR) Counter clock is not disabled when RB loading occurs. Position */
#define TC_CMR_CAPTURE_LDBDIS_1               (TC_CMR_CAPTURE_LDBDIS_1_Val << TC_CMR_CAPTURE_LDBDIS_Pos) /* (TC_CMR) Counter clock is disabled when RB loading occurs. Position */
#define TC_CMR_CAPTURE_ETRGEDG_Pos            _UINT32_(8)                                          /* (TC_CMR) External Trigger Edge Selection Position */
#define TC_CMR_CAPTURE_ETRGEDG_Msk            (_UINT32_(0x3) << TC_CMR_CAPTURE_ETRGEDG_Pos)        /* (TC_CMR) External Trigger Edge Selection Mask */
#define TC_CMR_CAPTURE_ETRGEDG(value)         (TC_CMR_CAPTURE_ETRGEDG_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_ETRGEDG_Pos))
#define   TC_CMR_CAPTURE_ETRGEDG_NONE_Val     _UINT32_(0x0)                                        /* (TC_CMR) The clock is not gated by an external signal.  */
#define   TC_CMR_CAPTURE_ETRGEDG_RISING_Val   _UINT32_(0x1)                                        /* (TC_CMR) Rising edge  */
#define   TC_CMR_CAPTURE_ETRGEDG_FALLING_Val  _UINT32_(0x2)                                        /* (TC_CMR) Falling edge  */
#define   TC_CMR_CAPTURE_ETRGEDG_EDGE_Val     _UINT32_(0x3)                                        /* (TC_CMR) Each edge  */
#define TC_CMR_CAPTURE_ETRGEDG_NONE           (TC_CMR_CAPTURE_ETRGEDG_NONE_Val << TC_CMR_CAPTURE_ETRGEDG_Pos) /* (TC_CMR) The clock is not gated by an external signal. Position */
#define TC_CMR_CAPTURE_ETRGEDG_RISING         (TC_CMR_CAPTURE_ETRGEDG_RISING_Val << TC_CMR_CAPTURE_ETRGEDG_Pos) /* (TC_CMR) Rising edge Position */
#define TC_CMR_CAPTURE_ETRGEDG_FALLING        (TC_CMR_CAPTURE_ETRGEDG_FALLING_Val << TC_CMR_CAPTURE_ETRGEDG_Pos) /* (TC_CMR) Falling edge Position */
#define TC_CMR_CAPTURE_ETRGEDG_EDGE           (TC_CMR_CAPTURE_ETRGEDG_EDGE_Val << TC_CMR_CAPTURE_ETRGEDG_Pos) /* (TC_CMR) Each edge Position */
#define TC_CMR_CAPTURE_ABETRG_Pos             _UINT32_(10)                                         /* (TC_CMR) TIOAx or TIOBx External Trigger Selection Position */
#define TC_CMR_CAPTURE_ABETRG_Msk             (_UINT32_(0x1) << TC_CMR_CAPTURE_ABETRG_Pos)         /* (TC_CMR) TIOAx or TIOBx External Trigger Selection Mask */
#define TC_CMR_CAPTURE_ABETRG(value)          (TC_CMR_CAPTURE_ABETRG_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_ABETRG_Pos))
#define   TC_CMR_CAPTURE_ABETRG_0_Val         _UINT32_(0x0)                                        /* (TC_CMR) TIOBx is used as an external trigger.  */
#define   TC_CMR_CAPTURE_ABETRG_1_Val         _UINT32_(0x1)                                        /* (TC_CMR) TIOAx is used as an external trigger.  */
#define TC_CMR_CAPTURE_ABETRG_0               (TC_CMR_CAPTURE_ABETRG_0_Val << TC_CMR_CAPTURE_ABETRG_Pos) /* (TC_CMR) TIOBx is used as an external trigger. Position */
#define TC_CMR_CAPTURE_ABETRG_1               (TC_CMR_CAPTURE_ABETRG_1_Val << TC_CMR_CAPTURE_ABETRG_Pos) /* (TC_CMR) TIOAx is used as an external trigger. Position */
#define TC_CMR_CAPTURE_CPCTRG_Pos             _UINT32_(14)                                         /* (TC_CMR) RC Compare Trigger Enable Position */
#define TC_CMR_CAPTURE_CPCTRG_Msk             (_UINT32_(0x1) << TC_CMR_CAPTURE_CPCTRG_Pos)         /* (TC_CMR) RC Compare Trigger Enable Mask */
#define TC_CMR_CAPTURE_CPCTRG(value)          (TC_CMR_CAPTURE_CPCTRG_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_CPCTRG_Pos))
#define   TC_CMR_CAPTURE_CPCTRG_0_Val         _UINT32_(0x0)                                        /* (TC_CMR) RC Compare has no effect on the counter and its clock.  */
#define   TC_CMR_CAPTURE_CPCTRG_1_Val         _UINT32_(0x1)                                        /* (TC_CMR) RC Compare resets the counter and starts the counter clock.  */
#define TC_CMR_CAPTURE_CPCTRG_0               (TC_CMR_CAPTURE_CPCTRG_0_Val << TC_CMR_CAPTURE_CPCTRG_Pos) /* (TC_CMR) RC Compare has no effect on the counter and its clock. Position */
#define TC_CMR_CAPTURE_CPCTRG_1               (TC_CMR_CAPTURE_CPCTRG_1_Val << TC_CMR_CAPTURE_CPCTRG_Pos) /* (TC_CMR) RC Compare resets the counter and starts the counter clock. Position */
#define TC_CMR_CAPTURE_WAVE_Pos               _UINT32_(15)                                         /* (TC_CMR) Waveform Mode Position */
#define TC_CMR_CAPTURE_WAVE_Msk               (_UINT32_(0x1) << TC_CMR_CAPTURE_WAVE_Pos)           /* (TC_CMR) Waveform Mode Mask */
#define TC_CMR_CAPTURE_WAVE(value)            (TC_CMR_CAPTURE_WAVE_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_WAVE_Pos))
#define   TC_CMR_CAPTURE_WAVE_0_Val           _UINT32_(0x0)                                        /* (TC_CMR) Capture mode is enabled.  */
#define   TC_CMR_CAPTURE_WAVE_1_Val           _UINT32_(0x1)                                        /* (TC_CMR) Capture mode is disabled (Waveform mode is enabled).  */
#define TC_CMR_CAPTURE_WAVE_0                 (TC_CMR_CAPTURE_WAVE_0_Val << TC_CMR_CAPTURE_WAVE_Pos) /* (TC_CMR) Capture mode is enabled. Position */
#define TC_CMR_CAPTURE_WAVE_1                 (TC_CMR_CAPTURE_WAVE_1_Val << TC_CMR_CAPTURE_WAVE_Pos) /* (TC_CMR) Capture mode is disabled (Waveform mode is enabled). Position */
#define TC_CMR_CAPTURE_LDRA_Pos               _UINT32_(16)                                         /* (TC_CMR) RA Loading Edge Selection Position */
#define TC_CMR_CAPTURE_LDRA_Msk               (_UINT32_(0x3) << TC_CMR_CAPTURE_LDRA_Pos)           /* (TC_CMR) RA Loading Edge Selection Mask */
#define TC_CMR_CAPTURE_LDRA(value)            (TC_CMR_CAPTURE_LDRA_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_LDRA_Pos))
#define   TC_CMR_CAPTURE_LDRA_NONE_Val        _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_CAPTURE_LDRA_RISING_Val      _UINT32_(0x1)                                        /* (TC_CMR) Rising edge of TIOAx  */
#define   TC_CMR_CAPTURE_LDRA_FALLING_Val     _UINT32_(0x2)                                        /* (TC_CMR) Falling edge of TIOAx  */
#define   TC_CMR_CAPTURE_LDRA_EDGE_Val        _UINT32_(0x3)                                        /* (TC_CMR) Each edge of TIOAx  */
#define TC_CMR_CAPTURE_LDRA_NONE              (TC_CMR_CAPTURE_LDRA_NONE_Val << TC_CMR_CAPTURE_LDRA_Pos) /* (TC_CMR) None Position */
#define TC_CMR_CAPTURE_LDRA_RISING            (TC_CMR_CAPTURE_LDRA_RISING_Val << TC_CMR_CAPTURE_LDRA_Pos) /* (TC_CMR) Rising edge of TIOAx Position */
#define TC_CMR_CAPTURE_LDRA_FALLING           (TC_CMR_CAPTURE_LDRA_FALLING_Val << TC_CMR_CAPTURE_LDRA_Pos) /* (TC_CMR) Falling edge of TIOAx Position */
#define TC_CMR_CAPTURE_LDRA_EDGE              (TC_CMR_CAPTURE_LDRA_EDGE_Val << TC_CMR_CAPTURE_LDRA_Pos) /* (TC_CMR) Each edge of TIOAx Position */
#define TC_CMR_CAPTURE_LDRB_Pos               _UINT32_(18)                                         /* (TC_CMR) RB Loading Edge Selection Position */
#define TC_CMR_CAPTURE_LDRB_Msk               (_UINT32_(0x3) << TC_CMR_CAPTURE_LDRB_Pos)           /* (TC_CMR) RB Loading Edge Selection Mask */
#define TC_CMR_CAPTURE_LDRB(value)            (TC_CMR_CAPTURE_LDRB_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_LDRB_Pos))
#define   TC_CMR_CAPTURE_LDRB_NONE_Val        _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_CAPTURE_LDRB_RISING_Val      _UINT32_(0x1)                                        /* (TC_CMR) Rising edge of TIOAx  */
#define   TC_CMR_CAPTURE_LDRB_FALLING_Val     _UINT32_(0x2)                                        /* (TC_CMR) Falling edge of TIOAx  */
#define   TC_CMR_CAPTURE_LDRB_EDGE_Val        _UINT32_(0x3)                                        /* (TC_CMR) Each edge of TIOAx  */
#define TC_CMR_CAPTURE_LDRB_NONE              (TC_CMR_CAPTURE_LDRB_NONE_Val << TC_CMR_CAPTURE_LDRB_Pos) /* (TC_CMR) None Position */
#define TC_CMR_CAPTURE_LDRB_RISING            (TC_CMR_CAPTURE_LDRB_RISING_Val << TC_CMR_CAPTURE_LDRB_Pos) /* (TC_CMR) Rising edge of TIOAx Position */
#define TC_CMR_CAPTURE_LDRB_FALLING           (TC_CMR_CAPTURE_LDRB_FALLING_Val << TC_CMR_CAPTURE_LDRB_Pos) /* (TC_CMR) Falling edge of TIOAx Position */
#define TC_CMR_CAPTURE_LDRB_EDGE              (TC_CMR_CAPTURE_LDRB_EDGE_Val << TC_CMR_CAPTURE_LDRB_Pos) /* (TC_CMR) Each edge of TIOAx Position */
#define TC_CMR_CAPTURE_SBSMPLR_Pos            _UINT32_(20)                                         /* (TC_CMR) Loading Edge Subsampling Ratio Position */
#define TC_CMR_CAPTURE_SBSMPLR_Msk            (_UINT32_(0x7) << TC_CMR_CAPTURE_SBSMPLR_Pos)        /* (TC_CMR) Loading Edge Subsampling Ratio Mask */
#define TC_CMR_CAPTURE_SBSMPLR(value)         (TC_CMR_CAPTURE_SBSMPLR_Msk & (_UINT32_(value) << TC_CMR_CAPTURE_SBSMPLR_Pos))
#define   TC_CMR_CAPTURE_SBSMPLR_ONE_Val      _UINT32_(0x0)                                        /* (TC_CMR) Load a Capture register each selected edge  */
#define   TC_CMR_CAPTURE_SBSMPLR_HALF_Val     _UINT32_(0x1)                                        /* (TC_CMR) Load a Capture register every 2 selected edges  */
#define   TC_CMR_CAPTURE_SBSMPLR_FOURTH_Val   _UINT32_(0x2)                                        /* (TC_CMR) Load a Capture register every 4 selected edges  */
#define   TC_CMR_CAPTURE_SBSMPLR_EIGHTH_Val   _UINT32_(0x3)                                        /* (TC_CMR) Load a Capture register every 8 selected edges  */
#define   TC_CMR_CAPTURE_SBSMPLR_SIXTEENTH_Val _UINT32_(0x4)                                        /* (TC_CMR) Load a Capture register every 16 selected edges  */
#define TC_CMR_CAPTURE_SBSMPLR_ONE            (TC_CMR_CAPTURE_SBSMPLR_ONE_Val << TC_CMR_CAPTURE_SBSMPLR_Pos) /* (TC_CMR) Load a Capture register each selected edge Position */
#define TC_CMR_CAPTURE_SBSMPLR_HALF           (TC_CMR_CAPTURE_SBSMPLR_HALF_Val << TC_CMR_CAPTURE_SBSMPLR_Pos) /* (TC_CMR) Load a Capture register every 2 selected edges Position */
#define TC_CMR_CAPTURE_SBSMPLR_FOURTH         (TC_CMR_CAPTURE_SBSMPLR_FOURTH_Val << TC_CMR_CAPTURE_SBSMPLR_Pos) /* (TC_CMR) Load a Capture register every 4 selected edges Position */
#define TC_CMR_CAPTURE_SBSMPLR_EIGHTH         (TC_CMR_CAPTURE_SBSMPLR_EIGHTH_Val << TC_CMR_CAPTURE_SBSMPLR_Pos) /* (TC_CMR) Load a Capture register every 8 selected edges Position */
#define TC_CMR_CAPTURE_SBSMPLR_SIXTEENTH      (TC_CMR_CAPTURE_SBSMPLR_SIXTEENTH_Val << TC_CMR_CAPTURE_SBSMPLR_Pos) /* (TC_CMR) Load a Capture register every 16 selected edges Position */
#define TC_CMR_CAPTURE_Msk                    _UINT32_(0x007FC7FF)                                 /* (TC_CMR_CAPTURE) Register Mask  */

/* WAVEFORM mode */
#define TC_CMR_WAVEFORM_TCCLKS_Pos            _UINT32_(0)                                          /* (TC_CMR) Clock Selection Position */
#define TC_CMR_WAVEFORM_TCCLKS_Msk            (_UINT32_(0x7) << TC_CMR_WAVEFORM_TCCLKS_Pos)        /* (TC_CMR) Clock Selection Mask */
#define TC_CMR_WAVEFORM_TCCLKS(value)         (TC_CMR_WAVEFORM_TCCLKS_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_TCCLKS_Pos))
#define   TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK1_Val _UINT32_(0x0)                                        /* (TC_CMR) Clock selected: internal GCLK [TC_ID] clock signal (from PMC)  */
#define   TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK2_Val _UINT32_(0x1)                                        /* (TC_CMR) Clock selected: internal MCK0/8 clock signal (from PMC)  */
#define   TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK3_Val _UINT32_(0x2)                                        /* (TC_CMR) Clock selected: internal MCK0/32 clock signal (from PMC)  */
#define   TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK4_Val _UINT32_(0x3)                                        /* (TC_CMR) Clock selected: internal MCK0/128 clock signal (from PMC)  */
#define   TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK5_Val _UINT32_(0x4)                                        /* (TC_CMR) Clock selected: internal TD_SLCK clock signal (from PMC)  */
#define   TC_CMR_WAVEFORM_TCCLKS_XC0_Val      _UINT32_(0x5)                                        /* (TC_CMR) Clock selected: XC0  */
#define   TC_CMR_WAVEFORM_TCCLKS_XC1_Val      _UINT32_(0x6)                                        /* (TC_CMR) Clock selected: XC1  */
#define   TC_CMR_WAVEFORM_TCCLKS_XC2_Val      _UINT32_(0x7)                                        /* (TC_CMR) Clock selected: XC2  */
#define TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK1   (TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK1_Val << TC_CMR_WAVEFORM_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal GCLK [TC_ID] clock signal (from PMC) Position */
#define TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK2   (TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK2_Val << TC_CMR_WAVEFORM_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/8 clock signal (from PMC) Position */
#define TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK3   (TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK3_Val << TC_CMR_WAVEFORM_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/32 clock signal (from PMC) Position */
#define TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK4   (TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK4_Val << TC_CMR_WAVEFORM_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal MCK0/128 clock signal (from PMC) Position */
#define TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK5   (TC_CMR_WAVEFORM_TCCLKS_TIMER_CLOCK5_Val << TC_CMR_WAVEFORM_TCCLKS_Pos) /* (TC_CMR) Clock selected: internal TD_SLCK clock signal (from PMC) Position */
#define TC_CMR_WAVEFORM_TCCLKS_XC0            (TC_CMR_WAVEFORM_TCCLKS_XC0_Val << TC_CMR_WAVEFORM_TCCLKS_Pos) /* (TC_CMR) Clock selected: XC0 Position */
#define TC_CMR_WAVEFORM_TCCLKS_XC1            (TC_CMR_WAVEFORM_TCCLKS_XC1_Val << TC_CMR_WAVEFORM_TCCLKS_Pos) /* (TC_CMR) Clock selected: XC1 Position */
#define TC_CMR_WAVEFORM_TCCLKS_XC2            (TC_CMR_WAVEFORM_TCCLKS_XC2_Val << TC_CMR_WAVEFORM_TCCLKS_Pos) /* (TC_CMR) Clock selected: XC2 Position */
#define TC_CMR_WAVEFORM_CLKI_Pos              _UINT32_(3)                                          /* (TC_CMR) Clock Invert Position */
#define TC_CMR_WAVEFORM_CLKI_Msk              (_UINT32_(0x1) << TC_CMR_WAVEFORM_CLKI_Pos)          /* (TC_CMR) Clock Invert Mask */
#define TC_CMR_WAVEFORM_CLKI(value)           (TC_CMR_WAVEFORM_CLKI_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_CLKI_Pos))
#define   TC_CMR_WAVEFORM_CLKI_0_Val          _UINT32_(0x0)                                        /* (TC_CMR) Counter is incremented on rising edge of the clock.  */
#define   TC_CMR_WAVEFORM_CLKI_1_Val          _UINT32_(0x1)                                        /* (TC_CMR) Counter is incremented on falling edge of the clock.  */
#define TC_CMR_WAVEFORM_CLKI_0                (TC_CMR_WAVEFORM_CLKI_0_Val << TC_CMR_WAVEFORM_CLKI_Pos) /* (TC_CMR) Counter is incremented on rising edge of the clock. Position */
#define TC_CMR_WAVEFORM_CLKI_1                (TC_CMR_WAVEFORM_CLKI_1_Val << TC_CMR_WAVEFORM_CLKI_Pos) /* (TC_CMR) Counter is incremented on falling edge of the clock. Position */
#define TC_CMR_WAVEFORM_BURST_Pos             _UINT32_(4)                                          /* (TC_CMR) Burst Signal Selection Position */
#define TC_CMR_WAVEFORM_BURST_Msk             (_UINT32_(0x3) << TC_CMR_WAVEFORM_BURST_Pos)         /* (TC_CMR) Burst Signal Selection Mask */
#define TC_CMR_WAVEFORM_BURST(value)          (TC_CMR_WAVEFORM_BURST_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_BURST_Pos))
#define   TC_CMR_WAVEFORM_BURST_NONE_Val      _UINT32_(0x0)                                        /* (TC_CMR) The clock is not gated by an external signal.  */
#define   TC_CMR_WAVEFORM_BURST_XC0_Val       _UINT32_(0x1)                                        /* (TC_CMR) XC0 is ANDed with the selected clock.  */
#define   TC_CMR_WAVEFORM_BURST_XC1_Val       _UINT32_(0x2)                                        /* (TC_CMR) XC1 is ANDed with the selected clock.  */
#define   TC_CMR_WAVEFORM_BURST_XC2_Val       _UINT32_(0x3)                                        /* (TC_CMR) XC2 is ANDed with the selected clock.  */
#define TC_CMR_WAVEFORM_BURST_NONE            (TC_CMR_WAVEFORM_BURST_NONE_Val << TC_CMR_WAVEFORM_BURST_Pos) /* (TC_CMR) The clock is not gated by an external signal. Position */
#define TC_CMR_WAVEFORM_BURST_XC0             (TC_CMR_WAVEFORM_BURST_XC0_Val << TC_CMR_WAVEFORM_BURST_Pos) /* (TC_CMR) XC0 is ANDed with the selected clock. Position */
#define TC_CMR_WAVEFORM_BURST_XC1             (TC_CMR_WAVEFORM_BURST_XC1_Val << TC_CMR_WAVEFORM_BURST_Pos) /* (TC_CMR) XC1 is ANDed with the selected clock. Position */
#define TC_CMR_WAVEFORM_BURST_XC2             (TC_CMR_WAVEFORM_BURST_XC2_Val << TC_CMR_WAVEFORM_BURST_Pos) /* (TC_CMR) XC2 is ANDed with the selected clock. Position */
#define TC_CMR_WAVEFORM_CPCSTOP_Pos           _UINT32_(6)                                          /* (TC_CMR) Counter Clock Stopped with RC Compare Position */
#define TC_CMR_WAVEFORM_CPCSTOP_Msk           (_UINT32_(0x1) << TC_CMR_WAVEFORM_CPCSTOP_Pos)       /* (TC_CMR) Counter Clock Stopped with RC Compare Mask */
#define TC_CMR_WAVEFORM_CPCSTOP(value)        (TC_CMR_WAVEFORM_CPCSTOP_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_CPCSTOP_Pos))
#define   TC_CMR_WAVEFORM_CPCSTOP_0_Val       _UINT32_(0x0)                                        /* (TC_CMR) Counter clock is not stopped when counter reaches RC.  */
#define   TC_CMR_WAVEFORM_CPCSTOP_1_Val       _UINT32_(0x1)                                        /* (TC_CMR) Counter clock is stopped when counter reaches RC.  */
#define TC_CMR_WAVEFORM_CPCSTOP_0             (TC_CMR_WAVEFORM_CPCSTOP_0_Val << TC_CMR_WAVEFORM_CPCSTOP_Pos) /* (TC_CMR) Counter clock is not stopped when counter reaches RC. Position */
#define TC_CMR_WAVEFORM_CPCSTOP_1             (TC_CMR_WAVEFORM_CPCSTOP_1_Val << TC_CMR_WAVEFORM_CPCSTOP_Pos) /* (TC_CMR) Counter clock is stopped when counter reaches RC. Position */
#define TC_CMR_WAVEFORM_CPCDIS_Pos            _UINT32_(7)                                          /* (TC_CMR) Counter Clock Disable with RC Compare Position */
#define TC_CMR_WAVEFORM_CPCDIS_Msk            (_UINT32_(0x1) << TC_CMR_WAVEFORM_CPCDIS_Pos)        /* (TC_CMR) Counter Clock Disable with RC Compare Mask */
#define TC_CMR_WAVEFORM_CPCDIS(value)         (TC_CMR_WAVEFORM_CPCDIS_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_CPCDIS_Pos))
#define   TC_CMR_WAVEFORM_CPCDIS_0_Val        _UINT32_(0x0)                                        /* (TC_CMR) Counter clock is not disabled when counter reaches RC.  */
#define   TC_CMR_WAVEFORM_CPCDIS_1_Val        _UINT32_(0x1)                                        /* (TC_CMR) Counter clock is disabled when counter reaches RC.  */
#define TC_CMR_WAVEFORM_CPCDIS_0              (TC_CMR_WAVEFORM_CPCDIS_0_Val << TC_CMR_WAVEFORM_CPCDIS_Pos) /* (TC_CMR) Counter clock is not disabled when counter reaches RC. Position */
#define TC_CMR_WAVEFORM_CPCDIS_1              (TC_CMR_WAVEFORM_CPCDIS_1_Val << TC_CMR_WAVEFORM_CPCDIS_Pos) /* (TC_CMR) Counter clock is disabled when counter reaches RC. Position */
#define TC_CMR_WAVEFORM_EEVTEDG_Pos           _UINT32_(8)                                          /* (TC_CMR) External Event Edge Selection Position */
#define TC_CMR_WAVEFORM_EEVTEDG_Msk           (_UINT32_(0x3) << TC_CMR_WAVEFORM_EEVTEDG_Pos)       /* (TC_CMR) External Event Edge Selection Mask */
#define TC_CMR_WAVEFORM_EEVTEDG(value)        (TC_CMR_WAVEFORM_EEVTEDG_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_EEVTEDG_Pos))
#define   TC_CMR_WAVEFORM_EEVTEDG_NONE_Val    _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_EEVTEDG_RISING_Val  _UINT32_(0x1)                                        /* (TC_CMR) Rising edge  */
#define   TC_CMR_WAVEFORM_EEVTEDG_FALLING_Val _UINT32_(0x2)                                        /* (TC_CMR) Falling edge  */
#define   TC_CMR_WAVEFORM_EEVTEDG_EDGE_Val    _UINT32_(0x3)                                        /* (TC_CMR) Each edge  */
#define TC_CMR_WAVEFORM_EEVTEDG_NONE          (TC_CMR_WAVEFORM_EEVTEDG_NONE_Val << TC_CMR_WAVEFORM_EEVTEDG_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_EEVTEDG_RISING        (TC_CMR_WAVEFORM_EEVTEDG_RISING_Val << TC_CMR_WAVEFORM_EEVTEDG_Pos) /* (TC_CMR) Rising edge Position */
#define TC_CMR_WAVEFORM_EEVTEDG_FALLING       (TC_CMR_WAVEFORM_EEVTEDG_FALLING_Val << TC_CMR_WAVEFORM_EEVTEDG_Pos) /* (TC_CMR) Falling edge Position */
#define TC_CMR_WAVEFORM_EEVTEDG_EDGE          (TC_CMR_WAVEFORM_EEVTEDG_EDGE_Val << TC_CMR_WAVEFORM_EEVTEDG_Pos) /* (TC_CMR) Each edge Position */
#define TC_CMR_WAVEFORM_EEVT_Pos              _UINT32_(10)                                         /* (TC_CMR) External Event Selection Position */
#define TC_CMR_WAVEFORM_EEVT_Msk              (_UINT32_(0x3) << TC_CMR_WAVEFORM_EEVT_Pos)          /* (TC_CMR) External Event Selection Mask */
#define TC_CMR_WAVEFORM_EEVT(value)           (TC_CMR_WAVEFORM_EEVT_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_EEVT_Pos))
#define   TC_CMR_WAVEFORM_EEVT_TIOB_Val       _UINT32_(0x0)                                        /* (TC_CMR) TIOB  */
#define   TC_CMR_WAVEFORM_EEVT_XC0_Val        _UINT32_(0x1)                                        /* (TC_CMR) XC0  */
#define   TC_CMR_WAVEFORM_EEVT_XC1_Val        _UINT32_(0x2)                                        /* (TC_CMR) XC1  */
#define   TC_CMR_WAVEFORM_EEVT_XC2_Val        _UINT32_(0x3)                                        /* (TC_CMR) XC2  */
#define TC_CMR_WAVEFORM_EEVT_TIOB             (TC_CMR_WAVEFORM_EEVT_TIOB_Val << TC_CMR_WAVEFORM_EEVT_Pos) /* (TC_CMR) TIOB Position */
#define TC_CMR_WAVEFORM_EEVT_XC0              (TC_CMR_WAVEFORM_EEVT_XC0_Val << TC_CMR_WAVEFORM_EEVT_Pos) /* (TC_CMR) XC0 Position */
#define TC_CMR_WAVEFORM_EEVT_XC1              (TC_CMR_WAVEFORM_EEVT_XC1_Val << TC_CMR_WAVEFORM_EEVT_Pos) /* (TC_CMR) XC1 Position */
#define TC_CMR_WAVEFORM_EEVT_XC2              (TC_CMR_WAVEFORM_EEVT_XC2_Val << TC_CMR_WAVEFORM_EEVT_Pos) /* (TC_CMR) XC2 Position */
#define TC_CMR_WAVEFORM_ENETRG_Pos            _UINT32_(12)                                         /* (TC_CMR) External Event Trigger Enable Position */
#define TC_CMR_WAVEFORM_ENETRG_Msk            (_UINT32_(0x1) << TC_CMR_WAVEFORM_ENETRG_Pos)        /* (TC_CMR) External Event Trigger Enable Mask */
#define TC_CMR_WAVEFORM_ENETRG(value)         (TC_CMR_WAVEFORM_ENETRG_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_ENETRG_Pos))
#define   TC_CMR_WAVEFORM_ENETRG_0_Val        _UINT32_(0x0)                                        /* (TC_CMR) The external event has no effect on the counter and its clock.  */
#define   TC_CMR_WAVEFORM_ENETRG_1_Val        _UINT32_(0x1)                                        /* (TC_CMR) The external event resets the counter and starts the counter clock.  */
#define TC_CMR_WAVEFORM_ENETRG_0              (TC_CMR_WAVEFORM_ENETRG_0_Val << TC_CMR_WAVEFORM_ENETRG_Pos) /* (TC_CMR) The external event has no effect on the counter and its clock. Position */
#define TC_CMR_WAVEFORM_ENETRG_1              (TC_CMR_WAVEFORM_ENETRG_1_Val << TC_CMR_WAVEFORM_ENETRG_Pos) /* (TC_CMR) The external event resets the counter and starts the counter clock. Position */
#define TC_CMR_WAVEFORM_WAVSEL_Pos            _UINT32_(13)                                         /* (TC_CMR) Waveform Selection Position */
#define TC_CMR_WAVEFORM_WAVSEL_Msk            (_UINT32_(0x3) << TC_CMR_WAVEFORM_WAVSEL_Pos)        /* (TC_CMR) Waveform Selection Mask */
#define TC_CMR_WAVEFORM_WAVSEL(value)         (TC_CMR_WAVEFORM_WAVSEL_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_WAVSEL_Pos))
#define   TC_CMR_WAVEFORM_WAVSEL_UP_Val       _UINT32_(0x0)                                        /* (TC_CMR) UP mode without automatic trigger on RC Compare  */
#define   TC_CMR_WAVEFORM_WAVSEL_UPDOWN_Val   _UINT32_(0x1)                                        /* (TC_CMR) UPDOWN mode without automatic trigger on RC Compare  */
#define   TC_CMR_WAVEFORM_WAVSEL_UP_RC_Val    _UINT32_(0x2)                                        /* (TC_CMR) UP mode with automatic trigger on RC Compare  */
#define   TC_CMR_WAVEFORM_WAVSEL_UPDOWN_RC_Val _UINT32_(0x3)                                        /* (TC_CMR) UPDOWN mode with automatic trigger on RC Compare  */
#define TC_CMR_WAVEFORM_WAVSEL_UP             (TC_CMR_WAVEFORM_WAVSEL_UP_Val << TC_CMR_WAVEFORM_WAVSEL_Pos) /* (TC_CMR) UP mode without automatic trigger on RC Compare Position */
#define TC_CMR_WAVEFORM_WAVSEL_UPDOWN         (TC_CMR_WAVEFORM_WAVSEL_UPDOWN_Val << TC_CMR_WAVEFORM_WAVSEL_Pos) /* (TC_CMR) UPDOWN mode without automatic trigger on RC Compare Position */
#define TC_CMR_WAVEFORM_WAVSEL_UP_RC          (TC_CMR_WAVEFORM_WAVSEL_UP_RC_Val << TC_CMR_WAVEFORM_WAVSEL_Pos) /* (TC_CMR) UP mode with automatic trigger on RC Compare Position */
#define TC_CMR_WAVEFORM_WAVSEL_UPDOWN_RC      (TC_CMR_WAVEFORM_WAVSEL_UPDOWN_RC_Val << TC_CMR_WAVEFORM_WAVSEL_Pos) /* (TC_CMR) UPDOWN mode with automatic trigger on RC Compare Position */
#define TC_CMR_WAVEFORM_WAVE_Pos              _UINT32_(15)                                         /* (TC_CMR) Waveform Mode Position */
#define TC_CMR_WAVEFORM_WAVE_Msk              (_UINT32_(0x1) << TC_CMR_WAVEFORM_WAVE_Pos)          /* (TC_CMR) Waveform Mode Mask */
#define TC_CMR_WAVEFORM_WAVE(value)           (TC_CMR_WAVEFORM_WAVE_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_WAVE_Pos))
#define   TC_CMR_WAVEFORM_WAVE_0_Val          _UINT32_(0x0)                                        /* (TC_CMR) Waveform mode is disabled (Capture mode is enabled).  */
#define   TC_CMR_WAVEFORM_WAVE_1_Val          _UINT32_(0x1)                                        /* (TC_CMR) Waveform mode is enabled.  */
#define TC_CMR_WAVEFORM_WAVE_0                (TC_CMR_WAVEFORM_WAVE_0_Val << TC_CMR_WAVEFORM_WAVE_Pos) /* (TC_CMR) Waveform mode is disabled (Capture mode is enabled). Position */
#define TC_CMR_WAVEFORM_WAVE_1                (TC_CMR_WAVEFORM_WAVE_1_Val << TC_CMR_WAVEFORM_WAVE_Pos) /* (TC_CMR) Waveform mode is enabled. Position */
#define TC_CMR_WAVEFORM_ACPA_Pos              _UINT32_(16)                                         /* (TC_CMR) RA Compare Effect on TIOAx Position */
#define TC_CMR_WAVEFORM_ACPA_Msk              (_UINT32_(0x3) << TC_CMR_WAVEFORM_ACPA_Pos)          /* (TC_CMR) RA Compare Effect on TIOAx Mask */
#define TC_CMR_WAVEFORM_ACPA(value)           (TC_CMR_WAVEFORM_ACPA_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_ACPA_Pos))
#define   TC_CMR_WAVEFORM_ACPA_NONE_Val       _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_ACPA_SET_Val        _UINT32_(0x1)                                        /* (TC_CMR) Set  */
#define   TC_CMR_WAVEFORM_ACPA_CLEAR_Val      _UINT32_(0x2)                                        /* (TC_CMR) Clear  */
#define   TC_CMR_WAVEFORM_ACPA_TOGGLE_Val     _UINT32_(0x3)                                        /* (TC_CMR) Toggle  */
#define TC_CMR_WAVEFORM_ACPA_NONE             (TC_CMR_WAVEFORM_ACPA_NONE_Val << TC_CMR_WAVEFORM_ACPA_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_ACPA_SET              (TC_CMR_WAVEFORM_ACPA_SET_Val << TC_CMR_WAVEFORM_ACPA_Pos) /* (TC_CMR) Set Position */
#define TC_CMR_WAVEFORM_ACPA_CLEAR            (TC_CMR_WAVEFORM_ACPA_CLEAR_Val << TC_CMR_WAVEFORM_ACPA_Pos) /* (TC_CMR) Clear Position */
#define TC_CMR_WAVEFORM_ACPA_TOGGLE           (TC_CMR_WAVEFORM_ACPA_TOGGLE_Val << TC_CMR_WAVEFORM_ACPA_Pos) /* (TC_CMR) Toggle Position */
#define TC_CMR_WAVEFORM_ACPC_Pos              _UINT32_(18)                                         /* (TC_CMR) RC Compare Effect on TIOAx Position */
#define TC_CMR_WAVEFORM_ACPC_Msk              (_UINT32_(0x3) << TC_CMR_WAVEFORM_ACPC_Pos)          /* (TC_CMR) RC Compare Effect on TIOAx Mask */
#define TC_CMR_WAVEFORM_ACPC(value)           (TC_CMR_WAVEFORM_ACPC_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_ACPC_Pos))
#define   TC_CMR_WAVEFORM_ACPC_NONE_Val       _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_ACPC_SET_Val        _UINT32_(0x1)                                        /* (TC_CMR) Set  */
#define   TC_CMR_WAVEFORM_ACPC_CLEAR_Val      _UINT32_(0x2)                                        /* (TC_CMR) Clear  */
#define   TC_CMR_WAVEFORM_ACPC_TOGGLE_Val     _UINT32_(0x3)                                        /* (TC_CMR) Toggle  */
#define TC_CMR_WAVEFORM_ACPC_NONE             (TC_CMR_WAVEFORM_ACPC_NONE_Val << TC_CMR_WAVEFORM_ACPC_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_ACPC_SET              (TC_CMR_WAVEFORM_ACPC_SET_Val << TC_CMR_WAVEFORM_ACPC_Pos) /* (TC_CMR) Set Position */
#define TC_CMR_WAVEFORM_ACPC_CLEAR            (TC_CMR_WAVEFORM_ACPC_CLEAR_Val << TC_CMR_WAVEFORM_ACPC_Pos) /* (TC_CMR) Clear Position */
#define TC_CMR_WAVEFORM_ACPC_TOGGLE           (TC_CMR_WAVEFORM_ACPC_TOGGLE_Val << TC_CMR_WAVEFORM_ACPC_Pos) /* (TC_CMR) Toggle Position */
#define TC_CMR_WAVEFORM_AEEVT_Pos             _UINT32_(20)                                         /* (TC_CMR) External Event Effect on TIOAx Position */
#define TC_CMR_WAVEFORM_AEEVT_Msk             (_UINT32_(0x3) << TC_CMR_WAVEFORM_AEEVT_Pos)         /* (TC_CMR) External Event Effect on TIOAx Mask */
#define TC_CMR_WAVEFORM_AEEVT(value)          (TC_CMR_WAVEFORM_AEEVT_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_AEEVT_Pos))
#define   TC_CMR_WAVEFORM_AEEVT_NONE_Val      _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_AEEVT_SET_Val       _UINT32_(0x1)                                        /* (TC_CMR) Set  */
#define   TC_CMR_WAVEFORM_AEEVT_CLEAR_Val     _UINT32_(0x2)                                        /* (TC_CMR) Clear  */
#define   TC_CMR_WAVEFORM_AEEVT_TOGGLE_Val    _UINT32_(0x3)                                        /* (TC_CMR) Toggle  */
#define TC_CMR_WAVEFORM_AEEVT_NONE            (TC_CMR_WAVEFORM_AEEVT_NONE_Val << TC_CMR_WAVEFORM_AEEVT_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_AEEVT_SET             (TC_CMR_WAVEFORM_AEEVT_SET_Val << TC_CMR_WAVEFORM_AEEVT_Pos) /* (TC_CMR) Set Position */
#define TC_CMR_WAVEFORM_AEEVT_CLEAR           (TC_CMR_WAVEFORM_AEEVT_CLEAR_Val << TC_CMR_WAVEFORM_AEEVT_Pos) /* (TC_CMR) Clear Position */
#define TC_CMR_WAVEFORM_AEEVT_TOGGLE          (TC_CMR_WAVEFORM_AEEVT_TOGGLE_Val << TC_CMR_WAVEFORM_AEEVT_Pos) /* (TC_CMR) Toggle Position */
#define TC_CMR_WAVEFORM_ASWTRG_Pos            _UINT32_(22)                                         /* (TC_CMR) Software Trigger Effect on TIOAx Position */
#define TC_CMR_WAVEFORM_ASWTRG_Msk            (_UINT32_(0x3) << TC_CMR_WAVEFORM_ASWTRG_Pos)        /* (TC_CMR) Software Trigger Effect on TIOAx Mask */
#define TC_CMR_WAVEFORM_ASWTRG(value)         (TC_CMR_WAVEFORM_ASWTRG_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_ASWTRG_Pos))
#define   TC_CMR_WAVEFORM_ASWTRG_NONE_Val     _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_ASWTRG_SET_Val      _UINT32_(0x1)                                        /* (TC_CMR) Set  */
#define   TC_CMR_WAVEFORM_ASWTRG_CLEAR_Val    _UINT32_(0x2)                                        /* (TC_CMR) Clear  */
#define   TC_CMR_WAVEFORM_ASWTRG_TOGGLE_Val   _UINT32_(0x3)                                        /* (TC_CMR) Toggle  */
#define TC_CMR_WAVEFORM_ASWTRG_NONE           (TC_CMR_WAVEFORM_ASWTRG_NONE_Val << TC_CMR_WAVEFORM_ASWTRG_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_ASWTRG_SET            (TC_CMR_WAVEFORM_ASWTRG_SET_Val << TC_CMR_WAVEFORM_ASWTRG_Pos) /* (TC_CMR) Set Position */
#define TC_CMR_WAVEFORM_ASWTRG_CLEAR          (TC_CMR_WAVEFORM_ASWTRG_CLEAR_Val << TC_CMR_WAVEFORM_ASWTRG_Pos) /* (TC_CMR) Clear Position */
#define TC_CMR_WAVEFORM_ASWTRG_TOGGLE         (TC_CMR_WAVEFORM_ASWTRG_TOGGLE_Val << TC_CMR_WAVEFORM_ASWTRG_Pos) /* (TC_CMR) Toggle Position */
#define TC_CMR_WAVEFORM_BCPB_Pos              _UINT32_(24)                                         /* (TC_CMR) RB Compare Effect on TIOBx Position */
#define TC_CMR_WAVEFORM_BCPB_Msk              (_UINT32_(0x3) << TC_CMR_WAVEFORM_BCPB_Pos)          /* (TC_CMR) RB Compare Effect on TIOBx Mask */
#define TC_CMR_WAVEFORM_BCPB(value)           (TC_CMR_WAVEFORM_BCPB_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_BCPB_Pos))
#define   TC_CMR_WAVEFORM_BCPB_NONE_Val       _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_BCPB_SET_Val        _UINT32_(0x1)                                        /* (TC_CMR) Set  */
#define   TC_CMR_WAVEFORM_BCPB_CLEAR_Val      _UINT32_(0x2)                                        /* (TC_CMR) Clear  */
#define   TC_CMR_WAVEFORM_BCPB_TOGGLE_Val     _UINT32_(0x3)                                        /* (TC_CMR) Toggle  */
#define TC_CMR_WAVEFORM_BCPB_NONE             (TC_CMR_WAVEFORM_BCPB_NONE_Val << TC_CMR_WAVEFORM_BCPB_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_BCPB_SET              (TC_CMR_WAVEFORM_BCPB_SET_Val << TC_CMR_WAVEFORM_BCPB_Pos) /* (TC_CMR) Set Position */
#define TC_CMR_WAVEFORM_BCPB_CLEAR            (TC_CMR_WAVEFORM_BCPB_CLEAR_Val << TC_CMR_WAVEFORM_BCPB_Pos) /* (TC_CMR) Clear Position */
#define TC_CMR_WAVEFORM_BCPB_TOGGLE           (TC_CMR_WAVEFORM_BCPB_TOGGLE_Val << TC_CMR_WAVEFORM_BCPB_Pos) /* (TC_CMR) Toggle Position */
#define TC_CMR_WAVEFORM_BCPC_Pos              _UINT32_(26)                                         /* (TC_CMR) RC Compare Effect on TIOBx Position */
#define TC_CMR_WAVEFORM_BCPC_Msk              (_UINT32_(0x3) << TC_CMR_WAVEFORM_BCPC_Pos)          /* (TC_CMR) RC Compare Effect on TIOBx Mask */
#define TC_CMR_WAVEFORM_BCPC(value)           (TC_CMR_WAVEFORM_BCPC_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_BCPC_Pos))
#define   TC_CMR_WAVEFORM_BCPC_NONE_Val       _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_BCPC_SET_Val        _UINT32_(0x1)                                        /* (TC_CMR) Set  */
#define   TC_CMR_WAVEFORM_BCPC_CLEAR_Val      _UINT32_(0x2)                                        /* (TC_CMR) Clear  */
#define   TC_CMR_WAVEFORM_BCPC_TOGGLE_Val     _UINT32_(0x3)                                        /* (TC_CMR) Toggle  */
#define TC_CMR_WAVEFORM_BCPC_NONE             (TC_CMR_WAVEFORM_BCPC_NONE_Val << TC_CMR_WAVEFORM_BCPC_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_BCPC_SET              (TC_CMR_WAVEFORM_BCPC_SET_Val << TC_CMR_WAVEFORM_BCPC_Pos) /* (TC_CMR) Set Position */
#define TC_CMR_WAVEFORM_BCPC_CLEAR            (TC_CMR_WAVEFORM_BCPC_CLEAR_Val << TC_CMR_WAVEFORM_BCPC_Pos) /* (TC_CMR) Clear Position */
#define TC_CMR_WAVEFORM_BCPC_TOGGLE           (TC_CMR_WAVEFORM_BCPC_TOGGLE_Val << TC_CMR_WAVEFORM_BCPC_Pos) /* (TC_CMR) Toggle Position */
#define TC_CMR_WAVEFORM_BEEVT_Pos             _UINT32_(28)                                         /* (TC_CMR) External Event Effect on TIOBx Position */
#define TC_CMR_WAVEFORM_BEEVT_Msk             (_UINT32_(0x3) << TC_CMR_WAVEFORM_BEEVT_Pos)         /* (TC_CMR) External Event Effect on TIOBx Mask */
#define TC_CMR_WAVEFORM_BEEVT(value)          (TC_CMR_WAVEFORM_BEEVT_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_BEEVT_Pos))
#define   TC_CMR_WAVEFORM_BEEVT_NONE_Val      _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_BEEVT_SET_Val       _UINT32_(0x1)                                        /* (TC_CMR) Set  */
#define   TC_CMR_WAVEFORM_BEEVT_CLEAR_Val     _UINT32_(0x2)                                        /* (TC_CMR) Clear  */
#define   TC_CMR_WAVEFORM_BEEVT_TOGGLE_Val    _UINT32_(0x3)                                        /* (TC_CMR) Toggle  */
#define TC_CMR_WAVEFORM_BEEVT_NONE            (TC_CMR_WAVEFORM_BEEVT_NONE_Val << TC_CMR_WAVEFORM_BEEVT_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_BEEVT_SET             (TC_CMR_WAVEFORM_BEEVT_SET_Val << TC_CMR_WAVEFORM_BEEVT_Pos) /* (TC_CMR) Set Position */
#define TC_CMR_WAVEFORM_BEEVT_CLEAR           (TC_CMR_WAVEFORM_BEEVT_CLEAR_Val << TC_CMR_WAVEFORM_BEEVT_Pos) /* (TC_CMR) Clear Position */
#define TC_CMR_WAVEFORM_BEEVT_TOGGLE          (TC_CMR_WAVEFORM_BEEVT_TOGGLE_Val << TC_CMR_WAVEFORM_BEEVT_Pos) /* (TC_CMR) Toggle Position */
#define TC_CMR_WAVEFORM_BSWTRG_Pos            _UINT32_(30)                                         /* (TC_CMR) Software Trigger Effect on TIOBx Position */
#define TC_CMR_WAVEFORM_BSWTRG_Msk            (_UINT32_(0x3) << TC_CMR_WAVEFORM_BSWTRG_Pos)        /* (TC_CMR) Software Trigger Effect on TIOBx Mask */
#define TC_CMR_WAVEFORM_BSWTRG(value)         (TC_CMR_WAVEFORM_BSWTRG_Msk & (_UINT32_(value) << TC_CMR_WAVEFORM_BSWTRG_Pos))
#define   TC_CMR_WAVEFORM_BSWTRG_NONE_Val     _UINT32_(0x0)                                        /* (TC_CMR) None  */
#define   TC_CMR_WAVEFORM_BSWTRG_SET_Val      _UINT32_(0x1)                                        /* (TC_CMR) Set  */
#define   TC_CMR_WAVEFORM_BSWTRG_CLEAR_Val    _UINT32_(0x2)                                        /* (TC_CMR) Clear  */
#define   TC_CMR_WAVEFORM_BSWTRG_TOGGLE_Val   _UINT32_(0x3)                                        /* (TC_CMR) Toggle  */
#define TC_CMR_WAVEFORM_BSWTRG_NONE           (TC_CMR_WAVEFORM_BSWTRG_NONE_Val << TC_CMR_WAVEFORM_BSWTRG_Pos) /* (TC_CMR) None Position */
#define TC_CMR_WAVEFORM_BSWTRG_SET            (TC_CMR_WAVEFORM_BSWTRG_SET_Val << TC_CMR_WAVEFORM_BSWTRG_Pos) /* (TC_CMR) Set Position */
#define TC_CMR_WAVEFORM_BSWTRG_CLEAR          (TC_CMR_WAVEFORM_BSWTRG_CLEAR_Val << TC_CMR_WAVEFORM_BSWTRG_Pos) /* (TC_CMR) Clear Position */
#define TC_CMR_WAVEFORM_BSWTRG_TOGGLE         (TC_CMR_WAVEFORM_BSWTRG_TOGGLE_Val << TC_CMR_WAVEFORM_BSWTRG_Pos) /* (TC_CMR) Toggle Position */
#define TC_CMR_WAVEFORM_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (TC_CMR_WAVEFORM) Register Mask  */


/* -------- TC_SMMR : (TC Offset: 0x08) (R/W 32) Stepper Motor Mode Register  -------- */
#define TC_SMMR_RESETVALUE                    _UINT32_(0x00)                                       /*  (TC_SMMR) Stepper Motor Mode Register   Reset Value */

#define TC_SMMR_GCEN_Pos                      _UINT32_(0)                                          /* (TC_SMMR) Gray Count Enable Position */
#define TC_SMMR_GCEN_Msk                      (_UINT32_(0x1) << TC_SMMR_GCEN_Pos)                  /* (TC_SMMR) Gray Count Enable Mask */
#define TC_SMMR_GCEN(value)                   (TC_SMMR_GCEN_Msk & (_UINT32_(value) << TC_SMMR_GCEN_Pos)) /* Assignment of value for GCEN in the TC_SMMR register */
#define   TC_SMMR_GCEN_0_Val                  _UINT32_(0x0)                                        /* (TC_SMMR) TIOAx [x=0..2] and TIOBx [x=0..2] are driven by internal counter of channel x.  */
#define   TC_SMMR_GCEN_1_Val                  _UINT32_(0x1)                                        /* (TC_SMMR) TIOAx [x=0..2] and TIOBx [x=0..2] are driven by a 2-bit Gray counter.  */
#define TC_SMMR_GCEN_0                        (TC_SMMR_GCEN_0_Val << TC_SMMR_GCEN_Pos)             /* (TC_SMMR) TIOAx [x=0..2] and TIOBx [x=0..2] are driven by internal counter of channel x. Position */
#define TC_SMMR_GCEN_1                        (TC_SMMR_GCEN_1_Val << TC_SMMR_GCEN_Pos)             /* (TC_SMMR) TIOAx [x=0..2] and TIOBx [x=0..2] are driven by a 2-bit Gray counter. Position */
#define TC_SMMR_DOWN_Pos                      _UINT32_(1)                                          /* (TC_SMMR) Down Count Position */
#define TC_SMMR_DOWN_Msk                      (_UINT32_(0x1) << TC_SMMR_DOWN_Pos)                  /* (TC_SMMR) Down Count Mask */
#define TC_SMMR_DOWN(value)                   (TC_SMMR_DOWN_Msk & (_UINT32_(value) << TC_SMMR_DOWN_Pos)) /* Assignment of value for DOWN in the TC_SMMR register */
#define   TC_SMMR_DOWN_0_Val                  _UINT32_(0x0)                                        /* (TC_SMMR) Up counter.  */
#define   TC_SMMR_DOWN_1_Val                  _UINT32_(0x1)                                        /* (TC_SMMR) Down counter.  */
#define TC_SMMR_DOWN_0                        (TC_SMMR_DOWN_0_Val << TC_SMMR_DOWN_Pos)             /* (TC_SMMR) Up counter. Position */
#define TC_SMMR_DOWN_1                        (TC_SMMR_DOWN_1_Val << TC_SMMR_DOWN_Pos)             /* (TC_SMMR) Down counter. Position */
#define TC_SMMR_Msk                           _UINT32_(0x00000003)                                 /* (TC_SMMR) Register Mask  */


/* -------- TC_RAB : (TC Offset: 0x0C) ( R/ 32) Register AB  -------- */
#define TC_RAB_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_RAB) Register AB   Reset Value */

#define TC_RAB_RAB_Pos                        _UINT32_(0)                                          /* (TC_RAB) Register A or Register B Position */
#define TC_RAB_RAB_Msk                        (_UINT32_(0xFFFFFFFF) << TC_RAB_RAB_Pos)             /* (TC_RAB) Register A or Register B Mask */
#define TC_RAB_RAB(value)                     (TC_RAB_RAB_Msk & (_UINT32_(value) << TC_RAB_RAB_Pos)) /* Assignment of value for RAB in the TC_RAB register */
#define TC_RAB_Msk                            _UINT32_(0xFFFFFFFF)                                 /* (TC_RAB) Register Mask  */


/* -------- TC_CV : (TC Offset: 0x10) ( R/ 32) Counter Value  -------- */
#define TC_CV_RESETVALUE                      _UINT32_(0x00)                                       /*  (TC_CV) Counter Value   Reset Value */

#define TC_CV_CV_Pos                          _UINT32_(0)                                          /* (TC_CV) Counter Value Position */
#define TC_CV_CV_Msk                          (_UINT32_(0xFFFFFFFF) << TC_CV_CV_Pos)               /* (TC_CV) Counter Value Mask */
#define TC_CV_CV(value)                       (TC_CV_CV_Msk & (_UINT32_(value) << TC_CV_CV_Pos))   /* Assignment of value for CV in the TC_CV register */
#define TC_CV_Msk                             _UINT32_(0xFFFFFFFF)                                 /* (TC_CV) Register Mask  */


/* -------- TC_RA : (TC Offset: 0x14) (R/W 32) Register A  -------- */
#define TC_RA_RESETVALUE                      _UINT32_(0x00)                                       /*  (TC_RA) Register A   Reset Value */

#define TC_RA_RA_Pos                          _UINT32_(0)                                          /* (TC_RA) Register A Position */
#define TC_RA_RA_Msk                          (_UINT32_(0xFFFFFFFF) << TC_RA_RA_Pos)               /* (TC_RA) Register A Mask */
#define TC_RA_RA(value)                       (TC_RA_RA_Msk & (_UINT32_(value) << TC_RA_RA_Pos))   /* Assignment of value for RA in the TC_RA register */
#define TC_RA_Msk                             _UINT32_(0xFFFFFFFF)                                 /* (TC_RA) Register Mask  */


/* -------- TC_RB : (TC Offset: 0x18) (R/W 32) Register B  -------- */
#define TC_RB_RESETVALUE                      _UINT32_(0x00)                                       /*  (TC_RB) Register B   Reset Value */

#define TC_RB_RB_Pos                          _UINT32_(0)                                          /* (TC_RB) Register B Position */
#define TC_RB_RB_Msk                          (_UINT32_(0xFFFFFFFF) << TC_RB_RB_Pos)               /* (TC_RB) Register B Mask */
#define TC_RB_RB(value)                       (TC_RB_RB_Msk & (_UINT32_(value) << TC_RB_RB_Pos))   /* Assignment of value for RB in the TC_RB register */
#define TC_RB_Msk                             _UINT32_(0xFFFFFFFF)                                 /* (TC_RB) Register Mask  */


/* -------- TC_RC : (TC Offset: 0x1C) (R/W 32) Register C  -------- */
#define TC_RC_RESETVALUE                      _UINT32_(0x00)                                       /*  (TC_RC) Register C   Reset Value */

#define TC_RC_RC_Pos                          _UINT32_(0)                                          /* (TC_RC) Register C Position */
#define TC_RC_RC_Msk                          (_UINT32_(0xFFFFFFFF) << TC_RC_RC_Pos)               /* (TC_RC) Register C Mask */
#define TC_RC_RC(value)                       (TC_RC_RC_Msk & (_UINT32_(value) << TC_RC_RC_Pos))   /* Assignment of value for RC in the TC_RC register */
#define TC_RC_Msk                             _UINT32_(0xFFFFFFFF)                                 /* (TC_RC) Register Mask  */


/* -------- TC_SR : (TC Offset: 0x20) ( R/ 32) Interrupt Status Register  -------- */
#define TC_SR_RESETVALUE                      _UINT32_(0x00)                                       /*  (TC_SR) Interrupt Status Register   Reset Value */

#define TC_SR_COVFS_Pos                       _UINT32_(0)                                          /* (TC_SR) Counter Overflow Status (cleared on read) Position */
#define TC_SR_COVFS_Msk                       (_UINT32_(0x1) << TC_SR_COVFS_Pos)                   /* (TC_SR) Counter Overflow Status (cleared on read) Mask */
#define TC_SR_COVFS(value)                    (TC_SR_COVFS_Msk & (_UINT32_(value) << TC_SR_COVFS_Pos)) /* Assignment of value for COVFS in the TC_SR register */
#define   TC_SR_COVFS_0_Val                   _UINT32_(0x0)                                        /* (TC_SR) No counter overflow has occurred since the last read of the Status register.  */
#define   TC_SR_COVFS_1_Val                   _UINT32_(0x1)                                        /* (TC_SR) A counter overflow has occurred since the last read of the Status register.  */
#define TC_SR_COVFS_0                         (TC_SR_COVFS_0_Val << TC_SR_COVFS_Pos)               /* (TC_SR) No counter overflow has occurred since the last read of the Status register. Position */
#define TC_SR_COVFS_1                         (TC_SR_COVFS_1_Val << TC_SR_COVFS_Pos)               /* (TC_SR) A counter overflow has occurred since the last read of the Status register. Position */
#define TC_SR_LOVRS_Pos                       _UINT32_(1)                                          /* (TC_SR) Load Overrun Status (cleared on read) Position */
#define TC_SR_LOVRS_Msk                       (_UINT32_(0x1) << TC_SR_LOVRS_Pos)                   /* (TC_SR) Load Overrun Status (cleared on read) Mask */
#define TC_SR_LOVRS(value)                    (TC_SR_LOVRS_Msk & (_UINT32_(value) << TC_SR_LOVRS_Pos)) /* Assignment of value for LOVRS in the TC_SR register */
#define   TC_SR_LOVRS_0_Val                   _UINT32_(0x0)                                        /* (TC_SR) Load overrun has not occurred since the last read of the Status register or TC_CMRx.WAVE = 1.  */
#define   TC_SR_LOVRS_1_Val                   _UINT32_(0x1)                                        /* (TC_SR) RA or RB have been loaded at least twice without any read of the corresponding register since the last read of the Status register, if TC_CMRx.WAVE = 0.  */
#define TC_SR_LOVRS_0                         (TC_SR_LOVRS_0_Val << TC_SR_LOVRS_Pos)               /* (TC_SR) Load overrun has not occurred since the last read of the Status register or TC_CMRx.WAVE = 1. Position */
#define TC_SR_LOVRS_1                         (TC_SR_LOVRS_1_Val << TC_SR_LOVRS_Pos)               /* (TC_SR) RA or RB have been loaded at least twice without any read of the corresponding register since the last read of the Status register, if TC_CMRx.WAVE = 0. Position */
#define TC_SR_CPAS_Pos                        _UINT32_(2)                                          /* (TC_SR) RA Compare Status (cleared on read) Position */
#define TC_SR_CPAS_Msk                        (_UINT32_(0x1) << TC_SR_CPAS_Pos)                    /* (TC_SR) RA Compare Status (cleared on read) Mask */
#define TC_SR_CPAS(value)                     (TC_SR_CPAS_Msk & (_UINT32_(value) << TC_SR_CPAS_Pos)) /* Assignment of value for CPAS in the TC_SR register */
#define   TC_SR_CPAS_0_Val                    _UINT32_(0x0)                                        /* (TC_SR) RA Compare has not occurred since the last read of the Status register or TC_CMRx.WAVE = 0.  */
#define   TC_SR_CPAS_1_Val                    _UINT32_(0x1)                                        /* (TC_SR) RA Compare has occurred since the last read of the Status register, if TC_CMRx.WAVE = 1.  */
#define TC_SR_CPAS_0                          (TC_SR_CPAS_0_Val << TC_SR_CPAS_Pos)                 /* (TC_SR) RA Compare has not occurred since the last read of the Status register or TC_CMRx.WAVE = 0. Position */
#define TC_SR_CPAS_1                          (TC_SR_CPAS_1_Val << TC_SR_CPAS_Pos)                 /* (TC_SR) RA Compare has occurred since the last read of the Status register, if TC_CMRx.WAVE = 1. Position */
#define TC_SR_CPBS_Pos                        _UINT32_(3)                                          /* (TC_SR) RB Compare Status (cleared on read) Position */
#define TC_SR_CPBS_Msk                        (_UINT32_(0x1) << TC_SR_CPBS_Pos)                    /* (TC_SR) RB Compare Status (cleared on read) Mask */
#define TC_SR_CPBS(value)                     (TC_SR_CPBS_Msk & (_UINT32_(value) << TC_SR_CPBS_Pos)) /* Assignment of value for CPBS in the TC_SR register */
#define   TC_SR_CPBS_0_Val                    _UINT32_(0x0)                                        /* (TC_SR) RB Compare has not occurred since the last read of the Status register or TC_CMRx.WAVE = 0.  */
#define   TC_SR_CPBS_1_Val                    _UINT32_(0x1)                                        /* (TC_SR) RB Compare has occurred since the last read of the Status register, if TC_CMRx.WAVE = 1.  */
#define TC_SR_CPBS_0                          (TC_SR_CPBS_0_Val << TC_SR_CPBS_Pos)                 /* (TC_SR) RB Compare has not occurred since the last read of the Status register or TC_CMRx.WAVE = 0. Position */
#define TC_SR_CPBS_1                          (TC_SR_CPBS_1_Val << TC_SR_CPBS_Pos)                 /* (TC_SR) RB Compare has occurred since the last read of the Status register, if TC_CMRx.WAVE = 1. Position */
#define TC_SR_CPCS_Pos                        _UINT32_(4)                                          /* (TC_SR) RC Compare Status (cleared on read) Position */
#define TC_SR_CPCS_Msk                        (_UINT32_(0x1) << TC_SR_CPCS_Pos)                    /* (TC_SR) RC Compare Status (cleared on read) Mask */
#define TC_SR_CPCS(value)                     (TC_SR_CPCS_Msk & (_UINT32_(value) << TC_SR_CPCS_Pos)) /* Assignment of value for CPCS in the TC_SR register */
#define   TC_SR_CPCS_0_Val                    _UINT32_(0x0)                                        /* (TC_SR) RC Compare has not occurred since the last read of the Status register.  */
#define   TC_SR_CPCS_1_Val                    _UINT32_(0x1)                                        /* (TC_SR) RC Compare has occurred since the last read of the Status register.  */
#define TC_SR_CPCS_0                          (TC_SR_CPCS_0_Val << TC_SR_CPCS_Pos)                 /* (TC_SR) RC Compare has not occurred since the last read of the Status register. Position */
#define TC_SR_CPCS_1                          (TC_SR_CPCS_1_Val << TC_SR_CPCS_Pos)                 /* (TC_SR) RC Compare has occurred since the last read of the Status register. Position */
#define TC_SR_LDRAS_Pos                       _UINT32_(5)                                          /* (TC_SR) RA Loading Status (cleared on read) Position */
#define TC_SR_LDRAS_Msk                       (_UINT32_(0x1) << TC_SR_LDRAS_Pos)                   /* (TC_SR) RA Loading Status (cleared on read) Mask */
#define TC_SR_LDRAS(value)                    (TC_SR_LDRAS_Msk & (_UINT32_(value) << TC_SR_LDRAS_Pos)) /* Assignment of value for LDRAS in the TC_SR register */
#define   TC_SR_LDRAS_0_Val                   _UINT32_(0x0)                                        /* (TC_SR) RA Load has not occurred since the last read of the Status register or TC_CMRx.WAVE = 1.  */
#define   TC_SR_LDRAS_1_Val                   _UINT32_(0x1)                                        /* (TC_SR) RA Load has occurred since the last read of the Status register, if TC_CMRx.WAVE = 0.  */
#define TC_SR_LDRAS_0                         (TC_SR_LDRAS_0_Val << TC_SR_LDRAS_Pos)               /* (TC_SR) RA Load has not occurred since the last read of the Status register or TC_CMRx.WAVE = 1. Position */
#define TC_SR_LDRAS_1                         (TC_SR_LDRAS_1_Val << TC_SR_LDRAS_Pos)               /* (TC_SR) RA Load has occurred since the last read of the Status register, if TC_CMRx.WAVE = 0. Position */
#define TC_SR_LDRBS_Pos                       _UINT32_(6)                                          /* (TC_SR) RB Loading Status (cleared on read) Position */
#define TC_SR_LDRBS_Msk                       (_UINT32_(0x1) << TC_SR_LDRBS_Pos)                   /* (TC_SR) RB Loading Status (cleared on read) Mask */
#define TC_SR_LDRBS(value)                    (TC_SR_LDRBS_Msk & (_UINT32_(value) << TC_SR_LDRBS_Pos)) /* Assignment of value for LDRBS in the TC_SR register */
#define   TC_SR_LDRBS_0_Val                   _UINT32_(0x0)                                        /* (TC_SR) RB Load has not occurred since the last read of the Status register or TC_CMRx.WAVE = 1.  */
#define   TC_SR_LDRBS_1_Val                   _UINT32_(0x1)                                        /* (TC_SR) RB Load has occurred since the last read of the Status register, if TC_CMRx.WAVE = 0.  */
#define TC_SR_LDRBS_0                         (TC_SR_LDRBS_0_Val << TC_SR_LDRBS_Pos)               /* (TC_SR) RB Load has not occurred since the last read of the Status register or TC_CMRx.WAVE = 1. Position */
#define TC_SR_LDRBS_1                         (TC_SR_LDRBS_1_Val << TC_SR_LDRBS_Pos)               /* (TC_SR) RB Load has occurred since the last read of the Status register, if TC_CMRx.WAVE = 0. Position */
#define TC_SR_ETRGS_Pos                       _UINT32_(7)                                          /* (TC_SR) External Trigger Status (cleared on read) Position */
#define TC_SR_ETRGS_Msk                       (_UINT32_(0x1) << TC_SR_ETRGS_Pos)                   /* (TC_SR) External Trigger Status (cleared on read) Mask */
#define TC_SR_ETRGS(value)                    (TC_SR_ETRGS_Msk & (_UINT32_(value) << TC_SR_ETRGS_Pos)) /* Assignment of value for ETRGS in the TC_SR register */
#define   TC_SR_ETRGS_0_Val                   _UINT32_(0x0)                                        /* (TC_SR) External trigger has not occurred since the last read of the Status register.  */
#define   TC_SR_ETRGS_1_Val                   _UINT32_(0x1)                                        /* (TC_SR) External trigger has occurred since the last read of the Status register.  */
#define TC_SR_ETRGS_0                         (TC_SR_ETRGS_0_Val << TC_SR_ETRGS_Pos)               /* (TC_SR) External trigger has not occurred since the last read of the Status register. Position */
#define TC_SR_ETRGS_1                         (TC_SR_ETRGS_1_Val << TC_SR_ETRGS_Pos)               /* (TC_SR) External trigger has occurred since the last read of the Status register. Position */
#define TC_SR_SECE_Pos                        _UINT32_(8)                                          /* (TC_SR) Security and/or Safety Event (cleared on read) Position */
#define TC_SR_SECE_Msk                        (_UINT32_(0x1) << TC_SR_SECE_Pos)                    /* (TC_SR) Security and/or Safety Event (cleared on read) Mask */
#define TC_SR_SECE(value)                     (TC_SR_SECE_Msk & (_UINT32_(value) << TC_SR_SECE_Pos)) /* Assignment of value for SECE in the TC_SR register */
#define   TC_SR_SECE_0_Val                    _UINT32_(0x0)                                        /* (TC_SR) No security or safety event occurred.  */
#define   TC_SR_SECE_1_Val                    _UINT32_(0x1)                                        /* (TC_SR) One or more safety or security event occurred since the last read of TC_SRx. For details on the event, refer to TC_SSRx.  */
#define TC_SR_SECE_0                          (TC_SR_SECE_0_Val << TC_SR_SECE_Pos)                 /* (TC_SR) No security or safety event occurred. Position */
#define TC_SR_SECE_1                          (TC_SR_SECE_1_Val << TC_SR_SECE_Pos)                 /* (TC_SR) One or more safety or security event occurred since the last read of TC_SRx. For details on the event, refer to TC_SSRx. Position */
#define TC_SR_CLKSTA_Pos                      _UINT32_(16)                                         /* (TC_SR) Clock Enabling Status Position */
#define TC_SR_CLKSTA_Msk                      (_UINT32_(0x1) << TC_SR_CLKSTA_Pos)                  /* (TC_SR) Clock Enabling Status Mask */
#define TC_SR_CLKSTA(value)                   (TC_SR_CLKSTA_Msk & (_UINT32_(value) << TC_SR_CLKSTA_Pos)) /* Assignment of value for CLKSTA in the TC_SR register */
#define   TC_SR_CLKSTA_0_Val                  _UINT32_(0x0)                                        /* (TC_SR) Clock is disabled.  */
#define   TC_SR_CLKSTA_1_Val                  _UINT32_(0x1)                                        /* (TC_SR) Clock is enabled.  */
#define TC_SR_CLKSTA_0                        (TC_SR_CLKSTA_0_Val << TC_SR_CLKSTA_Pos)             /* (TC_SR) Clock is disabled. Position */
#define TC_SR_CLKSTA_1                        (TC_SR_CLKSTA_1_Val << TC_SR_CLKSTA_Pos)             /* (TC_SR) Clock is enabled. Position */
#define TC_SR_MTIOA_Pos                       _UINT32_(17)                                         /* (TC_SR) TIOAx Mirror Position */
#define TC_SR_MTIOA_Msk                       (_UINT32_(0x1) << TC_SR_MTIOA_Pos)                   /* (TC_SR) TIOAx Mirror Mask */
#define TC_SR_MTIOA(value)                    (TC_SR_MTIOA_Msk & (_UINT32_(value) << TC_SR_MTIOA_Pos)) /* Assignment of value for MTIOA in the TC_SR register */
#define   TC_SR_MTIOA_0_Val                   _UINT32_(0x0)                                        /* (TC_SR) TIOAx is low. If TC_CMRx.WAVE = 0, TIOAx pin is low. If TC_CMRx.WAVE = 1, TIOAx is driven low.  */
#define   TC_SR_MTIOA_1_Val                   _UINT32_(0x1)                                        /* (TC_SR) TIOAx is high. If TC_CMRx.WAVE = 0, TIOAx pin is high. If TC_CMRx.WAVE = 1, TIOAx is driven high.  */
#define TC_SR_MTIOA_0                         (TC_SR_MTIOA_0_Val << TC_SR_MTIOA_Pos)               /* (TC_SR) TIOAx is low. If TC_CMRx.WAVE = 0, TIOAx pin is low. If TC_CMRx.WAVE = 1, TIOAx is driven low. Position */
#define TC_SR_MTIOA_1                         (TC_SR_MTIOA_1_Val << TC_SR_MTIOA_Pos)               /* (TC_SR) TIOAx is high. If TC_CMRx.WAVE = 0, TIOAx pin is high. If TC_CMRx.WAVE = 1, TIOAx is driven high. Position */
#define TC_SR_MTIOB_Pos                       _UINT32_(18)                                         /* (TC_SR) TIOBx Mirror Position */
#define TC_SR_MTIOB_Msk                       (_UINT32_(0x1) << TC_SR_MTIOB_Pos)                   /* (TC_SR) TIOBx Mirror Mask */
#define TC_SR_MTIOB(value)                    (TC_SR_MTIOB_Msk & (_UINT32_(value) << TC_SR_MTIOB_Pos)) /* Assignment of value for MTIOB in the TC_SR register */
#define   TC_SR_MTIOB_0_Val                   _UINT32_(0x0)                                        /* (TC_SR) TIOBx is low. If TC_CMRx.WAVE = 0, TIOBx pin is low. If TC_CMRx.WAVE = 1, TIOBx is driven low.  */
#define   TC_SR_MTIOB_1_Val                   _UINT32_(0x1)                                        /* (TC_SR) TIOBx is high. If TC_CMRx.WAVE = 0, TIOBx pin is high. If TC_CMRx.WAVE = 1, TIOBx is driven high.  */
#define TC_SR_MTIOB_0                         (TC_SR_MTIOB_0_Val << TC_SR_MTIOB_Pos)               /* (TC_SR) TIOBx is low. If TC_CMRx.WAVE = 0, TIOBx pin is low. If TC_CMRx.WAVE = 1, TIOBx is driven low. Position */
#define TC_SR_MTIOB_1                         (TC_SR_MTIOB_1_Val << TC_SR_MTIOB_Pos)               /* (TC_SR) TIOBx is high. If TC_CMRx.WAVE = 0, TIOBx pin is high. If TC_CMRx.WAVE = 1, TIOBx is driven high. Position */
#define TC_SR_Msk                             _UINT32_(0x000701FF)                                 /* (TC_SR) Register Mask  */


/* -------- TC_IER : (TC Offset: 0x24) ( /W 32) Interrupt Enable Register  -------- */
#define TC_IER_COVFS_Pos                      _UINT32_(0)                                          /* (TC_IER) Counter Overflow Position */
#define TC_IER_COVFS_Msk                      (_UINT32_(0x1) << TC_IER_COVFS_Pos)                  /* (TC_IER) Counter Overflow Mask */
#define TC_IER_COVFS(value)                   (TC_IER_COVFS_Msk & (_UINT32_(value) << TC_IER_COVFS_Pos)) /* Assignment of value for COVFS in the TC_IER register */
#define TC_IER_LOVRS_Pos                      _UINT32_(1)                                          /* (TC_IER) Load Overrun Position */
#define TC_IER_LOVRS_Msk                      (_UINT32_(0x1) << TC_IER_LOVRS_Pos)                  /* (TC_IER) Load Overrun Mask */
#define TC_IER_LOVRS(value)                   (TC_IER_LOVRS_Msk & (_UINT32_(value) << TC_IER_LOVRS_Pos)) /* Assignment of value for LOVRS in the TC_IER register */
#define TC_IER_CPAS_Pos                       _UINT32_(2)                                          /* (TC_IER) RA Compare Position */
#define TC_IER_CPAS_Msk                       (_UINT32_(0x1) << TC_IER_CPAS_Pos)                   /* (TC_IER) RA Compare Mask */
#define TC_IER_CPAS(value)                    (TC_IER_CPAS_Msk & (_UINT32_(value) << TC_IER_CPAS_Pos)) /* Assignment of value for CPAS in the TC_IER register */
#define TC_IER_CPBS_Pos                       _UINT32_(3)                                          /* (TC_IER) RB Compare Position */
#define TC_IER_CPBS_Msk                       (_UINT32_(0x1) << TC_IER_CPBS_Pos)                   /* (TC_IER) RB Compare Mask */
#define TC_IER_CPBS(value)                    (TC_IER_CPBS_Msk & (_UINT32_(value) << TC_IER_CPBS_Pos)) /* Assignment of value for CPBS in the TC_IER register */
#define TC_IER_CPCS_Pos                       _UINT32_(4)                                          /* (TC_IER) RC Compare Position */
#define TC_IER_CPCS_Msk                       (_UINT32_(0x1) << TC_IER_CPCS_Pos)                   /* (TC_IER) RC Compare Mask */
#define TC_IER_CPCS(value)                    (TC_IER_CPCS_Msk & (_UINT32_(value) << TC_IER_CPCS_Pos)) /* Assignment of value for CPCS in the TC_IER register */
#define TC_IER_LDRAS_Pos                      _UINT32_(5)                                          /* (TC_IER) RA Loading Position */
#define TC_IER_LDRAS_Msk                      (_UINT32_(0x1) << TC_IER_LDRAS_Pos)                  /* (TC_IER) RA Loading Mask */
#define TC_IER_LDRAS(value)                   (TC_IER_LDRAS_Msk & (_UINT32_(value) << TC_IER_LDRAS_Pos)) /* Assignment of value for LDRAS in the TC_IER register */
#define TC_IER_LDRBS_Pos                      _UINT32_(6)                                          /* (TC_IER) RB Loading Position */
#define TC_IER_LDRBS_Msk                      (_UINT32_(0x1) << TC_IER_LDRBS_Pos)                  /* (TC_IER) RB Loading Mask */
#define TC_IER_LDRBS(value)                   (TC_IER_LDRBS_Msk & (_UINT32_(value) << TC_IER_LDRBS_Pos)) /* Assignment of value for LDRBS in the TC_IER register */
#define TC_IER_ETRGS_Pos                      _UINT32_(7)                                          /* (TC_IER) External Trigger Position */
#define TC_IER_ETRGS_Msk                      (_UINT32_(0x1) << TC_IER_ETRGS_Pos)                  /* (TC_IER) External Trigger Mask */
#define TC_IER_ETRGS(value)                   (TC_IER_ETRGS_Msk & (_UINT32_(value) << TC_IER_ETRGS_Pos)) /* Assignment of value for ETRGS in the TC_IER register */
#define TC_IER_SECE_Pos                       _UINT32_(10)                                         /* (TC_IER) Security and/or Safety Event Interrupt Enable Position */
#define TC_IER_SECE_Msk                       (_UINT32_(0x1) << TC_IER_SECE_Pos)                   /* (TC_IER) Security and/or Safety Event Interrupt Enable Mask */
#define TC_IER_SECE(value)                    (TC_IER_SECE_Msk & (_UINT32_(value) << TC_IER_SECE_Pos)) /* Assignment of value for SECE in the TC_IER register */
#define TC_IER_Msk                            _UINT32_(0x000004FF)                                 /* (TC_IER) Register Mask  */


/* -------- TC_IDR : (TC Offset: 0x28) ( /W 32) Interrupt Disable Register  -------- */
#define TC_IDR_COVFS_Pos                      _UINT32_(0)                                          /* (TC_IDR) Counter Overflow Position */
#define TC_IDR_COVFS_Msk                      (_UINT32_(0x1) << TC_IDR_COVFS_Pos)                  /* (TC_IDR) Counter Overflow Mask */
#define TC_IDR_COVFS(value)                   (TC_IDR_COVFS_Msk & (_UINT32_(value) << TC_IDR_COVFS_Pos)) /* Assignment of value for COVFS in the TC_IDR register */
#define TC_IDR_LOVRS_Pos                      _UINT32_(1)                                          /* (TC_IDR) Load Overrun Position */
#define TC_IDR_LOVRS_Msk                      (_UINT32_(0x1) << TC_IDR_LOVRS_Pos)                  /* (TC_IDR) Load Overrun Mask */
#define TC_IDR_LOVRS(value)                   (TC_IDR_LOVRS_Msk & (_UINT32_(value) << TC_IDR_LOVRS_Pos)) /* Assignment of value for LOVRS in the TC_IDR register */
#define TC_IDR_CPAS_Pos                       _UINT32_(2)                                          /* (TC_IDR) RA Compare Position */
#define TC_IDR_CPAS_Msk                       (_UINT32_(0x1) << TC_IDR_CPAS_Pos)                   /* (TC_IDR) RA Compare Mask */
#define TC_IDR_CPAS(value)                    (TC_IDR_CPAS_Msk & (_UINT32_(value) << TC_IDR_CPAS_Pos)) /* Assignment of value for CPAS in the TC_IDR register */
#define TC_IDR_CPBS_Pos                       _UINT32_(3)                                          /* (TC_IDR) RB Compare Position */
#define TC_IDR_CPBS_Msk                       (_UINT32_(0x1) << TC_IDR_CPBS_Pos)                   /* (TC_IDR) RB Compare Mask */
#define TC_IDR_CPBS(value)                    (TC_IDR_CPBS_Msk & (_UINT32_(value) << TC_IDR_CPBS_Pos)) /* Assignment of value for CPBS in the TC_IDR register */
#define TC_IDR_CPCS_Pos                       _UINT32_(4)                                          /* (TC_IDR) RC Compare Position */
#define TC_IDR_CPCS_Msk                       (_UINT32_(0x1) << TC_IDR_CPCS_Pos)                   /* (TC_IDR) RC Compare Mask */
#define TC_IDR_CPCS(value)                    (TC_IDR_CPCS_Msk & (_UINT32_(value) << TC_IDR_CPCS_Pos)) /* Assignment of value for CPCS in the TC_IDR register */
#define TC_IDR_LDRAS_Pos                      _UINT32_(5)                                          /* (TC_IDR) RA Loading Position */
#define TC_IDR_LDRAS_Msk                      (_UINT32_(0x1) << TC_IDR_LDRAS_Pos)                  /* (TC_IDR) RA Loading Mask */
#define TC_IDR_LDRAS(value)                   (TC_IDR_LDRAS_Msk & (_UINT32_(value) << TC_IDR_LDRAS_Pos)) /* Assignment of value for LDRAS in the TC_IDR register */
#define TC_IDR_LDRBS_Pos                      _UINT32_(6)                                          /* (TC_IDR) RB Loading Position */
#define TC_IDR_LDRBS_Msk                      (_UINT32_(0x1) << TC_IDR_LDRBS_Pos)                  /* (TC_IDR) RB Loading Mask */
#define TC_IDR_LDRBS(value)                   (TC_IDR_LDRBS_Msk & (_UINT32_(value) << TC_IDR_LDRBS_Pos)) /* Assignment of value for LDRBS in the TC_IDR register */
#define TC_IDR_ETRGS_Pos                      _UINT32_(7)                                          /* (TC_IDR) External Trigger Position */
#define TC_IDR_ETRGS_Msk                      (_UINT32_(0x1) << TC_IDR_ETRGS_Pos)                  /* (TC_IDR) External Trigger Mask */
#define TC_IDR_ETRGS(value)                   (TC_IDR_ETRGS_Msk & (_UINT32_(value) << TC_IDR_ETRGS_Pos)) /* Assignment of value for ETRGS in the TC_IDR register */
#define TC_IDR_SECE_Pos                       _UINT32_(10)                                         /* (TC_IDR) Security and/or Safety Event Interrupt Disable Position */
#define TC_IDR_SECE_Msk                       (_UINT32_(0x1) << TC_IDR_SECE_Pos)                   /* (TC_IDR) Security and/or Safety Event Interrupt Disable Mask */
#define TC_IDR_SECE(value)                    (TC_IDR_SECE_Msk & (_UINT32_(value) << TC_IDR_SECE_Pos)) /* Assignment of value for SECE in the TC_IDR register */
#define TC_IDR_Msk                            _UINT32_(0x000004FF)                                 /* (TC_IDR) Register Mask  */


/* -------- TC_IMR : (TC Offset: 0x2C) ( R/ 32) Interrupt Mask Register  -------- */
#define TC_IMR_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_IMR) Interrupt Mask Register   Reset Value */

#define TC_IMR_COVFS_Pos                      _UINT32_(0)                                          /* (TC_IMR) Counter Overflow Position */
#define TC_IMR_COVFS_Msk                      (_UINT32_(0x1) << TC_IMR_COVFS_Pos)                  /* (TC_IMR) Counter Overflow Mask */
#define TC_IMR_COVFS(value)                   (TC_IMR_COVFS_Msk & (_UINT32_(value) << TC_IMR_COVFS_Pos)) /* Assignment of value for COVFS in the TC_IMR register */
#define TC_IMR_LOVRS_Pos                      _UINT32_(1)                                          /* (TC_IMR) Load Overrun Position */
#define TC_IMR_LOVRS_Msk                      (_UINT32_(0x1) << TC_IMR_LOVRS_Pos)                  /* (TC_IMR) Load Overrun Mask */
#define TC_IMR_LOVRS(value)                   (TC_IMR_LOVRS_Msk & (_UINT32_(value) << TC_IMR_LOVRS_Pos)) /* Assignment of value for LOVRS in the TC_IMR register */
#define TC_IMR_CPAS_Pos                       _UINT32_(2)                                          /* (TC_IMR) RA Compare Position */
#define TC_IMR_CPAS_Msk                       (_UINT32_(0x1) << TC_IMR_CPAS_Pos)                   /* (TC_IMR) RA Compare Mask */
#define TC_IMR_CPAS(value)                    (TC_IMR_CPAS_Msk & (_UINT32_(value) << TC_IMR_CPAS_Pos)) /* Assignment of value for CPAS in the TC_IMR register */
#define TC_IMR_CPBS_Pos                       _UINT32_(3)                                          /* (TC_IMR) RB Compare Position */
#define TC_IMR_CPBS_Msk                       (_UINT32_(0x1) << TC_IMR_CPBS_Pos)                   /* (TC_IMR) RB Compare Mask */
#define TC_IMR_CPBS(value)                    (TC_IMR_CPBS_Msk & (_UINT32_(value) << TC_IMR_CPBS_Pos)) /* Assignment of value for CPBS in the TC_IMR register */
#define TC_IMR_CPCS_Pos                       _UINT32_(4)                                          /* (TC_IMR) RC Compare Position */
#define TC_IMR_CPCS_Msk                       (_UINT32_(0x1) << TC_IMR_CPCS_Pos)                   /* (TC_IMR) RC Compare Mask */
#define TC_IMR_CPCS(value)                    (TC_IMR_CPCS_Msk & (_UINT32_(value) << TC_IMR_CPCS_Pos)) /* Assignment of value for CPCS in the TC_IMR register */
#define TC_IMR_LDRAS_Pos                      _UINT32_(5)                                          /* (TC_IMR) RA Loading Position */
#define TC_IMR_LDRAS_Msk                      (_UINT32_(0x1) << TC_IMR_LDRAS_Pos)                  /* (TC_IMR) RA Loading Mask */
#define TC_IMR_LDRAS(value)                   (TC_IMR_LDRAS_Msk & (_UINT32_(value) << TC_IMR_LDRAS_Pos)) /* Assignment of value for LDRAS in the TC_IMR register */
#define TC_IMR_LDRBS_Pos                      _UINT32_(6)                                          /* (TC_IMR) RB Loading Position */
#define TC_IMR_LDRBS_Msk                      (_UINT32_(0x1) << TC_IMR_LDRBS_Pos)                  /* (TC_IMR) RB Loading Mask */
#define TC_IMR_LDRBS(value)                   (TC_IMR_LDRBS_Msk & (_UINT32_(value) << TC_IMR_LDRBS_Pos)) /* Assignment of value for LDRBS in the TC_IMR register */
#define TC_IMR_ETRGS_Pos                      _UINT32_(7)                                          /* (TC_IMR) External Trigger Position */
#define TC_IMR_ETRGS_Msk                      (_UINT32_(0x1) << TC_IMR_ETRGS_Pos)                  /* (TC_IMR) External Trigger Mask */
#define TC_IMR_ETRGS(value)                   (TC_IMR_ETRGS_Msk & (_UINT32_(value) << TC_IMR_ETRGS_Pos)) /* Assignment of value for ETRGS in the TC_IMR register */
#define TC_IMR_SECE_Pos                       _UINT32_(10)                                         /* (TC_IMR) Security and/or Safety Event Interrupt Mask Position */
#define TC_IMR_SECE_Msk                       (_UINT32_(0x1) << TC_IMR_SECE_Pos)                   /* (TC_IMR) Security and/or Safety Event Interrupt Mask Mask */
#define TC_IMR_SECE(value)                    (TC_IMR_SECE_Msk & (_UINT32_(value) << TC_IMR_SECE_Pos)) /* Assignment of value for SECE in the TC_IMR register */
#define TC_IMR_Msk                            _UINT32_(0x000004FF)                                 /* (TC_IMR) Register Mask  */


/* -------- TC_EMR : (TC Offset: 0x30) (R/W 32) Extended Mode Register  -------- */
#define TC_EMR_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_EMR) Extended Mode Register   Reset Value */

#define TC_EMR_TRIGSRCA_Pos                   _UINT32_(0)                                          /* (TC_EMR) Trigger Source for Input A Position */
#define TC_EMR_TRIGSRCA_Msk                   (_UINT32_(0x3) << TC_EMR_TRIGSRCA_Pos)               /* (TC_EMR) Trigger Source for Input A Mask */
#define TC_EMR_TRIGSRCA(value)                (TC_EMR_TRIGSRCA_Msk & (_UINT32_(value) << TC_EMR_TRIGSRCA_Pos)) /* Assignment of value for TRIGSRCA in the TC_EMR register */
#define   TC_EMR_TRIGSRCA_EXTERNAL_TIOAx_Val  _UINT32_(0x0)                                        /* (TC_EMR) The trigger/capture input A is driven by external pin TIOAx  */
#define   TC_EMR_TRIGSRCA_PWMx_Val            _UINT32_(0x1)                                        /* (TC_EMR) For TC0: The trigger/capture input A is driven internally by PWMx. For TC1.TIOA1, TC1.TIOA2: The trigger/capture input A is driven internally by the GTSUCOMP signal of the Ethernet MAC (GMAC).  */
#define TC_EMR_TRIGSRCA_EXTERNAL_TIOAx        (TC_EMR_TRIGSRCA_EXTERNAL_TIOAx_Val << TC_EMR_TRIGSRCA_Pos) /* (TC_EMR) The trigger/capture input A is driven by external pin TIOAx Position */
#define TC_EMR_TRIGSRCA_PWMx                  (TC_EMR_TRIGSRCA_PWMx_Val << TC_EMR_TRIGSRCA_Pos)    /* (TC_EMR) For TC0: The trigger/capture input A is driven internally by PWMx. For TC1.TIOA1, TC1.TIOA2: The trigger/capture input A is driven internally by the GTSUCOMP signal of the Ethernet MAC (GMAC). Position */
#define TC_EMR_TRIGSRCB_Pos                   _UINT32_(4)                                          /* (TC_EMR) Trigger Source for Input B Position */
#define TC_EMR_TRIGSRCB_Msk                   (_UINT32_(0x3) << TC_EMR_TRIGSRCB_Pos)               /* (TC_EMR) Trigger Source for Input B Mask */
#define TC_EMR_TRIGSRCB(value)                (TC_EMR_TRIGSRCB_Msk & (_UINT32_(value) << TC_EMR_TRIGSRCB_Pos)) /* Assignment of value for TRIGSRCB in the TC_EMR register */
#define   TC_EMR_TRIGSRCB_EXTERNAL_TIOBx_Val  _UINT32_(0x0)                                        /* (TC_EMR) The trigger/capture input B is driven by external pin TIOBx  */
#define   TC_EMR_TRIGSRCB_PWMx_Val            _UINT32_(0x1)                                        /* (TC_EMR) For TC0: The trigger/capture input B is driven internally by the comparator output (see Figure 7-17) of the PWMx.  */
#define TC_EMR_TRIGSRCB_EXTERNAL_TIOBx        (TC_EMR_TRIGSRCB_EXTERNAL_TIOBx_Val << TC_EMR_TRIGSRCB_Pos) /* (TC_EMR) The trigger/capture input B is driven by external pin TIOBx Position */
#define TC_EMR_TRIGSRCB_PWMx                  (TC_EMR_TRIGSRCB_PWMx_Val << TC_EMR_TRIGSRCB_Pos)    /* (TC_EMR) For TC0: The trigger/capture input B is driven internally by the comparator output (see Figure 7-17) of the PWMx. Position */
#define TC_EMR_NODIVCLK_Pos                   _UINT32_(8)                                          /* (TC_EMR) No Divided Clock Position */
#define TC_EMR_NODIVCLK_Msk                   (_UINT32_(0x1) << TC_EMR_NODIVCLK_Pos)               /* (TC_EMR) No Divided Clock Mask */
#define TC_EMR_NODIVCLK(value)                (TC_EMR_NODIVCLK_Msk & (_UINT32_(value) << TC_EMR_NODIVCLK_Pos)) /* Assignment of value for NODIVCLK in the TC_EMR register */
#define   TC_EMR_NODIVCLK_0_Val               _UINT32_(0x0)                                        /* (TC_EMR) The selected clock is defined by field TCCLKS in TC_CMRx.  */
#define   TC_EMR_NODIVCLK_1_Val               _UINT32_(0x1)                                        /* (TC_EMR) The selected clock is peripheral clock and TCCLKS field (TC_CMRx) has no effect.  */
#define TC_EMR_NODIVCLK_0                     (TC_EMR_NODIVCLK_0_Val << TC_EMR_NODIVCLK_Pos)       /* (TC_EMR) The selected clock is defined by field TCCLKS in TC_CMRx. Position */
#define TC_EMR_NODIVCLK_1                     (TC_EMR_NODIVCLK_1_Val << TC_EMR_NODIVCLK_Pos)       /* (TC_EMR) The selected clock is peripheral clock and TCCLKS field (TC_CMRx) has no effect. Position */
#define TC_EMR_Msk                            _UINT32_(0x00000133)                                 /* (TC_EMR) Register Mask  */


/* -------- TC_CSR : (TC Offset: 0x34) ( R/ 32) Channel Status Register  -------- */
#define TC_CSR_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_CSR) Channel Status Register   Reset Value */

#define TC_CSR_CLKSTA_Pos                     _UINT32_(16)                                         /* (TC_CSR) Clock Enabling Status Position */
#define TC_CSR_CLKSTA_Msk                     (_UINT32_(0x1) << TC_CSR_CLKSTA_Pos)                 /* (TC_CSR) Clock Enabling Status Mask */
#define TC_CSR_CLKSTA(value)                  (TC_CSR_CLKSTA_Msk & (_UINT32_(value) << TC_CSR_CLKSTA_Pos)) /* Assignment of value for CLKSTA in the TC_CSR register */
#define   TC_CSR_CLKSTA_0_Val                 _UINT32_(0x0)                                        /* (TC_CSR) Clock is disabled.  */
#define   TC_CSR_CLKSTA_1_Val                 _UINT32_(0x1)                                        /* (TC_CSR) Clock is enabled.  */
#define TC_CSR_CLKSTA_0                       (TC_CSR_CLKSTA_0_Val << TC_CSR_CLKSTA_Pos)           /* (TC_CSR) Clock is disabled. Position */
#define TC_CSR_CLKSTA_1                       (TC_CSR_CLKSTA_1_Val << TC_CSR_CLKSTA_Pos)           /* (TC_CSR) Clock is enabled. Position */
#define TC_CSR_MTIOA_Pos                      _UINT32_(17)                                         /* (TC_CSR) TIOAx Mirror Position */
#define TC_CSR_MTIOA_Msk                      (_UINT32_(0x1) << TC_CSR_MTIOA_Pos)                  /* (TC_CSR) TIOAx Mirror Mask */
#define TC_CSR_MTIOA(value)                   (TC_CSR_MTIOA_Msk & (_UINT32_(value) << TC_CSR_MTIOA_Pos)) /* Assignment of value for MTIOA in the TC_CSR register */
#define   TC_CSR_MTIOA_0_Val                  _UINT32_(0x0)                                        /* (TC_CSR) TIOAx is low. If TC_CMRx.WAVE = 0, TIOAx is low. If TC_CMRx.WAVE = 1, TIOAx is driven low.  */
#define   TC_CSR_MTIOA_1_Val                  _UINT32_(0x1)                                        /* (TC_CSR) TIOAx is high. If TC_CMRx.WAVE = 0, TIOAx is high. If TC_CMRx.WAVE = 1, TIOAx is driven high.  */
#define TC_CSR_MTIOA_0                        (TC_CSR_MTIOA_0_Val << TC_CSR_MTIOA_Pos)             /* (TC_CSR) TIOAx is low. If TC_CMRx.WAVE = 0, TIOAx is low. If TC_CMRx.WAVE = 1, TIOAx is driven low. Position */
#define TC_CSR_MTIOA_1                        (TC_CSR_MTIOA_1_Val << TC_CSR_MTIOA_Pos)             /* (TC_CSR) TIOAx is high. If TC_CMRx.WAVE = 0, TIOAx is high. If TC_CMRx.WAVE = 1, TIOAx is driven high. Position */
#define TC_CSR_MTIOB_Pos                      _UINT32_(18)                                         /* (TC_CSR) TIOBx Mirror Position */
#define TC_CSR_MTIOB_Msk                      (_UINT32_(0x1) << TC_CSR_MTIOB_Pos)                  /* (TC_CSR) TIOBx Mirror Mask */
#define TC_CSR_MTIOB(value)                   (TC_CSR_MTIOB_Msk & (_UINT32_(value) << TC_CSR_MTIOB_Pos)) /* Assignment of value for MTIOB in the TC_CSR register */
#define   TC_CSR_MTIOB_0_Val                  _UINT32_(0x0)                                        /* (TC_CSR) TIOBx is low. If TC_CMRx.WAVE = 0, TIOBx is low. If TC_CMRx.WAVE = 1, TIOBx is driven low.  */
#define   TC_CSR_MTIOB_1_Val                  _UINT32_(0x1)                                        /* (TC_CSR) TIOBx is high. If TC_CMRx.WAVE = 0, TIOBx is high. If TC_CMRx.WAVE = 1, TIOBx is driven high.  */
#define TC_CSR_MTIOB_0                        (TC_CSR_MTIOB_0_Val << TC_CSR_MTIOB_Pos)             /* (TC_CSR) TIOBx is low. If TC_CMRx.WAVE = 0, TIOBx is low. If TC_CMRx.WAVE = 1, TIOBx is driven low. Position */
#define TC_CSR_MTIOB_1                        (TC_CSR_MTIOB_1_Val << TC_CSR_MTIOB_Pos)             /* (TC_CSR) TIOBx is high. If TC_CMRx.WAVE = 0, TIOBx is high. If TC_CMRx.WAVE = 1, TIOBx is driven high. Position */
#define TC_CSR_Msk                            _UINT32_(0x00070000)                                 /* (TC_CSR) Register Mask  */


/* -------- TC_SSR : (TC Offset: 0x38) ( R/ 32) Safety Status Register  -------- */
#define TC_SSR_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_SSR) Safety Status Register   Reset Value */

#define TC_SSR_WPVS_Pos                       _UINT32_(0)                                          /* (TC_SSR) Write Protection Violation Status (cleared on read) Position */
#define TC_SSR_WPVS_Msk                       (_UINT32_(0x1) << TC_SSR_WPVS_Pos)                   /* (TC_SSR) Write Protection Violation Status (cleared on read) Mask */
#define TC_SSR_WPVS(value)                    (TC_SSR_WPVS_Msk & (_UINT32_(value) << TC_SSR_WPVS_Pos)) /* Assignment of value for WPVS in the TC_SSR register */
#define   TC_SSR_WPVS_0_Val                   _UINT32_(0x0)                                        /* (TC_SSR) No write protection violation has occurred since the last read of TC_SSRx.  */
#define   TC_SSR_WPVS_1_Val                   _UINT32_(0x1)                                        /* (TC_SSR) A write protection violation has occurred since the last read of TC_SSRx. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define TC_SSR_WPVS_0                         (TC_SSR_WPVS_0_Val << TC_SSR_WPVS_Pos)               /* (TC_SSR) No write protection violation has occurred since the last read of TC_SSRx. Position */
#define TC_SSR_WPVS_1                         (TC_SSR_WPVS_1_Val << TC_SSR_WPVS_Pos)               /* (TC_SSR) A write protection violation has occurred since the last read of TC_SSRx. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position */
#define TC_SSR_CGD_Pos                        _UINT32_(1)                                          /* (TC_SSR) Clock Glitch Detected (cleared on read) Position */
#define TC_SSR_CGD_Msk                        (_UINT32_(0x1) << TC_SSR_CGD_Pos)                    /* (TC_SSR) Clock Glitch Detected (cleared on read) Mask */
#define TC_SSR_CGD(value)                     (TC_SSR_CGD_Msk & (_UINT32_(value) << TC_SSR_CGD_Pos)) /* Assignment of value for CGD in the TC_SSR register */
#define   TC_SSR_CGD_0_Val                    _UINT32_(0x0)                                        /* (TC_SSR) The clock monitoring has not been corrupted since the last read of TC_SSRx.  */
#define   TC_SSR_CGD_1_Val                    _UINT32_(0x1)                                        /* (TC_SSR) The clock monitoring has been corrupted since the last read of TC_SSRx. This flag can be set under abnormal operating conditions.  */
#define TC_SSR_CGD_0                          (TC_SSR_CGD_0_Val << TC_SSR_CGD_Pos)                 /* (TC_SSR) The clock monitoring has not been corrupted since the last read of TC_SSRx. Position */
#define TC_SSR_CGD_1                          (TC_SSR_CGD_1_Val << TC_SSR_CGD_Pos)                 /* (TC_SSR) The clock monitoring has been corrupted since the last read of TC_SSRx. This flag can be set under abnormal operating conditions. Position */
#define TC_SSR_SEQE_Pos                       _UINT32_(2)                                          /* (TC_SSR) Internal Sequencer Error (cleared on read) Position */
#define TC_SSR_SEQE_Msk                       (_UINT32_(0x1) << TC_SSR_SEQE_Pos)                   /* (TC_SSR) Internal Sequencer Error (cleared on read) Mask */
#define TC_SSR_SEQE(value)                    (TC_SSR_SEQE_Msk & (_UINT32_(value) << TC_SSR_SEQE_Pos)) /* Assignment of value for SEQE in the TC_SSR register */
#define   TC_SSR_SEQE_0_Val                   _UINT32_(0x0)                                        /* (TC_SSR) No internal counter error has occurred since the last read of TC_SSRx. In normal operating conditions, SEQE is cleared.  */
#define   TC_SSR_SEQE_1_Val                   _UINT32_(0x1)                                        /* (TC_SSR) An internal counter error has occurred since the last read of TC_SSRx. This flag can be set only under abnormal operating conditions resulting in clock glitch, etc. The detection is enabled if TC_CSRx.CLKSTA=1, TC_CMRx.WAVE=1, TC_CMRx.CPCTRG=1 and flag is set if TC_CVx > TC_RCx.  */
#define TC_SSR_SEQE_0                         (TC_SSR_SEQE_0_Val << TC_SSR_SEQE_Pos)               /* (TC_SSR) No internal counter error has occurred since the last read of TC_SSRx. In normal operating conditions, SEQE is cleared. Position */
#define TC_SSR_SEQE_1                         (TC_SSR_SEQE_1_Val << TC_SSR_SEQE_Pos)               /* (TC_SSR) An internal counter error has occurred since the last read of TC_SSRx. This flag can be set only under abnormal operating conditions resulting in clock glitch, etc. The detection is enabled if TC_CSRx.CLKSTA=1, TC_CMRx.WAVE=1, TC_CMRx.CPCTRG=1 and flag is set if TC_CVx > TC_RCx. Position */
#define TC_SSR_SWE_Pos                        _UINT32_(3)                                          /* (TC_SSR) Software Control Error (cleared on read) Position */
#define TC_SSR_SWE_Msk                        (_UINT32_(0x1) << TC_SSR_SWE_Pos)                    /* (TC_SSR) Software Control Error (cleared on read) Mask */
#define TC_SSR_SWE(value)                     (TC_SSR_SWE_Msk & (_UINT32_(value) << TC_SSR_SWE_Pos)) /* Assignment of value for SWE in the TC_SSR register */
#define   TC_SSR_SWE_0_Val                    _UINT32_(0x0)                                        /* (TC_SSR) No software error has occurred since the last read of TC_SSRx.  */
#define   TC_SSR_SWE_1_Val                    _UINT32_(0x1)                                        /* (TC_SSR) A software error has occurred since the last read of TC_SSRx. The field SWETYP details the type of software error encountered.  */
#define TC_SSR_SWE_0                          (TC_SSR_SWE_0_Val << TC_SSR_SWE_Pos)                 /* (TC_SSR) No software error has occurred since the last read of TC_SSRx. Position */
#define TC_SSR_SWE_1                          (TC_SSR_SWE_1_Val << TC_SSR_SWE_Pos)                 /* (TC_SSR) A software error has occurred since the last read of TC_SSRx. The field SWETYP details the type of software error encountered. Position */
#define TC_SSR_WPVSRC_Pos                     _UINT32_(8)                                          /* (TC_SSR) Write Protection Violation Source (cleared on read) Position */
#define TC_SSR_WPVSRC_Msk                     (_UINT32_(0xFFFF) << TC_SSR_WPVSRC_Pos)              /* (TC_SSR) Write Protection Violation Source (cleared on read) Mask */
#define TC_SSR_WPVSRC(value)                  (TC_SSR_WPVSRC_Msk & (_UINT32_(value) << TC_SSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the TC_SSR register */
#define TC_SSR_SWETYP_Pos                     _UINT32_(24)                                         /* (TC_SSR) Software Error Type (cleared on read) Position */
#define TC_SSR_SWETYP_Msk                     (_UINT32_(0xF) << TC_SSR_SWETYP_Pos)                 /* (TC_SSR) Software Error Type (cleared on read) Mask */
#define TC_SSR_SWETYP(value)                  (TC_SSR_SWETYP_Msk & (_UINT32_(value) << TC_SSR_SWETYP_Pos)) /* Assignment of value for SWETYP in the TC_SSR register */
#define   TC_SSR_SWETYP_READ_WO_Val           _UINT32_(0x0)                                        /* (TC_SSR) TC Channel x is enabled and a write-only register has been read (Warning).  */
#define   TC_SSR_SWETYP_WRITE_RO_Val          _UINT32_(0x1)                                        /* (TC_SSR) TC Channel x is enabled and a write access has been performed on a read-only register (Warning).  */
#define   TC_SSR_SWETYP_UNDEF_RW_Val          _UINT32_(0x2)                                        /* (TC_SSR) Access to an undefined address of the TC (Warning).  */
#define   TC_SSR_SWETYP_W_RARB_CAPT_Val       _UINT32_(0x3)                                        /* (TC_SSR) TC_RAx or TC_RBx are written while channel is enabled and configured in capture mode (Error).  */
#define TC_SSR_SWETYP_READ_WO                 (TC_SSR_SWETYP_READ_WO_Val << TC_SSR_SWETYP_Pos)     /* (TC_SSR) TC Channel x is enabled and a write-only register has been read (Warning). Position */
#define TC_SSR_SWETYP_WRITE_RO                (TC_SSR_SWETYP_WRITE_RO_Val << TC_SSR_SWETYP_Pos)    /* (TC_SSR) TC Channel x is enabled and a write access has been performed on a read-only register (Warning). Position */
#define TC_SSR_SWETYP_UNDEF_RW                (TC_SSR_SWETYP_UNDEF_RW_Val << TC_SSR_SWETYP_Pos)    /* (TC_SSR) Access to an undefined address of the TC (Warning). Position */
#define TC_SSR_SWETYP_W_RARB_CAPT             (TC_SSR_SWETYP_W_RARB_CAPT_Val << TC_SSR_SWETYP_Pos) /* (TC_SSR) TC_RAx or TC_RBx are written while channel is enabled and configured in capture mode (Error). Position */
#define TC_SSR_ECLASS_Pos                     _UINT32_(31)                                         /* (TC_SSR) Software Error Class Position */
#define TC_SSR_ECLASS_Msk                     (_UINT32_(0x1) << TC_SSR_ECLASS_Pos)                 /* (TC_SSR) Software Error Class Mask */
#define TC_SSR_ECLASS(value)                  (TC_SSR_ECLASS_Msk & (_UINT32_(value) << TC_SSR_ECLASS_Pos)) /* Assignment of value for ECLASS in the TC_SSR register */
#define   TC_SSR_ECLASS_WARNING_Val           _UINT32_(0x0)                                        /* (TC_SSR) An abnormal access that does not have any impact.  */
#define   TC_SSR_ECLASS_ERROR_Val             _UINT32_(0x1)                                        /* (TC_SSR) An abnormal access that may have an impact.  */
#define TC_SSR_ECLASS_WARNING                 (TC_SSR_ECLASS_WARNING_Val << TC_SSR_ECLASS_Pos)     /* (TC_SSR) An abnormal access that does not have any impact. Position */
#define TC_SSR_ECLASS_ERROR                   (TC_SSR_ECLASS_ERROR_Val << TC_SSR_ECLASS_Pos)       /* (TC_SSR) An abnormal access that may have an impact. Position */
#define TC_SSR_Msk                            _UINT32_(0x8FFFFF0F)                                 /* (TC_SSR) Register Mask  */


/* -------- TC_BCR : (TC Offset: 0xC0) ( /W 32) Block Control Register -------- */
#define TC_BCR_SYNC_Pos                       _UINT32_(0)                                          /* (TC_BCR) Synchro Command Position */
#define TC_BCR_SYNC_Msk                       (_UINT32_(0x1) << TC_BCR_SYNC_Pos)                   /* (TC_BCR) Synchro Command Mask */
#define TC_BCR_SYNC(value)                    (TC_BCR_SYNC_Msk & (_UINT32_(value) << TC_BCR_SYNC_Pos)) /* Assignment of value for SYNC in the TC_BCR register */
#define   TC_BCR_SYNC_0_Val                   _UINT32_(0x0)                                        /* (TC_BCR) No effect.  */
#define   TC_BCR_SYNC_1_Val                   _UINT32_(0x1)                                        /* (TC_BCR) Asserts the SYNC signal which generates a software trigger simultaneously for each of the channels.  */
#define TC_BCR_SYNC_0                         (TC_BCR_SYNC_0_Val << TC_BCR_SYNC_Pos)               /* (TC_BCR) No effect. Position */
#define TC_BCR_SYNC_1                         (TC_BCR_SYNC_1_Val << TC_BCR_SYNC_Pos)               /* (TC_BCR) Asserts the SYNC signal which generates a software trigger simultaneously for each of the channels. Position */
#define TC_BCR_Msk                            _UINT32_(0x00000001)                                 /* (TC_BCR) Register Mask  */


/* -------- TC_BMR : (TC Offset: 0xC4) (R/W 32) Block Mode Register -------- */
#define TC_BMR_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_BMR) Block Mode Register  Reset Value */

#define TC_BMR_TC0XC0S_Pos                    _UINT32_(0)                                          /* (TC_BMR) External Clock Signal 0 (XC0) Selection Position */
#define TC_BMR_TC0XC0S_Msk                    (_UINT32_(0x3) << TC_BMR_TC0XC0S_Pos)                /* (TC_BMR) External Clock Signal 0 (XC0) Selection Mask */
#define TC_BMR_TC0XC0S(value)                 (TC_BMR_TC0XC0S_Msk & (_UINT32_(value) << TC_BMR_TC0XC0S_Pos)) /* Assignment of value for TC0XC0S in the TC_BMR register */
#define   TC_BMR_TC0XC0S_TCLK0_Val            _UINT32_(0x0)                                        /* (TC_BMR) Signal connected to XC0: TCLK0  */
#define   TC_BMR_TC0XC0S_TIOA1_Val            _UINT32_(0x2)                                        /* (TC_BMR) Signal connected to XC0: internal TIOA1 for chaining  */
#define   TC_BMR_TC0XC0S_TIOA2_Val            _UINT32_(0x3)                                        /* (TC_BMR) Signal connected to XC0: internal TIOA2 for chaining  */
#define TC_BMR_TC0XC0S_TCLK0                  (TC_BMR_TC0XC0S_TCLK0_Val << TC_BMR_TC0XC0S_Pos)     /* (TC_BMR) Signal connected to XC0: TCLK0 Position */
#define TC_BMR_TC0XC0S_TIOA1                  (TC_BMR_TC0XC0S_TIOA1_Val << TC_BMR_TC0XC0S_Pos)     /* (TC_BMR) Signal connected to XC0: internal TIOA1 for chaining Position */
#define TC_BMR_TC0XC0S_TIOA2                  (TC_BMR_TC0XC0S_TIOA2_Val << TC_BMR_TC0XC0S_Pos)     /* (TC_BMR) Signal connected to XC0: internal TIOA2 for chaining Position */
#define TC_BMR_TC1XC1S_Pos                    _UINT32_(2)                                          /* (TC_BMR) External Clock Signal 1 (XC1) Selection Position */
#define TC_BMR_TC1XC1S_Msk                    (_UINT32_(0x3) << TC_BMR_TC1XC1S_Pos)                /* (TC_BMR) External Clock Signal 1 (XC1) Selection Mask */
#define TC_BMR_TC1XC1S(value)                 (TC_BMR_TC1XC1S_Msk & (_UINT32_(value) << TC_BMR_TC1XC1S_Pos)) /* Assignment of value for TC1XC1S in the TC_BMR register */
#define   TC_BMR_TC1XC1S_TCLK1_Val            _UINT32_(0x0)                                        /* (TC_BMR) Signal connected to XC1: TCLK1  */
#define   TC_BMR_TC1XC1S_TIOA0_Val            _UINT32_(0x2)                                        /* (TC_BMR) Signal connected to XC1: internal TIOA0 for chaining  */
#define   TC_BMR_TC1XC1S_TIOA2_Val            _UINT32_(0x3)                                        /* (TC_BMR) Signal connected to XC1: internal TIOA2 for chaining  */
#define TC_BMR_TC1XC1S_TCLK1                  (TC_BMR_TC1XC1S_TCLK1_Val << TC_BMR_TC1XC1S_Pos)     /* (TC_BMR) Signal connected to XC1: TCLK1 Position */
#define TC_BMR_TC1XC1S_TIOA0                  (TC_BMR_TC1XC1S_TIOA0_Val << TC_BMR_TC1XC1S_Pos)     /* (TC_BMR) Signal connected to XC1: internal TIOA0 for chaining Position */
#define TC_BMR_TC1XC1S_TIOA2                  (TC_BMR_TC1XC1S_TIOA2_Val << TC_BMR_TC1XC1S_Pos)     /* (TC_BMR) Signal connected to XC1: internal TIOA2 for chaining Position */
#define TC_BMR_TC2XC2S_Pos                    _UINT32_(4)                                          /* (TC_BMR) External Clock Signal 2 (XC2) Selection Position */
#define TC_BMR_TC2XC2S_Msk                    (_UINT32_(0x3) << TC_BMR_TC2XC2S_Pos)                /* (TC_BMR) External Clock Signal 2 (XC2) Selection Mask */
#define TC_BMR_TC2XC2S(value)                 (TC_BMR_TC2XC2S_Msk & (_UINT32_(value) << TC_BMR_TC2XC2S_Pos)) /* Assignment of value for TC2XC2S in the TC_BMR register */
#define   TC_BMR_TC2XC2S_TCLK2_Val            _UINT32_(0x0)                                        /* (TC_BMR) Signal connected to XC2: TCLK2  */
#define   TC_BMR_TC2XC2S_TIOA0_Val            _UINT32_(0x2)                                        /* (TC_BMR) Signal connected to XC2: internal TIOA0 for chaining  */
#define   TC_BMR_TC2XC2S_TIOA1_Val            _UINT32_(0x3)                                        /* (TC_BMR) Signal connected to XC2: internal TIOA1 for chaining  */
#define TC_BMR_TC2XC2S_TCLK2                  (TC_BMR_TC2XC2S_TCLK2_Val << TC_BMR_TC2XC2S_Pos)     /* (TC_BMR) Signal connected to XC2: TCLK2 Position */
#define TC_BMR_TC2XC2S_TIOA0                  (TC_BMR_TC2XC2S_TIOA0_Val << TC_BMR_TC2XC2S_Pos)     /* (TC_BMR) Signal connected to XC2: internal TIOA0 for chaining Position */
#define TC_BMR_TC2XC2S_TIOA1                  (TC_BMR_TC2XC2S_TIOA1_Val << TC_BMR_TC2XC2S_Pos)     /* (TC_BMR) Signal connected to XC2: internal TIOA1 for chaining Position */
#define TC_BMR_QDEN_Pos                       _UINT32_(8)                                          /* (TC_BMR) Quadrature Decoder Enabled Position */
#define TC_BMR_QDEN_Msk                       (_UINT32_(0x1) << TC_BMR_QDEN_Pos)                   /* (TC_BMR) Quadrature Decoder Enabled Mask */
#define TC_BMR_QDEN(value)                    (TC_BMR_QDEN_Msk & (_UINT32_(value) << TC_BMR_QDEN_Pos)) /* Assignment of value for QDEN in the TC_BMR register */
#define   TC_BMR_QDEN_0_Val                   _UINT32_(0x0)                                        /* (TC_BMR) Disabled.  */
#define   TC_BMR_QDEN_1_Val                   _UINT32_(0x1)                                        /* (TC_BMR) Enables the QDEC (filter, edge detection and quadrature decoding).  */
#define TC_BMR_QDEN_0                         (TC_BMR_QDEN_0_Val << TC_BMR_QDEN_Pos)               /* (TC_BMR) Disabled. Position */
#define TC_BMR_QDEN_1                         (TC_BMR_QDEN_1_Val << TC_BMR_QDEN_Pos)               /* (TC_BMR) Enables the QDEC (filter, edge detection and quadrature decoding). Position */
#define TC_BMR_POSEN_Pos                      _UINT32_(9)                                          /* (TC_BMR) Position Enabled Position */
#define TC_BMR_POSEN_Msk                      (_UINT32_(0x1) << TC_BMR_POSEN_Pos)                  /* (TC_BMR) Position Enabled Mask */
#define TC_BMR_POSEN(value)                   (TC_BMR_POSEN_Msk & (_UINT32_(value) << TC_BMR_POSEN_Pos)) /* Assignment of value for POSEN in the TC_BMR register */
#define   TC_BMR_POSEN_0_Val                  _UINT32_(0x0)                                        /* (TC_BMR) Disable position.  */
#define   TC_BMR_POSEN_1_Val                  _UINT32_(0x1)                                        /* (TC_BMR) Enables the position measure on channel 0 and 1.  */
#define TC_BMR_POSEN_0                        (TC_BMR_POSEN_0_Val << TC_BMR_POSEN_Pos)             /* (TC_BMR) Disable position. Position */
#define TC_BMR_POSEN_1                        (TC_BMR_POSEN_1_Val << TC_BMR_POSEN_Pos)             /* (TC_BMR) Enables the position measure on channel 0 and 1. Position */
#define TC_BMR_SPEEDEN_Pos                    _UINT32_(10)                                         /* (TC_BMR) Speed Enabled Position */
#define TC_BMR_SPEEDEN_Msk                    (_UINT32_(0x1) << TC_BMR_SPEEDEN_Pos)                /* (TC_BMR) Speed Enabled Mask */
#define TC_BMR_SPEEDEN(value)                 (TC_BMR_SPEEDEN_Msk & (_UINT32_(value) << TC_BMR_SPEEDEN_Pos)) /* Assignment of value for SPEEDEN in the TC_BMR register */
#define   TC_BMR_SPEEDEN_0_Val                _UINT32_(0x0)                                        /* (TC_BMR) Disabled.  */
#define   TC_BMR_SPEEDEN_1_Val                _UINT32_(0x1)                                        /* (TC_BMR) Enables the speed measure on channel 0, the time base being provided by channel 2.  */
#define TC_BMR_SPEEDEN_0                      (TC_BMR_SPEEDEN_0_Val << TC_BMR_SPEEDEN_Pos)         /* (TC_BMR) Disabled. Position */
#define TC_BMR_SPEEDEN_1                      (TC_BMR_SPEEDEN_1_Val << TC_BMR_SPEEDEN_Pos)         /* (TC_BMR) Enables the speed measure on channel 0, the time base being provided by channel 2. Position */
#define TC_BMR_QDTRANS_Pos                    _UINT32_(11)                                         /* (TC_BMR) Quadrature Decoding Transparent Position */
#define TC_BMR_QDTRANS_Msk                    (_UINT32_(0x1) << TC_BMR_QDTRANS_Pos)                /* (TC_BMR) Quadrature Decoding Transparent Mask */
#define TC_BMR_QDTRANS(value)                 (TC_BMR_QDTRANS_Msk & (_UINT32_(value) << TC_BMR_QDTRANS_Pos)) /* Assignment of value for QDTRANS in the TC_BMR register */
#define   TC_BMR_QDTRANS_0_Val                _UINT32_(0x0)                                        /* (TC_BMR) Full quadrature decoding logic is active (direction change detected).  */
#define   TC_BMR_QDTRANS_1_Val                _UINT32_(0x1)                                        /* (TC_BMR) Quadrature decoding logic is inactive (direction change inactive) but input filtering and edge detection are performed.  */
#define TC_BMR_QDTRANS_0                      (TC_BMR_QDTRANS_0_Val << TC_BMR_QDTRANS_Pos)         /* (TC_BMR) Full quadrature decoding logic is active (direction change detected). Position */
#define TC_BMR_QDTRANS_1                      (TC_BMR_QDTRANS_1_Val << TC_BMR_QDTRANS_Pos)         /* (TC_BMR) Quadrature decoding logic is inactive (direction change inactive) but input filtering and edge detection are performed. Position */
#define TC_BMR_EDGPHA_Pos                     _UINT32_(12)                                         /* (TC_BMR) Edge on PHA Count Mode Position */
#define TC_BMR_EDGPHA_Msk                     (_UINT32_(0x1) << TC_BMR_EDGPHA_Pos)                 /* (TC_BMR) Edge on PHA Count Mode Mask */
#define TC_BMR_EDGPHA(value)                  (TC_BMR_EDGPHA_Msk & (_UINT32_(value) << TC_BMR_EDGPHA_Pos)) /* Assignment of value for EDGPHA in the TC_BMR register */
#define   TC_BMR_EDGPHA_0_Val                 _UINT32_(0x0)                                        /* (TC_BMR) Edges are detected on PHA only.  */
#define   TC_BMR_EDGPHA_1_Val                 _UINT32_(0x1)                                        /* (TC_BMR) Edges are detected on both PHA and PHB.  */
#define TC_BMR_EDGPHA_0                       (TC_BMR_EDGPHA_0_Val << TC_BMR_EDGPHA_Pos)           /* (TC_BMR) Edges are detected on PHA only. Position */
#define TC_BMR_EDGPHA_1                       (TC_BMR_EDGPHA_1_Val << TC_BMR_EDGPHA_Pos)           /* (TC_BMR) Edges are detected on both PHA and PHB. Position */
#define TC_BMR_INVA_Pos                       _UINT32_(13)                                         /* (TC_BMR) Inverted PHA Position */
#define TC_BMR_INVA_Msk                       (_UINT32_(0x1) << TC_BMR_INVA_Pos)                   /* (TC_BMR) Inverted PHA Mask */
#define TC_BMR_INVA(value)                    (TC_BMR_INVA_Msk & (_UINT32_(value) << TC_BMR_INVA_Pos)) /* Assignment of value for INVA in the TC_BMR register */
#define   TC_BMR_INVA_0_Val                   _UINT32_(0x0)                                        /* (TC_BMR) PHA (TIOA0) is directly driving the QDEC.  */
#define   TC_BMR_INVA_1_Val                   _UINT32_(0x1)                                        /* (TC_BMR) PHA is inverted before driving the QDEC.  */
#define TC_BMR_INVA_0                         (TC_BMR_INVA_0_Val << TC_BMR_INVA_Pos)               /* (TC_BMR) PHA (TIOA0) is directly driving the QDEC. Position */
#define TC_BMR_INVA_1                         (TC_BMR_INVA_1_Val << TC_BMR_INVA_Pos)               /* (TC_BMR) PHA is inverted before driving the QDEC. Position */
#define TC_BMR_INVB_Pos                       _UINT32_(14)                                         /* (TC_BMR) Inverted PHB Position */
#define TC_BMR_INVB_Msk                       (_UINT32_(0x1) << TC_BMR_INVB_Pos)                   /* (TC_BMR) Inverted PHB Mask */
#define TC_BMR_INVB(value)                    (TC_BMR_INVB_Msk & (_UINT32_(value) << TC_BMR_INVB_Pos)) /* Assignment of value for INVB in the TC_BMR register */
#define   TC_BMR_INVB_0_Val                   _UINT32_(0x0)                                        /* (TC_BMR) PHB (TIOB0) is directly driving the QDEC.  */
#define   TC_BMR_INVB_1_Val                   _UINT32_(0x1)                                        /* (TC_BMR) PHB is inverted before driving the QDEC.  */
#define TC_BMR_INVB_0                         (TC_BMR_INVB_0_Val << TC_BMR_INVB_Pos)               /* (TC_BMR) PHB (TIOB0) is directly driving the QDEC. Position */
#define TC_BMR_INVB_1                         (TC_BMR_INVB_1_Val << TC_BMR_INVB_Pos)               /* (TC_BMR) PHB is inverted before driving the QDEC. Position */
#define TC_BMR_INVIDX_Pos                     _UINT32_(15)                                         /* (TC_BMR) Inverted Index Position */
#define TC_BMR_INVIDX_Msk                     (_UINT32_(0x1) << TC_BMR_INVIDX_Pos)                 /* (TC_BMR) Inverted Index Mask */
#define TC_BMR_INVIDX(value)                  (TC_BMR_INVIDX_Msk & (_UINT32_(value) << TC_BMR_INVIDX_Pos)) /* Assignment of value for INVIDX in the TC_BMR register */
#define   TC_BMR_INVIDX_0_Val                 _UINT32_(0x0)                                        /* (TC_BMR) IDX (TIOA1) is directly driving the QDEC.  */
#define   TC_BMR_INVIDX_1_Val                 _UINT32_(0x1)                                        /* (TC_BMR) IDX is inverted before driving the QDEC.  */
#define TC_BMR_INVIDX_0                       (TC_BMR_INVIDX_0_Val << TC_BMR_INVIDX_Pos)           /* (TC_BMR) IDX (TIOA1) is directly driving the QDEC. Position */
#define TC_BMR_INVIDX_1                       (TC_BMR_INVIDX_1_Val << TC_BMR_INVIDX_Pos)           /* (TC_BMR) IDX is inverted before driving the QDEC. Position */
#define TC_BMR_SWAP_Pos                       _UINT32_(16)                                         /* (TC_BMR) Swap PHA and PHB Position */
#define TC_BMR_SWAP_Msk                       (_UINT32_(0x1) << TC_BMR_SWAP_Pos)                   /* (TC_BMR) Swap PHA and PHB Mask */
#define TC_BMR_SWAP(value)                    (TC_BMR_SWAP_Msk & (_UINT32_(value) << TC_BMR_SWAP_Pos)) /* Assignment of value for SWAP in the TC_BMR register */
#define   TC_BMR_SWAP_0_Val                   _UINT32_(0x0)                                        /* (TC_BMR) No swap between PHA and PHB.  */
#define   TC_BMR_SWAP_1_Val                   _UINT32_(0x1)                                        /* (TC_BMR) Swap PHA and PHB internally, prior to driving the QDEC.  */
#define TC_BMR_SWAP_0                         (TC_BMR_SWAP_0_Val << TC_BMR_SWAP_Pos)               /* (TC_BMR) No swap between PHA and PHB. Position */
#define TC_BMR_SWAP_1                         (TC_BMR_SWAP_1_Val << TC_BMR_SWAP_Pos)               /* (TC_BMR) Swap PHA and PHB internally, prior to driving the QDEC. Position */
#define TC_BMR_IDXPHB_Pos                     _UINT32_(17)                                         /* (TC_BMR) Index Pin is PHB Pin Position */
#define TC_BMR_IDXPHB_Msk                     (_UINT32_(0x1) << TC_BMR_IDXPHB_Pos)                 /* (TC_BMR) Index Pin is PHB Pin Mask */
#define TC_BMR_IDXPHB(value)                  (TC_BMR_IDXPHB_Msk & (_UINT32_(value) << TC_BMR_IDXPHB_Pos)) /* Assignment of value for IDXPHB in the TC_BMR register */
#define   TC_BMR_IDXPHB_0_Val                 _UINT32_(0x0)                                        /* (TC_BMR) IDX pin of the rotary sensor must drive TIOA1.  */
#define   TC_BMR_IDXPHB_1_Val                 _UINT32_(0x1)                                        /* (TC_BMR) IDX pin of the rotary sensor must drive TIOB0.  */
#define TC_BMR_IDXPHB_0                       (TC_BMR_IDXPHB_0_Val << TC_BMR_IDXPHB_Pos)           /* (TC_BMR) IDX pin of the rotary sensor must drive TIOA1. Position */
#define TC_BMR_IDXPHB_1                       (TC_BMR_IDXPHB_1_Val << TC_BMR_IDXPHB_Pos)           /* (TC_BMR) IDX pin of the rotary sensor must drive TIOB0. Position */
#define TC_BMR_AUTOC_Pos                      _UINT32_(18)                                         /* (TC_BMR) AutoCorrection of Missing Pulses Position */
#define TC_BMR_AUTOC_Msk                      (_UINT32_(0x1) << TC_BMR_AUTOC_Pos)                  /* (TC_BMR) AutoCorrection of Missing Pulses Mask */
#define TC_BMR_AUTOC(value)                   (TC_BMR_AUTOC_Msk & (_UINT32_(value) << TC_BMR_AUTOC_Pos)) /* Assignment of value for AUTOC in the TC_BMR register */
#define   TC_BMR_AUTOC_DISABLED_Val           _UINT32_(0x0)                                        /* (TC_BMR) The detection and autocorrection function is disabled.  */
#define   TC_BMR_AUTOC_ENABLED_Val            _UINT32_(0x1)                                        /* (TC_BMR) The detection and autocorrection function is enabled.  */
#define TC_BMR_AUTOC_DISABLED                 (TC_BMR_AUTOC_DISABLED_Val << TC_BMR_AUTOC_Pos)      /* (TC_BMR) The detection and autocorrection function is disabled. Position */
#define TC_BMR_AUTOC_ENABLED                  (TC_BMR_AUTOC_ENABLED_Val << TC_BMR_AUTOC_Pos)       /* (TC_BMR) The detection and autocorrection function is enabled. Position */
#define TC_BMR_MAXFILT_Pos                    _UINT32_(20)                                         /* (TC_BMR) Maximum Filter Position */
#define TC_BMR_MAXFILT_Msk                    (_UINT32_(0x3F) << TC_BMR_MAXFILT_Pos)               /* (TC_BMR) Maximum Filter Mask */
#define TC_BMR_MAXFILT(value)                 (TC_BMR_MAXFILT_Msk & (_UINT32_(value) << TC_BMR_MAXFILT_Pos)) /* Assignment of value for MAXFILT in the TC_BMR register */
#define TC_BMR_MAXCMP_Pos                     _UINT32_(26)                                         /* (TC_BMR) Maximum Consecutive Missing Pulses Position */
#define TC_BMR_MAXCMP_Msk                     (_UINT32_(0xF) << TC_BMR_MAXCMP_Pos)                 /* (TC_BMR) Maximum Consecutive Missing Pulses Mask */
#define TC_BMR_MAXCMP(value)                  (TC_BMR_MAXCMP_Msk & (_UINT32_(value) << TC_BMR_MAXCMP_Pos)) /* Assignment of value for MAXCMP in the TC_BMR register */
#define   TC_BMR_MAXCMP_0_Val                 _UINT32_(0x0)                                        /* (TC_BMR) The flag MPE in TC_QISR never rises.  */
#define TC_BMR_MAXCMP_0                       (TC_BMR_MAXCMP_0_Val << TC_BMR_MAXCMP_Pos)           /* (TC_BMR) The flag MPE in TC_QISR never rises. Position */
#define TC_BMR_Msk                            _UINT32_(0x3FF7FF3F)                                 /* (TC_BMR) Register Mask  */


/* -------- TC_QIER : (TC Offset: 0xC8) ( /W 32) QDEC Interrupt Enable Register -------- */
#define TC_QIER_IDX_Pos                       _UINT32_(0)                                          /* (TC_QIER) Index Position */
#define TC_QIER_IDX_Msk                       (_UINT32_(0x1) << TC_QIER_IDX_Pos)                   /* (TC_QIER) Index Mask */
#define TC_QIER_IDX(value)                    (TC_QIER_IDX_Msk & (_UINT32_(value) << TC_QIER_IDX_Pos)) /* Assignment of value for IDX in the TC_QIER register */
#define   TC_QIER_IDX_0_Val                   _UINT32_(0x0)                                        /* (TC_QIER) No effect.  */
#define   TC_QIER_IDX_1_Val                   _UINT32_(0x1)                                        /* (TC_QIER) Enables the interrupt when a rising edge occurs on IDX input.  */
#define TC_QIER_IDX_0                         (TC_QIER_IDX_0_Val << TC_QIER_IDX_Pos)               /* (TC_QIER) No effect. Position */
#define TC_QIER_IDX_1                         (TC_QIER_IDX_1_Val << TC_QIER_IDX_Pos)               /* (TC_QIER) Enables the interrupt when a rising edge occurs on IDX input. Position */
#define TC_QIER_DIRCHG_Pos                    _UINT32_(1)                                          /* (TC_QIER) Direction Change Position */
#define TC_QIER_DIRCHG_Msk                    (_UINT32_(0x1) << TC_QIER_DIRCHG_Pos)                /* (TC_QIER) Direction Change Mask */
#define TC_QIER_DIRCHG(value)                 (TC_QIER_DIRCHG_Msk & (_UINT32_(value) << TC_QIER_DIRCHG_Pos)) /* Assignment of value for DIRCHG in the TC_QIER register */
#define   TC_QIER_DIRCHG_0_Val                _UINT32_(0x0)                                        /* (TC_QIER) No effect.  */
#define   TC_QIER_DIRCHG_1_Val                _UINT32_(0x1)                                        /* (TC_QIER) Enables the interrupt when a change on rotation direction is detected.  */
#define TC_QIER_DIRCHG_0                      (TC_QIER_DIRCHG_0_Val << TC_QIER_DIRCHG_Pos)         /* (TC_QIER) No effect. Position */
#define TC_QIER_DIRCHG_1                      (TC_QIER_DIRCHG_1_Val << TC_QIER_DIRCHG_Pos)         /* (TC_QIER) Enables the interrupt when a change on rotation direction is detected. Position */
#define TC_QIER_QERR_Pos                      _UINT32_(2)                                          /* (TC_QIER) Quadrature Error Position */
#define TC_QIER_QERR_Msk                      (_UINT32_(0x1) << TC_QIER_QERR_Pos)                  /* (TC_QIER) Quadrature Error Mask */
#define TC_QIER_QERR(value)                   (TC_QIER_QERR_Msk & (_UINT32_(value) << TC_QIER_QERR_Pos)) /* Assignment of value for QERR in the TC_QIER register */
#define   TC_QIER_QERR_0_Val                  _UINT32_(0x0)                                        /* (TC_QIER) No effect.  */
#define   TC_QIER_QERR_1_Val                  _UINT32_(0x1)                                        /* (TC_QIER) Enables the interrupt when a quadrature error occurs on PHA, PHB.  */
#define TC_QIER_QERR_0                        (TC_QIER_QERR_0_Val << TC_QIER_QERR_Pos)             /* (TC_QIER) No effect. Position */
#define TC_QIER_QERR_1                        (TC_QIER_QERR_1_Val << TC_QIER_QERR_Pos)             /* (TC_QIER) Enables the interrupt when a quadrature error occurs on PHA, PHB. Position */
#define TC_QIER_MPE_Pos                       _UINT32_(3)                                          /* (TC_QIER) Consecutive Missing Pulse Error Position */
#define TC_QIER_MPE_Msk                       (_UINT32_(0x1) << TC_QIER_MPE_Pos)                   /* (TC_QIER) Consecutive Missing Pulse Error Mask */
#define TC_QIER_MPE(value)                    (TC_QIER_MPE_Msk & (_UINT32_(value) << TC_QIER_MPE_Pos)) /* Assignment of value for MPE in the TC_QIER register */
#define   TC_QIER_MPE_0_Val                   _UINT32_(0x0)                                        /* (TC_QIER) No effect.  */
#define   TC_QIER_MPE_1_Val                   _UINT32_(0x1)                                        /* (TC_QIER) Enables the interrupt when an occurrence of MAXCMP consecutive missing pulses is detected.  */
#define TC_QIER_MPE_0                         (TC_QIER_MPE_0_Val << TC_QIER_MPE_Pos)               /* (TC_QIER) No effect. Position */
#define TC_QIER_MPE_1                         (TC_QIER_MPE_1_Val << TC_QIER_MPE_Pos)               /* (TC_QIER) Enables the interrupt when an occurrence of MAXCMP consecutive missing pulses is detected. Position */
#define TC_QIER_FPHA_Pos                      _UINT32_(4)                                          /* (TC_QIER) Filtered Phase A Line Position */
#define TC_QIER_FPHA_Msk                      (_UINT32_(0x1) << TC_QIER_FPHA_Pos)                  /* (TC_QIER) Filtered Phase A Line Mask */
#define TC_QIER_FPHA(value)                   (TC_QIER_FPHA_Msk & (_UINT32_(value) << TC_QIER_FPHA_Pos)) /* Assignment of value for FPHA in the TC_QIER register */
#define   TC_QIER_FPHA_0_Val                  _UINT32_(0x0)                                        /* (TC_QIER) No effect.  */
#define   TC_QIER_FPHA_1_Val                  _UINT32_(0x1)                                        /* (TC_QIER) Enables the interrupt when phase A line has a filtered contamination.  */
#define TC_QIER_FPHA_0                        (TC_QIER_FPHA_0_Val << TC_QIER_FPHA_Pos)             /* (TC_QIER) No effect. Position */
#define TC_QIER_FPHA_1                        (TC_QIER_FPHA_1_Val << TC_QIER_FPHA_Pos)             /* (TC_QIER) Enables the interrupt when phase A line has a filtered contamination. Position */
#define TC_QIER_FPHB_Pos                      _UINT32_(5)                                          /* (TC_QIER) Filtered Phase B Line Position */
#define TC_QIER_FPHB_Msk                      (_UINT32_(0x1) << TC_QIER_FPHB_Pos)                  /* (TC_QIER) Filtered Phase B Line Mask */
#define TC_QIER_FPHB(value)                   (TC_QIER_FPHB_Msk & (_UINT32_(value) << TC_QIER_FPHB_Pos)) /* Assignment of value for FPHB in the TC_QIER register */
#define   TC_QIER_FPHB_0_Val                  _UINT32_(0x0)                                        /* (TC_QIER) No effect.  */
#define   TC_QIER_FPHB_1_Val                  _UINT32_(0x1)                                        /* (TC_QIER) Enables the interrupt when phase B line has a filtered contamination.  */
#define TC_QIER_FPHB_0                        (TC_QIER_FPHB_0_Val << TC_QIER_FPHB_Pos)             /* (TC_QIER) No effect. Position */
#define TC_QIER_FPHB_1                        (TC_QIER_FPHB_1_Val << TC_QIER_FPHB_Pos)             /* (TC_QIER) Enables the interrupt when phase B line has a filtered contamination. Position */
#define TC_QIER_FIDX_Pos                      _UINT32_(6)                                          /* (TC_QIER) Filtered Index Line Position */
#define TC_QIER_FIDX_Msk                      (_UINT32_(0x1) << TC_QIER_FIDX_Pos)                  /* (TC_QIER) Filtered Index Line Mask */
#define TC_QIER_FIDX(value)                   (TC_QIER_FIDX_Msk & (_UINT32_(value) << TC_QIER_FIDX_Pos)) /* Assignment of value for FIDX in the TC_QIER register */
#define   TC_QIER_FIDX_0_Val                  _UINT32_(0x0)                                        /* (TC_QIER) No effect.  */
#define   TC_QIER_FIDX_1_Val                  _UINT32_(0x1)                                        /* (TC_QIER) Enables the interrupt when index line has a filtered contamination.  */
#define TC_QIER_FIDX_0                        (TC_QIER_FIDX_0_Val << TC_QIER_FIDX_Pos)             /* (TC_QIER) No effect. Position */
#define TC_QIER_FIDX_1                        (TC_QIER_FIDX_1_Val << TC_QIER_FIDX_Pos)             /* (TC_QIER) Enables the interrupt when index line has a filtered contamination. Position */
#define TC_QIER_FMP_Pos                       _UINT32_(7)                                          /* (TC_QIER) Filtered Missing Pulse Position */
#define TC_QIER_FMP_Msk                       (_UINT32_(0x1) << TC_QIER_FMP_Pos)                   /* (TC_QIER) Filtered Missing Pulse Mask */
#define TC_QIER_FMP(value)                    (TC_QIER_FMP_Msk & (_UINT32_(value) << TC_QIER_FMP_Pos)) /* Assignment of value for FMP in the TC_QIER register */
#define   TC_QIER_FMP_0_Val                   _UINT32_(0x0)                                        /* (TC_QIER) No effect.  */
#define   TC_QIER_FMP_1_Val                   _UINT32_(0x1)                                        /* (TC_QIER) Enables the interrupt when phase A or phase B has a corrected missing pulse.  */
#define TC_QIER_FMP_0                         (TC_QIER_FMP_0_Val << TC_QIER_FMP_Pos)               /* (TC_QIER) No effect. Position */
#define TC_QIER_FMP_1                         (TC_QIER_FMP_1_Val << TC_QIER_FMP_Pos)               /* (TC_QIER) Enables the interrupt when phase A or phase B has a corrected missing pulse. Position */
#define TC_QIER_Msk                           _UINT32_(0x000000FF)                                 /* (TC_QIER) Register Mask  */


/* -------- TC_QIDR : (TC Offset: 0xCC) ( /W 32) QDEC Interrupt Disable Register -------- */
#define TC_QIDR_IDX_Pos                       _UINT32_(0)                                          /* (TC_QIDR) Index Position */
#define TC_QIDR_IDX_Msk                       (_UINT32_(0x1) << TC_QIDR_IDX_Pos)                   /* (TC_QIDR) Index Mask */
#define TC_QIDR_IDX(value)                    (TC_QIDR_IDX_Msk & (_UINT32_(value) << TC_QIDR_IDX_Pos)) /* Assignment of value for IDX in the TC_QIDR register */
#define   TC_QIDR_IDX_0_Val                   _UINT32_(0x0)                                        /* (TC_QIDR) No effect.  */
#define   TC_QIDR_IDX_1_Val                   _UINT32_(0x1)                                        /* (TC_QIDR) Disables the interrupt when a rising edge occurs on IDX input.  */
#define TC_QIDR_IDX_0                         (TC_QIDR_IDX_0_Val << TC_QIDR_IDX_Pos)               /* (TC_QIDR) No effect. Position */
#define TC_QIDR_IDX_1                         (TC_QIDR_IDX_1_Val << TC_QIDR_IDX_Pos)               /* (TC_QIDR) Disables the interrupt when a rising edge occurs on IDX input. Position */
#define TC_QIDR_DIRCHG_Pos                    _UINT32_(1)                                          /* (TC_QIDR) Direction Change Position */
#define TC_QIDR_DIRCHG_Msk                    (_UINT32_(0x1) << TC_QIDR_DIRCHG_Pos)                /* (TC_QIDR) Direction Change Mask */
#define TC_QIDR_DIRCHG(value)                 (TC_QIDR_DIRCHG_Msk & (_UINT32_(value) << TC_QIDR_DIRCHG_Pos)) /* Assignment of value for DIRCHG in the TC_QIDR register */
#define   TC_QIDR_DIRCHG_0_Val                _UINT32_(0x0)                                        /* (TC_QIDR) No effect.  */
#define   TC_QIDR_DIRCHG_1_Val                _UINT32_(0x1)                                        /* (TC_QIDR) Disables the interrupt when a change on rotation direction is detected.  */
#define TC_QIDR_DIRCHG_0                      (TC_QIDR_DIRCHG_0_Val << TC_QIDR_DIRCHG_Pos)         /* (TC_QIDR) No effect. Position */
#define TC_QIDR_DIRCHG_1                      (TC_QIDR_DIRCHG_1_Val << TC_QIDR_DIRCHG_Pos)         /* (TC_QIDR) Disables the interrupt when a change on rotation direction is detected. Position */
#define TC_QIDR_QERR_Pos                      _UINT32_(2)                                          /* (TC_QIDR) Quadrature Error Position */
#define TC_QIDR_QERR_Msk                      (_UINT32_(0x1) << TC_QIDR_QERR_Pos)                  /* (TC_QIDR) Quadrature Error Mask */
#define TC_QIDR_QERR(value)                   (TC_QIDR_QERR_Msk & (_UINT32_(value) << TC_QIDR_QERR_Pos)) /* Assignment of value for QERR in the TC_QIDR register */
#define   TC_QIDR_QERR_0_Val                  _UINT32_(0x0)                                        /* (TC_QIDR) No effect.  */
#define   TC_QIDR_QERR_1_Val                  _UINT32_(0x1)                                        /* (TC_QIDR) Disables the interrupt when a quadrature error occurs on PHA, PHB.  */
#define TC_QIDR_QERR_0                        (TC_QIDR_QERR_0_Val << TC_QIDR_QERR_Pos)             /* (TC_QIDR) No effect. Position */
#define TC_QIDR_QERR_1                        (TC_QIDR_QERR_1_Val << TC_QIDR_QERR_Pos)             /* (TC_QIDR) Disables the interrupt when a quadrature error occurs on PHA, PHB. Position */
#define TC_QIDR_MPE_Pos                       _UINT32_(3)                                          /* (TC_QIDR) Consecutive Missing Pulse Error Position */
#define TC_QIDR_MPE_Msk                       (_UINT32_(0x1) << TC_QIDR_MPE_Pos)                   /* (TC_QIDR) Consecutive Missing Pulse Error Mask */
#define TC_QIDR_MPE(value)                    (TC_QIDR_MPE_Msk & (_UINT32_(value) << TC_QIDR_MPE_Pos)) /* Assignment of value for MPE in the TC_QIDR register */
#define   TC_QIDR_MPE_0_Val                   _UINT32_(0x0)                                        /* (TC_QIDR) No effect.  */
#define   TC_QIDR_MPE_1_Val                   _UINT32_(0x1)                                        /* (TC_QIDR) Disables the interrupt when an occurrence of MAXCMP consecutive missing pulses has been detected.  */
#define TC_QIDR_MPE_0                         (TC_QIDR_MPE_0_Val << TC_QIDR_MPE_Pos)               /* (TC_QIDR) No effect. Position */
#define TC_QIDR_MPE_1                         (TC_QIDR_MPE_1_Val << TC_QIDR_MPE_Pos)               /* (TC_QIDR) Disables the interrupt when an occurrence of MAXCMP consecutive missing pulses has been detected. Position */
#define TC_QIDR_FPHA_Pos                      _UINT32_(4)                                          /* (TC_QIDR) Filtered Phase A Line Position */
#define TC_QIDR_FPHA_Msk                      (_UINT32_(0x1) << TC_QIDR_FPHA_Pos)                  /* (TC_QIDR) Filtered Phase A Line Mask */
#define TC_QIDR_FPHA(value)                   (TC_QIDR_FPHA_Msk & (_UINT32_(value) << TC_QIDR_FPHA_Pos)) /* Assignment of value for FPHA in the TC_QIDR register */
#define   TC_QIDR_FPHA_0_Val                  _UINT32_(0x0)                                        /* (TC_QIDR) No effect.  */
#define   TC_QIDR_FPHA_1_Val                  _UINT32_(0x1)                                        /* (TC_QIDR) Disables the interrupt when phase A line has a filtered contamination.  */
#define TC_QIDR_FPHA_0                        (TC_QIDR_FPHA_0_Val << TC_QIDR_FPHA_Pos)             /* (TC_QIDR) No effect. Position */
#define TC_QIDR_FPHA_1                        (TC_QIDR_FPHA_1_Val << TC_QIDR_FPHA_Pos)             /* (TC_QIDR) Disables the interrupt when phase A line has a filtered contamination. Position */
#define TC_QIDR_FPHB_Pos                      _UINT32_(5)                                          /* (TC_QIDR) Filtered Phase B Line Position */
#define TC_QIDR_FPHB_Msk                      (_UINT32_(0x1) << TC_QIDR_FPHB_Pos)                  /* (TC_QIDR) Filtered Phase B Line Mask */
#define TC_QIDR_FPHB(value)                   (TC_QIDR_FPHB_Msk & (_UINT32_(value) << TC_QIDR_FPHB_Pos)) /* Assignment of value for FPHB in the TC_QIDR register */
#define   TC_QIDR_FPHB_0_Val                  _UINT32_(0x0)                                        /* (TC_QIDR) No effect.  */
#define   TC_QIDR_FPHB_1_Val                  _UINT32_(0x1)                                        /* (TC_QIDR) Disables the interrupt when phase B line has a filtered contamination.  */
#define TC_QIDR_FPHB_0                        (TC_QIDR_FPHB_0_Val << TC_QIDR_FPHB_Pos)             /* (TC_QIDR) No effect. Position */
#define TC_QIDR_FPHB_1                        (TC_QIDR_FPHB_1_Val << TC_QIDR_FPHB_Pos)             /* (TC_QIDR) Disables the interrupt when phase B line has a filtered contamination. Position */
#define TC_QIDR_FIDX_Pos                      _UINT32_(6)                                          /* (TC_QIDR) Filtered Index Line Position */
#define TC_QIDR_FIDX_Msk                      (_UINT32_(0x1) << TC_QIDR_FIDX_Pos)                  /* (TC_QIDR) Filtered Index Line Mask */
#define TC_QIDR_FIDX(value)                   (TC_QIDR_FIDX_Msk & (_UINT32_(value) << TC_QIDR_FIDX_Pos)) /* Assignment of value for FIDX in the TC_QIDR register */
#define   TC_QIDR_FIDX_0_Val                  _UINT32_(0x0)                                        /* (TC_QIDR) No effect.  */
#define   TC_QIDR_FIDX_1_Val                  _UINT32_(0x1)                                        /* (TC_QIDR) Disables the interrupt when index line has a filtered contamination.  */
#define TC_QIDR_FIDX_0                        (TC_QIDR_FIDX_0_Val << TC_QIDR_FIDX_Pos)             /* (TC_QIDR) No effect. Position */
#define TC_QIDR_FIDX_1                        (TC_QIDR_FIDX_1_Val << TC_QIDR_FIDX_Pos)             /* (TC_QIDR) Disables the interrupt when index line has a filtered contamination. Position */
#define TC_QIDR_FMP_Pos                       _UINT32_(7)                                          /* (TC_QIDR) Filtered Missing Pulse Position */
#define TC_QIDR_FMP_Msk                       (_UINT32_(0x1) << TC_QIDR_FMP_Pos)                   /* (TC_QIDR) Filtered Missing Pulse Mask */
#define TC_QIDR_FMP(value)                    (TC_QIDR_FMP_Msk & (_UINT32_(value) << TC_QIDR_FMP_Pos)) /* Assignment of value for FMP in the TC_QIDR register */
#define   TC_QIDR_FMP_0_Val                   _UINT32_(0x0)                                        /* (TC_QIDR) No effect.  */
#define   TC_QIDR_FMP_1_Val                   _UINT32_(0x1)                                        /* (TC_QIDR) Disables the interrupt when phase A or phase B has a corrected missing pulse.  */
#define TC_QIDR_FMP_0                         (TC_QIDR_FMP_0_Val << TC_QIDR_FMP_Pos)               /* (TC_QIDR) No effect. Position */
#define TC_QIDR_FMP_1                         (TC_QIDR_FMP_1_Val << TC_QIDR_FMP_Pos)               /* (TC_QIDR) Disables the interrupt when phase A or phase B has a corrected missing pulse. Position */
#define TC_QIDR_Msk                           _UINT32_(0x000000FF)                                 /* (TC_QIDR) Register Mask  */


/* -------- TC_QIMR : (TC Offset: 0xD0) ( R/ 32) QDEC Interrupt Mask Register -------- */
#define TC_QIMR_RESETVALUE                    _UINT32_(0x00)                                       /*  (TC_QIMR) QDEC Interrupt Mask Register  Reset Value */

#define TC_QIMR_IDX_Pos                       _UINT32_(0)                                          /* (TC_QIMR) Index Position */
#define TC_QIMR_IDX_Msk                       (_UINT32_(0x1) << TC_QIMR_IDX_Pos)                   /* (TC_QIMR) Index Mask */
#define TC_QIMR_IDX(value)                    (TC_QIMR_IDX_Msk & (_UINT32_(value) << TC_QIMR_IDX_Pos)) /* Assignment of value for IDX in the TC_QIMR register */
#define   TC_QIMR_IDX_0_Val                   _UINT32_(0x0)                                        /* (TC_QIMR) The interrupt on IDX input is disabled.  */
#define   TC_QIMR_IDX_1_Val                   _UINT32_(0x1)                                        /* (TC_QIMR) The interrupt on IDX input is enabled.  */
#define TC_QIMR_IDX_0                         (TC_QIMR_IDX_0_Val << TC_QIMR_IDX_Pos)               /* (TC_QIMR) The interrupt on IDX input is disabled. Position */
#define TC_QIMR_IDX_1                         (TC_QIMR_IDX_1_Val << TC_QIMR_IDX_Pos)               /* (TC_QIMR) The interrupt on IDX input is enabled. Position */
#define TC_QIMR_DIRCHG_Pos                    _UINT32_(1)                                          /* (TC_QIMR) Direction Change Position */
#define TC_QIMR_DIRCHG_Msk                    (_UINT32_(0x1) << TC_QIMR_DIRCHG_Pos)                /* (TC_QIMR) Direction Change Mask */
#define TC_QIMR_DIRCHG(value)                 (TC_QIMR_DIRCHG_Msk & (_UINT32_(value) << TC_QIMR_DIRCHG_Pos)) /* Assignment of value for DIRCHG in the TC_QIMR register */
#define   TC_QIMR_DIRCHG_0_Val                _UINT32_(0x0)                                        /* (TC_QIMR) The interrupt on rotation direction change is disabled.  */
#define   TC_QIMR_DIRCHG_1_Val                _UINT32_(0x1)                                        /* (TC_QIMR) The interrupt on rotation direction change is enabled.  */
#define TC_QIMR_DIRCHG_0                      (TC_QIMR_DIRCHG_0_Val << TC_QIMR_DIRCHG_Pos)         /* (TC_QIMR) The interrupt on rotation direction change is disabled. Position */
#define TC_QIMR_DIRCHG_1                      (TC_QIMR_DIRCHG_1_Val << TC_QIMR_DIRCHG_Pos)         /* (TC_QIMR) The interrupt on rotation direction change is enabled. Position */
#define TC_QIMR_QERR_Pos                      _UINT32_(2)                                          /* (TC_QIMR) Quadrature Error Position */
#define TC_QIMR_QERR_Msk                      (_UINT32_(0x1) << TC_QIMR_QERR_Pos)                  /* (TC_QIMR) Quadrature Error Mask */
#define TC_QIMR_QERR(value)                   (TC_QIMR_QERR_Msk & (_UINT32_(value) << TC_QIMR_QERR_Pos)) /* Assignment of value for QERR in the TC_QIMR register */
#define   TC_QIMR_QERR_0_Val                  _UINT32_(0x0)                                        /* (TC_QIMR) The interrupt on quadrature error is disabled.  */
#define   TC_QIMR_QERR_1_Val                  _UINT32_(0x1)                                        /* (TC_QIMR) The interrupt on quadrature error is enabled.  */
#define TC_QIMR_QERR_0                        (TC_QIMR_QERR_0_Val << TC_QIMR_QERR_Pos)             /* (TC_QIMR) The interrupt on quadrature error is disabled. Position */
#define TC_QIMR_QERR_1                        (TC_QIMR_QERR_1_Val << TC_QIMR_QERR_Pos)             /* (TC_QIMR) The interrupt on quadrature error is enabled. Position */
#define TC_QIMR_MPE_Pos                       _UINT32_(3)                                          /* (TC_QIMR) Consecutive Missing Pulse Error Position */
#define TC_QIMR_MPE_Msk                       (_UINT32_(0x1) << TC_QIMR_MPE_Pos)                   /* (TC_QIMR) Consecutive Missing Pulse Error Mask */
#define TC_QIMR_MPE(value)                    (TC_QIMR_MPE_Msk & (_UINT32_(value) << TC_QIMR_MPE_Pos)) /* Assignment of value for MPE in the TC_QIMR register */
#define   TC_QIMR_MPE_0_Val                   _UINT32_(0x0)                                        /* (TC_QIMR) The interrupt on the maximum number of consecutive missing pulses specified in MAXCMP is disabled.  */
#define   TC_QIMR_MPE_1_Val                   _UINT32_(0x1)                                        /* (TC_QIMR) The interrupt on the maximum number of consecutive missing pulses specified in MAXCMP is enabled.  */
#define TC_QIMR_MPE_0                         (TC_QIMR_MPE_0_Val << TC_QIMR_MPE_Pos)               /* (TC_QIMR) The interrupt on the maximum number of consecutive missing pulses specified in MAXCMP is disabled. Position */
#define TC_QIMR_MPE_1                         (TC_QIMR_MPE_1_Val << TC_QIMR_MPE_Pos)               /* (TC_QIMR) The interrupt on the maximum number of consecutive missing pulses specified in MAXCMP is enabled. Position */
#define TC_QIMR_FPHA_Pos                      _UINT32_(4)                                          /* (TC_QIMR) Filtered Phase A Line Position */
#define TC_QIMR_FPHA_Msk                      (_UINT32_(0x1) << TC_QIMR_FPHA_Pos)                  /* (TC_QIMR) Filtered Phase A Line Mask */
#define TC_QIMR_FPHA(value)                   (TC_QIMR_FPHA_Msk & (_UINT32_(value) << TC_QIMR_FPHA_Pos)) /* Assignment of value for FPHA in the TC_QIMR register */
#define   TC_QIMR_FPHA_0_Val                  _UINT32_(0x0)                                        /* (TC_QIMR) The interrupt on phase A line filtered contamination is disabled.  */
#define   TC_QIMR_FPHA_1_Val                  _UINT32_(0x1)                                        /* (TC_QIMR) The interrupt on phase A line filtered contamination is enabled.  */
#define TC_QIMR_FPHA_0                        (TC_QIMR_FPHA_0_Val << TC_QIMR_FPHA_Pos)             /* (TC_QIMR) The interrupt on phase A line filtered contamination is disabled. Position */
#define TC_QIMR_FPHA_1                        (TC_QIMR_FPHA_1_Val << TC_QIMR_FPHA_Pos)             /* (TC_QIMR) The interrupt on phase A line filtered contamination is enabled. Position */
#define TC_QIMR_FPHB_Pos                      _UINT32_(5)                                          /* (TC_QIMR) Filtered Phase B Line Position */
#define TC_QIMR_FPHB_Msk                      (_UINT32_(0x1) << TC_QIMR_FPHB_Pos)                  /* (TC_QIMR) Filtered Phase B Line Mask */
#define TC_QIMR_FPHB(value)                   (TC_QIMR_FPHB_Msk & (_UINT32_(value) << TC_QIMR_FPHB_Pos)) /* Assignment of value for FPHB in the TC_QIMR register */
#define   TC_QIMR_FPHB_0_Val                  _UINT32_(0x0)                                        /* (TC_QIMR) The interrupt on phase B line filtered contamination is disabled.  */
#define   TC_QIMR_FPHB_1_Val                  _UINT32_(0x1)                                        /* (TC_QIMR) The interrupt on phase B line filtered contamination is enabled.  */
#define TC_QIMR_FPHB_0                        (TC_QIMR_FPHB_0_Val << TC_QIMR_FPHB_Pos)             /* (TC_QIMR) The interrupt on phase B line filtered contamination is disabled. Position */
#define TC_QIMR_FPHB_1                        (TC_QIMR_FPHB_1_Val << TC_QIMR_FPHB_Pos)             /* (TC_QIMR) The interrupt on phase B line filtered contamination is enabled. Position */
#define TC_QIMR_FIDX_Pos                      _UINT32_(6)                                          /* (TC_QIMR) Filtered Index Line Position */
#define TC_QIMR_FIDX_Msk                      (_UINT32_(0x1) << TC_QIMR_FIDX_Pos)                  /* (TC_QIMR) Filtered Index Line Mask */
#define TC_QIMR_FIDX(value)                   (TC_QIMR_FIDX_Msk & (_UINT32_(value) << TC_QIMR_FIDX_Pos)) /* Assignment of value for FIDX in the TC_QIMR register */
#define   TC_QIMR_FIDX_0_Val                  _UINT32_(0x0)                                        /* (TC_QIMR) The interrupt on index line filtered contamination is disabled.  */
#define   TC_QIMR_FIDX_1_Val                  _UINT32_(0x1)                                        /* (TC_QIMR) The interrupt on index line filtered contamination is enabled.  */
#define TC_QIMR_FIDX_0                        (TC_QIMR_FIDX_0_Val << TC_QIMR_FIDX_Pos)             /* (TC_QIMR) The interrupt on index line filtered contamination is disabled. Position */
#define TC_QIMR_FIDX_1                        (TC_QIMR_FIDX_1_Val << TC_QIMR_FIDX_Pos)             /* (TC_QIMR) The interrupt on index line filtered contamination is enabled. Position */
#define TC_QIMR_FMP_Pos                       _UINT32_(7)                                          /* (TC_QIMR) Filtered Missing Pulse Position */
#define TC_QIMR_FMP_Msk                       (_UINT32_(0x1) << TC_QIMR_FMP_Pos)                   /* (TC_QIMR) Filtered Missing Pulse Mask */
#define TC_QIMR_FMP(value)                    (TC_QIMR_FMP_Msk & (_UINT32_(value) << TC_QIMR_FMP_Pos)) /* Assignment of value for FMP in the TC_QIMR register */
#define   TC_QIMR_FMP_0_Val                   _UINT32_(0x0)                                        /* (TC_QIMR) The interrupt on auto-corrected missing pulse is disabled.  */
#define   TC_QIMR_FMP_1_Val                   _UINT32_(0x1)                                        /* (TC_QIMR) The interrupt on auto-corrected missing pulse is enabled.  */
#define TC_QIMR_FMP_0                         (TC_QIMR_FMP_0_Val << TC_QIMR_FMP_Pos)               /* (TC_QIMR) The interrupt on auto-corrected missing pulse is disabled. Position */
#define TC_QIMR_FMP_1                         (TC_QIMR_FMP_1_Val << TC_QIMR_FMP_Pos)               /* (TC_QIMR) The interrupt on auto-corrected missing pulse is enabled. Position */
#define TC_QIMR_Msk                           _UINT32_(0x000000FF)                                 /* (TC_QIMR) Register Mask  */


/* -------- TC_QISR : (TC Offset: 0xD4) ( R/ 32) QDEC Interrupt Status Register -------- */
#define TC_QISR_RESETVALUE                    _UINT32_(0x00)                                       /*  (TC_QISR) QDEC Interrupt Status Register  Reset Value */

#define TC_QISR_IDX_Pos                       _UINT32_(0)                                          /* (TC_QISR) Index Position */
#define TC_QISR_IDX_Msk                       (_UINT32_(0x1) << TC_QISR_IDX_Pos)                   /* (TC_QISR) Index Mask */
#define TC_QISR_IDX(value)                    (TC_QISR_IDX_Msk & (_UINT32_(value) << TC_QISR_IDX_Pos)) /* Assignment of value for IDX in the TC_QISR register */
#define   TC_QISR_IDX_0_Val                   _UINT32_(0x0)                                        /* (TC_QISR) No Index input change since the last read of TC_QISR.  */
#define   TC_QISR_IDX_1_Val                   _UINT32_(0x1)                                        /* (TC_QISR) The IDX input has changed since the last read of TC_QISR.  */
#define TC_QISR_IDX_0                         (TC_QISR_IDX_0_Val << TC_QISR_IDX_Pos)               /* (TC_QISR) No Index input change since the last read of TC_QISR. Position */
#define TC_QISR_IDX_1                         (TC_QISR_IDX_1_Val << TC_QISR_IDX_Pos)               /* (TC_QISR) The IDX input has changed since the last read of TC_QISR. Position */
#define TC_QISR_DIRCHG_Pos                    _UINT32_(1)                                          /* (TC_QISR) Direction Change Position */
#define TC_QISR_DIRCHG_Msk                    (_UINT32_(0x1) << TC_QISR_DIRCHG_Pos)                /* (TC_QISR) Direction Change Mask */
#define TC_QISR_DIRCHG(value)                 (TC_QISR_DIRCHG_Msk & (_UINT32_(value) << TC_QISR_DIRCHG_Pos)) /* Assignment of value for DIRCHG in the TC_QISR register */
#define   TC_QISR_DIRCHG_0_Val                _UINT32_(0x0)                                        /* (TC_QISR) No change on rotation direction since the last read of TC_QISR.  */
#define   TC_QISR_DIRCHG_1_Val                _UINT32_(0x1)                                        /* (TC_QISR) The rotation direction changed since the last read of TC_QISR.  */
#define TC_QISR_DIRCHG_0                      (TC_QISR_DIRCHG_0_Val << TC_QISR_DIRCHG_Pos)         /* (TC_QISR) No change on rotation direction since the last read of TC_QISR. Position */
#define TC_QISR_DIRCHG_1                      (TC_QISR_DIRCHG_1_Val << TC_QISR_DIRCHG_Pos)         /* (TC_QISR) The rotation direction changed since the last read of TC_QISR. Position */
#define TC_QISR_QERR_Pos                      _UINT32_(2)                                          /* (TC_QISR) Quadrature Error Position */
#define TC_QISR_QERR_Msk                      (_UINT32_(0x1) << TC_QISR_QERR_Pos)                  /* (TC_QISR) Quadrature Error Mask */
#define TC_QISR_QERR(value)                   (TC_QISR_QERR_Msk & (_UINT32_(value) << TC_QISR_QERR_Pos)) /* Assignment of value for QERR in the TC_QISR register */
#define   TC_QISR_QERR_0_Val                  _UINT32_(0x0)                                        /* (TC_QISR) No quadrature error since the last read of TC_QISR.  */
#define   TC_QISR_QERR_1_Val                  _UINT32_(0x1)                                        /* (TC_QISR) A quadrature error occurred since the last read of TC_QISR.  */
#define TC_QISR_QERR_0                        (TC_QISR_QERR_0_Val << TC_QISR_QERR_Pos)             /* (TC_QISR) No quadrature error since the last read of TC_QISR. Position */
#define TC_QISR_QERR_1                        (TC_QISR_QERR_1_Val << TC_QISR_QERR_Pos)             /* (TC_QISR) A quadrature error occurred since the last read of TC_QISR. Position */
#define TC_QISR_MPE_Pos                       _UINT32_(3)                                          /* (TC_QISR) Consecutive Missing Pulse Error Position */
#define TC_QISR_MPE_Msk                       (_UINT32_(0x1) << TC_QISR_MPE_Pos)                   /* (TC_QISR) Consecutive Missing Pulse Error Mask */
#define TC_QISR_MPE(value)                    (TC_QISR_MPE_Msk & (_UINT32_(value) << TC_QISR_MPE_Pos)) /* Assignment of value for MPE in the TC_QISR register */
#define   TC_QISR_MPE_0_Val                   _UINT32_(0x0)                                        /* (TC_QISR) The number of consecutive missing pulses has not reached the maximum value specified in MAXCMP since the last read of TC_QISR.  */
#define   TC_QISR_MPE_1_Val                   _UINT32_(0x1)                                        /* (TC_QISR) An occurrence of MAXCMP consecutive missing pulses has been detected since the last read of TC_QISR.  */
#define TC_QISR_MPE_0                         (TC_QISR_MPE_0_Val << TC_QISR_MPE_Pos)               /* (TC_QISR) The number of consecutive missing pulses has not reached the maximum value specified in MAXCMP since the last read of TC_QISR. Position */
#define TC_QISR_MPE_1                         (TC_QISR_MPE_1_Val << TC_QISR_MPE_Pos)               /* (TC_QISR) An occurrence of MAXCMP consecutive missing pulses has been detected since the last read of TC_QISR. Position */
#define TC_QISR_FPHA_Pos                      _UINT32_(4)                                          /* (TC_QISR) Filtered Phase A Line Position */
#define TC_QISR_FPHA_Msk                      (_UINT32_(0x1) << TC_QISR_FPHA_Pos)                  /* (TC_QISR) Filtered Phase A Line Mask */
#define TC_QISR_FPHA(value)                   (TC_QISR_FPHA_Msk & (_UINT32_(value) << TC_QISR_FPHA_Pos)) /* Assignment of value for FPHA in the TC_QISR register */
#define   TC_QISR_FPHA_0_Val                  _UINT32_(0x0)                                        /* (TC_QISR) No filtered contamination on phase A line since the last read of TC_QISR.  */
#define   TC_QISR_FPHA_1_Val                  _UINT32_(0x1)                                        /* (TC_QISR) A contamination has been successfully on phase A line since the last read of TC_QISR.  */
#define TC_QISR_FPHA_0                        (TC_QISR_FPHA_0_Val << TC_QISR_FPHA_Pos)             /* (TC_QISR) No filtered contamination on phase A line since the last read of TC_QISR. Position */
#define TC_QISR_FPHA_1                        (TC_QISR_FPHA_1_Val << TC_QISR_FPHA_Pos)             /* (TC_QISR) A contamination has been successfully on phase A line since the last read of TC_QISR. Position */
#define TC_QISR_FPHB_Pos                      _UINT32_(5)                                          /* (TC_QISR) Filtered Phase B Line Position */
#define TC_QISR_FPHB_Msk                      (_UINT32_(0x1) << TC_QISR_FPHB_Pos)                  /* (TC_QISR) Filtered Phase B Line Mask */
#define TC_QISR_FPHB(value)                   (TC_QISR_FPHB_Msk & (_UINT32_(value) << TC_QISR_FPHB_Pos)) /* Assignment of value for FPHB in the TC_QISR register */
#define   TC_QISR_FPHB_0_Val                  _UINT32_(0x0)                                        /* (TC_QISR) No filtered contamination on phase B line since the last read of TC_QISR.  */
#define   TC_QISR_FPHB_1_Val                  _UINT32_(0x1)                                        /* (TC_QISR) A contamination has been successfully on phase B line since the last read of TC_QISR.  */
#define TC_QISR_FPHB_0                        (TC_QISR_FPHB_0_Val << TC_QISR_FPHB_Pos)             /* (TC_QISR) No filtered contamination on phase B line since the last read of TC_QISR. Position */
#define TC_QISR_FPHB_1                        (TC_QISR_FPHB_1_Val << TC_QISR_FPHB_Pos)             /* (TC_QISR) A contamination has been successfully on phase B line since the last read of TC_QISR. Position */
#define TC_QISR_FIDX_Pos                      _UINT32_(6)                                          /* (TC_QISR) Filtered Index Line Position */
#define TC_QISR_FIDX_Msk                      (_UINT32_(0x1) << TC_QISR_FIDX_Pos)                  /* (TC_QISR) Filtered Index Line Mask */
#define TC_QISR_FIDX(value)                   (TC_QISR_FIDX_Msk & (_UINT32_(value) << TC_QISR_FIDX_Pos)) /* Assignment of value for FIDX in the TC_QISR register */
#define   TC_QISR_FIDX_0_Val                  _UINT32_(0x0)                                        /* (TC_QISR) No filtered contamination on index line since the last read of TC_QISR.  */
#define   TC_QISR_FIDX_1_Val                  _UINT32_(0x1)                                        /* (TC_QISR) A contamination has been successfully on index line since the last read of TC_QISR.  */
#define TC_QISR_FIDX_0                        (TC_QISR_FIDX_0_Val << TC_QISR_FIDX_Pos)             /* (TC_QISR) No filtered contamination on index line since the last read of TC_QISR. Position */
#define TC_QISR_FIDX_1                        (TC_QISR_FIDX_1_Val << TC_QISR_FIDX_Pos)             /* (TC_QISR) A contamination has been successfully on index line since the last read of TC_QISR. Position */
#define TC_QISR_FMP_Pos                       _UINT32_(7)                                          /* (TC_QISR) Filtered Missing Pulse Position */
#define TC_QISR_FMP_Msk                       (_UINT32_(0x1) << TC_QISR_FMP_Pos)                   /* (TC_QISR) Filtered Missing Pulse Mask */
#define TC_QISR_FMP(value)                    (TC_QISR_FMP_Msk & (_UINT32_(value) << TC_QISR_FMP_Pos)) /* Assignment of value for FMP in the TC_QISR register */
#define   TC_QISR_FMP_0_Val                   _UINT32_(0x0)                                        /* (TC_QISR) No correction of missing pulse on phase A or B lines occurred since the last read of TC_QISR.  */
#define   TC_QISR_FMP_1_Val                   _UINT32_(0x1)                                        /* (TC_QISR) A correction of missing pulse on phase A or B lines occurred since the last read of TC_QISR.  */
#define TC_QISR_FMP_0                         (TC_QISR_FMP_0_Val << TC_QISR_FMP_Pos)               /* (TC_QISR) No correction of missing pulse on phase A or B lines occurred since the last read of TC_QISR. Position */
#define TC_QISR_FMP_1                         (TC_QISR_FMP_1_Val << TC_QISR_FMP_Pos)               /* (TC_QISR) A correction of missing pulse on phase A or B lines occurred since the last read of TC_QISR. Position */
#define TC_QISR_DIR_Pos                       _UINT32_(8)                                          /* (TC_QISR) Direction Position */
#define TC_QISR_DIR_Msk                       (_UINT32_(0x1) << TC_QISR_DIR_Pos)                   /* (TC_QISR) Direction Mask */
#define TC_QISR_DIR(value)                    (TC_QISR_DIR_Msk & (_UINT32_(value) << TC_QISR_DIR_Pos)) /* Assignment of value for DIR in the TC_QISR register */
#define TC_QISR_Msk                           _UINT32_(0x000001FF)                                 /* (TC_QISR) Register Mask  */


/* -------- TC_FMR : (TC Offset: 0xD8) (R/W 32) Fault Mode Register -------- */
#define TC_FMR_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_FMR) Fault Mode Register  Reset Value */

#define TC_FMR_ENCF0_Pos                      _UINT32_(0)                                          /* (TC_FMR) Enable Compare Fault Channel 0 Position */
#define TC_FMR_ENCF0_Msk                      (_UINT32_(0x1) << TC_FMR_ENCF0_Pos)                  /* (TC_FMR) Enable Compare Fault Channel 0 Mask */
#define TC_FMR_ENCF0(value)                   (TC_FMR_ENCF0_Msk & (_UINT32_(value) << TC_FMR_ENCF0_Pos)) /* Assignment of value for ENCF0 in the TC_FMR register */
#define   TC_FMR_ENCF0_0_Val                  _UINT32_(0x0)                                        /* (TC_FMR) Disables the FAULT output source (CPCS flag) from channel 0.  */
#define   TC_FMR_ENCF0_1_Val                  _UINT32_(0x1)                                        /* (TC_FMR) Enables the FAULT output source (CPCS flag) from channel 0.  */
#define TC_FMR_ENCF0_0                        (TC_FMR_ENCF0_0_Val << TC_FMR_ENCF0_Pos)             /* (TC_FMR) Disables the FAULT output source (CPCS flag) from channel 0. Position */
#define TC_FMR_ENCF0_1                        (TC_FMR_ENCF0_1_Val << TC_FMR_ENCF0_Pos)             /* (TC_FMR) Enables the FAULT output source (CPCS flag) from channel 0. Position */
#define TC_FMR_ENCF1_Pos                      _UINT32_(1)                                          /* (TC_FMR) Enable Compare Fault Channel 1 Position */
#define TC_FMR_ENCF1_Msk                      (_UINT32_(0x1) << TC_FMR_ENCF1_Pos)                  /* (TC_FMR) Enable Compare Fault Channel 1 Mask */
#define TC_FMR_ENCF1(value)                   (TC_FMR_ENCF1_Msk & (_UINT32_(value) << TC_FMR_ENCF1_Pos)) /* Assignment of value for ENCF1 in the TC_FMR register */
#define   TC_FMR_ENCF1_0_Val                  _UINT32_(0x0)                                        /* (TC_FMR) Disables the FAULT output source (CPCS flag) from channel 1.  */
#define   TC_FMR_ENCF1_1_Val                  _UINT32_(0x1)                                        /* (TC_FMR) Enables the FAULT output source (CPCS flag) from channel 1.  */
#define TC_FMR_ENCF1_0                        (TC_FMR_ENCF1_0_Val << TC_FMR_ENCF1_Pos)             /* (TC_FMR) Disables the FAULT output source (CPCS flag) from channel 1. Position */
#define TC_FMR_ENCF1_1                        (TC_FMR_ENCF1_1_Val << TC_FMR_ENCF1_Pos)             /* (TC_FMR) Enables the FAULT output source (CPCS flag) from channel 1. Position */
#define TC_FMR_Msk                            _UINT32_(0x00000003)                                 /* (TC_FMR) Register Mask  */

#define TC_FMR_ENCF_Pos                       _UINT32_(0)                                          /* (TC_FMR Position) Enable Compare Fault Channel x */
#define TC_FMR_ENCF_Msk                       (_UINT32_(0x3) << TC_FMR_ENCF_Pos)                   /* (TC_FMR Mask) ENCF */
#define TC_FMR_ENCF(value)                    (TC_FMR_ENCF_Msk & (_UINT32_(value) << TC_FMR_ENCF_Pos)) 

/* -------- TC_QSR : (TC Offset: 0xDC) ( R/ 32) QDEC Status Register -------- */
#define TC_QSR_RESETVALUE                     _UINT32_(0x00)                                       /*  (TC_QSR) QDEC Status Register  Reset Value */

#define TC_QSR_DIR_Pos                        _UINT32_(8)                                          /* (TC_QSR) Direction Position */
#define TC_QSR_DIR_Msk                        (_UINT32_(0x1) << TC_QSR_DIR_Pos)                    /* (TC_QSR) Direction Mask */
#define TC_QSR_DIR(value)                     (TC_QSR_DIR_Msk & (_UINT32_(value) << TC_QSR_DIR_Pos)) /* Assignment of value for DIR in the TC_QSR register */
#define TC_QSR_Msk                            _UINT32_(0x00000100)                                 /* (TC_QSR) Register Mask  */


/* -------- TC_WPMR : (TC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define TC_WPMR_RESETVALUE                    _UINT32_(0x00)                                       /*  (TC_WPMR) Write Protection Mode Register  Reset Value */

#define TC_WPMR_WPEN_Pos                      _UINT32_(0)                                          /* (TC_WPMR) Write Protection Enable Position */
#define TC_WPMR_WPEN_Msk                      (_UINT32_(0x1) << TC_WPMR_WPEN_Pos)                  /* (TC_WPMR) Write Protection Enable Mask */
#define TC_WPMR_WPEN(value)                   (TC_WPMR_WPEN_Msk & (_UINT32_(value) << TC_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the TC_WPMR register */
#define   TC_WPMR_WPEN_0_Val                  _UINT32_(0x0)                                        /* (TC_WPMR) Disables the write protection if WPKEY corresponds to 0x54494D ("TIM" in ASCII).  */
#define   TC_WPMR_WPEN_1_Val                  _UINT32_(0x1)                                        /* (TC_WPMR) Enables the write protection if WPKEY corresponds to 0x54494D ("TIM" in ASCII).  */
#define TC_WPMR_WPEN_0                        (TC_WPMR_WPEN_0_Val << TC_WPMR_WPEN_Pos)             /* (TC_WPMR) Disables the write protection if WPKEY corresponds to 0x54494D ("TIM" in ASCII). Position */
#define TC_WPMR_WPEN_1                        (TC_WPMR_WPEN_1_Val << TC_WPMR_WPEN_Pos)             /* (TC_WPMR) Enables the write protection if WPKEY corresponds to 0x54494D ("TIM" in ASCII). Position */
#define TC_WPMR_WPITEN_Pos                    _UINT32_(1)                                          /* (TC_WPMR) Write Protection Interrupt Enable Position */
#define TC_WPMR_WPITEN_Msk                    (_UINT32_(0x1) << TC_WPMR_WPITEN_Pos)                /* (TC_WPMR) Write Protection Interrupt Enable Mask */
#define TC_WPMR_WPITEN(value)                 (TC_WPMR_WPITEN_Msk & (_UINT32_(value) << TC_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the TC_WPMR register */
#define   TC_WPMR_WPITEN_0_Val                _UINT32_(0x0)                                        /* (TC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x54494D ("TIM" in ASCII).  */
#define   TC_WPMR_WPITEN_1_Val                _UINT32_(0x1)                                        /* (TC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x54494D ("TIM" in ASCII).  */
#define TC_WPMR_WPITEN_0                      (TC_WPMR_WPITEN_0_Val << TC_WPMR_WPITEN_Pos)         /* (TC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x54494D ("TIM" in ASCII). Position */
#define TC_WPMR_WPITEN_1                      (TC_WPMR_WPITEN_1_Val << TC_WPMR_WPITEN_Pos)         /* (TC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x54494D ("TIM" in ASCII). Position */
#define TC_WPMR_WPCREN_Pos                    _UINT32_(2)                                          /* (TC_WPMR) Write Protection Control Enable Position */
#define TC_WPMR_WPCREN_Msk                    (_UINT32_(0x1) << TC_WPMR_WPCREN_Pos)                /* (TC_WPMR) Write Protection Control Enable Mask */
#define TC_WPMR_WPCREN(value)                 (TC_WPMR_WPCREN_Msk & (_UINT32_(value) << TC_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the TC_WPMR register */
#define   TC_WPMR_WPCREN_0_Val                _UINT32_(0x0)                                        /* (TC_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x54494D ("TIM" in ASCII).  */
#define   TC_WPMR_WPCREN_1_Val                _UINT32_(0x1)                                        /* (TC_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x54494D ("TIM" in ASCII).  */
#define TC_WPMR_WPCREN_0                      (TC_WPMR_WPCREN_0_Val << TC_WPMR_WPCREN_Pos)         /* (TC_WPMR) Disables the write protection on control register if WPKEY corresponds to 0x54494D ("TIM" in ASCII). Position */
#define TC_WPMR_WPCREN_1                      (TC_WPMR_WPCREN_1_Val << TC_WPMR_WPCREN_Pos)         /* (TC_WPMR) Enables the write protection on control register if WPKEY corresponds to 0x54494D ("TIM" in ASCII). Position */
#define TC_WPMR_FIRSTE_Pos                    _UINT32_(4)                                          /* (TC_WPMR) First Error Report Enable Position */
#define TC_WPMR_FIRSTE_Msk                    (_UINT32_(0x1) << TC_WPMR_FIRSTE_Pos)                /* (TC_WPMR) First Error Report Enable Mask */
#define TC_WPMR_FIRSTE(value)                 (TC_WPMR_FIRSTE_Msk & (_UINT32_(value) << TC_WPMR_FIRSTE_Pos)) /* Assignment of value for FIRSTE in the TC_WPMR register */
#define   TC_WPMR_FIRSTE_0_Val                _UINT32_(0x0)                                        /* (TC_WPMR) The last write protection violation source is reported in TC_SSRx.WPVSRC and the last software control error type is reported in TC_SSRx.SWETYP. The TC_SRx.SECE flag is set at the first error occurrence within a series.  */
#define   TC_WPMR_FIRSTE_1_Val                _UINT32_(0x1)                                        /* (TC_WPMR) Only the first write protection violation source is reported in TC_SSRx.WPVSRC and only the first software control error type is reported in TC_SSRx.SWETYP. The TC_SRx.SECE flag is set at the first error occurrence within a series.  */
#define TC_WPMR_FIRSTE_0                      (TC_WPMR_FIRSTE_0_Val << TC_WPMR_FIRSTE_Pos)         /* (TC_WPMR) The last write protection violation source is reported in TC_SSRx.WPVSRC and the last software control error type is reported in TC_SSRx.SWETYP. The TC_SRx.SECE flag is set at the first error occurrence within a series. Position */
#define TC_WPMR_FIRSTE_1                      (TC_WPMR_FIRSTE_1_Val << TC_WPMR_FIRSTE_Pos)         /* (TC_WPMR) Only the first write protection violation source is reported in TC_SSRx.WPVSRC and only the first software control error type is reported in TC_SSRx.SWETYP. The TC_SRx.SECE flag is set at the first error occurrence within a series. Position */
#define TC_WPMR_WPKEY_Pos                     _UINT32_(8)                                          /* (TC_WPMR) Write Protection Key Position */
#define TC_WPMR_WPKEY_Msk                     (_UINT32_(0xFFFFFF) << TC_WPMR_WPKEY_Pos)            /* (TC_WPMR) Write Protection Key Mask */
#define TC_WPMR_WPKEY(value)                  (TC_WPMR_WPKEY_Msk & (_UINT32_(value) << TC_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the TC_WPMR register */
#define   TC_WPMR_WPKEY_PASSWD_Val            _UINT32_(0x54494D)                                   /* (TC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define TC_WPMR_WPKEY_PASSWD                  (TC_WPMR_WPKEY_PASSWD_Val << TC_WPMR_WPKEY_Pos)      /* (TC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position */
#define TC_WPMR_Msk                           _UINT32_(0xFFFFFF17)                                 /* (TC_WPMR) Register Mask  */


/* TC register offsets definitions */
#define TC_CCR_REG_OFST                _UINT32_(0x00)      /* (TC_CCR) Channel Control Register  Offset */
#define TC_CMR_REG_OFST                _UINT32_(0x04)      /* (TC_CMR) Channel Mode Register  Offset */
#define TC_SMMR_REG_OFST               _UINT32_(0x08)      /* (TC_SMMR) Stepper Motor Mode Register  Offset */
#define TC_RAB_REG_OFST                _UINT32_(0x0C)      /* (TC_RAB) Register AB  Offset */
#define TC_CV_REG_OFST                 _UINT32_(0x10)      /* (TC_CV) Counter Value  Offset */
#define TC_RA_REG_OFST                 _UINT32_(0x14)      /* (TC_RA) Register A  Offset */
#define TC_RB_REG_OFST                 _UINT32_(0x18)      /* (TC_RB) Register B  Offset */
#define TC_RC_REG_OFST                 _UINT32_(0x1C)      /* (TC_RC) Register C  Offset */
#define TC_SR_REG_OFST                 _UINT32_(0x20)      /* (TC_SR) Interrupt Status Register  Offset */
#define TC_IER_REG_OFST                _UINT32_(0x24)      /* (TC_IER) Interrupt Enable Register  Offset */
#define TC_IDR_REG_OFST                _UINT32_(0x28)      /* (TC_IDR) Interrupt Disable Register  Offset */
#define TC_IMR_REG_OFST                _UINT32_(0x2C)      /* (TC_IMR) Interrupt Mask Register  Offset */
#define TC_EMR_REG_OFST                _UINT32_(0x30)      /* (TC_EMR) Extended Mode Register  Offset */
#define TC_CSR_REG_OFST                _UINT32_(0x34)      /* (TC_CSR) Channel Status Register  Offset */
#define TC_SSR_REG_OFST                _UINT32_(0x38)      /* (TC_SSR) Safety Status Register  Offset */
#define TC_BCR_REG_OFST                _UINT32_(0xC0)      /* (TC_BCR) Block Control Register Offset */
#define TC_BMR_REG_OFST                _UINT32_(0xC4)      /* (TC_BMR) Block Mode Register Offset */
#define TC_QIER_REG_OFST               _UINT32_(0xC8)      /* (TC_QIER) QDEC Interrupt Enable Register Offset */
#define TC_QIDR_REG_OFST               _UINT32_(0xCC)      /* (TC_QIDR) QDEC Interrupt Disable Register Offset */
#define TC_QIMR_REG_OFST               _UINT32_(0xD0)      /* (TC_QIMR) QDEC Interrupt Mask Register Offset */
#define TC_QISR_REG_OFST               _UINT32_(0xD4)      /* (TC_QISR) QDEC Interrupt Status Register Offset */
#define TC_FMR_REG_OFST                _UINT32_(0xD8)      /* (TC_FMR) Fault Mode Register Offset */
#define TC_QSR_REG_OFST                _UINT32_(0xDC)      /* (TC_QSR) QDEC Status Register Offset */
#define TC_WPMR_REG_OFST               _UINT32_(0xE4)      /* (TC_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* TC_CHANNEL register API structure */
typedef struct
{
  __O   uint32_t                       TC_CCR;             /* Offset: 0x00 ( /W  32) Channel Control Register  */
  __IO  uint32_t                       TC_CMR;             /* Offset: 0x04 (R/W  32) Channel Mode Register  */
  __IO  uint32_t                       TC_SMMR;            /* Offset: 0x08 (R/W  32) Stepper Motor Mode Register  */
  __I   uint32_t                       TC_RAB;             /* Offset: 0x0C (R/   32) Register AB  */
  __I   uint32_t                       TC_CV;              /* Offset: 0x10 (R/   32) Counter Value  */
  __IO  uint32_t                       TC_RA;              /* Offset: 0x14 (R/W  32) Register A  */
  __IO  uint32_t                       TC_RB;              /* Offset: 0x18 (R/W  32) Register B  */
  __IO  uint32_t                       TC_RC;              /* Offset: 0x1C (R/W  32) Register C  */
  __I   uint32_t                       TC_SR;              /* Offset: 0x20 (R/   32) Interrupt Status Register  */
  __O   uint32_t                       TC_IER;             /* Offset: 0x24 ( /W  32) Interrupt Enable Register  */
  __O   uint32_t                       TC_IDR;             /* Offset: 0x28 ( /W  32) Interrupt Disable Register  */
  __I   uint32_t                       TC_IMR;             /* Offset: 0x2C (R/   32) Interrupt Mask Register  */
  __IO  uint32_t                       TC_EMR;             /* Offset: 0x30 (R/W  32) Extended Mode Register  */
  __I   uint32_t                       TC_CSR;             /* Offset: 0x34 (R/   32) Channel Status Register  */
  __I   uint32_t                       TC_SSR;             /* Offset: 0x38 (R/   32) Safety Status Register  */
  __I   uint8_t                        Reserved1[0x04];
} tc_channel_registers_t;

#define TC_CHANNEL_NUMBER 3

/* TC register API structure */
typedef struct
{  /* Timer Counter */
        tc_channel_registers_t         TC_CHANNEL[TC_CHANNEL_NUMBER]; /* Offset: 0x00  */
  __O   uint32_t                       TC_BCR;             /* Offset: 0xC0 ( /W  32) Block Control Register */
  __IO  uint32_t                       TC_BMR;             /* Offset: 0xC4 (R/W  32) Block Mode Register */
  __O   uint32_t                       TC_QIER;            /* Offset: 0xC8 ( /W  32) QDEC Interrupt Enable Register */
  __O   uint32_t                       TC_QIDR;            /* Offset: 0xCC ( /W  32) QDEC Interrupt Disable Register */
  __I   uint32_t                       TC_QIMR;            /* Offset: 0xD0 (R/   32) QDEC Interrupt Mask Register */
  __I   uint32_t                       TC_QISR;            /* Offset: 0xD4 (R/   32) QDEC Interrupt Status Register */
  __IO  uint32_t                       TC_FMR;             /* Offset: 0xD8 (R/W  32) Fault Mode Register */
  __I   uint32_t                       TC_QSR;             /* Offset: 0xDC (R/   32) QDEC Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       TC_WPMR;            /* Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} tc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D_TC_COMPONENT_H_ */
