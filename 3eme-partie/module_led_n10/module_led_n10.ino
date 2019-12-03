int valPotent=0;
const int analog = A0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void coeur() {

    digitalWrite(10, HIGH);
    analogWrite(10, 254);

}
