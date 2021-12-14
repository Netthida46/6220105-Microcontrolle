int pinOUT22 = 22;
int pinOUT23 = 23;
void setup() {
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
}

void loop() {
  digitalWrite (22, HIGH);
  delay(500);
  digitalWrite (22, LOW);
  delay(500);
  digitalWrite (23, HIGH);
  delay(500);
  digitalWrite (23, LOW);
  delay(500);
  
}
