/*
 * Top level header file
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

#ifndef _PIC32C_H_
#define _PIC32C_H_

#if   defined(__PIC32CM2532JH00032__) || defined(__PIC32CM2532JH00032__)
  #include "pic32cm2532jh00032.h"
#elif defined(__PIC32CM2532JH00048__) || defined(__PIC32CM2532JH00048__)
  #include "pic32cm2532jh00048.h"
#elif defined(__PIC32CM2532JH00064__) || defined(__PIC32CM2532JH00064__)
  #include "pic32cm2532jh00064.h"
#elif defined(__PIC32CM2532JH00100__) || defined(__PIC32CM2532JH00100__)
  #include "pic32cm2532jh00100.h"
#elif defined(__PIC32CM3204JH00032__) || defined(__PIC32CM3204JH00032__)
  #include "pic32cm3204jh00032.h"
#elif defined(__PIC32CM3204JH00048__) || defined(__PIC32CM3204JH00048__)
  #include "pic32cm3204jh00048.h"
#elif defined(__PIC32CM3204JH00064__) || defined(__PIC32CM3204JH00064__)
  #include "pic32cm3204jh00064.h"
#elif defined(__PIC32CM5164JH00032__) || defined(__PIC32CM5164JH00032__)
  #include "pic32cm5164jh00032.h"
#elif defined(__PIC32CM5164JH00048__) || defined(__PIC32CM5164JH00048__)
  #include "pic32cm5164jh00048.h"
#elif defined(__PIC32CM5164JH00064__) || defined(__PIC32CM5164JH00064__)
  #include "pic32cm5164jh00064.h"
#elif defined(__PIC32CM5164JH00100__) || defined(__PIC32CM5164JH00100__)
  #include "pic32cm5164jh00100.h"
#elif defined(__PIC32CM6408JH00032__) || defined(__PIC32CM6408JH00032__)
  #include "pic32cm6408jh00032.h"
#elif defined(__PIC32CM6408JH00048__) || defined(__PIC32CM6408JH00048__)
  #include "pic32cm6408jh00048.h"
#elif defined(__PIC32CM6408JH00064__) || defined(__PIC32CM6408JH00064__)
  #include "pic32cm6408jh00064.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _PIC32C_H_ */

