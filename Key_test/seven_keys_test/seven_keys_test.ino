int keys[7] = {8, 9, 2, 3, 4, 5, 6};
bool states[7] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW};
const int LED = 13;

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(keys[i], INPUT);
  }
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 7; i++) {
    states[i] = digitalRead(keys[i]);
    Serial.print(states[i]);
  }
  Serial.println("");
  delay(100);

}
