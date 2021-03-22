#include <avr/sleep.h>

const int led = 0;
const int reedSwitch = 2;

void going_to_sleep() {
  sleep_enable();
  attachInterrupt(reedSwitch, wake_up, LOW);
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  digitalWrite(led, LOW);
  delay(1000);
  sleep_cpu();
  digitalWrite(led, HIGH);
}

void wake_up () {
  sleep_disable();
  detachInterrupt(reedSwitch);
}

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
