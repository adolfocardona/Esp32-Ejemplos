/*
  Blink
*/
#include <Arduino.h>

// esp32Led refers to ESP32 GPIO 1
const int esp32Led = 1;

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin esp32Led as an output.
  pinMode(esp32Led, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(esp32Led, HIGH);
  delay(1000);
  digitalWrite(esp32Led, LOW);
  delay(1000);
}