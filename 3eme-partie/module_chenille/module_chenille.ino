int valPotent=0;
const int analog = A0;

void setup() {
 /* pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);*/
  Serial.begin(9600);
}

void loop() {

      digitalWrite(3, HIGH);
      analogWrite(3, 254);
      delay(190);
      digitalWrite(3, LOW);
      
      digitalWrite(4, HIGH);
      analogWrite(4, 254);
      delay(190);
      digitalWrite(4, LOW);
      
      digitalWrite(5, HIGH);
      analogWrite(5, 254);
      delay(190);
      digitalWrite(5, LOW);
      
      digitalWrite(6, HIGH);
      analogWrite(6, 254);
      delay(190);
      digitalWrite(6, LOW);
      
      digitalWrite(7, HIGH);
      analogWrite(7, 254);
      delay(190);
      digitalWrite(7, LOW);
      
      digitalWrite(8, HIGH);
      analogWrite(8, 254);
      delay(190);
      digitalWrite(8, LOW);
      
      digitalWrite(9, HIGH);
      analogWrite(9, 254);
      delay(190);
      digitalWrite(9, LOW);
      
      digitalWrite(10, HIGH);
      analogWrite(10, 254);
      delay(190);
      digitalWrite(10, LOW);
      
      digitalWrite(11, HIGH);
      analogWrite(11, 254);
      delay(190);
      digitalWrite(11, LOW);
      
      digitalWrite(2, HIGH);
      analogWrite(2, 254);
      delay(190);
      digitalWrite(2, LOW);
      
}
