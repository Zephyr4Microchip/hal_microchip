/*
 * Component description for DWDT
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
#ifndef _SAMA7D_DWDT_COMPONENT_H_
#define _SAMA7D_DWDT_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR DWDT                      */
/* ************************************************************************** */

/* -------- DWDT_NS_WDT_CR : (DWDT Offset: 0x00) ( /W 32) Never Secure Control Register -------- */
#define DWDT_NS_WDT_CR_WDRSTT_Pos             _UINT32_(0)                                          /* (DWDT_NS_WDT_CR) Watchdog Restart Position */
#define DWDT_NS_WDT_CR_WDRSTT_Msk             (_UINT32_(0x1) << DWDT_NS_WDT_CR_WDRSTT_Pos)         /* (DWDT_NS_WDT_CR) Watchdog Restart Mask */
#define DWDT_NS_WDT_CR_WDRSTT(value)          (DWDT_NS_WDT_CR_WDRSTT_Msk & (_UINT32_(value) << DWDT_NS_WDT_CR_WDRSTT_Pos)) /* Assignment of value for WDRSTT in the DWDT_NS_WDT_CR register */
#define   DWDT_NS_WDT_CR_WDRSTT_0_Val         _UINT32_(0x0)                                        /* (DWDT_NS_WDT_CR) No effect.  */
#define   DWDT_NS_WDT_CR_WDRSTT_1_Val         _UINT32_(0x1)                                        /* (DWDT_NS_WDT_CR) Restarts the watchdog if KEY is written to 0xA5.  */
#define DWDT_NS_WDT_CR_WDRSTT_0               (DWDT_NS_WDT_CR_WDRSTT_0_Val << DWDT_NS_WDT_CR_WDRSTT_Pos) /* (DWDT_NS_WDT_CR) No effect. Position */
#define DWDT_NS_WDT_CR_WDRSTT_1               (DWDT_NS_WDT_CR_WDRSTT_1_Val << DWDT_NS_WDT_CR_WDRSTT_Pos) /* (DWDT_NS_WDT_CR) Restarts the watchdog if KEY is written to 0xA5. Position */
#define DWDT_NS_WDT_CR_LOCKMR_Pos             _UINT32_(4)                                          /* (DWDT_NS_WDT_CR) Lock Mode Register Write Access Position */
#define DWDT_NS_WDT_CR_LOCKMR_Msk             (_UINT32_(0x1) << DWDT_NS_WDT_CR_LOCKMR_Pos)         /* (DWDT_NS_WDT_CR) Lock Mode Register Write Access Mask */
#define DWDT_NS_WDT_CR_LOCKMR(value)          (DWDT_NS_WDT_CR_LOCKMR_Msk & (_UINT32_(value) << DWDT_NS_WDT_CR_LOCKMR_Pos)) /* Assignment of value for LOCKMR in the DWDT_NS_WDT_CR register */
#define   DWDT_NS_WDT_CR_LOCKMR_0_Val         _UINT32_(0x0)                                        /* (DWDT_NS_WDT_CR) No effect.  */
#define   DWDT_NS_WDT_CR_LOCKMR_1_Val         _UINT32_(0x1)                                        /* (DWDT_NS_WDT_CR) Locks the configuration registers if KEY is written to 0xA5. Write accesses to NS_WDT_MR, NS_WDT_VR, NS_WDT_WL and NS_WDT_IL have no effect.  */
#define DWDT_NS_WDT_CR_LOCKMR_0               (DWDT_NS_WDT_CR_LOCKMR_0_Val << DWDT_NS_WDT_CR_LOCKMR_Pos) /* (DWDT_NS_WDT_CR) No effect. Position */
#define DWDT_NS_WDT_CR_LOCKMR_1               (DWDT_NS_WDT_CR_LOCKMR_1_Val << DWDT_NS_WDT_CR_LOCKMR_Pos) /* (DWDT_NS_WDT_CR) Locks the configuration registers if KEY is written to 0xA5. Write accesses to NS_WDT_MR, NS_WDT_VR, NS_WDT_WL and NS_WDT_IL have no effect. Position */
#define DWDT_NS_WDT_CR_KEY_Pos                _UINT32_(24)                                         /* (DWDT_NS_WDT_CR) Password Position */
#define DWDT_NS_WDT_CR_KEY_Msk                (_UINT32_(0xFF) << DWDT_NS_WDT_CR_KEY_Pos)           /* (DWDT_NS_WDT_CR) Password Mask */
#define DWDT_NS_WDT_CR_KEY(value)             (DWDT_NS_WDT_CR_KEY_Msk & (_UINT32_(value) << DWDT_NS_WDT_CR_KEY_Pos)) /* Assignment of value for KEY in the DWDT_NS_WDT_CR register */
#define   DWDT_NS_WDT_CR_KEY_PASSWD_Val       _UINT32_(0xA5)                                       /* (DWDT_NS_WDT_CR) Writing any other value in this field aborts the write operation.  */
#define DWDT_NS_WDT_CR_KEY_PASSWD             (DWDT_NS_WDT_CR_KEY_PASSWD_Val << DWDT_NS_WDT_CR_KEY_Pos) /* (DWDT_NS_WDT_CR) Writing any other value in this field aborts the write operation. Position */
#define DWDT_NS_WDT_CR_Msk                    _UINT32_(0xFF000011)                                 /* (DWDT_NS_WDT_CR) Register Mask  */


/* -------- DWDT_NS_WDT_MR : (DWDT Offset: 0x04) (R/W 32) Never Secure Mode Register -------- */
#define DWDT_NS_WDT_MR_RESETVALUE             _UINT32_(0x30)                                       /*  (DWDT_NS_WDT_MR) Never Secure Mode Register  Reset Value */

#define DWDT_NS_WDT_MR_WDDIS_Pos              _UINT32_(12)                                         /* (DWDT_NS_WDT_MR) Watchdog Disable Position */
#define DWDT_NS_WDT_MR_WDDIS_Msk              (_UINT32_(0x1) << DWDT_NS_WDT_MR_WDDIS_Pos)          /* (DWDT_NS_WDT_MR) Watchdog Disable Mask */
#define DWDT_NS_WDT_MR_WDDIS(value)           (DWDT_NS_WDT_MR_WDDIS_Msk & (_UINT32_(value) << DWDT_NS_WDT_MR_WDDIS_Pos)) /* Assignment of value for WDDIS in the DWDT_NS_WDT_MR register */
#define   DWDT_NS_WDT_MR_WDDIS_0_Val          _UINT32_(0x0)                                        /* (DWDT_NS_WDT_MR) Enables the Watchdog Timer.  */
#define   DWDT_NS_WDT_MR_WDDIS_1_Val          _UINT32_(0x1)                                        /* (DWDT_NS_WDT_MR) Disables the Watchdog Timer.  */
#define DWDT_NS_WDT_MR_WDDIS_0                (DWDT_NS_WDT_MR_WDDIS_0_Val << DWDT_NS_WDT_MR_WDDIS_Pos) /* (DWDT_NS_WDT_MR) Enables the Watchdog Timer. Position */
#define DWDT_NS_WDT_MR_WDDIS_1                (DWDT_NS_WDT_MR_WDDIS_1_Val << DWDT_NS_WDT_MR_WDDIS_Pos) /* (DWDT_NS_WDT_MR) Disables the Watchdog Timer. Position */
#define DWDT_NS_WDT_MR_WDIDLEHLT_Pos          _UINT32_(28)                                         /* (DWDT_NS_WDT_MR) Watchdog Idle Halt Position */
#define DWDT_NS_WDT_MR_WDIDLEHLT_Msk          (_UINT32_(0x1) << DWDT_NS_WDT_MR_WDIDLEHLT_Pos)      /* (DWDT_NS_WDT_MR) Watchdog Idle Halt Mask */
#define DWDT_NS_WDT_MR_WDIDLEHLT(value)       (DWDT_NS_WDT_MR_WDIDLEHLT_Msk & (_UINT32_(value) << DWDT_NS_WDT_MR_WDIDLEHLT_Pos)) /* Assignment of value for WDIDLEHLT in the DWDT_NS_WDT_MR register */
#define   DWDT_NS_WDT_MR_WDIDLEHLT_0_Val      _UINT32_(0x0)                                        /* (DWDT_NS_WDT_MR) The watchdog runs when the system is in Idle state.  */
#define   DWDT_NS_WDT_MR_WDIDLEHLT_1_Val      _UINT32_(0x1)                                        /* (DWDT_NS_WDT_MR) The watchdog stops when the system is in Idle state.  */
#define DWDT_NS_WDT_MR_WDIDLEHLT_0            (DWDT_NS_WDT_MR_WDIDLEHLT_0_Val << DWDT_NS_WDT_MR_WDIDLEHLT_Pos) /* (DWDT_NS_WDT_MR) The watchdog runs when the system is in Idle state. Position */
#define DWDT_NS_WDT_MR_WDIDLEHLT_1            (DWDT_NS_WDT_MR_WDIDLEHLT_1_Val << DWDT_NS_WDT_MR_WDIDLEHLT_Pos) /* (DWDT_NS_WDT_MR) The watchdog stops when the system is in Idle state. Position */
#define DWDT_NS_WDT_MR_WDDBGHLT_Pos           _UINT32_(29)                                         /* (DWDT_NS_WDT_MR) Watchdog Debug Halt Position */
#define DWDT_NS_WDT_MR_WDDBGHLT_Msk           (_UINT32_(0x1) << DWDT_NS_WDT_MR_WDDBGHLT_Pos)       /* (DWDT_NS_WDT_MR) Watchdog Debug Halt Mask */
#define DWDT_NS_WDT_MR_WDDBGHLT(value)        (DWDT_NS_WDT_MR_WDDBGHLT_Msk & (_UINT32_(value) << DWDT_NS_WDT_MR_WDDBGHLT_Pos)) /* Assignment of value for WDDBGHLT in the DWDT_NS_WDT_MR register */
#define   DWDT_NS_WDT_MR_WDDBGHLT_0_Val       _UINT32_(0x0)                                        /* (DWDT_NS_WDT_MR) The watchdog runs when the processor is in Debug state.  */
#define   DWDT_NS_WDT_MR_WDDBGHLT_1_Val       _UINT32_(0x1)                                        /* (DWDT_NS_WDT_MR) The watchdog stops when the processor is in Debug state.  */
#define DWDT_NS_WDT_MR_WDDBGHLT_0             (DWDT_NS_WDT_MR_WDDBGHLT_0_Val << DWDT_NS_WDT_MR_WDDBGHLT_Pos) /* (DWDT_NS_WDT_MR) The watchdog runs when the processor is in Debug state. Position */
#define DWDT_NS_WDT_MR_WDDBGHLT_1             (DWDT_NS_WDT_MR_WDDBGHLT_1_Val << DWDT_NS_WDT_MR_WDDBGHLT_Pos) /* (DWDT_NS_WDT_MR) The watchdog stops when the processor is in Debug state. Position */
#define DWDT_NS_WDT_MR_Msk                    _UINT32_(0x30001000)                                 /* (DWDT_NS_WDT_MR) Register Mask  */


/* -------- DWDT_NS_WDT_VR : (DWDT Offset: 0x08) ( R/ 32) Never Secure Value Register -------- */
#define DWDT_NS_WDT_VR_RESETVALUE             _UINT32_(0xFFF)                                      /*  (DWDT_NS_WDT_VR) Never Secure Value Register  Reset Value */

#define DWDT_NS_WDT_VR_COUNTER_Pos            _UINT32_(0)                                          /* (DWDT_NS_WDT_VR) Watchdog Down Counter Value Position */
#define DWDT_NS_WDT_VR_COUNTER_Msk            (_UINT32_(0xFFF) << DWDT_NS_WDT_VR_COUNTER_Pos)      /* (DWDT_NS_WDT_VR) Watchdog Down Counter Value Mask */
#define DWDT_NS_WDT_VR_COUNTER(value)         (DWDT_NS_WDT_VR_COUNTER_Msk & (_UINT32_(value) << DWDT_NS_WDT_VR_COUNTER_Pos)) /* Assignment of value for COUNTER in the DWDT_NS_WDT_VR register */
#define DWDT_NS_WDT_VR_Msk                    _UINT32_(0x00000FFF)                                 /* (DWDT_NS_WDT_VR) Register Mask  */


