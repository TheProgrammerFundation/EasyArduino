#include "EasyArduino.h"
#include <Arduino.h>

EasyButton::EasyButton() {
  // Constructor vacío, no hace nada
}

void EasyButton::begin(uint8_t pin) {
  _pin = pin;
  pinMode(_pin, INPUT_PULLUP);  // Configura el pin como entrada con pull-up
}

bool EasyButton::isPressed() {
  return digitalRead(_pin) == LOW;  // Devuelve true si el botón está presionado
}
