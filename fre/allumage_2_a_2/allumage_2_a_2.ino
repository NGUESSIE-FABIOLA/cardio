#include "param.h"
int val ;
void setup ()
{
 setup_moi();
 Serial.begin(9600);
 val = analogRead (A0);
}
void loop ()
{
  if (val != 0)
  {
  moi();
  }
}