/* -------- DWDT_NS_WDT_WL : (DWDT Offset: 0x0C) (R/W 32) Never Secure Window Level Register -------- */
#define DWDT_NS_WDT_WL_RESETVALUE             _UINT32_(0xFFF)                                      /*  (DWDT_NS_WDT_WL) Never Secure Window Level Register  Reset Value */

#define DWDT_NS_WDT_WL_PERIOD_Pos             _UINT32_(0)                                          /* (DWDT_NS_WDT_WL) Watchdog Period Position */
#define DWDT_NS_WDT_WL_PERIOD_Msk             (_UINT32_(0xFFF) << DWDT_NS_WDT_WL_PERIOD_Pos)       /* (DWDT_NS_WDT_WL) Watchdog Period Mask */
#define DWDT_NS_WDT_WL_PERIOD(value)          (DWDT_NS_WDT_WL_PERIOD_Msk & (_UINT32_(value) << DWDT_NS_WDT_WL_PERIOD_Pos)) /* Assignment of value for PERIOD in the DWDT_NS_WDT_WL register */
#define DWDT_NS_WDT_WL_RPTH_Pos               _UINT32_(16)                                         /* (DWDT_NS_WDT_WL) Repeat Threshold Position */
#define DWDT_NS_WDT_WL_RPTH_Msk               (_UINT32_(0xFFF) << DWDT_NS_WDT_WL_RPTH_Pos)         /* (DWDT_NS_WDT_WL) Repeat Threshold Mask */
#define DWDT_NS_WDT_WL_RPTH(value)            (DWDT_NS_WDT_WL_RPTH_Msk & (_UINT32_(value) << DWDT_NS_WDT_WL_RPTH_Pos)) /* Assignment of value for RPTH in the DWDT_NS_WDT_WL register */
#define DWDT_NS_WDT_WL_Msk                    _UINT32_(0x0FFF0FFF)                                 /* (DWDT_NS_WDT_WL) Register Mask  */


/* -------- DWDT_NS_WDT_IL : (DWDT Offset: 0x10) (R/W 32) Never Secure Interrupt Level Register -------- */
#define DWDT_NS_WDT_IL_RESETVALUE             _UINT32_(0xFFF)                                      /*  (DWDT_NS_WDT_IL) Never Secure Interrupt Level Register  Reset Value */

#define DWDT_NS_WDT_IL_LVLTH_Pos              _UINT32_(0)                                          /* (DWDT_NS_WDT_IL) Level Threshold Position */
#define DWDT_NS_WDT_IL_LVLTH_Msk              (_UINT32_(0xFFF) << DWDT_NS_WDT_IL_LVLTH_Pos)        /* (DWDT_NS_WDT_IL) Level Threshold Mask */
#define DWDT_NS_WDT_IL_LVLTH(value)           (DWDT_NS_WDT_IL_LVLTH_Msk & (_UINT32_(value) << DWDT_NS_WDT_IL_LVLTH_Pos)) /* Assignment of value for LVLTH in the DWDT_NS_WDT_IL register */
#define DWDT_NS_WDT_IL_Msk                    _UINT32_(0x00000FFF)                                 /* (DWDT_NS_WDT_IL) Register Mask  */


/* -------- DWDT_NS_WDT_IER : (DWDT Offset: 0x14) ( /W 32) Never Secure Interrupt Enable Register -------- */
#define DWDT_NS_WDT_IER_PERINT_Pos            _UINT32_(0)                                          /* (DWDT_NS_WDT_IER) Period Interrupt Enable Position */
#define DWDT_NS_WDT_IER_PERINT_Msk            (_UINT32_(0x1) << DWDT_NS_WDT_IER_PERINT_Pos)        /* (DWDT_NS_WDT_IER) Period Interrupt Enable Mask */
#define DWDT_NS_WDT_IER_PERINT(value)         (DWDT_NS_WDT_IER_PERINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IER_PERINT_Pos)) /* Assignment of value for PERINT in the DWDT_NS_WDT_IER register */
#define   DWDT_NS_WDT_IER_PERINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IER) No effect.  */
#define   DWDT_NS_WDT_IER_PERINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IER) The never secure period failure interrupt is enabled.  */
#define DWDT_NS_WDT_IER_PERINT_0              (DWDT_NS_WDT_IER_PERINT_0_Val << DWDT_NS_WDT_IER_PERINT_Pos) /* (DWDT_NS_WDT_IER) No effect. Position */
#define DWDT_NS_WDT_IER_PERINT_1              (DWDT_NS_WDT_IER_PERINT_1_Val << DWDT_NS_WDT_IER_PERINT_Pos) /* (DWDT_NS_WDT_IER) The never secure period failure interrupt is enabled. Position */
#define DWDT_NS_WDT_IER_RPTHINT_Pos           _UINT32_(1)                                          /* (DWDT_NS_WDT_IER) Repeat Threshold Interrupt Enable Position */
#define DWDT_NS_WDT_IER_RPTHINT_Msk           (_UINT32_(0x1) << DWDT_NS_WDT_IER_RPTHINT_Pos)       /* (DWDT_NS_WDT_IER) Repeat Threshold Interrupt Enable Mask */
#define DWDT_NS_WDT_IER_RPTHINT(value)        (DWDT_NS_WDT_IER_RPTHINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IER_RPTHINT_Pos)) /* Assignment of value for RPTHINT in the DWDT_NS_WDT_IER register */
#define   DWDT_NS_WDT_IER_RPTHINT_0_Val       _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IER) No effect.  */
#define   DWDT_NS_WDT_IER_RPTHINT_1_Val       _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IER) The never secure repeat threshold failure interrupt is enabled.  */
#define DWDT_NS_WDT_IER_RPTHINT_0             (DWDT_NS_WDT_IER_RPTHINT_0_Val << DWDT_NS_WDT_IER_RPTHINT_Pos) /* (DWDT_NS_WDT_IER) No effect. Position */
#define DWDT_NS_WDT_IER_RPTHINT_1             (DWDT_NS_WDT_IER_RPTHINT_1_Val << DWDT_NS_WDT_IER_RPTHINT_Pos) /* (DWDT_NS_WDT_IER) The never secure repeat threshold failure interrupt is enabled. Position */
#define DWDT_NS_WDT_IER_LVLINT_Pos            _UINT32_(2)                                          /* (DWDT_NS_WDT_IER) Interrupt Level Threshold Interrupt Enable Position */
#define DWDT_NS_WDT_IER_LVLINT_Msk            (_UINT32_(0x1) << DWDT_NS_WDT_IER_LVLINT_Pos)        /* (DWDT_NS_WDT_IER) Interrupt Level Threshold Interrupt Enable Mask */
#define DWDT_NS_WDT_IER_LVLINT(value)         (DWDT_NS_WDT_IER_LVLINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IER_LVLINT_Pos)) /* Assignment of value for LVLINT in the DWDT_NS_WDT_IER register */
#define   DWDT_NS_WDT_IER_LVLINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IER) No effect.  */
#define   DWDT_NS_WDT_IER_LVLINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IER) The never secure interrupt threshold failure interrupt is enabled.  */
#define DWDT_NS_WDT_IER_LVLINT_0              (DWDT_NS_WDT_IER_LVLINT_0_Val << DWDT_NS_WDT_IER_LVLINT_Pos) /* (DWDT_NS_WDT_IER) No effect. Position */
#define DWDT_NS_WDT_IER_LVLINT_1              (DWDT_NS_WDT_IER_LVLINT_1_Val << DWDT_NS_WDT_IER_LVLINT_Pos) /* (DWDT_NS_WDT_IER) The never secure interrupt threshold failure interrupt is enabled. Position */
#define DWDT_NS_WDT_IER_Msk                   _UINT32_(0x00000007)                                 /* (DWDT_NS_WDT_IER) Register Mask  */


/* -------- DWDT_NS_WDT_IDR : (DWDT Offset: 0x18) ( /W 32) Never Secure Interrupt Disable Register -------- */
#define DWDT_NS_WDT_IDR_PERINT_Pos            _UINT32_(0)                                          /* (DWDT_NS_WDT_IDR) Period Interrupt Disable Position */
#define DWDT_NS_WDT_IDR_PERINT_Msk            (_UINT32_(0x1) << DWDT_NS_WDT_IDR_PERINT_Pos)        /* (DWDT_NS_WDT_IDR) Period Interrupt Disable Mask */
#define DWDT_NS_WDT_IDR_PERINT(value)         (DWDT_NS_WDT_IDR_PERINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IDR_PERINT_Pos)) /* Assignment of value for PERINT in the DWDT_NS_WDT_IDR register */
#define   DWDT_NS_WDT_IDR_PERINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IDR) No effect.  */
#define   DWDT_NS_WDT_IDR_PERINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IDR) The never secure period failure interrupt is disabled.  */
#define DWDT_NS_WDT_IDR_PERINT_0              (DWDT_NS_WDT_IDR_PERINT_0_Val << DWDT_NS_WDT_IDR_PERINT_Pos) /* (DWDT_NS_WDT_IDR) No effect. Position */
#define DWDT_NS_WDT_IDR_PERINT_1              (DWDT_NS_WDT_IDR_PERINT_1_Val << DWDT_NS_WDT_IDR_PERINT_Pos) /* (DWDT_NS_WDT_IDR) The never secure period failure interrupt is disabled. Position */
#define DWDT_NS_WDT_IDR_RPTHINT_Pos           _UINT32_(1)                                          /* (DWDT_NS_WDT_IDR) Repeat Threshold Interrupt Disable Position */
#define DWDT_NS_WDT_IDR_RPTHINT_Msk           (_UINT32_(0x1) << DWDT_NS_WDT_IDR_RPTHINT_Pos)       /* (DWDT_NS_WDT_IDR) Repeat Threshold Interrupt Disable Mask */
#define DWDT_NS_WDT_IDR_RPTHINT(value)        (DWDT_NS_WDT_IDR_RPTHINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IDR_RPTHINT_Pos)) /* Assignment of value for RPTHINT in the DWDT_NS_WDT_IDR register */
#define   DWDT_NS_WDT_IDR_RPTHINT_0_Val       _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IDR) No effect.  */
#define   DWDT_NS_WDT_IDR_RPTHINT_1_Val       _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IDR) The never secure repeat threshold failure interrupt is disabled.  */
#define DWDT_NS_WDT_IDR_RPTHINT_0             (DWDT_NS_WDT_IDR_RPTHINT_0_Val << DWDT_NS_WDT_IDR_RPTHINT_Pos) /* (DWDT_NS_WDT_IDR) No effect. Position */
#define DWDT_NS_WDT_IDR_RPTHINT_1             (DWDT_NS_WDT_IDR_RPTHINT_1_Val << DWDT_NS_WDT_IDR_RPTHINT_Pos) /* (DWDT_NS_WDT_IDR) The never secure repeat threshold failure interrupt is disabled. Position */
#define DWDT_NS_WDT_IDR_LVLINT_Pos            _UINT32_(2)                                          /* (DWDT_NS_WDT_IDR) Interrupt Level Threshold Interrupt Disable Position */
#define DWDT_NS_WDT_IDR_LVLINT_Msk            (_UINT32_(0x1) << DWDT_NS_WDT_IDR_LVLINT_Pos)        /* (DWDT_NS_WDT_IDR) Interrupt Level Threshold Interrupt Disable Mask */
#define DWDT_NS_WDT_IDR_LVLINT(value)         (DWDT_NS_WDT_IDR_LVLINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IDR_LVLINT_Pos)) /* Assignment of value for LVLINT in the DWDT_NS_WDT_IDR register */
#define   DWDT_NS_WDT_IDR_LVLINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IDR) No effect.  */
#define   DWDT_NS_WDT_IDR_LVLINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IDR) The never secure interrupt threshold failure interrupt is disabled.  */
#define DWDT_NS_WDT_IDR_LVLINT_0              (DWDT_NS_WDT_IDR_LVLINT_0_Val << DWDT_NS_WDT_IDR_LVLINT_Pos) /* (DWDT_NS_WDT_IDR) No effect. Position */
#define DWDT_NS_WDT_IDR_LVLINT_1              (DWDT_NS_WDT_IDR_LVLINT_1_Val << DWDT_NS_WDT_IDR_LVLINT_Pos) /* (DWDT_NS_WDT_IDR) The never secure interrupt threshold failure interrupt is disabled. Position */
#define DWDT_NS_WDT_IDR_Msk                   _UINT32_(0x00000007)                                 /* (DWDT_NS_WDT_IDR) Register Mask  */


