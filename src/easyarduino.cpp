#include "EasyArduino.h"
#include <Arduino.h>

EasyButton::EasyButton() {
  // Constructor vacío, no hace nada
}
Led::Led(){

}

void Led::begin(uint8_t pin){
  _pin = pin;
  pinMode(_pin, OUTPUT);//Configura el led como output
}
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

void Led::on(){
   digitalWrite(_pin,HIGH);
   isOn = TRUE
}

void Led::off(){
   digitalWrite

void EasyButton::begin(uint8_t pin) {
  _pin = pin;
  pinMode(_pin, INPUT_PULLUP);  // Configura el pin como entrada con pull-up
}

bool EasyButton::isPressed() {
  return digitalRead(_pin) == LOW;  // Devuelve true si el botón está presionado
}
