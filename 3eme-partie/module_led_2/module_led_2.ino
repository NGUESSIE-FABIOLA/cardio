int valPotent=0;
const int analog = A0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {    
    
    digitalWrite(3, HIGH);
    analogWrite(3, 254);

    digitalWrite(5, HIGH);
    analogWrite(5, 254);

    digitalWrite(7, HIGH);
    analogWrite(7, 254);

    digitalWrite(9, HIGH);
    analogWrite(9, 254);

    digitalWrite(10, HIGH);
    analogWrite(10, 254);


    digitalWrite(2, HIGH);
    analogWrite(2, 254);

    delay(290);
}
