/*the arduino sketch below visualizes the first in
first out algorithm, the first LED will be light up first
and the succeeding operation will be performed until all the task is finised
*/

void setup(){
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop(){
  digitalWrite(5,HIGH);
  delay(10000);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(8000);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(4000);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(2000);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(6000);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(4500);
  digitalWrite(10,LOW);
  while(1);
}
