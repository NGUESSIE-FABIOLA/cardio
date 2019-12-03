#include "param.h"

/*
  Pour ce programme on utilise des LEDs connectées sur les pins 2,4 et 6
*/

int  pinLed[10] = {2, 3, 4, 5 , 6, 7, 8, 9, 10, 11}; //déclaration et initialisation du tableau
//avec les valeurs des pins

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
  
    
    #ifdef TOUTES_LED_CLIGNOTANTES
    Toutes_LED_Allumees();
    #endif
 
    #ifdef TOUTES_LED_CLIGNOTANTES
    Toutes_LED_Allumees();
    #endif
  
    #ifdef MODE_CHENILLE
    Chenille();
    #endif

    #ifdef LED_1_SUR_2_ALLUMEE
    Une_LED_Sur_Deux();
    #endif
    
  
    #ifdef LED_1_SUR_3_ALLUMEE
    Une_LED_Sur_Trois();
    #endif

   

    
 }

int Toutes_LED_Allumees ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(1000);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(1000);
}
int Chenille ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
    delay(100);
    digitalWrite(pinLed[i], LOW);    
  }
}


int Une_LED_Sur_Deux ()
{
  for(int i=0; i<10; i++)
  {
    if (i%2==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}

int Une_LED_Sur_Trois ()
{
  for(int i=0; i<10; i++)
  {
    if (i%3==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}
