#include <Arduino.h>

void setup_moi()
{
  for (int i=2;i<11;i++)
  {
     pinMode (i,OUTPUT);
  }

}

void moi() 
{
 digitalWrite (2,HIGH);
 digitalWrite (3,HIGH);
 delay (100);
 digitalWrite (2,LOW);
 digitalWrite (3,LOW);
 delay(100);
 digitalWrite (4,HIGH);
 digitalWrite (5,HIGH);
 delay (100);
 digitalWrite (4,LOW);
 digitalWrite (5,LOW);
 delay(100);
 digitalWrite (6,HIGH);
 digitalWrite (7,HIGH);
 delay (100);
 digitalWrite (6,LOW);
 digitalWrite (7,LOW);
 delay(100);
 digitalWrite (8,HIGH);
 digitalWrite (9,HIGH);
 delay (100);
 digitalWrite (8,LOW);
 digitalWrite (9,LOW);
 delay(100);
 digitalWrite (10,HIGH);
 digitalWrite (11,HIGH);
 delay (100);
 digitalWrite (10,LOW);
 digitalWrite (11,LOW);
 delay(100);

}

 
