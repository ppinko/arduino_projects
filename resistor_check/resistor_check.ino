uint32_t counter = 0;
uint32_t sum = 0;
float avg = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(100);
  ++counter;
  int curr_val = analogRead(A0);
  sum += static_cast<uint32_t>(curr_val);
  avg = sum / float(counter);
  Serial.println(int(500 * (curr_val / 1023.0)));
  // Serial.println(curr_val);
}
