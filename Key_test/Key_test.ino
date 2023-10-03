const int LED = 13;
const int Key4 = 4;
const int Key5 = 5;
const int Key6 = 6;
bool state4;
bool state5;
bool state6;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Key4, INPUT);
  pinMode(Key5, INPUT);
  pinMode(Key6, INPUT);
  Serial.begin(9600);
}

void loop() {
  state4 = digitalRead(Key4);
  state5 = digitalRead(Key5);
  state6 = digitalRead(Key6);
  if (state4 == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  if (state6 == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  if (state5 == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}