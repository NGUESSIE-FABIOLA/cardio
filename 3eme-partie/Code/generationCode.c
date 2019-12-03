#include <stdio.h>
#include <stdlib.h>
#include "menu.h"/*
#include <avr/io.h>
#include <util/delay.h>*/

void generationCode(void){

	


}
/*void allume_All(void){

#define BLINK_DELAY_MS 490

 /* set pin 5 of PORTB for output
 DDRB |= _BV(DDB3);
 DDRB |= _BV(DDB4);
 DDRB |= _BV(DDB5);
 DDRB |= _BV(DDB6);
 DDRB |= _BV(DDB7);
 DDRB |= _BV(DDB8);
 DDRB |= _BV(DDB9);
 DDRB |= _BV(DDB10);
 DDRB |= _BV(DDB11);
 DDRB |= _BV(DDB2);
 
 while(1) {
  /* set pin 5 high to turn led on */
 /* PORTB |= _BV(PORTB3);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB4);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB6);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB7);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB8);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB9);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB10);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB11);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB2);
  _delay_ms(BLINK_DELAY_MS);


 
  /* set pin 5 low to turn led off 
  PORTB &= ~_BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);*/
 }




///////////////ecriture dans un fichier
/*	FILE* fichier = NULL;

	fichier = fopen("allume_All.ino", "w+");
	
	if (fichier != NULL){
		fputc('A', fichier); // Écriture du caractère A
		fclose(fichier);
	}

*/

}
/*
void allume_1_led(void){
	int c;
	printf("Quel est la Led que vous souhaitez allumer\n 1 pour le bas \n 2 pour la deuxieme a droite\n 3 pour la 3eme a droite\n 4 pour la quattrieme a droite \n 5 pour la 5 eme a droite\n 6 pour le centre du coeur\n 7 pour la 6eme a gauche\n 7 pour la 7eme a gauche\n 8 pour la 8eme a gauche\n 9 pour la 9eme a gauche\n 10 pour la 10eme a gauche");
	scanf("%d", &c);
	while (1)
	{
		switch (c)
		{
		case 1:
			DDRB |= _BV(DDB3);
			PORTB |= _BV(PORTB3);
  			_delay_ms(BLINK_DELAY_MS);
			break;
	
		default:
			printf("impossible de faire cela");
			break;
		}
	}
	
	

}

void allume_2_led(void){

	#define BLINK_DELAY_MS 490

	DDRB |= _BV(DDB3);
	DDRB |= _BV(DDB4);

	while(1) {

  			PORTB |= _BV(PORTB3);
		  	PORTB |= _BV(PORTB4);
  			_delay_ms(BLINK_DELAY_MS);


  	}

}

void allume_3_led(void){

	#define BLINK_DELAY_MS 490

	DDRB |= _BV(DDB3);
	DDRB |= _BV(DDB4);
	DDRB |= _BV(DDB5);

	while(1) {

  			PORTB |= _BV(PORTB3);
  			_delay_ms(BLINK_DELAY_MS);

		  	PORTB |= _BV(PORTB4);
  			_delay_ms(BLINK_DELAY_MS);

			PORTB |= _BV(PORTB5);
  			_delay_ms(BLINK_DELAY_MS);


  	}

}


void allume_chenille(void){

#define BLINK_DELAY_MS 490

 /* set pin 5 of PORTB for output*/
 DDRB |= _BV(DDB3);
 DDRB |= _BV(DDB4);
 DDRB |= _BV(DDB5);
 DDRB |= _BV(DDB6);
 DDRB |= _BV(DDB7);
 DDRB |= _BV(DDB8);
 DDRB |= _BV(DDB9);
 DDRB |= _BV(DDB10);
 DDRB |= _BV(DDB11);
 DDRB |= _BV(DDB2);
 
 while(1) {
  /* set pin 5 high to turn led on */
  PORTB |= _BV(PORTB3);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB4);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB6);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB7);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB8);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB9);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB10);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB11);
  _delay_ms(BLINK_DELAY_MS);

  PORTB |= _BV(PORTB2);
  _delay_ms(BLINK_DELAY_MS);

  
  PORTB &= ~_BV(PORTB3);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB4);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB6);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB7);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB8);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB9);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB10);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB11);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB2);
  _delay_ms(BLINK_DELAY_MS);

 }


}
*/
/////////////////////////test ligne de commmande
void lancement_fichier(void){
	FILE *fichier;
    char chaine[100];
 
    fichier = popen("make FNAME=menu.c","r");
 
 
    while(fgets(chaine, 100,fichier) != NULL)
        printf("%s",chaine);
 
 
 
    pclose(fichier);
}
/////////////////////////
