int const LED_red = 12;
int const LED_yellow = 11;
int const LED_green = 10;
int const delay_time = 2000;

void setup() {
  pinMode(LED_red, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_green, OUTPUT);
}

void loop() {
  // green light
  digitalWrite(LED_green, HIGH);
  delay(delay_time);
  // yellow light
  digitalWrite(LED_green, LOW);
  digitalWrite(LED_yellow, HIGH);
  delay(delay_time);
  // red light
  digitalWrite(LED_yellow, LOW);
  digitalWrite(LED_red, HIGH);
  delay(delay_time);
  // red + yellow light
  digitalWrite(LED_yellow, HIGH);
  delay(delay_time);
  digitalWrite(LED_yellow, LOW);
  digitalWrite(LED_red, LOW);
}
