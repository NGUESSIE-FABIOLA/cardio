#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.c"


void menu(void){

	int choix;

	do{

	printf("---------------------------MENU CONTROLE LED----------------------------------");
	printf("\n 1 : Pour ALLUMER LE Coeur \n\n 2 : Pour ALLUMER UNE LED PARTICULIER \n\n 3 : Pour ALLUMER Le Coeur en mode Chenille\n\n 4 : Pour 01 Led sur 02\n\n 5 : Pour 01 Led sur 03 \n\n 0 : Pour Quitter le programme \n");

	scanf("%d", &choix);

		switch(choix){
			case 1:
			allume_All();
			lancement_fichier();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;

			case 2:
			allume_1_led();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;

			case 3:
			allume_chenille();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;

			case 4:
			allume_2_led();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;

			case 5:
			allume_3_led();
			printf("\n----------------------------------------\n");
			printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
			scanf("%d", &choix);
			break;
		}
	}while(choix != 0);

}
