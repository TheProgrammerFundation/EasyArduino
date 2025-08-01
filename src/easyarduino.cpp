#include "EasyArduino.h"
#include <Arduino.h>

// Constructor vacío para EasyButton
EasyButton::EasyButton() {
  // No hace nada
}

// Constructor para Led - inicializa _isOn en false
Led::Led() {
  _isOn = false;  // Inicialmente apagado
}

// Inicializa el pin del LED y lo configura como salida
void Led::begin(uint8_t pin){
  _pin = pin;
  pinMode(_pin, OUTPUT); // Configura el led como output
  off();                 // Asegura que el LED inicie apagado y el estado actualizado
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
  _isOn = true;
}

// Apaga el LED
void Led::off(){
  digitalWrite(_pin, LOW);
  _isOn = false;
}

// Cambia el estado del LED
void Led::toggle(){
  if (_isOn) {
    off();
  } else {
    on();
  }
}

// Inicializa el pin del botón con resistencia pull-up interna
void EasyButton::begin(uint8_t pin) {
  _pin = pin;
  pinMode(_pin, INPUT_PULLUP);  // Configura el pin como entrada con pull-up
}

// Devuelve true si el botón está presionado (LOW porque usa pull-up)
bool EasyButton::isPressed() {
  return digitalRead(_pin) == LOW;
}