/* -------- DWDT_NS_WDT_ISR : (DWDT Offset: 0x1C) ( R/ 32) Never Secure Interrupt Status Register -------- */
#define DWDT_NS_WDT_ISR_RESETVALUE            _UINT32_(0x00)                                       /*  (DWDT_NS_WDT_ISR) Never Secure Interrupt Status Register  Reset Value */

#define DWDT_NS_WDT_ISR_PERINT_Pos            _UINT32_(0)                                          /* (DWDT_NS_WDT_ISR) Period Interrupt Status Position */
#define DWDT_NS_WDT_ISR_PERINT_Msk            (_UINT32_(0x1) << DWDT_NS_WDT_ISR_PERINT_Pos)        /* (DWDT_NS_WDT_ISR) Period Interrupt Status Mask */
#define DWDT_NS_WDT_ISR_PERINT(value)         (DWDT_NS_WDT_ISR_PERINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_ISR_PERINT_Pos)) /* Assignment of value for PERINT in the DWDT_NS_WDT_ISR register */
#define   DWDT_NS_WDT_ISR_PERINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_NS_WDT_ISR) No period failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define   DWDT_NS_WDT_ISR_PERINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_NS_WDT_ISR) At least one period failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define DWDT_NS_WDT_ISR_PERINT_0              (DWDT_NS_WDT_ISR_PERINT_0_Val << DWDT_NS_WDT_ISR_PERINT_Pos) /* (DWDT_NS_WDT_ISR) No period failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position */
#define DWDT_NS_WDT_ISR_PERINT_1              (DWDT_NS_WDT_ISR_PERINT_1_Val << DWDT_NS_WDT_ISR_PERINT_Pos) /* (DWDT_NS_WDT_ISR) At least one period failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position */
#define DWDT_NS_WDT_ISR_RPTHINT_Pos           _UINT32_(1)                                          /* (DWDT_NS_WDT_ISR) Repeat Threshold Interrupt Enable Position */
#define DWDT_NS_WDT_ISR_RPTHINT_Msk           (_UINT32_(0x1) << DWDT_NS_WDT_ISR_RPTHINT_Pos)       /* (DWDT_NS_WDT_ISR) Repeat Threshold Interrupt Enable Mask */
#define DWDT_NS_WDT_ISR_RPTHINT(value)        (DWDT_NS_WDT_ISR_RPTHINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_ISR_RPTHINT_Pos)) /* Assignment of value for RPTHINT in the DWDT_NS_WDT_ISR register */
#define   DWDT_NS_WDT_ISR_RPTHINT_0_Val       _UINT32_(0x0)                                        /* (DWDT_NS_WDT_ISR) No repeat threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define   DWDT_NS_WDT_ISR_RPTHINT_1_Val       _UINT32_(0x1)                                        /* (DWDT_NS_WDT_ISR) At least one repeat threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define DWDT_NS_WDT_ISR_RPTHINT_0             (DWDT_NS_WDT_ISR_RPTHINT_0_Val << DWDT_NS_WDT_ISR_RPTHINT_Pos) /* (DWDT_NS_WDT_ISR) No repeat threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position */
#define DWDT_NS_WDT_ISR_RPTHINT_1             (DWDT_NS_WDT_ISR_RPTHINT_1_Val << DWDT_NS_WDT_ISR_RPTHINT_Pos) /* (DWDT_NS_WDT_ISR) At least one repeat threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position */
#define DWDT_NS_WDT_ISR_LVLINT_Pos            _UINT32_(2)                                          /* (DWDT_NS_WDT_ISR) Interrupt Level Threshold Interrupt Enable Position */
#define DWDT_NS_WDT_ISR_LVLINT_Msk            (_UINT32_(0x1) << DWDT_NS_WDT_ISR_LVLINT_Pos)        /* (DWDT_NS_WDT_ISR) Interrupt Level Threshold Interrupt Enable Mask */
#define DWDT_NS_WDT_ISR_LVLINT(value)         (DWDT_NS_WDT_ISR_LVLINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_ISR_LVLINT_Pos)) /* Assignment of value for LVLINT in the DWDT_NS_WDT_ISR register */
#define   DWDT_NS_WDT_ISR_LVLINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_NS_WDT_ISR) No level threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define   DWDT_NS_WDT_ISR_LVLINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_NS_WDT_ISR) At least one level threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR.  */
#define DWDT_NS_WDT_ISR_LVLINT_0              (DWDT_NS_WDT_ISR_LVLINT_0_Val << DWDT_NS_WDT_ISR_LVLINT_Pos) /* (DWDT_NS_WDT_ISR) No level threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position */
#define DWDT_NS_WDT_ISR_LVLINT_1              (DWDT_NS_WDT_ISR_LVLINT_1_Val << DWDT_NS_WDT_ISR_LVLINT_Pos) /* (DWDT_NS_WDT_ISR) At least one level threshold failure has occurred in the never secure watchdog since the last read of NS_WDT_ISR. Position */
#define DWDT_NS_WDT_ISR_Msk                   _UINT32_(0x00000007)                                 /* (DWDT_NS_WDT_ISR) Register Mask  */


/* -------- DWDT_NS_WDT_IMR : (DWDT Offset: 0x20) ( R/ 32) Never Secure Interrupt Mask Register -------- */
#define DWDT_NS_WDT_IMR_RESETVALUE            _UINT32_(0x00)                                       /*  (DWDT_NS_WDT_IMR) Never Secure Interrupt Mask Register  Reset Value */

#define DWDT_NS_WDT_IMR_PERINT_Pos            _UINT32_(0)                                          /* (DWDT_NS_WDT_IMR) Period Interrupt Mask Position */
#define DWDT_NS_WDT_IMR_PERINT_Msk            (_UINT32_(0x1) << DWDT_NS_WDT_IMR_PERINT_Pos)        /* (DWDT_NS_WDT_IMR) Period Interrupt Mask Mask */
#define DWDT_NS_WDT_IMR_PERINT(value)         (DWDT_NS_WDT_IMR_PERINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IMR_PERINT_Pos)) /* Assignment of value for PERINT in the DWDT_NS_WDT_IMR register */
#define   DWDT_NS_WDT_IMR_PERINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IMR) Interrupt on PERINT is disabled.  */
#define   DWDT_NS_WDT_IMR_PERINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IMR) Interrupt on PERINT is enabled.  */
#define DWDT_NS_WDT_IMR_PERINT_0              (DWDT_NS_WDT_IMR_PERINT_0_Val << DWDT_NS_WDT_IMR_PERINT_Pos) /* (DWDT_NS_WDT_IMR) Interrupt on PERINT is disabled. Position */
#define DWDT_NS_WDT_IMR_PERINT_1              (DWDT_NS_WDT_IMR_PERINT_1_Val << DWDT_NS_WDT_IMR_PERINT_Pos) /* (DWDT_NS_WDT_IMR) Interrupt on PERINT is enabled. Position */
#define DWDT_NS_WDT_IMR_RPTHINT_Pos           _UINT32_(1)                                          /* (DWDT_NS_WDT_IMR) Repeat Threshold Interrupt Mask Position */
#define DWDT_NS_WDT_IMR_RPTHINT_Msk           (_UINT32_(0x1) << DWDT_NS_WDT_IMR_RPTHINT_Pos)       /* (DWDT_NS_WDT_IMR) Repeat Threshold Interrupt Mask Mask */
#define DWDT_NS_WDT_IMR_RPTHINT(value)        (DWDT_NS_WDT_IMR_RPTHINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IMR_RPTHINT_Pos)) /* Assignment of value for RPTHINT in the DWDT_NS_WDT_IMR register */
#define   DWDT_NS_WDT_IMR_RPTHINT_0_Val       _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IMR) Interrupt on RPTHINT is disabled.  */
#define   DWDT_NS_WDT_IMR_RPTHINT_1_Val       _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IMR) Interrupt on RPTHINT is enabled.  */
#define DWDT_NS_WDT_IMR_RPTHINT_0             (DWDT_NS_WDT_IMR_RPTHINT_0_Val << DWDT_NS_WDT_IMR_RPTHINT_Pos) /* (DWDT_NS_WDT_IMR) Interrupt on RPTHINT is disabled. Position */
#define DWDT_NS_WDT_IMR_RPTHINT_1             (DWDT_NS_WDT_IMR_RPTHINT_1_Val << DWDT_NS_WDT_IMR_RPTHINT_Pos) /* (DWDT_NS_WDT_IMR) Interrupt on RPTHINT is enabled. Position */
#define DWDT_NS_WDT_IMR_LVLINT_Pos            _UINT32_(2)                                          /* (DWDT_NS_WDT_IMR) Interrupt Level Threshold Interrupt Mask Position */
#define DWDT_NS_WDT_IMR_LVLINT_Msk            (_UINT32_(0x1) << DWDT_NS_WDT_IMR_LVLINT_Pos)        /* (DWDT_NS_WDT_IMR) Interrupt Level Threshold Interrupt Mask Mask */
#define DWDT_NS_WDT_IMR_LVLINT(value)         (DWDT_NS_WDT_IMR_LVLINT_Msk & (_UINT32_(value) << DWDT_NS_WDT_IMR_LVLINT_Pos)) /* Assignment of value for LVLINT in the DWDT_NS_WDT_IMR register */
#define   DWDT_NS_WDT_IMR_LVLINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_NS_WDT_IMR) Interrupt on LVLINT is disabled.  */
#define   DWDT_NS_WDT_IMR_LVLINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_NS_WDT_IMR) Interrupt on LVLINT is enabled.  */
#define DWDT_NS_WDT_IMR_LVLINT_0              (DWDT_NS_WDT_IMR_LVLINT_0_Val << DWDT_NS_WDT_IMR_LVLINT_Pos) /* (DWDT_NS_WDT_IMR) Interrupt on LVLINT is disabled. Position */
#define DWDT_NS_WDT_IMR_LVLINT_1              (DWDT_NS_WDT_IMR_LVLINT_1_Val << DWDT_NS_WDT_IMR_LVLINT_Pos) /* (DWDT_NS_WDT_IMR) Interrupt on LVLINT is enabled. Position */
#define DWDT_NS_WDT_IMR_Msk                   _UINT32_(0x00000007)                                 /* (DWDT_NS_WDT_IMR) Register Mask  */


