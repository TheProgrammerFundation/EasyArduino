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
class Led {
  public:
    Led();
    void begin(uint8_t pin);
    bool isOn();
    void toggle();
    void on();
    void off();  
  private:uint8_t _pin;

};
#endif
