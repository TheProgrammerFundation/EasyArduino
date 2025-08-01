# EasyArduino

![Stars Badge](https://img.shields.io/github/stars/TheProgrammerFundation/EasyArduino?style=flat)
![Arduino Badge](https://img.shields.io/badge/Made_for_Arduino-blue?style=flat&logo=arduino)

## Functions
"isPressed()" returns true or false if a button is pressed (true = pressed). You need to create an EasyButton object first.
"begin(pin)" initialises an object.Need to be used in Led Class and Button class before any other command
"toggle()" for Led class only.Changes the status of a led.(if it's on -> off and if it's on -> off
"on()"for Led class only.Turns on the led
"off()"for Led class only.Turns off the led
"pulse()"for Led class only.Turns gradually the led on and of.Remember that does that only ONE time.If you don't use this function in a PWM pin it could not work.
#Created parcially with help of UPM's Tech Summer Camp