/* -------- DWDT_PS_WDT_CR : (DWDT Offset: 0x1000) ( /W 32) Programmable Secure Control Register -------- */
#define DWDT_PS_WDT_CR_WDRSTT_Pos             _UINT32_(0)                                          /* (DWDT_PS_WDT_CR) Watchdog Restart Position */
#define DWDT_PS_WDT_CR_WDRSTT_Msk             (_UINT32_(0x1) << DWDT_PS_WDT_CR_WDRSTT_Pos)         /* (DWDT_PS_WDT_CR) Watchdog Restart Mask */
#define DWDT_PS_WDT_CR_WDRSTT(value)          (DWDT_PS_WDT_CR_WDRSTT_Msk & (_UINT32_(value) << DWDT_PS_WDT_CR_WDRSTT_Pos)) /* Assignment of value for WDRSTT in the DWDT_PS_WDT_CR register */
#define   DWDT_PS_WDT_CR_WDRSTT_0_Val         _UINT32_(0x0)                                        /* (DWDT_PS_WDT_CR) No effect.  */
#define   DWDT_PS_WDT_CR_WDRSTT_1_Val         _UINT32_(0x1)                                        /* (DWDT_PS_WDT_CR) Restarts the watchdog if KEY is written to 0xA5.  */
#define DWDT_PS_WDT_CR_WDRSTT_0               (DWDT_PS_WDT_CR_WDRSTT_0_Val << DWDT_PS_WDT_CR_WDRSTT_Pos) /* (DWDT_PS_WDT_CR) No effect. Position */
#define DWDT_PS_WDT_CR_WDRSTT_1               (DWDT_PS_WDT_CR_WDRSTT_1_Val << DWDT_PS_WDT_CR_WDRSTT_Pos) /* (DWDT_PS_WDT_CR) Restarts the watchdog if KEY is written to 0xA5. Position */
#define DWDT_PS_WDT_CR_LOCKMR_Pos             _UINT32_(4)                                          /* (DWDT_PS_WDT_CR) Lock Mode Register Write Access Position */
#define DWDT_PS_WDT_CR_LOCKMR_Msk             (_UINT32_(0x1) << DWDT_PS_WDT_CR_LOCKMR_Pos)         /* (DWDT_PS_WDT_CR) Lock Mode Register Write Access Mask */
#define DWDT_PS_WDT_CR_LOCKMR(value)          (DWDT_PS_WDT_CR_LOCKMR_Msk & (_UINT32_(value) << DWDT_PS_WDT_CR_LOCKMR_Pos)) /* Assignment of value for LOCKMR in the DWDT_PS_WDT_CR register */
#define   DWDT_PS_WDT_CR_LOCKMR_0_Val         _UINT32_(0x0)                                        /* (DWDT_PS_WDT_CR) No effect.  */
#define   DWDT_PS_WDT_CR_LOCKMR_1_Val         _UINT32_(0x1)                                        /* (DWDT_PS_WDT_CR) Locks the configuration registers if KEY is written to 0xA5. Write accesses to PS_WDT_MR, PS_WDT_VR, PS_WDT_WL and PS_WDT_IL have no effect.  */
#define DWDT_PS_WDT_CR_LOCKMR_0               (DWDT_PS_WDT_CR_LOCKMR_0_Val << DWDT_PS_WDT_CR_LOCKMR_Pos) /* (DWDT_PS_WDT_CR) No effect. Position */
#define DWDT_PS_WDT_CR_LOCKMR_1               (DWDT_PS_WDT_CR_LOCKMR_1_Val << DWDT_PS_WDT_CR_LOCKMR_Pos) /* (DWDT_PS_WDT_CR) Locks the configuration registers if KEY is written to 0xA5. Write accesses to PS_WDT_MR, PS_WDT_VR, PS_WDT_WL and PS_WDT_IL have no effect. Position */
#define DWDT_PS_WDT_CR_KEY_Pos                _UINT32_(24)                                         /* (DWDT_PS_WDT_CR) Password Position */
#define DWDT_PS_WDT_CR_KEY_Msk                (_UINT32_(0xFF) << DWDT_PS_WDT_CR_KEY_Pos)           /* (DWDT_PS_WDT_CR) Password Mask */
#define DWDT_PS_WDT_CR_KEY(value)             (DWDT_PS_WDT_CR_KEY_Msk & (_UINT32_(value) << DWDT_PS_WDT_CR_KEY_Pos)) /* Assignment of value for KEY in the DWDT_PS_WDT_CR register */
#define   DWDT_PS_WDT_CR_KEY_PASSWD_Val       _UINT32_(0xA5)                                       /* (DWDT_PS_WDT_CR) Writing any other value in this field aborts the write operation.  */
#define DWDT_PS_WDT_CR_KEY_PASSWD             (DWDT_PS_WDT_CR_KEY_PASSWD_Val << DWDT_PS_WDT_CR_KEY_Pos) /* (DWDT_PS_WDT_CR) Writing any other value in this field aborts the write operation. Position */
#define DWDT_PS_WDT_CR_Msk                    _UINT32_(0xFF000011)                                 /* (DWDT_PS_WDT_CR) Register Mask  */


/* -------- DWDT_PS_WDT_MR : (DWDT Offset: 0x1004) (R/W 32) Programmable Secure Mode Register -------- */
#define DWDT_PS_WDT_MR_RESETVALUE             _UINT32_(0x30)                                       /*  (DWDT_PS_WDT_MR) Programmable Secure Mode Register  Reset Value */

#define DWDT_PS_WDT_MR_PERIODRST_Pos          _UINT32_(4)                                          /* (DWDT_PS_WDT_MR) Period Reset Position */
#define DWDT_PS_WDT_MR_PERIODRST_Msk          (_UINT32_(0x1) << DWDT_PS_WDT_MR_PERIODRST_Pos)      /* (DWDT_PS_WDT_MR) Period Reset Mask */
#define DWDT_PS_WDT_MR_PERIODRST(value)       (DWDT_PS_WDT_MR_PERIODRST_Msk & (_UINT32_(value) << DWDT_PS_WDT_MR_PERIODRST_Pos)) /* Assignment of value for PERIODRST in the DWDT_PS_WDT_MR register */
#define   DWDT_PS_WDT_MR_PERIODRST_0_Val      _UINT32_(0x0)                                        /* (DWDT_PS_WDT_MR) No reset is generated if the watchdog down counter reaches 0  */
#define   DWDT_PS_WDT_MR_PERIODRST_1_Val      _UINT32_(0x1)                                        /* (DWDT_PS_WDT_MR) A reset is generated once the watchdog down counter reaches 0  */
#define DWDT_PS_WDT_MR_PERIODRST_0            (DWDT_PS_WDT_MR_PERIODRST_0_Val << DWDT_PS_WDT_MR_PERIODRST_Pos) /* (DWDT_PS_WDT_MR) No reset is generated if the watchdog down counter reaches 0 Position */
#define DWDT_PS_WDT_MR_PERIODRST_1            (DWDT_PS_WDT_MR_PERIODRST_1_Val << DWDT_PS_WDT_MR_PERIODRST_Pos) /* (DWDT_PS_WDT_MR) A reset is generated once the watchdog down counter reaches 0 Position */
#define DWDT_PS_WDT_MR_RPTHRST_Pos            _UINT32_(5)                                          /* (DWDT_PS_WDT_MR) Repeat Threshold Reset Position */
#define DWDT_PS_WDT_MR_RPTHRST_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_MR_RPTHRST_Pos)        /* (DWDT_PS_WDT_MR) Repeat Threshold Reset Mask */
#define DWDT_PS_WDT_MR_RPTHRST(value)         (DWDT_PS_WDT_MR_RPTHRST_Msk & (_UINT32_(value) << DWDT_PS_WDT_MR_RPTHRST_Pos)) /* Assignment of value for RPTHRST in the DWDT_PS_WDT_MR register */
#define   DWDT_PS_WDT_MR_RPTHRST_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_MR) No reset is generated if the watchdog is restarted before the RPTH threshold  */
#define   DWDT_PS_WDT_MR_RPTHRST_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_MR) A reset is generated if the watchdog is restarted before the RPTH threshold  */
#define DWDT_PS_WDT_MR_RPTHRST_0              (DWDT_PS_WDT_MR_RPTHRST_0_Val << DWDT_PS_WDT_MR_RPTHRST_Pos) /* (DWDT_PS_WDT_MR) No reset is generated if the watchdog is restarted before the RPTH threshold Position */
#define DWDT_PS_WDT_MR_RPTHRST_1              (DWDT_PS_WDT_MR_RPTHRST_1_Val << DWDT_PS_WDT_MR_RPTHRST_Pos) /* (DWDT_PS_WDT_MR) A reset is generated if the watchdog is restarted before the RPTH threshold Position */
#define DWDT_PS_WDT_MR_WDDIS_Pos              _UINT32_(12)                                         /* (DWDT_PS_WDT_MR) Watchdog Disable Position */
#define DWDT_PS_WDT_MR_WDDIS_Msk              (_UINT32_(0x1) << DWDT_PS_WDT_MR_WDDIS_Pos)          /* (DWDT_PS_WDT_MR) Watchdog Disable Mask */
#define DWDT_PS_WDT_MR_WDDIS(value)           (DWDT_PS_WDT_MR_WDDIS_Msk & (_UINT32_(value) << DWDT_PS_WDT_MR_WDDIS_Pos)) /* Assignment of value for WDDIS in the DWDT_PS_WDT_MR register */
#define   DWDT_PS_WDT_MR_WDDIS_0_Val          _UINT32_(0x0)                                        /* (DWDT_PS_WDT_MR) Enables the Watchdog Timer.  */
#define   DWDT_PS_WDT_MR_WDDIS_1_Val          _UINT32_(0x1)                                        /* (DWDT_PS_WDT_MR) Disables the Watchdog Timer.  */
#define DWDT_PS_WDT_MR_WDDIS_0                (DWDT_PS_WDT_MR_WDDIS_0_Val << DWDT_PS_WDT_MR_WDDIS_Pos) /* (DWDT_PS_WDT_MR) Enables the Watchdog Timer. Position */
#define DWDT_PS_WDT_MR_WDDIS_1                (DWDT_PS_WDT_MR_WDDIS_1_Val << DWDT_PS_WDT_MR_WDDIS_Pos) /* (DWDT_PS_WDT_MR) Disables the Watchdog Timer. Position */
#define DWDT_PS_WDT_MR_WDIDLEHLT_Pos          _UINT32_(28)                                         /* (DWDT_PS_WDT_MR) Watchdog Idle Halt Position */
#define DWDT_PS_WDT_MR_WDIDLEHLT_Msk          (_UINT32_(0x1) << DWDT_PS_WDT_MR_WDIDLEHLT_Pos)      /* (DWDT_PS_WDT_MR) Watchdog Idle Halt Mask */
#define DWDT_PS_WDT_MR_WDIDLEHLT(value)       (DWDT_PS_WDT_MR_WDIDLEHLT_Msk & (_UINT32_(value) << DWDT_PS_WDT_MR_WDIDLEHLT_Pos)) /* Assignment of value for WDIDLEHLT in the DWDT_PS_WDT_MR register */
#define   DWDT_PS_WDT_MR_WDIDLEHLT_0_Val      _UINT32_(0x0)                                        /* (DWDT_PS_WDT_MR) The watchdog runs when the system is in Idle state.  */
#define   DWDT_PS_WDT_MR_WDIDLEHLT_1_Val      _UINT32_(0x1)                                        /* (DWDT_PS_WDT_MR) The watchdog stops when the system is in Idle state.  */
#define DWDT_PS_WDT_MR_WDIDLEHLT_0            (DWDT_PS_WDT_MR_WDIDLEHLT_0_Val << DWDT_PS_WDT_MR_WDIDLEHLT_Pos) /* (DWDT_PS_WDT_MR) The watchdog runs when the system is in Idle state. Position */
#define DWDT_PS_WDT_MR_WDIDLEHLT_1            (DWDT_PS_WDT_MR_WDIDLEHLT_1_Val << DWDT_PS_WDT_MR_WDIDLEHLT_Pos) /* (DWDT_PS_WDT_MR) The watchdog stops when the system is in Idle state. Position */
#define DWDT_PS_WDT_MR_WDDBGHLT_Pos           _UINT32_(29)                                         /* (DWDT_PS_WDT_MR) Watchdog Debug Halt Position */
#define DWDT_PS_WDT_MR_WDDBGHLT_Msk           (_UINT32_(0x1) << DWDT_PS_WDT_MR_WDDBGHLT_Pos)       /* (DWDT_PS_WDT_MR) Watchdog Debug Halt Mask */
#define DWDT_PS_WDT_MR_WDDBGHLT(value)        (DWDT_PS_WDT_MR_WDDBGHLT_Msk & (_UINT32_(value) << DWDT_PS_WDT_MR_WDDBGHLT_Pos)) /* Assignment of value for WDDBGHLT in the DWDT_PS_WDT_MR register */
#define   DWDT_PS_WDT_MR_WDDBGHLT_0_Val       _UINT32_(0x0)                                        /* (DWDT_PS_WDT_MR) The watchdog runs when the processor is in Debug state.  */
#define   DWDT_PS_WDT_MR_WDDBGHLT_1_Val       _UINT32_(0x1)                                        /* (DWDT_PS_WDT_MR) The watchdog stops when the processor is in Debug state.  */
#define DWDT_PS_WDT_MR_WDDBGHLT_0             (DWDT_PS_WDT_MR_WDDBGHLT_0_Val << DWDT_PS_WDT_MR_WDDBGHLT_Pos) /* (DWDT_PS_WDT_MR) The watchdog runs when the processor is in Debug state. Position */
#define DWDT_PS_WDT_MR_WDDBGHLT_1             (DWDT_PS_WDT_MR_WDDBGHLT_1_Val << DWDT_PS_WDT_MR_WDDBGHLT_Pos) /* (DWDT_PS_WDT_MR) The watchdog stops when the processor is in Debug state. Position */
#define DWDT_PS_WDT_MR_Msk                    _UINT32_(0x30001030)                                 /* (DWDT_PS_WDT_MR) Register Mask  */


