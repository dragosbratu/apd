int ledPin = 13;  // Pinul la care e conectat LED-ul

void setup() {
  pinMode(ledPin, OUTPUT);  // Setăm pinul ca ieșire
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Aprinde LED-ul
  delay(1000);                 // Așteaptă 1 secundă
  digitalWrite(ledPin, LOW);   // Stinge LED-ul
  delay(1000);                 // Așteaptă 1 secundă
}