/*
 * Instance header file for PIC32CZ4010CA91208
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

/* file generated from device description file (ATDF) version 2024-10-01T16:25:42Z */
#ifndef _PIC32CZCA91_ADC2_INSTANCE_
#define _PIC32CZCA91_ADC2_INSTANCE_


/* ========== Instance Parameter definitions for ADC2 peripheral ========== */
#define ADC2_APB_FIFO_DEPTH                      (16)       /* Number of Words in APB FIFO */
#define ADC2_CHNSAR_NMBR1                        (16)       /* Number of Channels on SARCORE number 1 */
#define ADC2_CHNSAR_NMBR2                        (7)        /* Number of Channels on SARCORE number 2 */
#define ADC2_CHNSAR_NMBR3                        (7)        /* Number of Channels on SARCORE number 3 */
#define ADC2_CHNSAR_NMBR4                        (7)        /* Number of Channels on SARCORE number 4 */
#define ADC2_DCMP_NMBR                           (4)        /* Number of Digital Comparators Max=4 */
#define ADC2_DMAC_ID_PFFRDY                      (75)       
#define ADC2_EARLY_INTR_PRESENT                  (1)        /* Early Interrupts Present */
#define ADC2_FLTR_NMBR                           (4)        /* Number of Digital Filters, Max=0 */
#define ADC2_GCLK_ID                             (41)       /* Index of Generic Clock */
#define ADC2_INSTANCE_ID                         (43)       /* Instance index for ADC */
#define ADC2_MCLK_ID_APB                         (51)       /* Index for ADC APB clock */
#define ADC2_OCP_ADDR_WIDTH                      (16)       /* OCP Address Width */
#define ADC2_OCP_FIFO_DEPTH                      (16)       /* Number of Words in OCP DMA FIFO */
#define ADC2_OCP_PORT_PRESENT                    (0)        /* OCP DMA Bus Master Present */
#define ADC2_PAC_ID                              (43)       /* Index for ADC registers write protection */
#define ADC2_SARCORE_NMBR                        (4)        /* Number of SARCOREs. Max=4, Min-1 */
#define ADC2_TRGS_NMBR                           (16)       /* Number of Trigger Sources, Max=16 */
#define ADC2_VREF_STARTUP_TIME                   (50)       /* Number of Control Clock cycles for VREF to stabalize */

#endif /* _PIC32CZCA91_ADC2_INSTANCE_ */
