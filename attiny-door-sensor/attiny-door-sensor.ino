const int led = 0;
const int reedSwitch = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(reedSwitch, INPUT_PULLUP);
  digitalWrite(led, LOW);
}

void loop() {
  if (digitalRead(reedSwitch) == LOW)
  {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
