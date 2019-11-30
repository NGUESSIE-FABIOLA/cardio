#include <stdio.h>
#include <stdlib.h>
#include "donnees.c"

int main(void){

	int choix;

	do{
	  printf("---------------------------MENU OPERATIONNEL----------------------------------");
	printf("\n 1 : Pour Afficher les données dans l’ordre \n\n 2 : Pour Afficher les données en ordre croissant/décroissant (selon le temps, selon le pouls) \n\n 3 : Pour Rechercher et afficher les données pour un temps particulier \n\n 4 : Pour Afficher la moyenne de pouls dans une plage de temps donnée \n\n 5 : Pour Afficher le nombre de lignes de données actuellement en mémoire \n\n 6 : Pour Rechercher et afficher les max/min de pouls (avec le temps associé) \n\n 0 : Pour Quitter le programme \n");

	scanf("%d", &choix);


	signed char resultat[200];
	FILE *battement = fopen("battement.csv","r");



	switch(choix)
	{
	case 1:
	printf("w");
	break;

	case 2:
	printf("wwwwww");
	break;

	case 3:

	if(battement == NULL){
		exit(1);
	}

	fgets(resultat, 199, battement);
	printf("%s\n", resultat);


	break;

	case 4:
	printf("wwwwww");
	break;

	case 5:
	printf("wwwwww");
	break;

	case 6:
	printf("wwwwww");
	break;
	}

	fclose(battement);
}while(choix == 0);


return 0;

}

