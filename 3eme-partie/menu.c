#include <stdio.h>
#include <stdlib.h>
#include "generationCode.c"


void menu(void){

	int choix;

	do{

	printf(" \n\n--------------------------HEXART-CARE--------------------------------\n\n\n ");
    printf( " Choisissez le mode d'allumage des LEDs du coeur :\n\n " );

    printf( " 1: Allumer toutes le Coeur\n\n " );
    printf( " 2: Allumer en Mode chenille \n\n " );
    printf( " 3: Allumer une LED sur deux\n\n " );
    printf( " 4: Allumer deux LED sur deux\n\n " );
    printf( " 5 : Pour Allumer Une LED particuliere \n\n " );
    printf( " 0 : Pour Quitter le programme \n\n " );

	

	scanf("%d", &choix);

		switch(choix){
			case 1:
			allume_All();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;

			case 2:
			allume_chenille();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;

			case 3:
			allume_led_2();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;

			case 4:
			allume_led_3();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;

			case 5:
			allume_led_particulier();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;
		}
	}while(choix != 0);

}