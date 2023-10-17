#include "morse.h"
#include "mbed.h"
#include <string>

string translateToMorse(string word) {
  string out = "";
  for (int i = 0; i < word.length(); i++) {
    word[i] = tolower(word[i]);
    switch (word[i]) {
    case 'a': {
      out += ".- ";
      break;
    }
    case 'b': {
      out += "-... ";
      break;
    }
    case 'c': {
      out += "-.-. ";
      break;
    }
    case 'd': {
      out += "-.. ";
      break;
    }
    case 'e': {
      out += ". ";
      break;
    }
    case 'f': {
      out += "..-. ";
      break;
    }
    case 'g': {
      out += "--. ";
      break;
    }
    case 'h': {
      out += ".... ";
      break;
    }
    case 'i': {
      out += ".. ";
      break;
    }
    case 'j': {
      out += ".--- ";
      break;
    }
    case 'k': {
      out += "-.- ";
      break;
    }
    case 'l': {
      out += ".-.. ";
      break;
    }
    case 'm': {
      out += "-- ";
      break;
    }
    case 'n': {
      out += "-. ";
      break;
    }
    case 'o': {
      out += "--- ";
      break;
    }
    case 'p': {
      out += ".--. ";
      break;
    }
    case 'q': {
      out += "--.- ";
      break;
    }
    case 'r': {
      out += ".-. ";
      break;
    }
    case 's': {
      out += "... ";
      break;
    }
    case 't': {
      out += "- ";
      break;
    }
    case 'u': {
      out += "..- ";
      break;
    }
    case 'v': {
      out += "...- ";
      break;
    }
    case 'w': {
      out += ".-- ";
      break;
    }
    case 'x': {
      out += "-..- ";
      break;
    }
    case 'y': {
      out += "-.-- ";
      break;
    }
    case 'z': {
      out += "--.. ";
      break;
    }
    case ' ': {
      out += "  ";
      break;
    }
    default:{
        out+=" ";
    }
    }
  }
  return out;
}

void morseBlink(string morseWord) {
#ifdef LED1
  DigitalOut led(LED1);
#else
  bool led;
#endif
    led = false;
  for (int i = 0; i < morseWord.length(); i++) {
    switch (morseWord[i]) {
    case '.': {
      led = true;
      ThisThread::sleep_for(DOT_RATE);
      led = false;
      ThisThread::sleep_for(CHAR_SPACE_RATE);
      break;
    }
    case '-': {
      led = true;
      ThisThread::sleep_for(LINE_RATE);
      led = false;
      ThisThread::sleep_for(CHAR_SPACE_RATE);
      break;
    }
    case ' ': {
      led = false;
      ThisThread::sleep_for(LETTER_SPACE_RATE);
      break;
    }
    }
  }
  ThisThread::sleep_for(LETTER_SPACE_RATE);
}