/* -------- DWDT_PS_WDT_VR : (DWDT Offset: 0x1008) ( R/ 32) Programmable Secure Value Register -------- */
#define DWDT_PS_WDT_VR_RESETVALUE             _UINT32_(0xFFF)                                      /*  (DWDT_PS_WDT_VR) Programmable Secure Value Register  Reset Value */

#define DWDT_PS_WDT_VR_COUNTER_Pos            _UINT32_(0)                                          /* (DWDT_PS_WDT_VR) Watchdog Down Counter Value Position */
#define DWDT_PS_WDT_VR_COUNTER_Msk            (_UINT32_(0xFFF) << DWDT_PS_WDT_VR_COUNTER_Pos)      /* (DWDT_PS_WDT_VR) Watchdog Down Counter Value Mask */
#define DWDT_PS_WDT_VR_COUNTER(value)         (DWDT_PS_WDT_VR_COUNTER_Msk & (_UINT32_(value) << DWDT_PS_WDT_VR_COUNTER_Pos)) /* Assignment of value for COUNTER in the DWDT_PS_WDT_VR register */
#define DWDT_PS_WDT_VR_Msk                    _UINT32_(0x00000FFF)                                 /* (DWDT_PS_WDT_VR) Register Mask  */


/* -------- DWDT_PS_WDT_WL : (DWDT Offset: 0x100C) (R/W 32) Programmable Secure Window Level -------- */
#define DWDT_PS_WDT_WL_RESETVALUE             _UINT32_(0xFFF)                                      /*  (DWDT_PS_WDT_WL) Programmable Secure Window Level  Reset Value */

#define DWDT_PS_WDT_WL_PERIOD_Pos             _UINT32_(0)                                          /* (DWDT_PS_WDT_WL) Watchdog Period Position */
#define DWDT_PS_WDT_WL_PERIOD_Msk             (_UINT32_(0xFFF) << DWDT_PS_WDT_WL_PERIOD_Pos)       /* (DWDT_PS_WDT_WL) Watchdog Period Mask */
#define DWDT_PS_WDT_WL_PERIOD(value)          (DWDT_PS_WDT_WL_PERIOD_Msk & (_UINT32_(value) << DWDT_PS_WDT_WL_PERIOD_Pos)) /* Assignment of value for PERIOD in the DWDT_PS_WDT_WL register */
#define DWDT_PS_WDT_WL_RPTH_Pos               _UINT32_(16)                                         /* (DWDT_PS_WDT_WL) Repeat Threshold Position */
#define DWDT_PS_WDT_WL_RPTH_Msk               (_UINT32_(0xFFF) << DWDT_PS_WDT_WL_RPTH_Pos)         /* (DWDT_PS_WDT_WL) Repeat Threshold Mask */
#define DWDT_PS_WDT_WL_RPTH(value)            (DWDT_PS_WDT_WL_RPTH_Msk & (_UINT32_(value) << DWDT_PS_WDT_WL_RPTH_Pos)) /* Assignment of value for RPTH in the DWDT_PS_WDT_WL register */
#define DWDT_PS_WDT_WL_Msk                    _UINT32_(0x0FFF0FFF)                                 /* (DWDT_PS_WDT_WL) Register Mask  */


/* -------- DWDT_PS_WDT_IL : (DWDT Offset: 0x1010) (R/W 32) Programmable Secure Interrupt Level -------- */
#define DWDT_PS_WDT_IL_RESETVALUE             _UINT32_(0xFFF)                                      /*  (DWDT_PS_WDT_IL) Programmable Secure Interrupt Level  Reset Value */

#define DWDT_PS_WDT_IL_LVLTH_Pos              _UINT32_(0)                                          /* (DWDT_PS_WDT_IL) Level Threshold Position */
#define DWDT_PS_WDT_IL_LVLTH_Msk              (_UINT32_(0xFFF) << DWDT_PS_WDT_IL_LVLTH_Pos)        /* (DWDT_PS_WDT_IL) Level Threshold Mask */
#define DWDT_PS_WDT_IL_LVLTH(value)           (DWDT_PS_WDT_IL_LVLTH_Msk & (_UINT32_(value) << DWDT_PS_WDT_IL_LVLTH_Pos)) /* Assignment of value for LVLTH in the DWDT_PS_WDT_IL register */
#define DWDT_PS_WDT_IL_Msk                    _UINT32_(0x00000FFF)                                 /* (DWDT_PS_WDT_IL) Register Mask  */


/* -------- DWDT_PS_WDT_IER : (DWDT Offset: 0x1014) ( /W 32) Programmable Secure Interrupt Enable Register -------- */
#define DWDT_PS_WDT_IER_PERINT_Pos            _UINT32_(0)                                          /* (DWDT_PS_WDT_IER) Period Interrupt Enable Position */
#define DWDT_PS_WDT_IER_PERINT_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_IER_PERINT_Pos)        /* (DWDT_PS_WDT_IER) Period Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_PERINT(value)         (DWDT_PS_WDT_IER_PERINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IER_PERINT_Pos)) /* Assignment of value for PERINT in the DWDT_PS_WDT_IER register */
#define   DWDT_PS_WDT_IER_PERINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_PERINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IER) The programmable secure period failure interrupt is enabled.  */
#define DWDT_PS_WDT_IER_PERINT_0              (DWDT_PS_WDT_IER_PERINT_0_Val << DWDT_PS_WDT_IER_PERINT_Pos) /* (DWDT_PS_WDT_IER) No effect. Position */
#define DWDT_PS_WDT_IER_PERINT_1              (DWDT_PS_WDT_IER_PERINT_1_Val << DWDT_PS_WDT_IER_PERINT_Pos) /* (DWDT_PS_WDT_IER) The programmable secure period failure interrupt is enabled. Position */
#define DWDT_PS_WDT_IER_RPTHINT_Pos           _UINT32_(1)                                          /* (DWDT_PS_WDT_IER) Repeat Threshold Interrupt Enable Position */
#define DWDT_PS_WDT_IER_RPTHINT_Msk           (_UINT32_(0x1) << DWDT_PS_WDT_IER_RPTHINT_Pos)       /* (DWDT_PS_WDT_IER) Repeat Threshold Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_RPTHINT(value)        (DWDT_PS_WDT_IER_RPTHINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IER_RPTHINT_Pos)) /* Assignment of value for RPTHINT in the DWDT_PS_WDT_IER register */
#define   DWDT_PS_WDT_IER_RPTHINT_0_Val       _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_RPTHINT_1_Val       _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IER) The programmable secure repeat threshold failure interrupt is enabled.  */
#define DWDT_PS_WDT_IER_RPTHINT_0             (DWDT_PS_WDT_IER_RPTHINT_0_Val << DWDT_PS_WDT_IER_RPTHINT_Pos) /* (DWDT_PS_WDT_IER) No effect. Position */
#define DWDT_PS_WDT_IER_RPTHINT_1             (DWDT_PS_WDT_IER_RPTHINT_1_Val << DWDT_PS_WDT_IER_RPTHINT_Pos) /* (DWDT_PS_WDT_IER) The programmable secure repeat threshold failure interrupt is enabled. Position */
#define DWDT_PS_WDT_IER_LVLINT_Pos            _UINT32_(2)                                          /* (DWDT_PS_WDT_IER) Interrupt Level Threshold Interrupt Enable Position */
#define DWDT_PS_WDT_IER_LVLINT_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_IER_LVLINT_Pos)        /* (DWDT_PS_WDT_IER) Interrupt Level Threshold Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_LVLINT(value)         (DWDT_PS_WDT_IER_LVLINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IER_LVLINT_Pos)) /* Assignment of value for LVLINT in the DWDT_PS_WDT_IER register */
#define   DWDT_PS_WDT_IER_LVLINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_LVLINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IER) The programmable secure interrupt threshold failure interrupt is enabled.  */
#define DWDT_PS_WDT_IER_LVLINT_0              (DWDT_PS_WDT_IER_LVLINT_0_Val << DWDT_PS_WDT_IER_LVLINT_Pos) /* (DWDT_PS_WDT_IER) No effect. Position */
#define DWDT_PS_WDT_IER_LVLINT_1              (DWDT_PS_WDT_IER_LVLINT_1_Val << DWDT_PS_WDT_IER_LVLINT_Pos) /* (DWDT_PS_WDT_IER) The programmable secure interrupt threshold failure interrupt is enabled. Position */
#define DWDT_PS_WDT_IER_NSPERINT_Pos          _UINT32_(3)                                          /* (DWDT_PS_WDT_IER) Never Secure Period Interrupt Enable Position */
#define DWDT_PS_WDT_IER_NSPERINT_Msk          (_UINT32_(0x1) << DWDT_PS_WDT_IER_NSPERINT_Pos)      /* (DWDT_PS_WDT_IER) Never Secure Period Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_NSPERINT(value)       (DWDT_PS_WDT_IER_NSPERINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IER_NSPERINT_Pos)) /* Assignment of value for NSPERINT in the DWDT_PS_WDT_IER register */
#define   DWDT_PS_WDT_IER_NSPERINT_0_Val      _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_NSPERINT_1_Val      _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IER) A never secure period failure generates an interrupt in the programmable secure area.  */
#define DWDT_PS_WDT_IER_NSPERINT_0            (DWDT_PS_WDT_IER_NSPERINT_0_Val << DWDT_PS_WDT_IER_NSPERINT_Pos) /* (DWDT_PS_WDT_IER) No effect. Position */
#define DWDT_PS_WDT_IER_NSPERINT_1            (DWDT_PS_WDT_IER_NSPERINT_1_Val << DWDT_PS_WDT_IER_NSPERINT_Pos) /* (DWDT_PS_WDT_IER) A never secure period failure generates an interrupt in the programmable secure area. Position */
#define DWDT_PS_WDT_IER_NSRPTHINT_Pos         _UINT32_(4)                                          /* (DWDT_PS_WDT_IER) Never Secure Repeat Threshold Interrupt Enable Position */
#define DWDT_PS_WDT_IER_NSRPTHINT_Msk         (_UINT32_(0x1) << DWDT_PS_WDT_IER_NSRPTHINT_Pos)     /* (DWDT_PS_WDT_IER) Never Secure Repeat Threshold Interrupt Enable Mask */
#define DWDT_PS_WDT_IER_NSRPTHINT(value)      (DWDT_PS_WDT_IER_NSRPTHINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IER_NSRPTHINT_Pos)) /* Assignment of value for NSRPTHINT in the DWDT_PS_WDT_IER register */
#define   DWDT_PS_WDT_IER_NSRPTHINT_0_Val     _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IER) No effect.  */
#define   DWDT_PS_WDT_IER_NSRPTHINT_1_Val     _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IER) A never secure repeat threshold failure generates an interrupt in the programmable secure area.  */
#define DWDT_PS_WDT_IER_NSRPTHINT_0           (DWDT_PS_WDT_IER_NSRPTHINT_0_Val << DWDT_PS_WDT_IER_NSRPTHINT_Pos) /* (DWDT_PS_WDT_IER) No effect. Position */
#define DWDT_PS_WDT_IER_NSRPTHINT_1           (DWDT_PS_WDT_IER_NSRPTHINT_1_Val << DWDT_PS_WDT_IER_NSRPTHINT_Pos) /* (DWDT_PS_WDT_IER) A never secure repeat threshold failure generates an interrupt in the programmable secure area. Position */
#define DWDT_PS_WDT_IER_Msk                   _UINT32_(0x0000001F)                                 /* (DWDT_PS_WDT_IER) Register Mask  */


