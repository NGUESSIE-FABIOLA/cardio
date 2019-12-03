int valPotent=0;
const int analog = A0;

void setup() {
 /* pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);*/
  Serial.begin(9600);
}

void loop(){
  
  digitalWrite(3, HIGH);
  analogWrite(3, 200);

  digitalWrite(4, HIGH);
  analogWrite(4, 200);

  digitalWrite(5, HIGH);
  analogWrite(5, 200);

  digitalWrite(6, HIGH);
  analogWrite(6, 200);

  digitalWrite(7, HIGH);
  analogWrite(7, 200);

  digitalWrite(8, HIGH);
  analogWrite(8, 200);

  digitalWrite(9, HIGH);
  analogWrite(9, 200);

  digitalWrite(10, HIGH);
  analogWrite(10, 200);

  digitalWrite(11, HIGH);
  analogWrite(11, 200);

  digitalWrite(2, HIGH);
  analogWrite(2, 200);
  
  digitalWrite(2, LOW);
  delay(790);
  
  digitalWrite(3, LOW);
  delay(790);
  
  digitalWrite(4, LOW);
  delay(790);
  
  digitalWrite(5, LOW);
  delay(790);
  
  digitalWrite(6, LOW);
  delay(790);
  
  digitalWrite(7, LOW);
  delay(790);
  
  digitalWrite(8, LOW);
  delay(790);
  
  digitalWrite(9, LOW);
  delay(790);
  
  digitalWrite(10, LOW);
  delay(790);
  
  digitalWrite(11, LOW);
  delay(790);
}
