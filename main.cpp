/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "morse.h"
#include <cstdio>
#include <string>


// Blinking rate in milliseconds
//#define BLINKING_RATE 200ms


int main() {
bool run = true;
  while (run) {
      string word = "e";
      string morseWord = translateToMorse(word);
      morseBlink(morseWord);
  }
}
