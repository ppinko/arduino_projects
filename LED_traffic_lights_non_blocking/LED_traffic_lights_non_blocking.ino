/*
Author:   Pawel Pinkowicz
Created:  26/12/2022

Description:  Simulation of traffic lights
Board:        Arduino R3 CH340
*/

// constants
int const LED_RED = 10;
int const LED_YELLOW = 5;
int const LED_GREEN = 7;
int const BLINKING_INTERVAL = 2000;

// global variables
int currState = 0;
unsigned long prevMillis = 0;

void setup() {
  // configure output pins
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop() {
  unsigned long currMillis = millis();
  if (currMillis - prevMillis >= BLINKING_INTERVAL) {
    switch (currState) {
      case 0:
        // green light
        digitalWrite(LED_YELLOW, LOW);
        digitalWrite(LED_RED, LOW);
        digitalWrite(LED_GREEN, HIGH);
        break;
      case 1:
        // yellow light
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_YELLOW, HIGH);
        break;
      case 2:
        // red light
        digitalWrite(LED_YELLOW, LOW);
        digitalWrite(LED_RED, HIGH);
        break;
      case 3:
        // red + yellow light
        digitalWrite(LED_YELLOW, HIGH);
        break;
    }
    ++currState;
    currState %= 4;
    prevMillis = currMillis;
  }
  delay(BLINKING_INTERVAL);
}
