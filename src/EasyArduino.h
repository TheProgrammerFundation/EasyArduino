#ifndef EASY_ARDUINO_H
#define EASY_ARDUINO_H

#include <Arduino.h>

class EasyButton {
  public:
    EasyButton();
    void begin(uint8_t pin);
    bool isPressed();

  private:
    uint8_t _pin;
};

class Led {
  public:
    Led();
    void begin(uint8_t pin);
    bool isOn();        // Devuelve true si el LED está encendido
    void toggle();      // Cambia el estado del LED
    void on();
    void off();
    void pulse();

  private:
    uint8_t _pin;
    bool _isOn;         // Estado interno del LED
};

#endif

