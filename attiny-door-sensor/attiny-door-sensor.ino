const int led = 0;
const int reedSwitch = 4;
int reedStatus;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(reedSwitch, INPUT);
//  digitalWrite(pinLed, LOW);
}

void loop() {
  reedStatus = digitalRead(reedSwitch);
  if (reedStatus == HIGH)
  {
    digitalWrite(pinLed, HIGH);
  }
  else
  {
    digitalWrite(pinLed, LOW);
  }
}
