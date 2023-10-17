#include <string>
#include "mbed.h"

#define DOT_RATE 100ms
#define LINE_RATE 400ms
#define CHAR_SPACE_RATE 100ms
#define LETTER_SPACE_RATE 500ms


string translateToMorse(string word);

void morseBlink(string morseWord);
