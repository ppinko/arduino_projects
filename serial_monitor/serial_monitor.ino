/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-serial-plotter
 */

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int y1 = analogRead(A0);

  Serial.println(y1);

  delay(100);
}
