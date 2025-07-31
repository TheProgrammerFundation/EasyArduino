#ifndef EASY_ARDUINO_H

#define EASY_ARDUINO_H


#include <Arduino.h>

class EasyButton {
  public:
    EasyButton();
    void begin(uint8_t pin);
    bool isPressed();
  

  private:uint8_t _pin;

};

#endif
