void setup() {
  pinMode(5U, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);
  Serial.println(light);
  int brightness = 1023 - light;
  analogWrite(5U, brightness);
  delay(500);
}
