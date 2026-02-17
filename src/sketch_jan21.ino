const int pirPin = 13;
int state = 0;
const int ledPin = 14;
const int buzzerPin = 2;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  state = digitalRead(pirPin);
  if(state == HIGH) {
    Serial.println("Detected");
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
  } else {
    noTone(buzzerPin);
    Serial.println("Monitouring");
    digitalWrite(ledPin, LOW);
  }
}