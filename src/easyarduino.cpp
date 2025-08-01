#include "EasyArduino.h"
#include <Arduino.h>

// Constructor vacío para EasyButton
EasyButton::EasyButton() {
  // No hace nada
}

// Constructor vacío para Led
Led::Led() {
  // No hace nada
}

// Inicializa el pin del LED y lo configura como salida
void Led::begin(uint8_t pin){
  _pin = pin;
  pinMode(_pin, OUTPUT); // Configura el led como output
}

// Genera un pulso (fade in y fade out) con PWM en el LED
void Led::pulse(){
  for (int i = 0; i <= 255; i++) {
    analogWrite(_pin, i);   // Incrementa el brillo
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(_pin, i);   // Disminuye el brillo
    delay(10);
  }
}

// Enciende el LED (sin PWM, simplemente HIGH)
void Led::on(){
  digitalWrite(_pin, HIGH);
  isOn = true; // Cambié TRUE a true (en C++ es true/false)
}

// Apaga el LED
void Led::off(){
  digitalWrite(_pin, LOW);
  isOn = false;
}

// Inicializa el pin del botón con resistencia pull-up interna
void EasyButton::begin(uint8_t pin) {
  _pin = pin;
  pinMode(_pin, INPUT_PULLUP);  // Configura el pin como entrada con pull-up
}

// Retorna true si el botón está presionado (pin LOW porque es pull-up)
bool EasyButton::isPressed() {
  return digitalRead(_pin) == LOW;
}