/* -------- DWDT_PS_WDT_IDR : (DWDT Offset: 0x1018) ( /W 32) Programmable Secure Interrupt Disable Register -------- */
#define DWDT_PS_WDT_IDR_PERINT_Pos            _UINT32_(0)                                          /* (DWDT_PS_WDT_IDR) Period Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_PERINT_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_IDR_PERINT_Pos)        /* (DWDT_PS_WDT_IDR) Period Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_PERINT(value)         (DWDT_PS_WDT_IDR_PERINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IDR_PERINT_Pos)) /* Assignment of value for PERINT in the DWDT_PS_WDT_IDR register */
#define   DWDT_PS_WDT_IDR_PERINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_PERINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IDR) The Programmable secure period failure interrupt is disabled.  */
#define DWDT_PS_WDT_IDR_PERINT_0              (DWDT_PS_WDT_IDR_PERINT_0_Val << DWDT_PS_WDT_IDR_PERINT_Pos) /* (DWDT_PS_WDT_IDR) No effect. Position */
#define DWDT_PS_WDT_IDR_PERINT_1              (DWDT_PS_WDT_IDR_PERINT_1_Val << DWDT_PS_WDT_IDR_PERINT_Pos) /* (DWDT_PS_WDT_IDR) The Programmable secure period failure interrupt is disabled. Position */
#define DWDT_PS_WDT_IDR_RPTHINT_Pos           _UINT32_(1)                                          /* (DWDT_PS_WDT_IDR) Repeat Threshold Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_RPTHINT_Msk           (_UINT32_(0x1) << DWDT_PS_WDT_IDR_RPTHINT_Pos)       /* (DWDT_PS_WDT_IDR) Repeat Threshold Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_RPTHINT(value)        (DWDT_PS_WDT_IDR_RPTHINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IDR_RPTHINT_Pos)) /* Assignment of value for RPTHINT in the DWDT_PS_WDT_IDR register */
#define   DWDT_PS_WDT_IDR_RPTHINT_0_Val       _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_RPTHINT_1_Val       _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IDR) The Programmable secure repeat threshold failure interrupt is disabled.  */
#define DWDT_PS_WDT_IDR_RPTHINT_0             (DWDT_PS_WDT_IDR_RPTHINT_0_Val << DWDT_PS_WDT_IDR_RPTHINT_Pos) /* (DWDT_PS_WDT_IDR) No effect. Position */
#define DWDT_PS_WDT_IDR_RPTHINT_1             (DWDT_PS_WDT_IDR_RPTHINT_1_Val << DWDT_PS_WDT_IDR_RPTHINT_Pos) /* (DWDT_PS_WDT_IDR) The Programmable secure repeat threshold failure interrupt is disabled. Position */
#define DWDT_PS_WDT_IDR_LVLINT_Pos            _UINT32_(2)                                          /* (DWDT_PS_WDT_IDR) Interrupt Level Threshold Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_LVLINT_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_IDR_LVLINT_Pos)        /* (DWDT_PS_WDT_IDR) Interrupt Level Threshold Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_LVLINT(value)         (DWDT_PS_WDT_IDR_LVLINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IDR_LVLINT_Pos)) /* Assignment of value for LVLINT in the DWDT_PS_WDT_IDR register */
#define   DWDT_PS_WDT_IDR_LVLINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_LVLINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IDR) The Programmable secure interrupt threshold failure interrupt is disabled.  */
#define DWDT_PS_WDT_IDR_LVLINT_0              (DWDT_PS_WDT_IDR_LVLINT_0_Val << DWDT_PS_WDT_IDR_LVLINT_Pos) /* (DWDT_PS_WDT_IDR) No effect. Position */
#define DWDT_PS_WDT_IDR_LVLINT_1              (DWDT_PS_WDT_IDR_LVLINT_1_Val << DWDT_PS_WDT_IDR_LVLINT_Pos) /* (DWDT_PS_WDT_IDR) The Programmable secure interrupt threshold failure interrupt is disabled. Position */
#define DWDT_PS_WDT_IDR_NSPERINT_Pos          _UINT32_(3)                                          /* (DWDT_PS_WDT_IDR) Never Secure Period Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_NSPERINT_Msk          (_UINT32_(0x1) << DWDT_PS_WDT_IDR_NSPERINT_Pos)      /* (DWDT_PS_WDT_IDR) Never Secure Period Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_NSPERINT(value)       (DWDT_PS_WDT_IDR_NSPERINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IDR_NSPERINT_Pos)) /* Assignment of value for NSPERINT in the DWDT_PS_WDT_IDR register */
#define   DWDT_PS_WDT_IDR_NSPERINT_0_Val      _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_NSPERINT_1_Val      _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IDR) A never secure period failure does not generate an interrupt in the programmable secure area.  */
#define DWDT_PS_WDT_IDR_NSPERINT_0            (DWDT_PS_WDT_IDR_NSPERINT_0_Val << DWDT_PS_WDT_IDR_NSPERINT_Pos) /* (DWDT_PS_WDT_IDR) No effect. Position */
#define DWDT_PS_WDT_IDR_NSPERINT_1            (DWDT_PS_WDT_IDR_NSPERINT_1_Val << DWDT_PS_WDT_IDR_NSPERINT_Pos) /* (DWDT_PS_WDT_IDR) A never secure period failure does not generate an interrupt in the programmable secure area. Position */
#define DWDT_PS_WDT_IDR_NSRPTHINT_Pos         _UINT32_(4)                                          /* (DWDT_PS_WDT_IDR) Never Secure Repeat Threshold Interrupt Disable Position */
#define DWDT_PS_WDT_IDR_NSRPTHINT_Msk         (_UINT32_(0x1) << DWDT_PS_WDT_IDR_NSRPTHINT_Pos)     /* (DWDT_PS_WDT_IDR) Never Secure Repeat Threshold Interrupt Disable Mask */
#define DWDT_PS_WDT_IDR_NSRPTHINT(value)      (DWDT_PS_WDT_IDR_NSRPTHINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IDR_NSRPTHINT_Pos)) /* Assignment of value for NSRPTHINT in the DWDT_PS_WDT_IDR register */
#define   DWDT_PS_WDT_IDR_NSRPTHINT_0_Val     _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IDR) No effect.  */
#define   DWDT_PS_WDT_IDR_NSRPTHINT_1_Val     _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IDR) A never secure repeat threshold failure does not generate an interrupt in the programmable secure area.  */
#define DWDT_PS_WDT_IDR_NSRPTHINT_0           (DWDT_PS_WDT_IDR_NSRPTHINT_0_Val << DWDT_PS_WDT_IDR_NSRPTHINT_Pos) /* (DWDT_PS_WDT_IDR) No effect. Position */
#define DWDT_PS_WDT_IDR_NSRPTHINT_1           (DWDT_PS_WDT_IDR_NSRPTHINT_1_Val << DWDT_PS_WDT_IDR_NSRPTHINT_Pos) /* (DWDT_PS_WDT_IDR) A never secure repeat threshold failure does not generate an interrupt in the programmable secure area. Position */
#define DWDT_PS_WDT_IDR_Msk                   _UINT32_(0x0000001F)                                 /* (DWDT_PS_WDT_IDR) Register Mask  */


/* -------- DWDT_PS_WDT_ISR : (DWDT Offset: 0x101C) ( R/ 32) Programmable Secure Interrupt Status Register -------- */
#define DWDT_PS_WDT_ISR_RESETVALUE            _UINT32_(0x00)                                       /*  (DWDT_PS_WDT_ISR) Programmable Secure Interrupt Status Register  Reset Value */

#define DWDT_PS_WDT_ISR_PERINT_Pos            _UINT32_(0)                                          /* (DWDT_PS_WDT_ISR) Period Interrupt Status Position */
#define DWDT_PS_WDT_ISR_PERINT_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_ISR_PERINT_Pos)        /* (DWDT_PS_WDT_ISR) Period Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_PERINT(value)         (DWDT_PS_WDT_ISR_PERINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_ISR_PERINT_Pos)) /* Assignment of value for PERINT in the DWDT_PS_WDT_ISR register */
#define   DWDT_PS_WDT_ISR_PERINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_ISR) No period failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_PERINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_ISR) At least one period failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_PERINT_0              (DWDT_PS_WDT_ISR_PERINT_0_Val << DWDT_PS_WDT_ISR_PERINT_Pos) /* (DWDT_PS_WDT_ISR) No period failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_PERINT_1              (DWDT_PS_WDT_ISR_PERINT_1_Val << DWDT_PS_WDT_ISR_PERINT_Pos) /* (DWDT_PS_WDT_ISR) At least one period failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_RPTHINT_Pos           _UINT32_(1)                                          /* (DWDT_PS_WDT_ISR) Repeat Threshold Interrupt Status Position */
#define DWDT_PS_WDT_ISR_RPTHINT_Msk           (_UINT32_(0x1) << DWDT_PS_WDT_ISR_RPTHINT_Pos)       /* (DWDT_PS_WDT_ISR) Repeat Threshold Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_RPTHINT(value)        (DWDT_PS_WDT_ISR_RPTHINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_ISR_RPTHINT_Pos)) /* Assignment of value for RPTHINT in the DWDT_PS_WDT_ISR register */
#define   DWDT_PS_WDT_ISR_RPTHINT_0_Val       _UINT32_(0x0)                                        /* (DWDT_PS_WDT_ISR) No repeat threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_RPTHINT_1_Val       _UINT32_(0x1)                                        /* (DWDT_PS_WDT_ISR) At least one repeat threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_RPTHINT_0             (DWDT_PS_WDT_ISR_RPTHINT_0_Val << DWDT_PS_WDT_ISR_RPTHINT_Pos) /* (DWDT_PS_WDT_ISR) No repeat threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_RPTHINT_1             (DWDT_PS_WDT_ISR_RPTHINT_1_Val << DWDT_PS_WDT_ISR_RPTHINT_Pos) /* (DWDT_PS_WDT_ISR) At least one repeat threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_LVLINT_Pos            _UINT32_(2)                                          /* (DWDT_PS_WDT_ISR) Interrupt Level Threshold Interrupt Status Position */
#define DWDT_PS_WDT_ISR_LVLINT_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_ISR_LVLINT_Pos)        /* (DWDT_PS_WDT_ISR) Interrupt Level Threshold Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_LVLINT(value)         (DWDT_PS_WDT_ISR_LVLINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_ISR_LVLINT_Pos)) /* Assignment of value for LVLINT in the DWDT_PS_WDT_ISR register */
#define   DWDT_PS_WDT_ISR_LVLINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_ISR) No level threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_LVLINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_ISR) At least one level threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_LVLINT_0              (DWDT_PS_WDT_ISR_LVLINT_0_Val << DWDT_PS_WDT_ISR_LVLINT_Pos) /* (DWDT_PS_WDT_ISR) No level threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_LVLINT_1              (DWDT_PS_WDT_ISR_LVLINT_1_Val << DWDT_PS_WDT_ISR_LVLINT_Pos) /* (DWDT_PS_WDT_ISR) At least one level threshold failure has occurred in the Programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_NSPERINT_Pos          _UINT32_(3)                                          /* (DWDT_PS_WDT_ISR) Never Secure Period Interrupt Status Position */
#define DWDT_PS_WDT_ISR_NSPERINT_Msk          (_UINT32_(0x1) << DWDT_PS_WDT_ISR_NSPERINT_Pos)      /* (DWDT_PS_WDT_ISR) Never Secure Period Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_NSPERINT(value)       (DWDT_PS_WDT_ISR_NSPERINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_ISR_NSPERINT_Pos)) /* Assignment of value for NSPERINT in the DWDT_PS_WDT_ISR register */
#define   DWDT_PS_WDT_ISR_NSPERINT_0_Val      _UINT32_(0x0)                                        /* (DWDT_PS_WDT_ISR) No never secure period failure has occurred in the programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_NSPERINT_1_Val      _UINT32_(0x1)                                        /* (DWDT_PS_WDT_ISR) At least one never secure period failure occurred in the programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_NSPERINT_0            (DWDT_PS_WDT_ISR_NSPERINT_0_Val << DWDT_PS_WDT_ISR_NSPERINT_Pos) /* (DWDT_PS_WDT_ISR) No never secure period failure has occurred in the programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_NSPERINT_1            (DWDT_PS_WDT_ISR_NSPERINT_1_Val << DWDT_PS_WDT_ISR_NSPERINT_Pos) /* (DWDT_PS_WDT_ISR) At least one never secure period failure occurred in the programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_NSRPTHINT_Pos         _UINT32_(4)                                          /* (DWDT_PS_WDT_ISR) Never Secure Repeat Threshold Interrupt Status Position */
#define DWDT_PS_WDT_ISR_NSRPTHINT_Msk         (_UINT32_(0x1) << DWDT_PS_WDT_ISR_NSRPTHINT_Pos)     /* (DWDT_PS_WDT_ISR) Never Secure Repeat Threshold Interrupt Status Mask */
#define DWDT_PS_WDT_ISR_NSRPTHINT(value)      (DWDT_PS_WDT_ISR_NSRPTHINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_ISR_NSRPTHINT_Pos)) /* Assignment of value for NSRPTHINT in the DWDT_PS_WDT_ISR register */
#define   DWDT_PS_WDT_ISR_NSRPTHINT_0_Val     _UINT32_(0x0)                                        /* (DWDT_PS_WDT_ISR) No never secure repeat threshold failure has occurred in the programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define   DWDT_PS_WDT_ISR_NSRPTHINT_1_Val     _UINT32_(0x1)                                        /* (DWDT_PS_WDT_ISR) At least one never secure repeat threshold failure occurred in the programmable secure watchdog since the last read of PS_WDT_ISR.  */
#define DWDT_PS_WDT_ISR_NSRPTHINT_0           (DWDT_PS_WDT_ISR_NSRPTHINT_0_Val << DWDT_PS_WDT_ISR_NSRPTHINT_Pos) /* (DWDT_PS_WDT_ISR) No never secure repeat threshold failure has occurred in the programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_NSRPTHINT_1           (DWDT_PS_WDT_ISR_NSRPTHINT_1_Val << DWDT_PS_WDT_ISR_NSRPTHINT_Pos) /* (DWDT_PS_WDT_ISR) At least one never secure repeat threshold failure occurred in the programmable secure watchdog since the last read of PS_WDT_ISR. Position */
#define DWDT_PS_WDT_ISR_Msk                   _UINT32_(0x0000001F)                                 /* (DWDT_PS_WDT_ISR) Register Mask  */


