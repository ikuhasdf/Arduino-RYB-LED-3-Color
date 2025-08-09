int r = 2;
int y = 3;
int g = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int on_1 = digitalRead(8);
  int off_1 = digitalRead(10);
  if (on_1 == LOW)
  {
    digitalWrite(r, HIGH);
    delay(5000);
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
    delay(5000);
    digitalWrite(g, LOW);
    for (int i = 0; i < 3; i++)
    {
      digitalWrite(y, HIGH);
      delay(500);
      digitalWrite(y, LOW);
      delay(500);
    }
  }
  else if (off_1 == LOW)
  {
    digitalWrite(r, LOW);
    digitalWrite(y, LOW);
    digitalWrite(g, LOW);
    while (digitalRead(10) == LOW) delay(1);
  }
  delay(100);
}
