#include <stdio.h>
#include <stdlib.h>
#include "donnees.c"
#include "action.c"

int main(void){

	int choix;

	do{
	  printf("---------------------------MENU OPERATIONNEL----------------------------------");
	printf("\n 1 : Pour Afficher les données dans l’ordre \n\n 2 : Pour Afficher les données en ordre croissant/décroissant (selon le temps, selon le pouls) \n\n 3 : Pour Rechercher et afficher les données pour un temps particulier \n\n 4 : Pour Afficher la moyenne de pouls dans une plage de temps donnée \n\n 5 : Pour Afficher le nombre de lignes de données actuellement en mémoire \n\n 6 : Pour Rechercher et afficher les max/min de pouls (avec le temps associé) \n\n 0 : Pour Quitter le programme \n");

	scanf("%d", &choix);

	switch(choix)
	{
	case 1:
	printf("w\n");
	printf("\n------------------------------------------------------------\n");
	printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
	scanf("%d", &choix);
	break;

	case 2:
	liste();
	printf("\n------------------------------------------------------------\n");
	printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
	scanf("%d", &choix);
	break;

	case 3:
	liste_temps();
	printf("\n------------------------------------------------------------\n");
	printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
	scanf("%d", &choix);
	break;

	case 4:
	printf("444444");
	printf("\n------------------------------------------------------------\n");
	printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
	scanf("%d", &choix);
	break;

	case 5:
	printf("555555");
	printf("\n------------------------------------------------------------\n");
	printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
	scanf("%d", &choix);
	break;

	case 6:
	printf("66666666");
	printf("\n------------------------------------------------------------\n");
	printf("voulez vous continuer ? \n 1 pour continuer :\n 0 pour quitter : ");
	scanf("%d", &choix);
	break;
	}

}while(choix != 0);


return 0;

}