/* -------- DWDT_PS_WDT_IMR : (DWDT Offset: 0x1020) ( R/ 32) Programmable Secure Interrupt Mask Register -------- */
#define DWDT_PS_WDT_IMR_RESETVALUE            _UINT32_(0x00)                                       /*  (DWDT_PS_WDT_IMR) Programmable Secure Interrupt Mask Register  Reset Value */

#define DWDT_PS_WDT_IMR_PERINT_Pos            _UINT32_(0)                                          /* (DWDT_PS_WDT_IMR) Period Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_PERINT_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_IMR_PERINT_Pos)        /* (DWDT_PS_WDT_IMR) Period Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_PERINT(value)         (DWDT_PS_WDT_IMR_PERINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IMR_PERINT_Pos)) /* Assignment of value for PERINT in the DWDT_PS_WDT_IMR register */
#define   DWDT_PS_WDT_IMR_PERINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IMR) Interrupt on PERINT is disabled.  */
#define   DWDT_PS_WDT_IMR_PERINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IMR) Interrupt on PERINT is enabled.  */
#define DWDT_PS_WDT_IMR_PERINT_0              (DWDT_PS_WDT_IMR_PERINT_0_Val << DWDT_PS_WDT_IMR_PERINT_Pos) /* (DWDT_PS_WDT_IMR) Interrupt on PERINT is disabled. Position */
#define DWDT_PS_WDT_IMR_PERINT_1              (DWDT_PS_WDT_IMR_PERINT_1_Val << DWDT_PS_WDT_IMR_PERINT_Pos) /* (DWDT_PS_WDT_IMR) Interrupt on PERINT is enabled. Position */
#define DWDT_PS_WDT_IMR_RPTHINT_Pos           _UINT32_(1)                                          /* (DWDT_PS_WDT_IMR) Repeat Threshold Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_RPTHINT_Msk           (_UINT32_(0x1) << DWDT_PS_WDT_IMR_RPTHINT_Pos)       /* (DWDT_PS_WDT_IMR) Repeat Threshold Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_RPTHINT(value)        (DWDT_PS_WDT_IMR_RPTHINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IMR_RPTHINT_Pos)) /* Assignment of value for RPTHINT in the DWDT_PS_WDT_IMR register */
#define   DWDT_PS_WDT_IMR_RPTHINT_0_Val       _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IMR) Interrupt on RPTHINT is disabled.  */
#define   DWDT_PS_WDT_IMR_RPTHINT_1_Val       _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IMR) Interrupt on RPTHINT is enabled.  */
#define DWDT_PS_WDT_IMR_RPTHINT_0             (DWDT_PS_WDT_IMR_RPTHINT_0_Val << DWDT_PS_WDT_IMR_RPTHINT_Pos) /* (DWDT_PS_WDT_IMR) Interrupt on RPTHINT is disabled. Position */
#define DWDT_PS_WDT_IMR_RPTHINT_1             (DWDT_PS_WDT_IMR_RPTHINT_1_Val << DWDT_PS_WDT_IMR_RPTHINT_Pos) /* (DWDT_PS_WDT_IMR) Interrupt on RPTHINT is enabled. Position */
#define DWDT_PS_WDT_IMR_LVLINT_Pos            _UINT32_(2)                                          /* (DWDT_PS_WDT_IMR) Interrupt Level Threshold Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_LVLINT_Msk            (_UINT32_(0x1) << DWDT_PS_WDT_IMR_LVLINT_Pos)        /* (DWDT_PS_WDT_IMR) Interrupt Level Threshold Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_LVLINT(value)         (DWDT_PS_WDT_IMR_LVLINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IMR_LVLINT_Pos)) /* Assignment of value for LVLINT in the DWDT_PS_WDT_IMR register */
#define   DWDT_PS_WDT_IMR_LVLINT_0_Val        _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IMR) Interrupt on LVLINT is disabled.  */
#define   DWDT_PS_WDT_IMR_LVLINT_1_Val        _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IMR) Interrupt on LVLINT is enabled.  */
#define DWDT_PS_WDT_IMR_LVLINT_0              (DWDT_PS_WDT_IMR_LVLINT_0_Val << DWDT_PS_WDT_IMR_LVLINT_Pos) /* (DWDT_PS_WDT_IMR) Interrupt on LVLINT is disabled. Position */
#define DWDT_PS_WDT_IMR_LVLINT_1              (DWDT_PS_WDT_IMR_LVLINT_1_Val << DWDT_PS_WDT_IMR_LVLINT_Pos) /* (DWDT_PS_WDT_IMR) Interrupt on LVLINT is enabled. Position */
#define DWDT_PS_WDT_IMR_NSPERINT_Pos          _UINT32_(3)                                          /* (DWDT_PS_WDT_IMR) Never Secure Period Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_NSPERINT_Msk          (_UINT32_(0x1) << DWDT_PS_WDT_IMR_NSPERINT_Pos)      /* (DWDT_PS_WDT_IMR) Never Secure Period Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_NSPERINT(value)       (DWDT_PS_WDT_IMR_NSPERINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IMR_NSPERINT_Pos)) /* Assignment of value for NSPERINT in the DWDT_PS_WDT_IMR register */
#define   DWDT_PS_WDT_IMR_NSPERINT_0_Val      _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure PERINT interrupt is disabled.  */
#define   DWDT_PS_WDT_IMR_NSPERINT_1_Val      _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure PERINT interrupt is enabled.  */
#define DWDT_PS_WDT_IMR_NSPERINT_0            (DWDT_PS_WDT_IMR_NSPERINT_0_Val << DWDT_PS_WDT_IMR_NSPERINT_Pos) /* (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure PERINT interrupt is disabled. Position */
#define DWDT_PS_WDT_IMR_NSPERINT_1            (DWDT_PS_WDT_IMR_NSPERINT_1_Val << DWDT_PS_WDT_IMR_NSPERINT_Pos) /* (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure PERINT interrupt is enabled. Position */
#define DWDT_PS_WDT_IMR_NSRPTHINT_Pos         _UINT32_(4)                                          /* (DWDT_PS_WDT_IMR) Never Secure Repeat Threshold Interrupt Mask Position */
#define DWDT_PS_WDT_IMR_NSRPTHINT_Msk         (_UINT32_(0x1) << DWDT_PS_WDT_IMR_NSRPTHINT_Pos)     /* (DWDT_PS_WDT_IMR) Never Secure Repeat Threshold Interrupt Mask Mask */
#define DWDT_PS_WDT_IMR_NSRPTHINT(value)      (DWDT_PS_WDT_IMR_NSRPTHINT_Msk & (_UINT32_(value) << DWDT_PS_WDT_IMR_NSRPTHINT_Pos)) /* Assignment of value for NSRPTHINT in the DWDT_PS_WDT_IMR register */
#define   DWDT_PS_WDT_IMR_NSRPTHINT_0_Val     _UINT32_(0x0)                                        /* (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure RPTHINT interrupt is disabled.  */
#define   DWDT_PS_WDT_IMR_NSRPTHINT_1_Val     _UINT32_(0x1)                                        /* (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure RPTHINT interrupt is enabled.  */
#define DWDT_PS_WDT_IMR_NSRPTHINT_0           (DWDT_PS_WDT_IMR_NSRPTHINT_0_Val << DWDT_PS_WDT_IMR_NSRPTHINT_Pos) /* (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure RPTHINT interrupt is disabled. Position */
#define DWDT_PS_WDT_IMR_NSRPTHINT_1           (DWDT_PS_WDT_IMR_NSRPTHINT_1_Val << DWDT_PS_WDT_IMR_NSRPTHINT_Pos) /* (DWDT_PS_WDT_IMR) Programmable secure interrupt on never secure RPTHINT interrupt is enabled. Position */
#define DWDT_PS_WDT_IMR_Msk                   _UINT32_(0x0000001F)                                 /* (DWDT_PS_WDT_IMR) Register Mask  */


/* -------- DWDT_NS_WDT_LVLLIM : (DWDT Offset: 0x1024) (R/W 32) Never Secure Level Limits Register -------- */
#define DWDT_NS_WDT_LVLLIM_RESETVALUE         _UINT32_(0xFFF0000)                                  /*  (DWDT_NS_WDT_LVLLIM) Never Secure Level Limits Register  Reset Value */

#define DWDT_NS_WDT_LVLLIM_LVLMIN_Pos         _UINT32_(0)                                          /* (DWDT_NS_WDT_LVLLIM) Level Minimum Position */
#define DWDT_NS_WDT_LVLLIM_LVLMIN_Msk         (_UINT32_(0xFFF) << DWDT_NS_WDT_LVLLIM_LVLMIN_Pos)   /* (DWDT_NS_WDT_LVLLIM) Level Minimum Mask */
#define DWDT_NS_WDT_LVLLIM_LVLMIN(value)      (DWDT_NS_WDT_LVLLIM_LVLMIN_Msk & (_UINT32_(value) << DWDT_NS_WDT_LVLLIM_LVLMIN_Pos)) /* Assignment of value for LVLMIN in the DWDT_NS_WDT_LVLLIM register */
#define DWDT_NS_WDT_LVLLIM_LVLMAX_Pos         _UINT32_(16)                                         /* (DWDT_NS_WDT_LVLLIM) Level Maximum Position */
#define DWDT_NS_WDT_LVLLIM_LVLMAX_Msk         (_UINT32_(0xFFF) << DWDT_NS_WDT_LVLLIM_LVLMAX_Pos)   /* (DWDT_NS_WDT_LVLLIM) Level Maximum Mask */
#define DWDT_NS_WDT_LVLLIM_LVLMAX(value)      (DWDT_NS_WDT_LVLLIM_LVLMAX_Msk & (_UINT32_(value) << DWDT_NS_WDT_LVLLIM_LVLMAX_Pos)) /* Assignment of value for LVLMAX in the DWDT_NS_WDT_LVLLIM register */
#define DWDT_NS_WDT_LVLLIM_Msk                _UINT32_(0x0FFF0FFF)                                 /* (DWDT_NS_WDT_LVLLIM) Register Mask  */


