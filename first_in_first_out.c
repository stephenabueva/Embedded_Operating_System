void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
   
}
void loop()
{
  digitalWrite(5, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(8000); // Wait for 8000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(7000); // Wait for 7000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(6000); // Wait for 6000 millisecond(s)
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(10, LOW);
  while(1){};
}
