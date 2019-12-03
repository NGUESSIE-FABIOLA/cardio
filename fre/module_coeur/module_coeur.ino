#include "param.h"

int pinLed[10] = {2,3,4,5,6,7,8,9,10,11};

void setup()
{
 //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 10; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(pinLed[i], LOW); // l'une après l'autre
  }
}

void loop(){
  pulse();
}

void pulse()
{
  #ifdef TOUTES_lED_CLIGNOTANTES
  Toutes_LED_Allumees();
  #endif

  #ifdef LED_1_SUR_2_ALLUME
  Une_LED_Sur_Deux();
  #endif

  #ifdef LED_2_SUR_2_ALLUME
  Deux_LED_Sur_Deux();
  #endif

  #ifndef TOUTES_LED_CLIGNOTES
  Toutes_LED_Allumees();
  #endif
  
}

  int Toutes_LED_Allumees ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(100);
}
int Chenille ()
{
  for (int i = 2 ;i<=12;i++)
{
  pinMode (i,OUTPUT);
}
  
Serial.begin(9600);
}

void loop()
{
  for (int i= 2;i<=12;i++)
  {
    digitalWrite (i,LOW);
  }

 for (int i=2 ;i<=12;i++)
 {
  digitalWrite (i,HIGH);
    delay (100);
 }
    
}

int Une_LED_SUr_Deux ()
{
  for (int i =2;i<=11;i++)
{
  pinMode (i,OUTPUT);
}

}

void loop() 
{
  digitalWrite (2,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (6,HIGH);
  digitalWrite (8,HIGH);
  digitalWrite (10,HIGH);
  delay (100);
   digitalWrite (2,LOW);
  digitalWrite (4,LOW);
  digitalWrite (6,LOW);
  digitalWrite (8,LOW);
  digitalWrite (10,LOW);
   
  delay(100);
  digitalWrite (3,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (9,HIGH);
  digitalWrite (11,HIGH);
  delay (100);
  digitalWrite (3,LOW);
  digitalWrite (5,LOW);
  digitalWrite (7,LOW);
  digitalWrite (9,LOW);
  digitalWrite (11,LOW);
  delay (100);
}

int ALLUMAGE_2_A_2
{
  for (i=2;i<11;i++)
{
  pinMode (i,OUTPUT);
}

void moi() 
{
 digitalWrite (2,HIGH);
 digitalWrite (3,HIGH)
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
}
  {
}