/* -------- DWDT_NS_WDT_RLIM : (DWDT Offset: 0x1028) (R/W 32) Never Secure Repeat Limits Register -------- */
#define DWDT_NS_WDT_RLIM_RESETVALUE           _UINT32_(0xFFF0000)                                  /*  (DWDT_NS_WDT_RLIM) Never Secure Repeat Limits Register  Reset Value */

#define DWDT_NS_WDT_RLIM_RPTHMIN_Pos          _UINT32_(0)                                          /* (DWDT_NS_WDT_RLIM) Repeat Threshold Minimum Position */
#define DWDT_NS_WDT_RLIM_RPTHMIN_Msk          (_UINT32_(0xFFF) << DWDT_NS_WDT_RLIM_RPTHMIN_Pos)    /* (DWDT_NS_WDT_RLIM) Repeat Threshold Minimum Mask */
#define DWDT_NS_WDT_RLIM_RPTHMIN(value)       (DWDT_NS_WDT_RLIM_RPTHMIN_Msk & (_UINT32_(value) << DWDT_NS_WDT_RLIM_RPTHMIN_Pos)) /* Assignment of value for RPTHMIN in the DWDT_NS_WDT_RLIM register */
#define DWDT_NS_WDT_RLIM_RPTHMAX_Pos          _UINT32_(16)                                         /* (DWDT_NS_WDT_RLIM) Repeat Threshold Maximum Position */
#define DWDT_NS_WDT_RLIM_RPTHMAX_Msk          (_UINT32_(0xFFF) << DWDT_NS_WDT_RLIM_RPTHMAX_Pos)    /* (DWDT_NS_WDT_RLIM) Repeat Threshold Maximum Mask */
#define DWDT_NS_WDT_RLIM_RPTHMAX(value)       (DWDT_NS_WDT_RLIM_RPTHMAX_Msk & (_UINT32_(value) << DWDT_NS_WDT_RLIM_RPTHMAX_Pos)) /* Assignment of value for RPTHMAX in the DWDT_NS_WDT_RLIM register */
#define DWDT_NS_WDT_RLIM_Msk                  _UINT32_(0x0FFF0FFF)                                 /* (DWDT_NS_WDT_RLIM) Register Mask  */


/* -------- DWDT_NS_WDT_PLIM : (DWDT Offset: 0x102C) (R/W 32) Never Secure Period Limits Register -------- */
#define DWDT_NS_WDT_PLIM_RESETVALUE           _UINT32_(0xFFF0000)                                  /*  (DWDT_NS_WDT_PLIM) Never Secure Period Limits Register  Reset Value */

#define DWDT_NS_WDT_PLIM_PERMIN_Pos           _UINT32_(0)                                          /* (DWDT_NS_WDT_PLIM) Period Minimum Position */
#define DWDT_NS_WDT_PLIM_PERMIN_Msk           (_UINT32_(0xFFF) << DWDT_NS_WDT_PLIM_PERMIN_Pos)     /* (DWDT_NS_WDT_PLIM) Period Minimum Mask */
#define DWDT_NS_WDT_PLIM_PERMIN(value)        (DWDT_NS_WDT_PLIM_PERMIN_Msk & (_UINT32_(value) << DWDT_NS_WDT_PLIM_PERMIN_Pos)) /* Assignment of value for PERMIN in the DWDT_NS_WDT_PLIM register */
#define DWDT_NS_WDT_PLIM_PERMAX_Pos           _UINT32_(16)                                         /* (DWDT_NS_WDT_PLIM) Period Maximum Position */
#define DWDT_NS_WDT_PLIM_PERMAX_Msk           (_UINT32_(0xFFF) << DWDT_NS_WDT_PLIM_PERMAX_Pos)     /* (DWDT_NS_WDT_PLIM) Period Maximum Mask */
#define DWDT_NS_WDT_PLIM_PERMAX(value)        (DWDT_NS_WDT_PLIM_PERMAX_Msk & (_UINT32_(value) << DWDT_NS_WDT_PLIM_PERMAX_Pos)) /* Assignment of value for PERMAX in the DWDT_NS_WDT_PLIM register */
#define DWDT_NS_WDT_PLIM_Msk                  _UINT32_(0x0FFF0FFF)                                 /* (DWDT_NS_WDT_PLIM) Register Mask  */


/* DWDT register offsets definitions */
#define DWDT_NS_WDT_CR_REG_OFST        _UINT32_(0x00)      /* (DWDT_NS_WDT_CR) Never Secure Control Register Offset */
#define DWDT_NS_WDT_MR_REG_OFST        _UINT32_(0x04)      /* (DWDT_NS_WDT_MR) Never Secure Mode Register Offset */
#define DWDT_NS_WDT_VR_REG_OFST        _UINT32_(0x08)      /* (DWDT_NS_WDT_VR) Never Secure Value Register Offset */
#define DWDT_NS_WDT_WL_REG_OFST        _UINT32_(0x0C)      /* (DWDT_NS_WDT_WL) Never Secure Window Level Register Offset */
#define DWDT_NS_WDT_IL_REG_OFST        _UINT32_(0x10)      /* (DWDT_NS_WDT_IL) Never Secure Interrupt Level Register Offset */
#define DWDT_NS_WDT_IER_REG_OFST       _UINT32_(0x14)      /* (DWDT_NS_WDT_IER) Never Secure Interrupt Enable Register Offset */
#define DWDT_NS_WDT_IDR_REG_OFST       _UINT32_(0x18)      /* (DWDT_NS_WDT_IDR) Never Secure Interrupt Disable Register Offset */
#define DWDT_NS_WDT_ISR_REG_OFST       _UINT32_(0x1C)      /* (DWDT_NS_WDT_ISR) Never Secure Interrupt Status Register Offset */
#define DWDT_NS_WDT_IMR_REG_OFST       _UINT32_(0x20)      /* (DWDT_NS_WDT_IMR) Never Secure Interrupt Mask Register Offset */
#define DWDT_PS_WDT_CR_REG_OFST        _UINT32_(0x1000)    /* (DWDT_PS_WDT_CR) Programmable Secure Control Register Offset */
#define DWDT_PS_WDT_MR_REG_OFST        _UINT32_(0x1004)    /* (DWDT_PS_WDT_MR) Programmable Secure Mode Register Offset */
#define DWDT_PS_WDT_VR_REG_OFST        _UINT32_(0x1008)    /* (DWDT_PS_WDT_VR) Programmable Secure Value Register Offset */
#define DWDT_PS_WDT_WL_REG_OFST        _UINT32_(0x100C)    /* (DWDT_PS_WDT_WL) Programmable Secure Window Level Offset */
#define DWDT_PS_WDT_IL_REG_OFST        _UINT32_(0x1010)    /* (DWDT_PS_WDT_IL) Programmable Secure Interrupt Level Offset */
#define DWDT_PS_WDT_IER_REG_OFST       _UINT32_(0x1014)    /* (DWDT_PS_WDT_IER) Programmable Secure Interrupt Enable Register Offset */
#define DWDT_PS_WDT_IDR_REG_OFST       _UINT32_(0x1018)    /* (DWDT_PS_WDT_IDR) Programmable Secure Interrupt Disable Register Offset */
#define DWDT_PS_WDT_ISR_REG_OFST       _UINT32_(0x101C)    /* (DWDT_PS_WDT_ISR) Programmable Secure Interrupt Status Register Offset */
#define DWDT_PS_WDT_IMR_REG_OFST       _UINT32_(0x1020)    /* (DWDT_PS_WDT_IMR) Programmable Secure Interrupt Mask Register Offset */
#define DWDT_NS_WDT_LVLLIM_REG_OFST    _UINT32_(0x1024)    /* (DWDT_NS_WDT_LVLLIM) Never Secure Level Limits Register Offset */
#define DWDT_NS_WDT_RLIM_REG_OFST      _UINT32_(0x1028)    /* (DWDT_NS_WDT_RLIM) Never Secure Repeat Limits Register Offset */
#define DWDT_NS_WDT_PLIM_REG_OFST      _UINT32_(0x102C)    /* (DWDT_NS_WDT_PLIM) Never Secure Period Limits Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* DWDT register API structure */
typedef struct
{  /* Dual Watchdog Timer */
  __O   uint32_t                       DWDT_NS_WDT_CR;     /* Offset: 0x00 ( /W  32) Never Secure Control Register */
  __IO  uint32_t                       DWDT_NS_WDT_MR;     /* Offset: 0x04 (R/W  32) Never Secure Mode Register */
  __I   uint32_t                       DWDT_NS_WDT_VR;     /* Offset: 0x08 (R/   32) Never Secure Value Register */
  __IO  uint32_t                       DWDT_NS_WDT_WL;     /* Offset: 0x0C (R/W  32) Never Secure Window Level Register */
  __IO  uint32_t                       DWDT_NS_WDT_IL;     /* Offset: 0x10 (R/W  32) Never Secure Interrupt Level Register */
  __O   uint32_t                       DWDT_NS_WDT_IER;    /* Offset: 0x14 ( /W  32) Never Secure Interrupt Enable Register */
  __O   uint32_t                       DWDT_NS_WDT_IDR;    /* Offset: 0x18 ( /W  32) Never Secure Interrupt Disable Register */
  __I   uint32_t                       DWDT_NS_WDT_ISR;    /* Offset: 0x1C (R/   32) Never Secure Interrupt Status Register */
  __I   uint32_t                       DWDT_NS_WDT_IMR;    /* Offset: 0x20 (R/   32) Never Secure Interrupt Mask Register */
  __I   uint8_t                        Reserved1[0xFDC];
  __O   uint32_t                       DWDT_PS_WDT_CR;     /* Offset: 0x1000 ( /W  32) Programmable Secure Control Register */
  __IO  uint32_t                       DWDT_PS_WDT_MR;     /* Offset: 0x1004 (R/W  32) Programmable Secure Mode Register */
  __I   uint32_t                       DWDT_PS_WDT_VR;     /* Offset: 0x1008 (R/   32) Programmable Secure Value Register */
  __IO  uint32_t                       DWDT_PS_WDT_WL;     /* Offset: 0x100C (R/W  32) Programmable Secure Window Level */
  __IO  uint32_t                       DWDT_PS_WDT_IL;     /* Offset: 0x1010 (R/W  32) Programmable Secure Interrupt Level */
  __O   uint32_t                       DWDT_PS_WDT_IER;    /* Offset: 0x1014 ( /W  32) Programmable Secure Interrupt Enable Register */
  __O   uint32_t                       DWDT_PS_WDT_IDR;    /* Offset: 0x1018 ( /W  32) Programmable Secure Interrupt Disable Register */
  __I   uint32_t                       DWDT_PS_WDT_ISR;    /* Offset: 0x101C (R/   32) Programmable Secure Interrupt Status Register */
  __I   uint32_t                       DWDT_PS_WDT_IMR;    /* Offset: 0x1020 (R/   32) Programmable Secure Interrupt Mask Register */
  __IO  uint32_t                       DWDT_NS_WDT_LVLLIM; /* Offset: 0x1024 (R/W  32) Never Secure Level Limits Register */
  __IO  uint32_t                       DWDT_NS_WDT_RLIM;   /* Offset: 0x1028 (R/W  32) Never Secure Repeat Limits Register */
  __IO  uint32_t                       DWDT_NS_WDT_PLIM;   /* Offset: 0x102C (R/W  32) Never Secure Period Limits Register */
} dwdt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D_DWDT_COMPONENT_H_ */
