int r = 2;
int y = 3;
int g = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r, HIGH);
  delay(5000);
  digitalWrite(r,LOW);
  digitalWrite(g, HIGH);
  delay(5000);
  digitalWrite(g,LOW);
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(y, HIGH);
    delay(1000);
    digitalWrite(y, LOW);
    delay(1000);
  }
}
