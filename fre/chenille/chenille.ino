void setup() 
{
for (int i = 2 ;i<=11;i++)
{
  pinMode (i,OUTPUT);
}
  
Serial.begin(9600);
}

void loop()
{
  for (int i= 1;i<=11;i++)
  {
    digitalWrite (i,LOW);
  }

 for (int i=1  ;i<=11;i++)
 {
  digitalWrite (i,HIGH);
    delay (1000);
 }
 
}
