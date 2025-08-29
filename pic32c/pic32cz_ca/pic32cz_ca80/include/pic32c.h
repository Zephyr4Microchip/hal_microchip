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

#if   defined(__PIC32CZ2051CA80100__) || defined(__PIC32CZ2051CA80100__)
  #include "pic32cz2051ca80100.h"
#elif defined(__PIC32CZ2051CA80144__) || defined(__PIC32CZ2051CA80144__)
  #include "pic32cz2051ca80144.h"
#elif defined(__PIC32CZ2051CA80176__) || defined(__PIC32CZ2051CA80176__)
  #include "pic32cz2051ca80176.h"
#elif defined(__PIC32CZ2051CA80208__) || defined(__PIC32CZ2051CA80208__)
  #include "pic32cz2051ca80208.h"
#elif defined(__PIC32CZ4010CA80100__) || defined(__PIC32CZ4010CA80100__)
  #include "pic32cz4010ca80100.h"
#elif defined(__PIC32CZ4010CA80144__) || defined(__PIC32CZ4010CA80144__)
  #include "pic32cz4010ca80144.h"
#elif defined(__PIC32CZ4010CA80176__) || defined(__PIC32CZ4010CA80176__)
  #include "pic32cz4010ca80176.h"
#elif defined(__PIC32CZ4010CA80208__) || defined(__PIC32CZ4010CA80208__)
  #include "pic32cz4010ca80208.h"
#elif defined(__PIC32CZ8110CA80100__) || defined(__PIC32CZ8110CA80100__)
  #include "pic32cz8110ca80100.h"
#elif defined(__PIC32CZ8110CA80144__) || defined(__PIC32CZ8110CA80144__)
  #include "pic32cz8110ca80144.h"
#elif defined(__PIC32CZ8110CA80176__) || defined(__PIC32CZ8110CA80176__)
  #include "pic32cz8110ca80176.h"
#elif defined(__PIC32CZ8110CA80208__) || defined(__PIC32CZ8110CA80208__)
  #include "pic32cz8110ca80208.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _PIC32C_H_ */

